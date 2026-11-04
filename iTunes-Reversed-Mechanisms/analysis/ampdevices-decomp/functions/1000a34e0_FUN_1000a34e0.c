// name: FUN_1000a34e0
// address: 1000a34e0

void FUN_1000a34e0(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  iVar1 = (((uint)param_1 & 0x452edfd5) * -2 + (uint)param_1 + 0x452edfd5 ^ 0xd2720557) * 0x295bb3;
  uVar2 = *(int *)(*param_1 + 4) + 0xbe6d8fbd;
  uVar4 = -uVar2;
  if ((int)uVar4 < 0) {
    uVar4 = uVar2;
  }
  uVar3 = (ulong)(*(int *)((long)param_1 + 0x1c) + iVar1 + 0x8f1e14e6);
                    /* WARNING: Could not recover jumptable at 0x0001000a356f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f3a50 +
                           (long)(int)((uint)(uVar3 <= (ulong)uVar4 * 4 &&
                                             (ulong)uVar4 * 4 - uVar3 != 0) +
                                      (int)param_1[3] + iVar1) * 4) + 0x1000a353f))();
  return;
}

