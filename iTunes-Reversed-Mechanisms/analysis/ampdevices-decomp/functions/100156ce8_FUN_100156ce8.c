// name: FUN_100156ce8
// address: 100156ce8

undefined * FUN_100156ce8(void)

{
  int iVar1;
  
  if (DAT_10088fec8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_10088fec8);
    if (iVar1 != 0) {
      FUN_10015726e(&DAT_10088fd98);
      DAT_10088fec0 = 0;
      ___cxa_atexit(FUN_100156d68,&DAT_10088fd98,0x100000000);
      ___cxa_guard_release(&DAT_10088fec8);
    }
  }
  return &DAT_10088fd98;
}

