// rea decompile_all
// name: _USBCUpdateInfoUnsupported
// address: 0x19c0f9
// body: available
// range: 0x19c0f9-0x19c13e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_USBCUpdateInfoUnsupported
          (undefined8 param_1,int param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  if (param_2 < 0x15) {
    if ((param_2 == 0xc) || (param_2 == 0xd)) {
      param_4 = (uint)(param_4 != 0);
    }
  }
  else if (((param_2 == 0x15) || (param_2 == 0x16)) && (3 < param_4)) {
    param_4 = 4;
  }
  _generic_copyout(0,param_3,param_4,param_5);
  return 0;
}

