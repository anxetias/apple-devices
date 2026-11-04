// name: FUN_100158922
// address: 100158922

undefined4 FUN_100158922(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 unaff_R15D;
  ulong *local_58;
  ulong local_50;
  long local_48;
  undefined1 local_40 [16];
  long *local_30;
  undefined1 local_25;
  undefined4 local_24;
  
  plVar6 = (long *)param_1[0x11];
  if (plVar6 != (long *)0x0) {
    plVar3 = param_1 + 0x11;
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar3 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar3 != param_1 + 0x11) && ((ulong)plVar3[4] <= param_2)) {
      return (int)plVar3[5];
    }
  }
  local_50 = param_2;
  FUN_10015a0ac(local_40,&DAT_10088ff48);
  if (DAT_10088ff08 != (undefined8 *)0x0) {
    puVar4 = &DAT_10088ff08;
    puVar7 = DAT_10088ff08;
    do {
      if ((ulong)puVar7[4] >= param_2) {
        puVar4 = puVar7;
      }
      puVar7 = (undefined8 *)puVar7[(ulong)puVar7[4] < param_2];
    } while (puVar7 != (undefined8 *)0x0);
    if (((undefined8 **)puVar4 != &DAT_10088ff08) && ((ulong)puVar4[4] <= param_2)) {
      uVar1 = *(undefined4 *)(puVar4 + 5);
      goto LAB_100158aca;
    }
  }
  FUN_10015a142(local_40);
  local_48 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if (local_48 != 0) {
    local_30 = &local_48;
    cVar2 = FUN_100164d80(local_48,&local_24);
    if (cVar2 != '\0') {
      FUN_10015a0ac(local_40,&DAT_10088ff48);
      uVar1 = local_24;
      local_58 = &local_50;
      lVar5 = FUN_10033d31a(&DAT_10088ff00,local_58,&DAT_100712240,&local_58,&local_25);
      *(undefined4 *)(lVar5 + 0x28) = uVar1;
      FUN_10015a142(local_40);
      unaff_R15D = local_24;
    }
    FUN_10017060f(local_48);
    if (cVar2 != '\0') {
      return unaff_R15D;
    }
    param_2 = local_50;
    if (local_48 != 0) {
      return 0;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_30,1);
  if (cVar2 == '\0') {
    return 0;
  }
  FUN_10015a0ac(local_40,&DAT_10088ff48);
  uVar1 = local_30._0_4_;
  local_58 = &local_50;
  lVar5 = FUN_10033d31a(&DAT_10088ff00,local_58,&DAT_100712240,&local_58,&local_24);
  *(undefined4 *)(lVar5 + 0x28) = uVar1;
  uVar1 = local_30._0_4_;
LAB_100158aca:
  FUN_10015a142(local_40);
  return uVar1;
}

