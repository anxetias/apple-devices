// rea decompile_all
// name: _serialize_pcw
// address: 0x264c9b
// body: available
// range: 0x264c9b-0x264d41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _serialize_pcw(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 6);
  if ((uint)uVar1 * 4 + 0xc <= *param_3) {
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar2 = *(undefined2 *)(param_1 + 2);
    uVar4 = *param_1;
    *param_2 = (char)uVar2;
    param_2[1] = (char)((ushort)uVar2 >> 8);
    param_2[2] = 0xa0;
    param_2[3] = uVar4;
    param_2[4] = 1;
    param_2[5] = (char)uVar3;
    param_2[6] = (byte)(((uint)uVar1 << 10) >> 8) | (byte)((uint)uVar3 >> 8);
    uVar4 = (undefined1)(uVar1 >> 6);
    param_2[7] = uVar4;
    param_2[8] = (char)uVar1 * '\x04';
    param_2[9] = uVar4;
    param_2[10] = (byte)(uVar1 >> 0xe);
    param_2[0xb] = 0;
    _memcpy(param_2 + 0xc,*(void **)(param_1 + 8),(ulong)*(ushort *)(param_1 + 6) << 2);
    *param_3 = (uint)*(ushort *)(param_1 + 6) * 4 + 0xc;
    return 0;
  }
  return 0xffffffffffffffff;
}

