// name: FUN_1004cbc32
// address: 1004cbc32

void FUN_1004cbc32(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = *(long *)(param_2 + 2);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1001a8c1c(param_1 + 4,param_2 + 4);
  FUN_1001a7a9e(param_1 + 6,param_2 + 6);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  return;
}

