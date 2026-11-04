// name: FUN_10015916e
// address: 10015916e

void FUN_10015916e(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong *local_40;
  ulong local_38;
  undefined1 local_29;
  
  plVar1 = param_1 + 0x1a;
  plVar5 = (long *)param_1[0x1a];
  plVar4 = plVar1;
  if (plVar5 == (long *)0x0) {
LAB_1001591bf:
    plVar4 = plVar1;
  }
  else {
    do {
      if ((ulong)plVar5[4] >= param_2) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[(ulong)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 == plVar1) || (param_2 < (ulong)plVar4[4])) goto LAB_1001591bf;
  }
  plVar5 = (long *)param_1[0x1d];
  local_38 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar6 = param_1 + 0x1d;
    do {
      if ((ulong)plVar5[4] >= param_2) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[(ulong)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar6 != param_1 + 0x1d) && ((ulong)plVar6[4] <= param_2)) {
      FUN_10017060f(plVar6[5]);
      goto LAB_10015927f;
    }
  }
  if (plVar4 == plVar1) {
    lVar2 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
    if (lVar2 == 0) {
      lVar2 = FUN_10015a2c4(param_1,param_2);
      if (lVar2 != 0) {
        local_40 = &local_38;
        lVar3 = FUN_10015a228(param_1 + 0x19,local_40,&DAT_100712240,&local_40,&local_29);
        *(long *)(lVar3 + 0x28) = lVar2;
      }
    }
    else {
      local_40 = &local_38;
      lVar3 = FUN_10015a228(param_1 + 0x19,local_40,&DAT_100712240,&local_40,&local_29);
      *(long *)(lVar3 + 0x28) = lVar2;
    }
  }
LAB_10015927f:
  *(undefined1 *)(param_1 + 0x1f) = 1;
  return;
}

