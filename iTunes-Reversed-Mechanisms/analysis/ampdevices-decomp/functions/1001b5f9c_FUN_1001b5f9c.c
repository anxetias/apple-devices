// name: FUN_1001b5f9c
// address: 1001b5f9c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1001b5f9c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 local_20 [16];
  
  if (DAT_10089fb40 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_10089fb40);
    if (iVar2 != 0) {
      FUN_1001b7b04(local_20,"Default");
      FUN_1001b6060(&DAT_10089fb30,local_20);
      FUN_1001b7a50(local_20);
      ___cxa_atexit(FUN_1001b6106,&DAT_10089fb30,0x100000000);
      ___cxa_guard_release(&DAT_10089fb40);
    }
  }
  lVar1 = DAT_10089fb38;
  *param_1 = _DAT_10089fb30;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}

