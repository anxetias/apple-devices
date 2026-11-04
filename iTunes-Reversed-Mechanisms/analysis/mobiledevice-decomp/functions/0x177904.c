// rea decompile_all
// name: ___thr_AMRDeviceLogUpdateDeviceECID
// address: 0x177904
// body: available
// range: 0x177904-0x1779e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1779cf to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRDeviceLogUpdateDeviceECID(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  if (param_1 == 0) {
    pcVar5 = &cf_C;
  }
  else {
    lVar1 = _CFArrayGetCount();
    if (lVar1 == 3) {
      puVar2 = (undefined8 *)_CFArrayGetValueAtIndex(param_1,0);
      uVar3 = _CFArrayGetValueAtIndex(param_1,1);
      uVar4 = _CFArrayGetValueAtIndex(param_1,2);
      lVar1 = _CFDictionaryGetValue(*puVar2,uVar3);
      if (lVar1 == 0) {
        pcVar5 = (cfstringStruct *)0x0;
        _AMRSafePrintLog(6,&cf_SkippingloggingECIDupdate_previousECID__wasnotbeingwatched_,uVar3);
      }
      else {
        _CFDictionarySetValue(*puVar2,uVar4,lVar1);
        _CFDictionaryRemoveValue(*puVar2,uVar3);
        pcVar5 = (cfstringStruct *)0x0;
        _AMRSafePrintLog(6,&cf_LoggingECIDupdated____>__,uVar3,uVar4);
      }
    }
    else {
      pcVar5 = &cf_Can_tupdatedeviceECIDwithincorrectargscount;
    }
    _CFRelease(param_1);
  }
  _AMRSafeLogAndRelease(3,pcVar5);
  return;
}

