// name: FUN_10017fa7b
// address: 10017fa7b

void FUN_10017fa7b(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    FUN_10017f061(param_1,param_2,0,param_4,param_5);
    return;
  }
  FUN_1001e04f5(param_3,local_238);
  FUN_10017f061(param_1,param_2,local_238,param_4,param_5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

