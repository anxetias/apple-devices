// name: FUN_100198691
// address: 100198691

long * FUN_100198691(long *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
  }
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
  }
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
  }
  uVar2 = *(undefined4 *)((long)param_2 + 0x1c);
  lVar1 = param_2[4];
  uVar3 = *(undefined4 *)((long)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
  *(int *)(param_1 + 4) = (int)lVar1;
  *(undefined4 *)((long)param_1 + 0x24) = uVar3;
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    _CFRetain();
  }
  return param_1;
}

