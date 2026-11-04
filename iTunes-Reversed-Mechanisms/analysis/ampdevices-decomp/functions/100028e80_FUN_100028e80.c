// name: FUN_100028e80
// address: 100028e80

undefined8 FUN_100028e80(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_2 + 4) == 0xf0e3c17;
  switch(bVar2) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00010004a90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_100028f1a::caseD_0 +
              *(int *)(&DAT_1006d8bc0 +
                      (long)(int)((uint)(**(char **)(param_2 + 8) == '\0') +
                                 (uint)bVar2 * 0x57eaba22 + (uint)!bVar2 * -4 + 6) * 4)))();
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)PTR____stack_chk_guard_10082cb58) {
    return 0xffff5bde;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006d8bc0 + (ulong)(bVar2 + 6) * 4) + 0x100028ee7,param_2,0)
  ;
}

