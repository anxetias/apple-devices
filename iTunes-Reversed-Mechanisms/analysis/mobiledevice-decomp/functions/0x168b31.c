// rea decompile_all
// name: __AMRShouldCaptureDeviceLogForType
// address: 0x168b31
// body: available
// range: 0x168b31-0x168bbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRShouldCaptureDeviceLogForType(long param_1,long param_2,long param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    pcVar2 = &cf_Can_tcheckloggingstatuswithNULLtype;
  }
  else {
    if (param_3 != 0) {
      _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(param_1 + 0x88),0xffffffffffffffff);
      lVar1 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x80),param_2);
      if (lVar1 == 0) {
        uVar3 = 0;
      }
      else {
        lVar1 = _CFDictionaryGetValue(lVar1,&cf_LogURL);
        uVar3 = CONCAT71((int7)((ulong)param_2 >> 8),lVar1 != 0);
      }
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x88));
      goto LAB_00168b96;
    }
    pcVar2 = &cf_Can_tcheckloggingwithNULLoptions;
  }
  uVar3 = 0;
  _AMRSafeLog(3,pcVar2);
LAB_00168b96:
  return uVar3 & 0xffffffff;
}

