// name: FUN_1001b96de
// address: 1001b96de

ulong FUN_1001b96de(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined2 *puVar7;
  
  if (param_2 == param_1) {
    return 0;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar6 = param_1[1];
    if (lVar6 == 0) {
      if (((long *)*param_2 != (long *)0x0) && (*(long *)*param_2 != 0)) {
        return 0xffffffff;
      }
      if ((long *)param_2[1] == (long *)0x0) {
        return 0;
      }
      return (ulong)-(uint)(*(long *)param_2[1] != 0);
    }
LAB_1001b974f:
    if (((long *)*param_2 == (long *)0x0) || (*(long *)*param_2 == 0)) {
      plVar4 = (long *)param_2[1];
      if (plVar4 == (long *)0x0) {
        return 1;
      }
      if (*plVar4 == 0) {
        return 1;
      }
    }
    else {
      plVar4 = (long *)param_2[1];
      if (plVar4 == (long *)0x0) {
        FUN_1001b87d0(param_2);
        puVar5 = &DAT_100711b02;
        if (param_2[1] != 0) {
          puVar5 = (undefined *)(param_2[1] + 0xc);
        }
        uVar3 = FUN_1001b83f0(param_2);
        uVar2 = FUN_1001b9a06(lVar6,puVar5,uVar3,param_3);
        return uVar2;
      }
    }
    uVar2 = FUN_1001b99dc(lVar6,plVar4,param_3);
    return uVar2;
  }
  plVar4 = (long *)*param_2;
  if ((plVar4 == (long *)0x0) || (*plVar4 == 0)) {
    if ((long *)param_2[1] == (long *)0x0) {
      return 1;
    }
    if (*(long *)param_2[1] == 0) {
      return 1;
    }
    if (plVar4 == (long *)0x0) {
      lVar6 = param_1[1];
      if (lVar6 == 0) {
        FUN_1001b8454(param_2);
        puVar7 = &DAT_100711b00;
        if (*param_2 != 0) {
          puVar7 = (undefined2 *)(*param_2 + 0xc);
        }
        uVar3 = FUN_1001b8378(param_2);
        uVar2 = FUN_1001b9870(lVar1,puVar7,uVar3,param_3);
        return uVar2;
      }
      goto LAB_1001b974f;
    }
  }
  uVar2 = FUN_1001b9846(lVar1,plVar4,param_3);
  return uVar2;
}

