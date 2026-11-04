// name: FUN_1000f1b10
// address: 1000f1b10

void FUN_1000f1b10(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_48 [2];
  long local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (((uint)param_1 & 0x67976474) * -2 + (uint)param_1 + 0x67976474 ^ 0xa9b423a1) * 0x4516280f
  ;
  local_40 = *(long *)(param_1 + 4);
  uVar4 = *(int *)(local_40 + 4) + 0xbe6d8fbd;
  uVar5 = -uVar4;
  if ((int)uVar5 < 0) {
    uVar5 = uVar4;
  }
  uVar3 = *(int *)(*(long *)(param_1 + 6) + 4) + 0xbe6d8fbd;
  iVar1 = *param_1;
  uVar4 = -uVar3;
  if ((int)uVar4 < 0) {
    uVar4 = uVar3;
  }
  local_48[0] = (((uint)local_48 & 0x5634e630) * -2 + (uint)local_48 + 0x5634e632 ^ 0x6dd4489f) *
                0x22116dab ^ (iVar2 + iVar1) - 6U;
  FUN_100071d70();
  if (uVar5 < uVar4) {
    uVar4 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000f1c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f4b30 +
                           (long)(int)(iVar1 + iVar2 +
                                      (uint)(0x59605c1c < (int)(uVar4 + 0x59605c1c) ||
                                            0x269fa3e3 < (int)uVar4)) * 4) + 0x1000f1bed))();
  return;
}

