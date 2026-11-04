// name: FUN_100248292
// address: 100248292

void FUN_100248292(undefined8 param_1,void *param_2)

{
  undefined1 local_4f0 [1232];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  _memcpy(local_4f0,param_2,0x4d0);
  FUN_100168e2e(param_1,&cf_iPodPrefs,local_4f0,0x4d0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

