// name: FUN_100158ea6
// address: 100158ea6

void FUN_100158ea6(long *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong *local_50;
  undefined8 local_48;
  ulong local_40;
  char local_32;
  undefined1 local_31;
  
  plVar1 = param_1 + 0x14;
  plVar6 = (long *)param_1[0x14];
  plVar5 = plVar1;
  if (plVar6 == (long *)0x0) {
LAB_100158ef9:
    plVar5 = plVar1;
  }
  else {
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar5 == plVar1) || (param_2 < (ulong)plVar5[4])) goto LAB_100158ef9;
  }
  plVar6 = (long *)param_1[0x17];
  local_40 = param_2;
  if (plVar6 != (long *)0x0) {
    plVar7 = param_1 + 0x17;
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar7 != param_1 + 0x17) && ((ulong)plVar7[4] <= param_2)) goto LAB_100158fa6;
  }
  if (plVar5 == plVar1) {
    local_32 = '\0';
    local_48 = (**(code **)(*param_1 + 0x60))(param_1,param_2,&local_32);
    if ((local_32 != '\0') ||
       (cVar3 = (**(code **)(*param_1 + 0x28))(param_1,local_40,&local_48,1), cVar3 != '\0')) {
      uVar2 = local_48;
      local_50 = &local_40;
      lVar4 = FUN_10015a228(param_1 + 0x13,local_50,&DAT_100712240,&local_50,&local_31);
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
    }
  }
LAB_100158fa6:
  local_50 = &local_40;
  lVar4 = FUN_10015a228(param_1 + 0x16,local_50,&DAT_100712240,&local_50,&local_48);
  *(undefined8 *)(lVar4 + 0x28) = param_3;
  return;
}

