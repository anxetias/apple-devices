// name: FUN_100047360
// address: 100047360

undefined8 FUN_100047360(long param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_1d8 [368];
  long lStack_68;
  int iStack_60;
  int iStack_5c;
  undefined1 *puStack_58;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  rdtsc();
  FUN_1000cb740(local_1d8,0,0x80);
  bVar1 = (param_4 == 0 || param_3 == 0) || (param_2 == 0 || param_1 == 0);
  switch(bVar1) {
  case false:
    bVar3 = (param_4 != 0 && param_3 != 0) && (param_2 != 0 && param_1 != 0);
    iVar4 = (uint)bVar1 * -0x23080296 - ((uint)bVar3 + (uint)bVar3 * 4);
    uVar2 = (*(code *)((&PTR_DAT_10082ee00)[iVar4 + 0x1e] + -3))(0x20);
    *(undefined8 *)((&PTR_DAT_10082ee00)[iVar4 + 0xd1] + -6) = uVar2;
    iStack_60 = (int)((ulong)(&stack0x0ee144ae5c481287 +
                             ((ulong)&lStack_68 & 0xee144ae5c4812ef) * -2) ^ 0x55d83464cb14c86d) *
                0x295bb3 + iVar4 + 9 + -0x6d95cfce;
    puStack_58 = local_1d8;
    lStack_68 = ((ulong)(&stack0x0ee144ae5c481287 + ((ulong)&lStack_68 & 0xee144ae5c4812ef) * -2) ^
                0x55d83464cb14c86d) * -0x295bb3 + 0x3d8c459344aa9757;
    FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x00010004f0df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(switchD_100047443::caseD_0 +
              *(int *)(&DAT_1006dedf0 + (long)(int)((uint)(iStack_5c == 0x3a3402de) + iVar4 + 9) * 4
                      )))();
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

