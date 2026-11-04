// name: FUN_1001d58b4
// address: 1001d58b4

void FUN_1001d58b4(undefined8 param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(local_458,0x420);
  _memcpy(local_458,param_2,0x420);
  FUN_1001d5942(param_1,1,local_458,param_3,param_4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

