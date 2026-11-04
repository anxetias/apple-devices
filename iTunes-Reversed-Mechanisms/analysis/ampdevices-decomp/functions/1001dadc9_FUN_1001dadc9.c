// name: FUN_1001dadc9
// address: 1001dadc9

undefined8
FUN_1001dadc9(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006b7957(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    *(undefined4 *)(param_5 + 8) = 0x72656164;
    *(undefined8 *)(param_5 + 0x20) = param_3;
    *(undefined8 *)(param_5 + 0x28) = param_2;
    *(undefined8 *)(param_5 + 0x30) = 0;
    *(undefined4 *)(param_5 + 0x38) = 1;
    *(undefined4 *)(param_5 + 0xc) = param_4;
    FUN_1001eac02(param_5,lVar1 + 0x58);
    if (*(long *)(*(long *)(lVar1 + 0x48) + 0x10) == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b77f5(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    lVar4 = *(long *)(lVar1 + 0x1d8);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b786b(uVar3);
      }
      FUN_1001782e9(0,0);
      lVar4 = *(long *)(lVar1 + 0x1d8);
    }
    cVar2 = FUN_100172d03(lVar4);
    if (cVar2 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b78e1(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    FUN_100172d47(*(undefined8 *)(lVar1 + 0x1d8));
    FUN_100172863(*(undefined8 *)(*(long *)(lVar1 + 0x48) + 0x10));
    uVar3 = 0;
  }
  return uVar3;
}

