// name: FUN_1001e5686
// address: 1001e5686

void FUN_1001e5686(undefined8 param_1)

{
  size_t sVar1;
  undefined2 local_328;
  undefined1 local_326 [510];
  char local_128 [264];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  _snprintf(local_128,0xff,"%lld",param_1);
  local_328 = 0;
  sVar1 = _strlen(local_128);
  FUN_1001e5811(local_128,sVar1,&local_328);
  FUN_1001734b1(DAT_1008c4d90,local_326,local_328);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

