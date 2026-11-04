// name: FUN_1001f2bbe
// address: 1001f2bbe

void FUN_1001f2bbe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 local_228;
  undefined1 local_226 [518];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e0b83(param_3,&local_228,0);
  FUN_1001f2c28(param_1,param_2,local_226,local_228);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

