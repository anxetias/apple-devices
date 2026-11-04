// name: FUN_10015829e
// address: 10015829e

ulong FUN_10015829e(long *param_1,ulong param_2)

{
  char cVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong unaff_R15;
  undefined7 uVar8;
  ulong *local_58;
  long *local_50;
  ulong local_48;
  undefined1 local_40 [16];
  long local_30;
  undefined1 local_22;
  char local_21;
  
  plVar6 = (long *)param_1[5];
  uVar8 = (undefined7)(unaff_R15 >> 8);
  if (plVar6 != (long *)0x0) {
    plVar3 = param_1 + 5;
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar3 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar3 != param_1 + 5) && ((ulong)plVar3[4] <= param_2)) {
      unaff_R15 = CONCAT71(uVar8,(char)plVar3[5]);
      goto LAB_100158417;
    }
  }
  local_48 = param_2;
  FUN_10015a0ac(local_40,&DAT_10088ff48);
  if (DAT_10088fed8 != (undefined8 *)0x0) {
    puVar4 = &DAT_10088fed8;
    puVar7 = DAT_10088fed8;
    do {
      if ((ulong)puVar7[4] >= param_2) {
        puVar4 = puVar7;
      }
      puVar7 = (undefined8 *)puVar7[(ulong)puVar7[4] < param_2];
    } while (puVar7 != (undefined8 *)0x0);
    if (((undefined8 **)puVar4 != &DAT_10088fed8) && ((ulong)puVar4[4] <= param_2)) {
      unaff_R15 = CONCAT71(uVar8,*(undefined1 *)(puVar4 + 5));
      FUN_10015a142(local_40);
      goto LAB_100158417;
    }
  }
  FUN_10015a142(local_40);
  local_30 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if (local_30 == 0) {
LAB_1001583f5:
    cVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,local_40,1);
    if (cVar2 != '\0') {
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),local_40[0]);
      goto LAB_100158417;
    }
  }
  else {
    local_50 = &local_30;
    cVar2 = FUN_100165191(local_30,&local_21);
    if (cVar2 != '\0') {
      FUN_10015a0ac(local_40,&DAT_10088ff48);
      cVar1 = local_21;
      local_58 = &local_48;
      lVar5 = FUN_10015a18e(&DAT_10088fed0,local_58,&DAT_100712240,&local_58,&local_22);
      *(bool *)(lVar5 + 0x28) = cVar1 != '\0';
      unaff_R15 = CONCAT71(uVar8,local_21 != '\0');
      FUN_10015a142(local_40);
    }
    FUN_10017060f(local_30);
    if (cVar2 != '\0') goto LAB_100158417;
    param_2 = local_48;
    if (local_30 == 0) goto LAB_1001583f5;
  }
  unaff_R15 = 0;
LAB_100158417:
  return unaff_R15 & 0xffffff01;
}

