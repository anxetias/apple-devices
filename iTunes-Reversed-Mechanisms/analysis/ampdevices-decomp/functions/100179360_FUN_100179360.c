// name: FUN_100179360
// address: 100179360

void FUN_100179360(long param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  FUN_1003da7e0();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  dVar2 = 0.0;
  if ((*(double *)(param_2 + 0x38) != 0.0) || (NAN(*(double *)(param_2 + 0x38)))) {
    dVar2 = (double)FUN_1001ebd46();
    dVar2 = dVar2 + *(double *)(param_2 + 0x38);
  }
  *(double *)(param_1 + 0x38) = dVar2;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  lVar1 = *(long *)(param_2 + 0x50);
  *(bool *)(param_1 + 0x50) = lVar1 != 0;
  *(long *)(param_1 + 0x58) = lVar1;
  lVar1 = *(long *)(param_2 + 0x58);
  *(long *)(param_1 + 0x60) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    UNLOCK();
  }
  return;
}

