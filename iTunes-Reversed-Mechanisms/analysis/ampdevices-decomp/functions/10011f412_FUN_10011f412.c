// name: FUN_10011f412
// address: 10011f412

void FUN_10011f412(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar6 = (byte *)(param_2 + 0xbbc);
  piVar2 = *(int **)(param_1 + 0x40);
  *piVar2 = *piVar2 + 2;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar5 = iVar1 + 2;
  *(uint *)(param_1 + 0x28) = uVar5;
  if (uVar5 < 0x20) {
    uVar5 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) = uVar5 * 4;
    *pbVar6 = (byte)(uVar5 >> 0x1e);
    *piVar2 = *piVar2 + 2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 2;
                    /* WARNING: Could not recover jumptable at 0x00010011f472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_100120494 + *(int *)(&DAT_100120494 + (ulong)(uVar5 >> 0x1e) * 4)))();
    return;
  }
  if (uVar5 == 0x20) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    uVar5 = 0;
    if (uVar4 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar4 * 4);
    }
    uVar4 = *(uint *)(param_1 + 0x2c);
    *(uint *)(param_1 + 0x2c) =
         uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    *pbVar6 = (byte)(uVar4 >> 0x1e);
    *piVar2 = *piVar2 + 2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 2;
                    /* WARNING: Could not recover jumptable at 0x00010011f4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_100120494 + *(int *)(&DAT_100120494 + (ulong)(uVar4 >> 0x1e) * 4)))();
    return;
  }
  *(int *)(param_1 + 0x28) = iVar1 + -0x1e;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 4;
  uVar5 = *(uint *)(lVar3 + 4);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar4 = uVar5 >> (-(char)iVar1 & 0x1fU) | *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar5 << ((byte)(iVar1 + -0x1e) & 0x1f);
  *pbVar6 = (byte)(uVar4 >> 0x1e);
  *piVar2 = *piVar2 + 2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 2;
                    /* WARNING: Could not recover jumptable at 0x00010011f51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_100120494 + *(int *)(&DAT_100120494 + (ulong)(uVar4 >> 0x1e) * 4)))();
  return;
}

