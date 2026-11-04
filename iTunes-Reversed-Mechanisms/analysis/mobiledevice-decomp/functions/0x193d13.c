// rea decompile_all
// name: _createLogCtx
// address: 0x193d13
// body: available
// range: 0x193d13-0x193d82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _createLogCtx(uint param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = ___CreateCFObject(&_createLogCtx___reg,0x28);
  if (param_1 == 0xffffffff) {
    uVar1 = 5;
  }
  else if ((int)param_1 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 7;
    if (param_1 < 7) {
      uVar1 = param_1;
    }
  }
  *(uint *)(lVar2 + 0x10) = uVar1;
  *(long *)(lVar2 + 0x18) = param_2;
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  return lVar2;
}

