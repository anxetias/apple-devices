// rea decompile_all
// name: _AMRestoreModeDeviceCreateFromUSBMuxV2
// address: 0xcc6d0
// body: available
// range: 0xcc6d0-0xcc70a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


__AMRestoreModeDevice *
_AMRestoreModeDeviceCreateFromUSBMuxV2
          (__CFAllocator *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  __AMRestoreModeDevice *p_Var1;
  
  p_Var1 = (__AMRestoreModeDevice *)_AMRestoreModeDeviceCreateEmpty(param_1);
  *(undefined4 *)(p_Var1 + 0x48) = param_2;
  *(undefined4 *)(p_Var1 + 0x4c) = param_3;
  *(undefined2 *)(p_Var1 + 0x50) = param_4;
  _AMRestoreModeDeviceProbe(p_Var1);
  return p_Var1;
}

