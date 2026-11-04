// name: FUN_10013b92a
// address: 10013b92a

undefined8 * FUN_10013b92a(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (DAT_10088fd40 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_10088fd40);
    if (iVar2 != 0) {
      FUN_10013d78a(&local_28);
      DAT_10088fd30._0_4_ = local_28;
      DAT_10088fd30._4_4_ = uStack_24;
      DAT_10088fd38._0_4_ = uStack_20;
      DAT_10088fd38._4_4_ = uStack_1c;
      if (CONCAT44(uStack_1c,uStack_20) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_1c,uStack_20) + 0x10);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      FUN_100205d70(&local_28);
      ___cxa_atexit(FUN_10013b5f0,&DAT_10088fd30,0x100000000);
      ___cxa_guard_release(&DAT_10088fd40);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (CONCAT44(DAT_10088fd38._4_4_,(undefined4)DAT_10088fd38) != 0) {
    lVar3 = std::__shared_weak_count::lock();
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      *param_1 = CONCAT44(DAT_10088fd30._4_4_,(undefined4)DAT_10088fd30);
    }
  }
  return param_1;
}

