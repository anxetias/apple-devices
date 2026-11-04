// rea decompile_all
// name: _serialize_paw
// address: 0x264d42
// body: available
// range: 0x264d42-0x264e1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _serialize_paw(undefined1 *param_1,undefined1 *param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) + 0x18U <= *param_3) {
    uVar2 = *(undefined2 *)(param_1 + 2);
    uVar1 = *param_1;
    uVar3 = *(undefined4 *)(param_1 + 4);
    iVar4 = *(int *)(param_1 + 0x10) + 0xc;
    *param_2 = (char)uVar2;
    param_2[1] = (char)((ushort)uVar2 >> 8);
    param_2[2] = 0xa0;
    param_2[3] = uVar1;
    param_2[4] = 3;
    param_2[5] = (char)uVar3;
    param_2[6] = (char)((uint)uVar3 >> 8);
    param_2[7] = (char)((uint)uVar3 >> 0x10);
    param_2[8] = (char)iVar4;
    param_2[9] = (char)((uint)iVar4 >> 8);
    param_2[10] = (char)((uint)iVar4 >> 0x10);
    param_2[0xb] = (char)((uint)iVar4 >> 0x18);
    param_2[0xc] = param_1[8];
    param_2[0xd] = param_1[9];
    param_2[0xe] = param_1[10];
    param_2[0xf] = param_1[0xb];
    param_2[0x10] = param_1[0xc];
    param_2[0x11] = param_1[0xd];
    param_2[0x12] = param_1[0xe];
    param_2[0x13] = param_1[0xf];
    param_2[0x14] = param_1[0x10];
    param_2[0x15] = param_1[0x11];
    param_2[0x16] = param_1[0x12];
    param_2[0x17] = param_1[0x13];
    _memcpy(param_2 + 0x18,*(void **)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0x10));
    *param_3 = *(int *)(param_1 + 0x10) + 0x18;
    return 0;
  }
  return 0xffffffffffffffff;
}

