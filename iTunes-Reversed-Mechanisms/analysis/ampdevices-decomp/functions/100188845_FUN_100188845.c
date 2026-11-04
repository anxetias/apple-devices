// name: FUN_100188845
// address: 100188845

void FUN_100188845(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1001e115f(param_2,local_228);
  if (iVar1 == 0) {
    FUN_10017ecc9(param_1,local_228,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

