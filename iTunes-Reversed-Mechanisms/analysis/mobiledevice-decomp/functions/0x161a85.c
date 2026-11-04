// rea decompile_all
// name: ___thr_private_AMRestoreableDeviceGetElapsedRestoreTime
// address: 0x161a85
// body: available
// range: 0x161a85-0x161ac1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long ___thr_private_AMRestoreableDeviceGetElapsedRestoreTime(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 == 0) {
      _time((time_t *)0x0);
      lVar2 = *(long *)(param_1 + 0x38);
      lVar3 = *(long *)(param_1 + 0x40);
    }
    lVar1 = 0;
    if (lVar3 - lVar2 != 0 && lVar2 <= lVar3) {
      lVar1 = lVar3 - lVar2;
    }
    return lVar1;
  }
  return 0;
}

