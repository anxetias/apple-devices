// name: FUN_1001a53ae
// address: 1001a53ae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1001a53ae(void)

{
  int iVar1;
  
  if (DAT_10089cbb8 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_10089cbb8);
    if (iVar1 != 0) {
      FUN_1001c750a(&DAT_10089cb60);
      _DAT_10089cb60 = &PTR_FUN_10083c6e8;
      _DAT_10089cb90 = 0;
      _DAT_10089cb98 = 0;
      _DAT_10089cba0 = 0;
      uRam000000010089cba8 = 0;
      _DAT_10089cbb0 = 0;
      ___cxa_atexit(FUN_1001a5462,&DAT_10089cb60,0x100000000);
      ___cxa_guard_release(&DAT_10089cbb8);
    }
  }
  return &DAT_10089cb60;
}

