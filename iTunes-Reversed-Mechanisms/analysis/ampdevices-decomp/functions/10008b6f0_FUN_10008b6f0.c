// name: FUN_10008b6f0
// address: 10008b6f0

void FUN_10008b6f0(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_48 [2];
  long local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (((uint)param_1 & 0x40616d9a) * -2 + (uint)param_1 + 0xc0616d9a ^ 0x326b6287) * 0x54361bb5
  ;
  local_40 = param_1[3];
  uVar4 = *(int *)(local_40 + 4) + 0xbe6d8fbd;
  uVar5 = -uVar4;
  if ((int)uVar5 < 0) {
    uVar5 = uVar4;
  }
  uVar3 = *(int *)(*param_1 + 4) + 0xbe6d8fbd;
  lVar1 = param_1[2];
  uVar4 = -uVar3;
  if ((int)uVar4 < 0) {
    uVar4 = uVar3;
  }
  local_48[0] = (((uint)local_48 & 0x235598b0) * -2 + (uint)local_48 + 0x235598b4 ^ 0x18b53619) *
                0x22116dab ^ (iVar2 + (int)lVar1) - 1U;
  FUN_100071d70();
  if (uVar5 < uVar4) {
    uVar4 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010008b823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e3480 +
                           (long)(int)((int)lVar1 + iVar2 +
                                      (uint)(0xa42f7fc < (int)(uVar4 + 0xa42f7fc) ||
                                            0x75bd0803 < (int)uVar4)) * 4) + 0x10008b7cc))();
  return;
}

