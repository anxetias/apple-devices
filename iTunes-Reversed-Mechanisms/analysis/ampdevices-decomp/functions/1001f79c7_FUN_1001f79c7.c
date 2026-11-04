// name: FUN_1001f79c7
// address: 1001f79c7

long FUN_1001f79c7(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_28 [8];
  long local_20;
  
  cVar1 = FUN_1001f77de();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c92f3(uVar3);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x438) != 0) {
    return *(long *)(param_1 + 0x438);
  }
  if (*(long *)(param_1 + 0x428) == 0) {
    return 0;
  }
  iVar2 = FUN_1001f02d6(*(long *)(param_1 + 0x428),local_28);
  if (iVar2 == 0) {
    if (local_20 == 0) goto LAB_1001f7a29;
    lVar4 = FUN_1001c63e1(local_20 + 1);
    if (lVar4 != 0) {
      iVar2 = FUN_1001f1460(*(undefined8 *)(param_1 + 0x428),lVar4,local_20 + 1);
      if (0 < iVar2) {
        uVar3 = FUN_100172473(DAT_1008c4d90,lVar4,0x8000100);
        *(undefined8 *)(param_1 + 0x438) = uVar3;
      }
      FUN_1001c64c1(lVar4);
      goto LAB_1001f7a29;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c927d(uVar3);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9207(uVar3);
    }
  }
  FUN_1001782e9(0,0);
LAB_1001f7a29:
  return *(long *)(param_1 + 0x438);
}

