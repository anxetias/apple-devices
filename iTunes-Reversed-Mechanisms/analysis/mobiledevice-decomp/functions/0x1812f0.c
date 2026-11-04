// rea decompile_all
// name: _uarpPlatformAssetPayloadDataRequestWindowFilled
// address: 0x1812f0
// body: available
// range: 0x1812f0-0x18135c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpPlatformAssetPayloadDataRequestWindowFilled(undefined8 param_1,long param_2,int *param_3)

{
  undefined8 in_RAX;
  uint uVar1;
  
  uVar1 = (uint)((ulong)in_RAX >> 0x20);
  _UARPLayer2HashUpdate
            (param_1,param_3[0x1a],*(undefined8 *)(param_3 + 0x1c),*(undefined8 *)(param_3 + 4),
             param_3[0x15]);
  _UARPLayer2PayloadData
            (param_1,param_2,*(undefined8 *)(param_3 + 4),param_3[0x15],
             (param_3[2] + *param_3) - *(int *)(param_2 + 0x1f0),0,(ulong)uVar1 << 0x20);
  param_3[0x16] = param_3[0x15];
  *(int *)(param_2 + 0x1fc) = *(int *)(param_2 + 0x1fc) + param_3[0x15];
  return 0;
}

