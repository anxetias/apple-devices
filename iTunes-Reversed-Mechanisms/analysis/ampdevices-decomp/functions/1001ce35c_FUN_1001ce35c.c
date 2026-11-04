// name: FUN_1001ce35c
// address: 1001ce35c

bool FUN_1001ce35c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001cda96(param_2,param_3,param_4,local_128);
  lVar1 = FUN_1001cda26(local_128,param_1);
  if (lVar1 != 0) {
    FUN_10017060f(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar1 != 0;
}

