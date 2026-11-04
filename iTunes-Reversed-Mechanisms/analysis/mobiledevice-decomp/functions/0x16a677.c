// rea decompile_all
// name: _AMRestorableBuildCreate
// address: 0x16a677
// body: available
// range: 0x16a677-0x16a708 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestorableBuildCreate(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_30 = param_1;
  local_28 = param_2;
  cVar1 = __AMRestoreInitGlobalData();
  if (cVar1 == '\0') {
    uVar3 = 0;
    _AMRSafePrintLog(3,&cf_FailedtoinitializeMobileRestore_can_tcreateAMRestorableBuildRefnow);
    if (param_2 != (undefined8 *)0x0) {
      uVar3 = 0;
      uVar2 = _AMRCreateErrorWithDomain
                        (&cf_FailedtoinitializeMobileRestoreglobaldata,0xfa3,
                         &cf_com_apple_MobileDevice_MobileRestore,0);
      *param_2 = uVar2;
    }
  }
  else {
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_30,
                     ___thr_AMRestorableBuildCreate);
    uVar3 = local_20;
  }
  return uVar3;
}

