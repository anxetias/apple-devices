// rea decompile_all
// name: __AMRResourceManagerStoppedUsingResourceAtURL
// address: 0x174a97
// body: available
// range: 0x174a97-0x174cb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x174bdc to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRResourceManagerStoppedUsingResourceAtURL(ulong param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  ulong local_38;
  long local_30;
  
  if (_once != -1) {
    _dispatch_once_f(&_once,(void *)0x0,__thr_AMRResourceManagerInit);
  }
  if (_didInitSuccessfully != '\x01') {
    _AMRSafeLog(3,&cf___,&cf_Failedtoinitializeresourcemanager);
    _CFRelease(&cf_Failedtoinitializeresourcemanager);
    return;
  }
  _dispatch_semaphore_wait((dispatch_semaphore_t)*_gResourceData,0xffffffffffffffff);
  lVar3 = _CFDictionaryGetValue(_gResourceData[1],param_1);
  if (lVar3 == 0) {
    pcVar6 = &cf_Can_tstopusingresourcethatnobodywasusingpreviously;
    goto LAB_00174b70;
  }
  lVar4 = _gResourceData[1];
  local_38 = local_38 & 0xffffffff00000000;
  if (lVar4 == 0) {
    pcVar6 = &cf_Can_tsetnumberinNULLdictionary;
LAB_00174bfa:
    _AMRSafeLog(3,&cf___,pcVar6);
    _CFRelease(pcVar6);
LAB_00174c18:
    _CFDictionaryRemoveValue(_gResourceData[1],param_1);
    _AMRRecursivelyDeleteContentAtURL(param_1);
    local_30 = 0;
    local_38 = param_1;
    _CFDictionaryApplyFunction(_gResourceData[3],__findKeysToRemoveApplier,&local_38);
    if (local_30 != 0) {
      lVar3 = 0;
      while( true ) {
        lVar4 = _CFArrayGetCount(local_30);
        if (lVar4 <= lVar3) break;
        uVar1 = _gResourceData[3];
        uVar5 = _CFArrayGetValueAtIndex(local_30,lVar3);
        _CFDictionaryRemoveValue(uVar1,uVar5);
        lVar3 = lVar3 + 1;
      }
      if (local_30 != 0) {
        _CFRelease();
      }
    }
  }
  else {
    _CFNumberGetValue(lVar3,9,&local_38);
    local_38 = CONCAT44(local_38._4_4_,(int)local_38 + -1);
    lVar3 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,9,&local_38);
    if (lVar3 == 0) {
      pcVar6 = &cf_Failedtocreatedecrementednumber;
      goto LAB_00174bfa;
    }
    iVar2 = (int)local_38;
    _CFDictionarySetValue(lVar4,param_1,lVar3);
    _CFRelease(lVar3);
    if (iVar2 < 1) goto LAB_00174c18;
  }
  pcVar6 = (cfstringStruct *)0x0;
LAB_00174b70:
  _AMRSafeLogAndRelease(3,pcVar6);
  _dispatch_semaphore_signal((dispatch_semaphore_t)*_gResourceData);
  return;
}

