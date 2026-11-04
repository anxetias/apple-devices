// name: FUN_100178342
// address: 100178342

uint FUN_100178342(void)

{
  size_t local_2c8;
  undefined1 local_2c0 [32];
  uint local_2a0;
  int local_38 [3];
  pid_t local_2c;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_38[0] = 1;
  local_38[1] = 0xe;
  local_38[2] = 1;
  local_2c = _getpid();
  local_2c8 = 0x288;
  local_2a0 = 0;
  _sysctl(local_38,4,local_2c0,&local_2c8,(void *)0x0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return local_2a0 >> 0xb & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

