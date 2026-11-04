// name: FUN_1001e561b
// address: 1001e561b

void FUN_1001e561b(undefined8 param_1,undefined8 param_2)

{
  char local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  _snprintf(local_128,0xff,"%llu",param_1);
  FUN_1001e04f5(local_128,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

