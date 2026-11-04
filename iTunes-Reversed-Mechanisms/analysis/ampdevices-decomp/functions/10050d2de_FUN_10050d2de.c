// name: FUN_10050d2de
// address: 10050d2de

void FUN_10050d2de(undefined4 param_1,void *param_2)

{
  size_t local_30;
  int local_28 [6];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28[0] = 1;
  local_28[1] = 0xe;
  local_28[2] = 1;
  local_30 = 0x288;
  local_28[3] = param_1;
  _sysctl(local_28,4,param_2,&local_30,(void *)0x0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

