// rea decompile_all
// name: _personalizationBackendTagHint
// address: 0x270307
// body: available
// range: 0x270307-0x2703b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _personalizationBackendTagHint(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uStack_20;
  
  if (param_1 == 0) {
    uStack_20 = 0x1e;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2c);
    if (uVar1 == 0) {
      if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
        _printf("Switching to using LUN %d based on hint\n",(ulong)param_2);
      }
      else {
        _uarpLogInfo(3,"Switching to using LUN %d based on hint\n",param_2);
      }
      *(uint *)(param_1 + 0x2c) = param_2;
      uStack_20 = 0;
    }
    else {
      uStack_20 = 0;
      if (uVar1 != param_2) {
        if (_inRestore == '\x01') {
          uStack_20 = 0;
          _printf("Warning: Frontend expects tag to be %d, but Backend is using tag %d\n",
                  (ulong)param_2,(ulong)uVar1);
        }
        else {
          uStack_20 = 0;
          _uarpLogError(3,"Warning: Frontend expects tag to be %d, but Backend is using tag %d\n",
                        param_2);
        }
      }
    }
  }
  return uStack_20;
}

