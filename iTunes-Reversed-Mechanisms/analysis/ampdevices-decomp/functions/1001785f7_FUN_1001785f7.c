// name: FUN_1001785f7
// address: 1001785f7

void FUN_1001785f7(void)

{
  int iVar1;
  
  if (DAT_1008900a0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008900a0);
    if (iVar1 != 0) {
      FUN_100179278(&DAT_100890030);
      ___cxa_atexit(FUN_10017926e,&DAT_100890030,0x100000000);
      ___cxa_guard_release(&DAT_1008900a0);
      return;
    }
  }
  return;
}

