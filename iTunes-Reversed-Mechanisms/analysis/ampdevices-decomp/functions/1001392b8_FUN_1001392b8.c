// name: FUN_1001392b8
// address: 1001392b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001392b8(void)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = ___cxa_guard_acquire(&DAT_10088fce0);
  if (iVar2 != 0) {
    DAT_10088fcd0._0_4_ = _DAT_10088fcb0;
    DAT_10088fcd0._4_4_ = uRam000000010088fcb4;
    DAT_10088fcd8._0_4_ = (undefined4)DAT_10088fcb8;
    DAT_10088fcd8._4_4_ = DAT_10088fcb8._4_4_;
    if (CONCAT44(DAT_10088fcb8._4_4_,(undefined4)DAT_10088fcb8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(DAT_10088fcb8._4_4_,(undefined4)DAT_10088fcb8) + 0x10);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    ___cxa_atexit(FUN_100135a44,&DAT_10088fcd0,0x100000000);
    ___cxa_guard_release(&DAT_10088fce0);
    return;
  }
  return;
}

