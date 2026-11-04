// name: FUN_100158470
// address: 100158470

void FUN_100158470(long *param_1,ulong param_2,undefined1 param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  ulong *local_48;
  ulong local_40;
  char local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  plVar1 = param_1 + 2;
  plVar6 = (long *)param_1[2];
  plVar5 = plVar1;
  if (plVar6 == (long *)0x0) {
LAB_1001584bc:
    plVar5 = plVar1;
  }
  else {
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar5 == plVar1) || (param_2 < (ulong)plVar5[4])) goto LAB_1001584bc;
  }
  plVar6 = (long *)param_1[5];
  local_40 = param_2;
  if (plVar6 != (long *)0x0) {
    plVar7 = param_1 + 5;
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar7 != param_1 + 5) && ((ulong)plVar7[4] <= param_2)) goto LAB_10015858d;
  }
  if (plVar5 == plVar1) {
    local_33 = '\0';
    cVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_33);
    bVar8 = cVar3 != '\0';
    local_31 = bVar8;
    if (local_33 == '\0') {
      cVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_40,&local_31,1);
      uVar2 = local_31;
      if (cVar3 != '\0') {
        local_48 = &local_40;
        lVar4 = FUN_10015a18e(param_1 + 1,local_48,&DAT_100712240,&local_48,&local_32);
        *(undefined1 *)(lVar4 + 0x28) = uVar2;
      }
    }
    else {
      local_48 = &local_40;
      lVar4 = FUN_10015a18e(param_1 + 1,local_48,&DAT_100712240,&local_48,&local_32);
      *(bool *)(lVar4 + 0x28) = bVar8;
    }
  }
LAB_10015858d:
  local_48 = &local_40;
  lVar4 = FUN_10015a18e(param_1 + 4,local_48,&DAT_100712240,&local_48,&local_32);
  *(undefined1 *)(lVar4 + 0x28) = param_3;
  return;
}

