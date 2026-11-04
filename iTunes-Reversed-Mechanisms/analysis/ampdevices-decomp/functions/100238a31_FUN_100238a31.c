// name: FUN_100238a31
// address: 100238a31

void FUN_100238a31(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *local_50;
  undefined8 local_48;
  undefined4 **local_40;
  undefined4 **local_38;
  undefined1 local_30;
  undefined4 *local_28;
  
  local_38 = &local_28;
  local_40 = &local_50;
  puVar7 = param_2;
  local_28 = param_4;
  local_50 = param_4;
  local_48 = param_1;
  if (param_2 == param_3) {
    local_30 = 1;
  }
  else {
    do {
      *local_28 = *puVar7;
      lVar2 = *(long *)(puVar7 + 4);
      uVar6 = *(undefined8 *)(puVar7 + 4);
      *(undefined8 *)(local_28 + 2) = *(undefined8 *)(puVar7 + 2);
      *(undefined8 *)(local_28 + 4) = uVar6;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      *(undefined1 *)(local_28 + 10) = *(undefined1 *)(puVar7 + 10);
      uVar3 = puVar7[7];
      uVar4 = puVar7[8];
      uVar5 = puVar7[9];
      local_28[6] = puVar7[6];
      local_28[7] = uVar3;
      local_28[8] = uVar4;
      local_28[9] = uVar5;
      puVar7 = puVar7 + 0xc;
      local_28 = local_28 + 0xc;
    } while (puVar7 != param_3);
    local_30 = 1;
    do {
      *param_2 = 0;
      FUN_1002188e4(param_2 + 2);
      *(undefined8 *)(param_2 + 6) = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      FUN_100205d70(param_2 + 2);
      param_2 = param_2 + 0xc;
    } while (param_2 != param_3);
  }
  FUN_100238aea(&local_48);
  return;
}

