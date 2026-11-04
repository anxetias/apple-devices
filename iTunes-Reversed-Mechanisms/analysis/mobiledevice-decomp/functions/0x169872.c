// rea decompile_all
// name: _AMRestorableDeviceCopyRestoreOptionsFromDocument
// address: 0x169872
// body: available
// range: 0x169872-0x1699e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestorableDeviceCopyRestoreOptionsFromDocument(long param_1,undefined8 *param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  if (param_1 == 0) {
    uVar4 = 0xfa1;
    pcVar2 = &cf_Can_tcreaterestoreoptionsfromNULLURL;
LAB_001699da:
    lVar1 = 0;
    pcVar5 = (cfstringStruct *)0x0;
LAB_0016996c:
    if ((param_2 != (undefined8 *)0x0) && (pcVar2 != (cfstringStruct *)0x0)) {
      uVar4 = _AMRCreateErrorWithDomain(pcVar2,uVar4,&cf_com_apple_MobileDevice_MobileRestore,0);
      *param_2 = uVar4;
    }
    _AMRSafeLogAndRelease(3,pcVar2);
    uVar4 = 0;
    if (lVar1 == 0) goto LAB_001699a7;
  }
  else {
    lVar1 = _AMRestorableCreateDictionaryFromURL();
    if (lVar1 == 0) {
      uVar4 = 0xfa7;
      pcVar2 = &cf_Failedtoloaddocument;
      goto LAB_001699da;
    }
    pcVar2 = (cfstringStruct *)_CFURLCopyPathExtension(param_1);
    pcVar5 = &cf___;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar5 = pcVar2;
    }
    lVar3 = _CFStringCompare(pcVar5,&cf_pr2,1);
    if (lVar3 != 0) {
      lVar3 = _CFStringCompare(pcVar5,&cf_pr,1);
      if (lVar3 == 0) {
        pcVar2 = &cf_RestoreOptions;
        lVar3 = _CFDictionaryGetValue(lVar1,&cf_RestoreOptions);
        if (lVar3 != 0) goto LAB_0016993c;
        uVar4 = 0xfa9;
        pcVar2 = &
                 cf_PRdocumentismissingRestoreOptionskey_SaveyourPRdocumentfromlatestPurpleRestore3version_
        ;
      }
      else {
        pcVar2 = (cfstringStruct *)
                 _AMRMakeString(&cf_Unsupportedrestoredocumentextension____,pcVar5);
        uVar4 = 0xfa9;
      }
      goto LAB_0016996c;
    }
    pcVar2 = &cf_FlattenedSettings;
    lVar3 = _CFDictionaryGetValue(lVar1,&cf_FlattenedSettings);
    if (lVar3 == 0) {
      uVar4 = 0xfa9;
      pcVar2 = &
               cf_PR2documentismissingFlattenedSettingskey_SaveyourPR2documentfromlatestPurpleRestore2_5version_
      ;
      goto LAB_0016996c;
    }
LAB_0016993c:
    uVar4 = _CFDictionaryGetValue(lVar1,pcVar2);
    _CFRetain(uVar4);
    _AMRSafeLogAndRelease(3,0);
  }
  _CFRelease(lVar1);
LAB_001699a7:
  if (pcVar5 != (cfstringStruct *)0x0) {
    _CFRelease(pcVar5);
  }
  return uVar4;
}

