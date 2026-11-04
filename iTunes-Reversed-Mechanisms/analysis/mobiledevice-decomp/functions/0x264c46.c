// rea decompile_all
// name: _serialize_pcr
// address: 0x264c46
// body: available
// range: 0x264c46-0x264c9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _serialize_pcr(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (0xb < *param_3) {
    uVar2 = *(ushort *)(param_1 + 6);
    uVar3 = *(undefined2 *)(param_1 + 4);
    uVar4 = *(undefined2 *)(param_1 + 2);
    uVar1 = *param_1;
    *param_2 = (char)uVar4;
    param_2[1] = (char)((ushort)uVar4 >> 8);
    param_2[2] = 0xa0;
    param_2[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = (char)uVar3;
    param_2[6] = (byte)(((uint)uVar2 << 10) >> 8) | (byte)((ushort)uVar3 >> 8);
    param_2[7] = (char)(uVar2 >> 6);
    *(undefined4 *)(param_2 + 8) = 0;
    *param_3 = 0xc;
    return 0;
  }
  return 0xffffffff;
}

