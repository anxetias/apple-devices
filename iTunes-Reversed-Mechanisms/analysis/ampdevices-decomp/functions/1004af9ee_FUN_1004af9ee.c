// name: FUN_1004af9ee
// address: 1004af9ee

void FUN_1004af9ee(void)

{
  int *piVar1;
  
  piVar1 = DAT_1008c7798;
  if (DAT_1008c7798 != (int *)0x0) {
    DAT_1008c7798 = (int *)0x0;
    DAT_1008c7790 = 1;
    *(undefined1 *)(*(long *)(piVar1 + 0x54) + 0x144) = 1;
    *(undefined1 *)(*(long *)(piVar1 + 0x56) + 0x144) = 1;
    FUN_1004aec71(piVar1,0,0);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1004ada4f(piVar1);
    }
  }
  if (DAT_1008c7780 != (long *)0x0) {
    (**(code **)(*DAT_1008c7780 + 0x20))();
    FUN_1002188e4(&DAT_1008c7780);
    return;
  }
  return;
}

