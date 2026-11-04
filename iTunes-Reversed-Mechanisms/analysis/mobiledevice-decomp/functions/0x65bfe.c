// rea decompile_all
// name: _lzbitmap_init_encode_state
// address: 0x65bfe
// body: available
// range: 0x65bfe-0x65cf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _lzbitmap_init_encode_state(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  iVar3 = 0;
  if (param_1 != (ulong *)0x0 && param_2 < 3) {
    uVar1 = *(uint *)(&DAT_0031add0 + (ulong)param_2 * 4);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(uint *)(param_1 + 10) = uVar1;
    *(uint *)((long)param_1 + 0x54) = param_2;
    iVar3 = (uint)(param_2 == 2) * 3 + 0xf;
    uVar2 = 2 << (sbyte)iVar3;
    *(int *)(param_1 + 0xb) = iVar3;
    *(uint *)((long)param_1 + 0x5c) = uVar2 + 0x10;
    uVar4 = (uVar1 & 1) * 0x4000 + 0x4000;
    *(uint *)(param_1 + 0xc) = uVar4;
    *(undefined4 *)((long)param_1 + 100) = 2;
    *(undefined4 *)(param_1 + 0xd) = 0x300;
    *(uint *)((long)param_1 + 0x6c) = uVar1 >> 2 & 1 | 0xc;
    uVar4 = uVar4 >> 2;
    *(uint *)(param_1 + 0xe) = uVar4;
    *(uint *)((long)param_1 + 0x74) = uVar4 + 3;
    uVar5 = (long)param_1 + 199U & 0xffffffffffffffc0;
    *param_1 = uVar5;
    uVar5 = uVar5 + uVar2 + 0x4f & 0xffffffffffffffc0;
    param_1[1] = uVar5;
    lVar6 = uVar5 + (ulong)uVar4 * 2;
    param_1[2] = uVar5 + uVar4 + 0x40;
    param_1[3] = lVar6 + 0x40;
    param_1[4] = lVar6 + 0xc40;
    iVar3 = uVar2 + uVar4 * 2 + 0x13db;
  }
  return iVar3;
}

