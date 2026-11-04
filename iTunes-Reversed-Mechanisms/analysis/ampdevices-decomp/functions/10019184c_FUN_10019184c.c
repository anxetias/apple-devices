// name: FUN_10019184c
// address: 10019184c

int FUN_10019184c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined4 param_7,int param_8)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_100694508(uVar6);
    }
LAB_100191970:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_3 == 0 && param_8 != 3) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_10069433a(uVar6);
    }
    goto LAB_100191970;
  }
  if (*(long *)(param_1 + 0x10) != 0) goto LAB_10019189a;
  iVar3 = FUN_1001ecfab(7,"File I/O Thread");
  if (iVar3 == -0x80) {
    return -0x80;
  }
  if (iVar3 != 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 == '\0') {
      return iVar3;
    }
    FUN_10069449c(iVar3,uVar6);
    return iVar3;
  }
  if ((*(byte *)(param_1 + 5) & 4) == 0) goto LAB_10019189a;
  puVar5 = (undefined8 *)FUN_1001c629e(0x60,&DAT_100711c6e);
  if (puVar5 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_1006943b0(uVar6);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') goto LAB_10019189a;
  }
  else {
    puVar5[6] = 0;
    *puVar5 = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
  }
  puVar5[8] = FUN_100191b46;
  iVar3 = FUN_1001ecf95(*(undefined8 *)(param_1 + 0x10),puVar5);
  if ((puVar5 == (undefined8 *)0x0) || (iVar3 == 0)) goto LAB_10019189a;
  plVar1 = (long *)puVar5[6];
  if (plVar1 == puVar5 + 2) {
    lVar4 = 0x20;
LAB_100191b26:
    (**(code **)(*plVar1 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_100191b26;
  }
  operator_delete(puVar5);
LAB_10019189a:
  lVar4 = FUN_1001c6429(0xb0);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_100694426(uVar6);
    }
    FUN_1001782e9(0,0);
    FUN_100191d14(0xffffff94,param_3,param_4,0,param_5,param_6);
    return -0x6c;
  }
  *(long *)(lVar4 + 0x60) = param_1;
  *(int *)(lVar4 + 0x68) = param_8;
  *(undefined8 *)(lVar4 + 0x70) = param_2;
  *(long *)(lVar4 + 0x78) = param_3;
  *(undefined8 *)(lVar4 + 0x80) = param_4;
  *(undefined8 *)(lVar4 + 0x90) = param_5;
  *(undefined8 *)(lVar4 + 0x98) = param_6;
  *(undefined4 *)(lVar4 + 0xa0) = param_7;
  *(code **)(lVar4 + 0x40) = FUN_100191b9e;
  *(long *)(lVar4 + 0x48) = lVar4;
  iVar3 = FUN_1001ecf95(*(undefined8 *)(param_1 + 0x10),lVar4);
  if (iVar3 != 0) {
    FUN_100191d14(iVar3,param_3,param_4,0,param_5,param_6);
    FUN_1001c64c1(lVar4);
    return iVar3;
  }
  return 0;
}

