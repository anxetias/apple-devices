// name: FUN_100285136
// address: 100285136

long FUN_100285136(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = &local_28;
  local_40 = &local_50;
  local_30 = 0;
  local_50 = param_4;
  local_48 = param_1;
  for (; local_28 = param_4, param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_1001a8c1c(param_4,param_2);
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_4 + 0x10) = uVar6;
    lVar2 = *(long *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_4 + 0x1c) = uVar3;
    *(undefined4 *)(param_4 + 0x20) = uVar4;
    *(undefined4 *)(param_4 + 0x24) = uVar5;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    *(undefined1 *)(param_4 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
    *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    param_4 = local_28 + 0x30;
  }
  local_30 = 1;
  FUN_100284e4e();
  return param_4;
}

