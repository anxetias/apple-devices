// name: FUN_10069f3b5
// address: 10069f3b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10069f3b5(void)

{
  int iVar1;
  
  iVar1 = ___cxa_guard_acquire(&DAT_10089faf8);
  if (iVar1 != 0) {
    DAT_10089fae8 = 0;
    uRam000000010089faf0 = 0;
    _DAT_10089fae0 = &DAT_10089fae8;
    ___cxa_atexit(FUN_1001ad2c0,&DAT_10089fae0,0x100000000);
    ___cxa_guard_release(&DAT_10089faf8);
    return;
  }
  return;
}

