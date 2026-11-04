// name: FUN_100061da0
// address: 100061da0

undefined8 FUN_100061da0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_2 + 4) + 0xf0f1c3e9U < 5;
  switch(bVar2) {
  case true:
                    /* WARNING: Could not recover jumptable at 0x00010008cf6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((long)*(int *)(&DAT_1006e8790 +
                                     (long)(int)((uint)!bVar2 * -0x337cde4b + (uint)bVar2 * -4 + 4 +
                                                (uint)(*(int *)(param_2 + 4) == 0xf0e3c17)) * 4) +
                      0x10008cf2a))();
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)PTR____stack_chk_guard_10082cb58) {
    return 0xffff5bde;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

