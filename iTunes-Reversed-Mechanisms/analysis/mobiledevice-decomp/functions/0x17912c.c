// rea decompile_all
// name: __loadDictionaryFromURL
// address: 0x17912c
// body: available
// range: 0x17912c-0x1793e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __loadDictionaryFromURL(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  dispatch_object_t local_58;
  char local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar7 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = '\0';
  local_58._os_obj = (_os_object_s *)0x0;
  local_48 = 0;
  lVar2 = _CFURLCopyScheme();
  uVar6 = 0xfb9;
  if (lVar2 == 0) {
    pcVar3 = &cf_FailedtogetschemefromURL;
  }
  else {
    lVar7 = _CFStringCompare(lVar2,&cf_file,1);
    if (lVar7 == 0) {
      lVar4 = _AMRestorableCreateDictionaryFromURL(param_1);
      lVar5 = 0;
      lVar7 = 0;
      if (lVar4 != 0) {
LAB_001792e7:
        pcVar3 = (cfstringStruct *)0x0;
        goto LAB_00179309;
      }
      uVar6 = 0xfa7;
      pcVar3 = &cf_Failedtoloadplistfromdisk;
    }
    else {
      lVar7 = _CFStringCompare(lVar2,&cf_https,1);
      if (lVar7 != 0) {
        lVar7 = _CFStringCompare(lVar2,&cf_http,1);
        if (lVar7 != 0) {
          lVar7 = 0;
          pcVar3 = (cfstringStruct *)
                   _AMRMakeString(&cf_Can_tloaddictionaryfromunsupportedURLscheme__,lVar2);
          goto LAB_001791d7;
        }
      }
      uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      iVar1 = _AMAuthInstallSupportCopyURLToNewTempDirectory(uVar6,"metadata_XXXXX",&local_40);
      if (iVar1 == 0) {
        lVar7 = _CFURLCopyLastPathComponent(param_1);
        if (lVar7 != 0) {
          iVar1 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                            (uVar6,local_40,lVar7,0,&local_38);
          uVar6 = 0xfa2;
          if (iVar1 == 0) {
            local_50 = '\0';
            local_58._os_obj = (_os_object_s *)_dispatch_semaphore_create(0);
            if (local_58._os_obj == (_os_object_s *)0x0) {
              pcVar3 = &cf_Failedtocreatesemaphoretowaitfordownload;
            }
            else {
              __AMRHTTPDownloadFileAtURL(param_1,local_38,__downloadCallback,&local_58);
              _dispatch_semaphore_wait((dispatch_semaphore_t)local_58._os_obj,0xffffffffffffffff);
              if (local_50 == '\x01') {
                lVar4 = _AMRestorableCreateDictionaryFromURL(local_38);
                lVar5 = lVar7;
                if (lVar4 != 0) goto LAB_001792e7;
                uVar6 = 0xfa7;
                pcVar3 = &cf_Failedtoloadplistfordownloadedfile;
              }
              else {
                uVar6 = 0xfb4;
                pcVar3 = &cf_FailedtodownloadfilefromURL;
              }
            }
          }
          else {
            pcVar3 = &cf_FailedtogettmpfileURLfordownload;
          }
          goto LAB_001791d7;
        }
        uVar6 = 0xfa1;
        pcVar3 = &cf_FailedtogetfilenamefromURL;
      }
      else {
        uVar6 = 0xfb8;
        pcVar3 = &cf_Failedtogettmpdirectoryfordownload;
      }
      lVar7 = 0;
    }
  }
LAB_001791d7:
  if (pcVar3 != (cfstringStruct *)0x0 && param_2 != (long *)0x0) {
    if (local_48 == 0) {
      lVar5 = _AMRCreateErrorWithDomain(pcVar3,uVar6,&cf_com_apple_MobileDevice_MobileRestore,0);
    }
    else {
      _CFRetain();
      lVar5 = local_48;
    }
    *param_2 = lVar5;
  }
  lVar4 = 0;
  lVar5 = lVar7;
LAB_00179309:
  _AMRSafeLogAndRelease(3,pcVar3);
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (local_58._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(local_58);
  }
  return lVar4;
}

