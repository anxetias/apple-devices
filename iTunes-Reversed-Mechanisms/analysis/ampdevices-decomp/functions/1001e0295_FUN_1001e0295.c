// name: FUN_1001e0295
// address: 1001e0295

undefined2 FUN_1001e0295(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e033f(param_1,local_238);
  FUN_1001e033f(param_2,local_438);
  FUN_1001e033f(param_3,local_638);
  uVar1 = FUN_1001e0077(local_238,0xff,local_438,local_638);
  FUN_1001e042d(local_238,param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

