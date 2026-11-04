// name: FUN_1001226ca
// address: 1001226ca

undefined8 FUN_1001226ca(long param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  int local_98 [26];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = *(undefined1 **)(param_2 + 0x18);
  iVar5 = FUN_1001228f8(param_1,puVar2 + 0x80,puVar2 + 9,param_2);
  uVar7 = 0xfffffffe;
  if (iVar5 != 0) goto LAB_1001228d5;
  bVar11 = *(byte *)(param_2 + 0xb);
  bVar1 = puVar2[9];
  if (bVar1 < bVar11) goto LAB_1001228d5;
  uVar12 = (uint)bVar11;
  lVar14 = 0;
  do {
    *(undefined1 *)(*(long *)(puVar2 + 0x28) + lVar14) = puVar2[lVar14 + (ulong)uVar12 + 0x80];
    lVar14 = lVar14 + 1;
  } while (((ulong)(uint)bVar1 - (ulong)uVar12) + 1 != lVar14);
  uVar12 = bVar1 - uVar12;
  bVar11 = (byte)uVar12;
  if ((uVar12 & 1) == 0) {
    uVar8 = uVar12 >> 1;
    uVar13 = 0;
    do {
      *(undefined1 *)(*(long *)(puVar2 + 0x20) + uVar13) =
           *(undefined1 *)(*(long *)(puVar2 + 0x28) + uVar13 * 2);
      uVar13 = uVar13 + 1;
    } while (uVar8 + 1 != uVar13);
LAB_1001227db:
    *puVar2 = (char)uVar8;
    puVar2[1] = bVar11;
    if (0x17 < uVar8 - 1) goto LAB_1001228d5;
    pbVar3 = *(byte **)(puVar2 + 0x20);
    bVar1 = *pbVar3;
    if ((0x20 < bVar1) || (bVar11 = pbVar3[uVar8], bVar11 <= bVar1)) goto LAB_1001228d5;
    lVar14 = (long)((float)*(byte *)(param_2 + 0xe) *
                    (*(float *)(param_1 + 0xc150 + (ulong)(*(byte **)(puVar2 + 0x28))[uVar12] * 4) -
                    *(float *)(param_1 + 0xc150 + (ulong)**(byte **)(puVar2 + 0x28) * 4)) +
                   DAT_100700b28);
    bVar15 = (byte)lVar14;
    if ((uint)lVar14 < 2) {
      bVar15 = 1;
    }
    if ((*(byte *)(param_2 + 0xe) & 3) == 0) {
      bVar15 = 1;
    }
    puVar2[8] = bVar15;
    puVar2[0x1a] = bVar15;
    uVar12 = (uint)bVar15;
    if (5 < bVar15) goto LAB_1001228d5;
    local_98[0] = 0;
    iVar5 = 0;
    uVar13 = 1;
    do {
      iVar6 = (int)uVar8 / (int)uVar12;
      uVar12 = uVar12 - 1;
      iVar5 = iVar5 + iVar6;
      local_98[uVar13] = iVar5;
      uVar13 = uVar13 + 1;
      uVar9 = uVar8 - iVar6;
      bVar4 = iVar6 <= (int)uVar8;
      uVar8 = uVar9;
    } while (uVar9 != 0 && bVar4);
    uVar10 = 0;
    do {
      puVar2[uVar10 + 0x7a] = pbVar3[local_98[uVar10]];
      uVar10 = uVar10 + 1;
    } while ((uVar13 & 0xffffffff) != uVar10);
    puVar2[10] = bVar1;
    uVar7 = 0;
    lVar14 = 0xb;
  }
  else {
    **(undefined1 **)(puVar2 + 0x20) = **(undefined1 **)(puVar2 + 0x28);
    if (uVar12 + 1 != 0) {
      uVar8 = uVar12 + 1 >> 1;
      uVar13 = (ulong)(uVar12 + 1 >> 1);
      lVar14 = 0;
      do {
        *(undefined1 *)(*(long *)(puVar2 + 0x20) + 1 + lVar14) =
             *(undefined1 *)(*(long *)(puVar2 + 0x28) + 1 + lVar14 * 2);
        lVar14 = lVar14 + 1;
      } while (uVar13 + (uVar13 == 0) != lVar14);
      goto LAB_1001227db;
    }
    *puVar2 = 0;
    uVar7 = 0xfffffffe;
    lVar14 = 1;
  }
  puVar2[lVar14] = bVar11;
LAB_1001228d5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

