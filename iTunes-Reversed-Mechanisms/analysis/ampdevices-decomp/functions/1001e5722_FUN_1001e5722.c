// name: FUN_1001e5722
// address: 1001e5722

void FUN_1001e5722(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined2 local_178 [32];
  char local_138 [264];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  _snprintf(local_138,0xff,"%lld",param_3);
  local_178[0] = 0;
  sVar1 = _strlen(local_138);
  FUN_1001e5811(local_138,sVar1,local_178);
  FUN_1001e4913(param_1,0xff,param_2,local_178);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

