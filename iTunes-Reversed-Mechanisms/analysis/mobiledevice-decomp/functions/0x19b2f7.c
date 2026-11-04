// rea decompile_all
// name: _check_task_result
// address: 0x19b2f7
// body: available
// range: 0x19b2f7-0x19b373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _check_task_result(uint param_1,uint param_2)

{
  if ((param_1 & 0xf) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 & 0xf;
    if (_inRestore == '\x01') {
      _printf("Bad task result from %c%c%c%c 4CC: 0x%x\n",(ulong)(param_2 >> 0x18),
              (ulong)(param_2 >> 0x10 & 0xff),(ulong)(param_2 >> 8 & 0xff),(ulong)(param_2 & 0xff),
              (ulong)param_1);
    }
    else {
      _uarpLogError(3,"Bad task result from %c%c%c%c 4CC: 0x%x\n");
    }
  }
  return param_1;
}

