// name: FUN_10001cb90
// address: 10001cb90

undefined8
FUN_10001cb90(long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  
  switch((param_5 == (undefined4 *)0x0 || param_4 == (undefined8 *)0x0) ||
         (param_3 == (undefined4 *)0x0 || param_2 == (undefined8 *)0x0)) {
  case false:
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    switch(param_1 == 0) {
    case false:
                    /* WARNING: Could not recover jumptable at 0x000100020322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(switchD_100023ebf::caseD_0 +
                *(int *)(&DAT_1006d2600 + (long)(int)((byte)*PTR_DAT_10082ea88 + 9) * 4)))
                        (&PTR__bootstrap_look_up_10082e9f0,PTR_DAT_10082ea88,
                         switchD_100023ebf::caseD_0 +
                         *(int *)(&DAT_1006d2600 + (long)(int)((byte)*PTR_DAT_10082ea88 + 9) * 4));
      return uVar1;
    case true:
                    /* WARNING: Could not recover jumptable at 0x0001000262e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)((long)(int)switchD_100024186::switchdataD_1006d2aa8 + 0x1000262a0))();
      return uVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == *(long *)PTR____stack_chk_guard_10082cb58) {
    return 0xffff5037;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

