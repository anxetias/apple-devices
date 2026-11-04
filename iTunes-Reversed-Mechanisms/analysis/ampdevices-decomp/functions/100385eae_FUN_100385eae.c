// name: FUN_100385eae
// address: 100385eae

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100385eae(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (DAT_1008c7580 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1008c7580);
    if (iVar2 != 0) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_10027cd3c(&DAT_1008c7570,PTR___dispatch_main_q_10082cb60,PTR___dispatch_main_q_10082cb60,
                    &local_28,0);
      FUN_100205d70(&local_28);
      ___cxa_atexit(FUN_100385f70,&DAT_1008c7570,0x100000000);
      ___cxa_guard_release(&DAT_1008c7580);
    }
  }
  lVar1 = DAT_1008c7578;
  *param_1 = _DAT_1008c7570;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}

