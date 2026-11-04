// name: FUN_100158c8e
// address: 100158c8e

long * FUN_100158c8e(long *param_1,ulong param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *unaff_R15;
  ulong *local_60;
  ulong local_58;
  long local_50;
  long *local_48;
  undefined1 local_40 [16];
  long *local_30;
  undefined1 local_21;
  
  plVar5 = (long *)param_1[0x17];
  if (plVar5 != (long *)0x0) {
    plVar2 = param_1 + 0x17;
    do {
      if ((ulong)plVar5[4] >= param_2) {
        plVar2 = plVar5;
      }
      plVar5 = (long *)plVar5[(ulong)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar2 != param_1 + 0x17) && ((ulong)plVar2[4] <= param_2)) {
      return (long *)plVar2[5];
    }
  }
  local_58 = param_2;
  FUN_10015a0ac(local_40,&DAT_10088ff48);
  if (DAT_10088ff20 == (undefined8 *)0x0) {
LAB_100158d30:
    FUN_10015a142(local_40);
    local_50 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
    if (local_50 == 0) {
LAB_100158dde:
      cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_30,1);
      if (cVar1 != '\0') {
        FUN_10015a0ac(local_40,&DAT_10088ff48);
        plVar5 = local_30;
        local_60 = &local_58;
        lVar4 = FUN_10015a228(&DAT_10088ff18,local_60,&DAT_100712240,&local_60,&local_48);
        *(long **)(lVar4 + 0x28) = plVar5;
        plVar5 = local_30;
        goto LAB_100158e35;
      }
    }
    else {
      local_30 = &local_50;
      cVar1 = FUN_100165026(local_50,&local_48);
      if (cVar1 != '\0') {
        FUN_10015a0ac(local_40,&DAT_10088ff48);
        plVar5 = local_48;
        local_60 = &local_58;
        lVar4 = FUN_10015a228(&DAT_10088ff18,local_60,&DAT_100712240,&local_60,&local_21);
        *(long **)(lVar4 + 0x28) = plVar5;
        FUN_10015a142(local_40);
        unaff_R15 = local_48;
      }
      FUN_10017060f(local_50);
      if (cVar1 != '\0') {
        return unaff_R15;
      }
      param_2 = local_58;
      if (local_50 == 0) goto LAB_100158dde;
    }
    plVar5 = (long *)0x0;
  }
  else {
    puVar3 = &DAT_10088ff20;
    puVar6 = DAT_10088ff20;
    do {
      if ((ulong)puVar6[4] >= param_2) {
        puVar3 = puVar6;
      }
      puVar6 = (undefined8 *)puVar6[(ulong)puVar6[4] < param_2];
    } while (puVar6 != (undefined8 *)0x0);
    if (((undefined8 **)puVar3 == &DAT_10088ff20) || (param_2 < (ulong)puVar3[4]))
    goto LAB_100158d30;
    plVar5 = (long *)puVar3[5];
LAB_100158e35:
    FUN_10015a142(local_40);
  }
  return plVar5;
}

