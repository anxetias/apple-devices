// name: FUN_10001f910
// address: 10001f910

undefined8 FUN_10001f910(void)

{
  undefined8 uVar1;
  undefined8 *in_RCX;
  undefined4 *in_R8;
  undefined8 *in_R9;
  undefined4 *in_stack_00000008;
  
  switch(in_stack_00000008 == (undefined4 *)0x0 ||
         (in_R9 == (undefined8 *)0x0 || (in_R8 == (undefined4 *)0x0 || in_RCX == (undefined8 *)0x0))
        ) {
  case false:
    *in_RCX = 0;
    *in_R8 = 0;
    *in_R9 = 0;
    *in_stack_00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x000100025805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_10001f9d9::caseD_0 +
              (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                   [(*(long *)(PTR_DAT_10088e798_3_10082ea48 + -3) == 0) + 8]))
                      (*(long *)(PTR_DAT_10088e798_3_10082ea48 + -3),
                       switchD_10001f9d9::caseD_0 +
                       (int)(&switchD_10001f9d9::switchdataD_1006d2190)
                            [(*(long *)(PTR_DAT_10088e798_3_10082ea48 + -3) == 0) + 8]);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)PTR____stack_chk_guard_10082cb58) {
    return 0xffff5037;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

