// rea decompile_all
// name: _AMFDRCreateInstanceString
// address: 0x18a372
// body: available
// range: 0x18a372-0x18a3b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMFDRCreateInstanceString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _pthread_once((pthread_once_t *)&_ExportTableOnce,_AMFDRLoadLibrary);
  if (DAT_004a59c0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0018a3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_004a59c0)(param_1,param_2);
    return uVar1;
  }
  return 0;
}

