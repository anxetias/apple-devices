// name: FUN_1000a30e0
// address: 1000a30e0

void FUN_1000a30e0(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int local_58;
  int local_54;
  long local_50;
  ulong local_48;
  int local_40;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = ((long)param_1 + ((ulong)param_1 & 0x425132b6d5d1fc2f) * -2 + 0x425132b6d5d1fc2f ^
          0x1968427c428d26ad) * 0x295bb3;
  iVar4 = (int)param_1[1] - (int)lVar5;
  lVar1 = param_1[2];
  uVar6 = (uint)&local_58;
  local_54 = ((uVar6 & 0x3f44a138) * -2 + uVar6 + 0x3f44a13d ^ 0x4eabc324) * -0x540651b + iVar4 +
             -0xd951a1d;
  lVar2 = *param_1;
  FUN_1000ae9f0(&local_58);
  local_48 = ((ulong)(&stack0xdd8f7976b24cce30 + ((ulong)&local_58 & 0xdd8f7976b24cce88) * -2) ^
             0x41b6942a6220ff93) * 0x29e509e3;
  iVar3 = (int)local_48;
  local_48 = lVar5 + lVar2 + 0xcf7eed4c351db505U ^ local_48;
  local_40 = iVar3 + 0xf56fad8;
  local_58 = (iVar4 - iVar3) + 0x6d95cfce;
  local_50 = lVar1;
  (*(code *)((&PTR_DAT_10082ee00)[iVar4 + 0x6d95d02e] + -0xe))(&local_58);
  *(undefined4 *)((long)param_1 + 0xc) = local_3c;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

