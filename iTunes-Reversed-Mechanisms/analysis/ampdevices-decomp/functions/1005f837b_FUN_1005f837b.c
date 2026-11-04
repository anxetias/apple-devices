// name: FUN_1005f837b
// address: 1005f837b

void FUN_1005f837b(undefined8 param_1,undefined8 param_2)

{
  char local_68 [72];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  _snprintf(local_68,0x40,"%llX",param_1);
  FUN_1001e04f5(local_68,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

