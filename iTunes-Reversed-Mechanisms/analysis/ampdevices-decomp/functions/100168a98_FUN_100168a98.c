// name: FUN_100168a98
// address: 100168a98

undefined1 FUN_100168a98(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0 && param_3 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1001e326e(param_3,local_228);
    uVar1 = FUN_100168550(param_1,param_2,local_228,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

