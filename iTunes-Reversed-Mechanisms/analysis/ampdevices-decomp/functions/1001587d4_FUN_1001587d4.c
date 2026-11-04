// name: FUN_1001587d4
// address: 1001587d4

void FUN_1001587d4(long *param_1,ulong param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong *local_50;
  ulong local_48;
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  plVar1 = param_1 + 8;
  plVar6 = (long *)param_1[8];
  plVar5 = plVar1;
  if (plVar6 == (long *)0x0) {
LAB_100158820:
    plVar5 = plVar1;
  }
  else {
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar5 == plVar1) || (param_2 < (ulong)plVar5[4])) goto LAB_100158820;
  }
  plVar6 = (long *)param_1[0xb];
  local_48 = param_2;
  if (plVar6 != (long *)0x0) {
    plVar7 = param_1 + 0xb;
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar7 != param_1 + 0xb) && ((ulong)plVar7[4] <= param_2)) goto LAB_1001588ee;
  }
  if (plVar5 == plVar1) {
    local_39 = '\0';
    uVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2,&local_39);
    local_38 = uVar3;
    if (local_39 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_48,&local_38,1);
      uVar3 = local_38;
      if (cVar2 != '\0') {
        local_50 = &local_48;
        lVar4 = FUN_10033d31a(param_1 + 7,local_50,&DAT_100712240,&local_50,&local_31);
        *(undefined4 *)(lVar4 + 0x28) = uVar3;
      }
    }
    else {
      local_50 = &local_48;
      lVar4 = FUN_10033d31a(param_1 + 7,local_50,&DAT_100712240,&local_50,&local_31);
      *(undefined4 *)(lVar4 + 0x28) = uVar3;
    }
  }
LAB_1001588ee:
  local_50 = &local_48;
  lVar4 = FUN_10033d31a(param_1 + 10,local_50,&DAT_100712240,&local_50,&local_38);
  *(undefined4 *)(lVar4 + 0x28) = param_3;
  return;
}

