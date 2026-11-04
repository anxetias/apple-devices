// name: FUN_1006a6ee5
// address: 1006a6ee5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006a6ee5(void)

{
  int iVar1;
  
  iVar1 = ___cxa_guard_acquire(&DAT_1008a2230);
  if (iVar1 != 0) {
    _DAT_1008a2220 = 0;
    uRam00000001008a2228 = 0;
    _DAT_1008a2218 = &DAT_1008a2220;
    ___cxa_atexit(FUN_1001c3546,&DAT_1008a2218,0x100000000);
    ___cxa_guard_release(&DAT_1008a2230);
    return;
  }
  return;
}

