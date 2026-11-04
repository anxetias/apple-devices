// name: FUN_10052bfbe
// address: 10052bfbe

void FUN_10052bfbe(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  LOCK();
  plVar1 = param_1 + 0xb7;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + 1;
  UNLOCK();
  if ((int)lVar2 != 0) {
    return;
  }
  *(undefined1 *)((long)param_1 + 0x5bd) = 0;
  if (param_1[0xb4] != 0) {
    *(undefined1 *)((long)param_1 + 0x5bd) = 1;
    (**(code **)(*param_1 + 0xf8))(param_1,param_1 + 0xb8);
    (**(code **)(*param_1 + 0x1e8))(param_1);
  }
  if (DAT_1008c7810 != (long *)0x0) {
    cVar3 = (**(code **)(*DAT_1008c7810 + 0x48))(DAT_1008c7810,param_1);
    if (cVar3 != '\0') {
      *(undefined1 *)((long)param_1 + 0x5bc) = 1;
    }
  }
  return;
}

