// name: FUN_10013d78a
// address: 10013d78a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10013d78a(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  
  if (DAT_10088fd60 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_10088fd60);
    if (iVar2 != 0) {
      pvVar3 = operator_new(0x80,(nothrow_t *)PTR_nothrow_10082c970);
      if (pvVar3 != (void *)0x0) {
        FUN_10013a9ec(pvVar3,1);
      }
      FUN_10013d66a(&DAT_10088fd50,pvVar3);
      ___cxa_atexit(FUN_10013b920,&DAT_10088fd50,0x100000000);
      ___cxa_guard_release(&DAT_10088fd60);
    }
  }
  lVar1 = DAT_10088fd58;
  *param_1 = _DAT_10088fd50;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}

