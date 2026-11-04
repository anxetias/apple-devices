// name: FUN_1001358da
// address: 1001358da

undefined8 * FUN_1001358da(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 **local_28;
  undefined1 *local_20;
  undefined1 local_11;
  
  if (DAT_10088fcc0 == '\0') {
    uVar2 = FUN_100139273(&local_20);
    if ((uVar2 & 1) == 0) {
      FUN_10013714a(&DAT_10088fcb0,local_20);
      ___cxa_atexit(FUN_100135a3a,&DAT_10088fcb0,0x100000000);
      ___cxa_guard_release(&DAT_10088fcc0);
    }
  }
  if (DAT_10088fce0 == '\0') {
    FUN_1001392b8();
  }
  if (DAT_10088fce8 != -1) {
    local_20 = &local_11;
    local_28 = &local_20;
    std::__call_once((ulong *)&DAT_10088fce8,&local_28,FUN_100137365);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_10088fcd8 != 0) {
    lVar1 = std::__shared_weak_count::lock();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = DAT_10088fcd0;
    }
  }
  return param_1;
}

