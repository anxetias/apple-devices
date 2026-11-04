// name: FUN_100284d67
// address: 100284d67

void FUN_100284d67(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long local_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined1 local_38;
  long local_30;
  
  local_40 = &local_30;
  local_48 = &local_58;
  local_38 = 0;
  lVar7 = param_2;
  local_58 = param_4;
  local_50 = param_1;
  if (param_2 == param_3) {
    local_38 = 1;
    local_30 = param_4;
  }
  else {
    do {
      local_30 = param_4;
      FUN_1001a8c1c(param_4,lVar7);
      uVar6 = *(undefined8 *)(lVar7 + 0x10);
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(lVar7 + 8);
      *(undefined8 *)(param_4 + 0x10) = uVar6;
      lVar2 = *(long *)(lVar7 + 0x20);
      uVar3 = *(undefined4 *)(lVar7 + 0x1c);
      uVar4 = *(undefined4 *)(lVar7 + 0x20);
      uVar5 = *(undefined4 *)(lVar7 + 0x24);
      *(undefined4 *)(param_4 + 0x18) = *(undefined4 *)(lVar7 + 0x18);
      *(undefined4 *)(param_4 + 0x1c) = uVar3;
      *(undefined4 *)(param_4 + 0x20) = uVar4;
      *(undefined4 *)(param_4 + 0x24) = uVar5;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      *(undefined1 *)(param_4 + 0x2c) = *(undefined1 *)(lVar7 + 0x2c);
      *(undefined4 *)(param_4 + 0x28) = *(undefined4 *)(lVar7 + 0x28);
      lVar7 = lVar7 + 0x30;
      param_4 = local_30 + 0x30;
    } while (lVar7 != param_3);
    local_38 = 1;
    local_30 = param_4;
    do {
      FUN_100205d70(param_2 + 0x18);
      FUN_1001ab006(param_2);
      param_2 = param_2 + 0x30;
    } while (param_2 != param_3);
  }
  FUN_100284e4e(&local_50);
  return;
}

