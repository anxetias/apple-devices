// name: FUN_100176e67
// address: 100176e67

int FUN_100176e67(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068304a(uVar3);
    }
LAB_100176f2a:
    FUN_1001782e9(0,0);
    return -1;
  }
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100682fd4(uVar3);
    }
    goto LAB_100176f2a;
  }
  if (param_3 < 0x70636664) {
    if (param_3 == 0x696d6167) {
LAB_100176fd0:
      lVar4 = *(long *)(param_1 + 0xc);
      if (lVar4 != 0) goto LAB_100177032;
      plVar5 = (long *)(param_1 + 0xc);
      iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x706c6f63,plVar5);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return -1;
        }
        FUN_100682efc(iVar2,uVar3);
        return -1;
      }
    }
    else {
      if (param_3 != 0x6e616d65) {
        return -1;
      }
      lVar4 = *(long *)(param_1 + 10);
      if (lVar4 != 0) goto LAB_100177032;
      plVar5 = (long *)(param_1 + 10);
      iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x6e616d65,plVar5);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return -1;
        }
        FUN_100682f68(iVar2,uVar3);
        return -1;
      }
    }
  }
  else {
    if (param_3 == 0x70636664) goto LAB_100176fd0;
    if (param_3 != 0x75726c20) {
      return -1;
    }
    lVar4 = *(long *)(param_1 + 0xe);
    if (lVar4 != 0) goto LAB_100177032;
    plVar5 = (long *)(param_1 + 0xe);
    iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x75726c20,plVar5);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return -1;
      }
      FUN_100682e90(iVar2,uVar3);
      return -1;
    }
  }
  lVar4 = *plVar5;
LAB_100177032:
  if (*(uint *)(lVar4 + 4) < param_2) {
    return -1;
  }
  iVar2 = *(int *)(lVar4 + 0xc + (ulong)(param_2 - 1) * 8);
  if (iVar2 == 1) {
    return 0;
  }
  return iVar2;
}

