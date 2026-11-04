// name: FUN_1000dd430
// address: 1000dd430

undefined8 FUN_1000dd430(int param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_108 [208];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_108,0,0x80);
  switch(param_2 == 0) {
  case false:
    iVar2 = (uint)(param_2 != 0) * -0x7d42359e;
                    /* WARNING: Could not recover jumptable at 0x000100102871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_1000dd498::caseD_0 +
              *(int *)(&DAT_1006f8500 +
                      (long)(int)((uint)(*(int *)(*(long *)((&PTR_DAT_10082ee00)[iVar2 + 0x7d42366a]
                                                           + -6) + 0xc) - param_1 == 0x4e2a7c88) +
                                 iVar2 + 0x7d42359e) * 4)))
                      (switchD_1000dd498::caseD_0 +
                       *(int *)(&DAT_1006f8500 +
                               (long)(int)((uint)(*(int *)(*(long *)((&PTR_DAT_10082ee00)
                                                                     [iVar2 + 0x7d42366a] + -6) +
                                                          0xc) - param_1 == 0x4e2a7c88) +
                                          iVar2 + 0x7d42359e) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

