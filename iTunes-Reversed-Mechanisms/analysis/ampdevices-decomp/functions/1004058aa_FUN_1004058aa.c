// name: FUN_1004058aa
// address: 1004058aa

void FUN_1004058aa(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1002b1039(param_1,local_458);
  if (iVar1 == 0) {
    FUN_10040503d(local_458,param_1,param_2,param_3,0,param_4,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

