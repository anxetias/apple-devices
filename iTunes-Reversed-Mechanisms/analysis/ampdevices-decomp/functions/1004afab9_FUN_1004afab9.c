// name: FUN_1004afab9
// address: 1004afab9

void FUN_1004afab9(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_1008c7798;
  if ((DAT_1008c7790 == '\0') && (DAT_1008c7798 != (int *)0x0)) {
    LOCK();
    *DAT_1008c7798 = *DAT_1008c7798 + 1;
    UNLOCK();
    FUN_10048c236(*param_1);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1004ada4f(piVar1);
      return;
    }
  }
  return;
}

