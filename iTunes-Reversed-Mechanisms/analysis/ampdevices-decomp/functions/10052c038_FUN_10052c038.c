// name: FUN_10052c038
// address: 10052c038

void FUN_10052c038(long *param_1)

{
  int iVar1;
  long *plVar2;
  char local_60 [80];
  
  LOCK();
  plVar2 = param_1 + 0xb7;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 != 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x5bc) == '\x01') {
    *(undefined1 *)((long)param_1 + 0x5bc) = 0;
  }
  if (*(char *)((long)param_1 + 0x5bd) != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x1e0))(param_1);
  *(undefined1 *)((long)param_1 + 0x5bd) = 0;
  iVar1 = (int)param_1[0x10];
  if (iVar1 == 0x44574e4c) {
    plVar2 = (long *)FUN_1004aa9fa(param_1 + 0x16);
    if (plVar2 == (long *)0x0) goto LAB_10052c0dd;
  }
  else {
    if ((iVar1 != 0x4d46494c) && (iVar1 != 0x46494c45)) goto LAB_10052c0dd;
    plVar2 = param_1 + 0x16;
  }
  iVar1 = FUN_10017d477(plVar2,local_60,0);
  if ((iVar1 == 0) && (local_60[0] == '\0')) {
    (**(code **)(*param_1 + 0xf0))(param_1,param_1[0xb8]);
  }
LAB_10052c0dd:
  param_1[0xb8] = 0;
  return;
}

