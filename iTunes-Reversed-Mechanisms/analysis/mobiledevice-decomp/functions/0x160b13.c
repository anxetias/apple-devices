// rea decompile_all
// name: __AMRestorableCopyDeviceMapFromRestoreOptions
// address: 0x160b13
// body: available
// range: 0x160b13-0x160c98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x160c94 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRestorableCopyDeviceMapFromRestoreOptions(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long local_430;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_430 = 0;
  if (param_1 == 0) {
    pcVar6 = &cf_Can_tgetdevicemapfromNULLoptions;
LAB_00160c75:
    lVar3 = 0;
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_1,&cf_RestoreBundlePath);
    if (lVar3 == 0) {
      pcVar6 = &cf_Can_tlocatedevicemapwithoutrestorebundlepath;
      goto LAB_00160c75;
    }
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar3 = _AMAuthInstallSupportCreateURLFromString(uVar5,lVar3);
    if (lVar3 == 0) {
      pcVar6 = &cf_FailedtocreateURLfromrestorebundle;
      goto LAB_00160c75;
    }
    iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent
                      (uVar5,lVar3,&cf_Firmware_device_map_plist,0,&local_430);
    if (iVar2 == 0) {
      lVar4 = _CFURLCopyFileSystemPath(local_430,0);
      if (lVar4 != 0) {
        cVar1 = _CFStringGetCString(lVar4,local_428,0x400,0x8000100);
        if (cVar1 == '\0') {
LAB_00160bf0:
          uVar5 = 0;
        }
        else {
          iVar2 = _access(local_428,4);
          if (iVar2 != 0) goto LAB_00160bf0;
          uVar5 = _AMRestorableCreateDictionaryFromURL(local_430);
        }
        pcVar6 = (cfstringStruct *)0x0;
        goto LAB_00160c06;
      }
      pcVar6 = &cf_FailedtogetpathfromdevicemapURL;
    }
    else {
      pcVar6 = &cf_FailedtocreateURLtodevicemap;
    }
  }
  uVar5 = 0;
  lVar4 = 0;
LAB_00160c06:
  _AMRSafeLogAndRelease(3,pcVar6);
  if (local_430 != 0) {
    _CFRelease();
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

