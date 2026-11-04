// name: FUN_10019c259
// address: 10019c259

int FUN_10019c259(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100699802(uVar4);
    }
  }
  else {
    if (param_2 != 0) {
      iVar2 = FUN_1001e9de0(param_1 + 8);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_100699720(iVar2,uVar4);
        return iVar2;
      }
      plVar3 = (long *)(param_1 + 0x60);
      do {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)(param_1 + 0x50);
          goto LAB_10019c347;
        }
      } while (plVar3[3] != param_2);
      *(undefined1 *)(plVar3 + 0x32) = 1;
      goto LAB_10019c382;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069978c(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
  while (plVar3[3] != param_2) {
LAB_10019c347:
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006996aa(uVar4);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
      goto LAB_10019c3af;
    }
  }
  FUN_10019f28b((long *)(param_1 + 0x50),param_1 + 0x58,plVar3);
  FUN_10019f3d1((long *)(param_1 + 0x60),param_1 + 0x68,plVar3);
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  FUN_10019c3d3(plVar3,0xffffff80);
LAB_10019c382:
  iVar2 = 0;
LAB_10019c3af:
  FUN_1001e9eb9(param_1 + 8);
  return iVar2;
}

