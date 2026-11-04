// rea decompile_all
// name: _BrotliBuildSimpleHuffmanTable
// address: 0x95c54
// body: available
// range: 0x95c54-0x95e35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _BrotliBuildSimpleHuffmanTable(uint *param_1,byte param_2,ushort *param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  uVar9 = 1;
  iVar8 = 1 << (param_2 & 0x1f);
  switch(param_4) {
  case 0:
    *param_1 = (uint)*param_3 << 0x10;
    break;
  case 1:
    if (*param_3 < param_3[1]) {
      *param_1 = (uint)*param_3 * 0x10000 + 1;
      uVar6 = param_3[1];
    }
    else {
      *param_1 = (uint)param_3[1] * 0x10000 + 1;
      uVar6 = *param_3;
    }
    param_1[1] = (uint)uVar6 * 0x10000 + 1;
    uVar9 = 2;
    break;
  case 2:
    *param_1 = (uint)*param_3 * 0x10000 + 1;
    param_1[2] = (uint)*param_3 * 0x10000 + 1;
    if (param_3[1] < param_3[2]) {
      param_1[1] = (uint)param_3[1] << 0x10 | 2;
      uVar2 = (uint)param_3[2];
    }
    else {
      param_1[1] = (uint)param_3[2] << 0x10 | 2;
      uVar2 = (uint)param_3[1];
    }
    goto LAB_00095de2;
  case 3:
    lVar3 = 1;
    lVar4 = 0;
    do {
      lVar5 = lVar4 + 1;
      uVar6 = param_3[lVar4];
      lVar7 = lVar3;
      do {
        uVar1 = param_3[lVar7];
        if (uVar1 < uVar6) {
          param_3[lVar7] = uVar6;
          param_3[lVar4] = uVar1;
          uVar6 = uVar1;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
      lVar3 = lVar3 + 1;
      lVar4 = lVar5;
    } while (lVar5 != 3);
    *param_1 = (uint)*param_3 << 0x10 | 2;
    param_1[2] = (uint)param_3[1] << 0x10 | 2;
    param_1[1] = (uint)param_3[2] << 0x10 | 2;
    uVar2 = (uint)param_3[3];
LAB_00095de2:
    param_1[3] = uVar2 << 0x10 | 2;
    uVar9 = 4;
    break;
  case 4:
    uVar6 = param_3[3];
    if (uVar6 < param_3[2]) {
      param_3[3] = param_3[2];
      param_3[2] = uVar6;
    }
    *param_1 = (uint)*param_3 * 0x10000 + 1;
    param_1[1] = (uint)param_3[1] << 0x10 | 2;
    param_1[2] = (uint)*param_3 * 0x10000 + 1;
    param_1[3] = (uint)param_3[2] << 0x10 | 3;
    param_1[4] = (uint)*param_3 * 0x10000 + 1;
    param_1[5] = (uint)param_3[1] << 0x10 | 2;
    param_1[6] = (uint)*param_3 * 0x10000 + 1;
    param_1[7] = (uint)param_3[3] << 0x10 | 3;
    uVar9 = 8;
  }
  for (; (int)uVar9 != iVar8; uVar9 = (ulong)(uint)((int)uVar9 * 2)) {
    _memcpy(param_1 + uVar9,param_1,uVar9 << 2);
  }
  return iVar8;
}

