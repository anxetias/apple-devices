// rea decompile_all
// name: _AMRestoreModeDeviceCreateFromUSBMuxProperties
// address: 0xcccb7
// body: available
// range: 0xcccb7-0xccd18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


__AMRestoreModeDevice *
_AMRestoreModeDeviceCreateFromUSBMuxProperties(__CFAllocator *param_1,__CFDictionary *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  __AMRestoreModeDevice *p_Var3;
  
  p_Var3 = (__AMRestoreModeDevice *)_AMRestoreModeDeviceCreateEmpty(param_1);
  uVar2 = _CFDictionaryGetInt64Value(param_2,_kUSBMuxProperty_DeviceID);
  *(undefined4 *)(p_Var3 + 0x48) = uVar2;
  uVar2 = _CFDictionaryGetInt64Value(param_2,_kUSBMuxProperty_LocationID);
  *(undefined4 *)(p_Var3 + 0x4c) = uVar2;
  uVar1 = _CFDictionaryGetInt64Value(param_2,_kUSBMuxProperty_ProductID);
  *(undefined2 *)(p_Var3 + 0x50) = uVar1;
  _AMRestoreModeDeviceProbe(p_Var3);
  return p_Var3;
}

