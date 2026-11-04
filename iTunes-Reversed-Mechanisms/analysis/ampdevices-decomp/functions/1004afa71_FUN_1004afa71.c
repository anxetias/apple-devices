// name: FUN_1004afa71
// address: 1004afa71

undefined1 FUN_1004afa71(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  
  piVar1 = DAT_1008c7798;
  if ((DAT_1008c7790 == '\0') && (DAT_1008c7798 != (int *)0x0)) {
    LOCK();
    *DAT_1008c7798 = *DAT_1008c7798 + 1;
    UNLOCK();
    uVar2 = FUN_1004adb7b(piVar1,param_1,param_2);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1004ada4f(piVar1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

