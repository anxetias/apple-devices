// name: FUN_100476dff
// address: 100476dff

undefined8 FUN_100476dff(undefined8 param_1,undefined8 param_2)

{
  undefined2 local_228 [260];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_228[0] = 0;
  FUN_100476e65(param_2,local_228);
  FUN_1001b8dfc(param_1,local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

