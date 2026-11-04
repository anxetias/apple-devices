// name: FUN_100130e94
// address: 100130e94

void FUN_100130e94(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  lVar2 = param_2[1];
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  lVar2 = param_2[4];
  uVar3 = *(undefined4 *)((long)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((long)param_1 + 0x24) = uVar5;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1001b7a5c(param_1 + 5,param_2 + 5);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  return;
}

