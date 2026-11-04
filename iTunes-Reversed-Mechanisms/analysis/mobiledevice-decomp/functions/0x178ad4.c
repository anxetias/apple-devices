// rea decompile_all
// name: __AMRestorableBuildCreateFromURLForType
// address: 0x178ad4
// body: available
// range: 0x178ad4-0x1790db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestorableBuildCreateFromURLForType(undefined8 param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  cfstringStruct *pcVar9;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 *local_40;
  long local_38;
  
  local_68 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  if (__AMRestorableBuildCreateFromURLForType_once != -1) {
    _dispatch_once_f(&__AMRestorableBuildCreateFromURLForType_once,(void *)0x0,
                     __AMRestorableBuildInit);
  }
  lVar3 = _CFURLCopyLastPathComponent(param_1);
  if (lVar3 == 0) {
    _AMRSafeLogAndRelease(3,&cf_FailedtogetlastpathcomponentfromURLtonormalize);
    pcVar9 = &cf_FailedtonormalizerestorebundleURL;
    lVar3 = 0;
    lVar5 = 0;
    iVar2 = 0xfa1;
  }
  else {
    local_40 = param_3;
    cVar1 = _CFEqual(lVar3,&cf_Restore);
    if (cVar1 == '\0') {
      lVar4 = _CFRetain(param_1);
    }
    else {
      lVar4 = _CFURLCreateCopyDeletingLastPathComponent
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_1);
    }
    if (lVar4 == 0) {
      pcVar9 = &cf_FailedtocreatenormalizedURL;
      lVar4 = 0;
      lVar5 = 0;
    }
    else {
      cVar1 = _AMRIsURLSchemeType(lVar4,&cf_file);
      if (((cVar1 == '\0') && (cVar1 = _AMRIsURLSchemeType(lVar4,&cf_http), cVar1 == '\0')) &&
         (cVar1 = _AMRIsURLSchemeType(lVar4,&cf_https), cVar1 == '\0')) {
        lVar5 = _AMRCopyFileURLForNetworkURL(lVar4);
        if (lVar5 == 0) {
          lVar5 = 0;
          pcVar9 = (cfstringStruct *)
                   _AMRMakeString(&cf_FailedtolocatemountedlocationforURL___,lVar4);
        }
        else {
          pcVar9 = (cfstringStruct *)0x0;
        }
      }
      else {
        _CFRetain(lVar4);
        pcVar9 = (cfstringStruct *)0x0;
        lVar5 = lVar4;
      }
    }
    _AMRSafeLogAndRelease(3,pcVar9);
    _CFRelease(lVar3);
    if (lVar4 != 0) {
      _CFRelease(lVar4);
    }
    if (lVar5 == 0) {
      pcVar9 = &cf_FailedtonormalizerestorebundleURL;
      iVar2 = 0xfa1;
      lVar3 = 0;
      lVar5 = 0;
      param_3 = local_40;
    }
    else {
      uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar3 = __CFRuntimeCreateInstance(uVar7,_kAMRestorableBuildTypeID,0x18,0);
      iVar8 = 0xfa2;
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined4 *)(lVar3 + 0x20) = 0;
        if ((param_2 & 0xfffffffd) == 1) {
          iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                            (uVar7,lVar5,&cf_Index_plist,0,&local_58);
          pcVar9 = &cf_FailedtocreateURLtoIndex_plist;
          param_3 = local_40;
          if (iVar2 != 0) goto LAB_00178fec;
          _AMRSafeLog(6,&cf_CheckingforIndex_plistmetadatafile___);
          lVar4 = __loadDictionaryFromURL(local_58,&local_38);
          *(long *)(lVar3 + 0x18) = lVar4;
          if (lVar4 == 0) {
            _AMRSafeLog(6,&cf_FailedtogetIndexmetadatafile_error___,local_38);
            if (local_38 != 0) {
              lVar4 = _CFErrorGetCode();
              if (lVar4 != 0xfbf) {
                if (local_38 != 0) {
                  _CFRelease();
                }
                goto LAB_00178cde;
              }
              pcVar9 = &cf_Can_tfetchindexsinceaccesswasdenied;
LAB_00178ec5:
              param_3 = local_40;
              iVar2 = 0xfbf;
              goto LAB_00178fec;
            }
LAB_00178cde:
            local_38 = 0;
            iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                              (uVar7,lVar5,&cf_MetadataIndex_plist,0,&local_50);
            param_3 = local_40;
            if (iVar2 != 0) goto LAB_00178fec;
            _AMRSafeLog(6,&cf_CheckingforMetadataIndex_plistmetadatafile___);
            lVar4 = __loadDictionaryFromURL(local_50,&local_38);
            *(long *)(lVar3 + 0x18) = lVar4;
            if (lVar4 == 0) {
              _AMRSafeLog(6,&cf_FailedtogetMetadataIndexmetadatafile_error___,local_38);
              if (local_38 != 0) {
                lVar4 = _CFErrorGetCode();
                if (lVar4 == 0xfbf) {
                  pcVar9 = &cf_Can_tfetchMetadataIndexsinceaccesswasdenied;
                  goto LAB_00178ec5;
                }
                if (local_38 != 0) {
                  _CFRelease();
                }
              }
              local_38 = 0;
              goto LAB_00178d97;
            }
          }
          uVar7 = _CFRetain(lVar5);
          *(undefined8 *)(lVar3 + 0x10) = uVar7;
          *(undefined4 *)(lVar3 + 0x20) = 3;
        }
        else {
LAB_00178d97:
          _AMRSafeLog(6,&cf_CheckingforBuildManifest_plistmetadatafile___);
          if (local_38 != 0) {
            _CFRelease();
          }
          local_38 = 0;
          iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                            (uVar7,lVar5,&cf_BuildManifest_plist,0,&local_68);
          if (iVar2 != 0) {
            pcVar9 = &cf_FailedtocreateURLtoBuildManifest_plist;
            param_3 = local_40;
            goto LAB_00178fec;
          }
          lVar6 = __loadDictionaryFromURL(local_68,&local_38);
          *(long *)(lVar3 + 0x18) = lVar6;
          lVar4 = lVar5;
          if (lVar6 == 0) {
            _AMRSafeLog(3,&cf_FailedtogetBuildManifest_plistmetadata_error___,local_38);
            if (local_38 != 0) {
              lVar4 = _CFErrorGetCode();
              if (lVar4 == 0xfbf) {
                pcVar9 = &cf_Can_tfetchBuildManifest_plistsinceaccesswasdenied;
                goto LAB_00178ec5;
              }
              if (local_38 != 0) {
                _CFRelease();
              }
            }
            local_38 = 0;
            _AMRSafeLog(6,&cf_CheckingforRestore_BuildManifest_plistmetatadatafile___);
            if (local_38 != 0) {
              _CFRelease();
            }
            local_38 = 0;
            iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                              (uVar7,lVar5,&cf_Restore,1,&local_48);
            if (iVar2 == 0) {
              iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                                (uVar7,local_48,&cf_BuildManifest_plist,0,&local_60);
              if (iVar2 == 0) {
                lVar6 = __loadDictionaryFromURL(local_60,&local_38);
                *(long *)(lVar3 + 0x18) = lVar6;
                if (local_38 == 0) {
LAB_00178f97:
                  param_3 = local_40;
                  lVar4 = local_48;
                  if (lVar6 != 0) goto LAB_00178dfd;
                  _AMRSafeLog(3,&cf_FailedtogetRestore_BuildManifest_plistmetadata_error___,local_38
                             );
                  if ((local_38 == 0) || (lVar4 = _CFErrorGetCode(), lVar4 != 0xfbf)) {
                    pcVar9 = &cf_Failedtolocateanyknownbuildmetadatafiles;
                    iVar2 = 0xfb7;
                    goto LAB_00178fec;
                  }
                  pcVar9 = &cf_Can_tfetchRestore_BuildManifest_plistsinceaccesswasdenied;
                }
                else {
                  lVar4 = _CFErrorGetCode();
                  if (lVar4 != 0xfbf) {
                    lVar6 = *(long *)(lVar3 + 0x18);
                    goto LAB_00178f97;
                  }
                  pcVar9 = &cf_Can_tfetchindexsinceaccesswasdenied;
                  param_3 = local_40;
                }
                iVar2 = 0xfbf;
              }
              else {
                pcVar9 = &cf_FailedtocreateURLtorestorebuildmanifest;
                param_3 = local_40;
                iVar2 = iVar8;
              }
            }
            else {
              pcVar9 = &cf_FailedtocreateURLtorestoredirectory;
              param_3 = local_40;
              iVar2 = iVar8;
            }
            goto LAB_00178fec;
          }
LAB_00178dfd:
          uVar7 = _CFRetain(lVar4);
          *(undefined8 *)(lVar3 + 0x10) = uVar7;
          *(undefined4 *)(lVar3 + 0x20) = 2;
        }
        pcVar9 = (cfstringStruct *)0x0;
        goto LAB_00178e11;
      }
      pcVar9 = &cf_FailedtoallocatenewAMRestorableBuildinstance;
      lVar3 = 0;
      param_3 = local_40;
      iVar2 = iVar8;
    }
  }
LAB_00178fec:
  if (param_3 != (undefined8 *)0x0) {
    uVar7 = _AMRCreateErrorWithDomain
                      (pcVar9,iVar2,&cf_com_apple_MobileDevice_MobileRestore,local_38);
    *param_3 = uVar7;
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    lVar3 = 0;
  }
LAB_00178e11:
  _AMRSafeLogAndRelease(3,pcVar9);
  if (local_38 != 0) {
    _CFRelease();
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (local_60 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_58 != 0) {
    _CFRelease();
  }
  if (local_50 != 0) {
    _CFRelease();
  }
  if (local_68 != 0) {
    _CFRelease();
  }
  return lVar3;
}

