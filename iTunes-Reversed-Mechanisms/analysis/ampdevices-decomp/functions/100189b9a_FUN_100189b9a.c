// name: FUN_100189b9a
// address: 100189b9a

void FUN_100189b9a(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068f409(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(param_1 + 0x428) != 0) {
      FUN_1001eed65(param_1 + 0x428);
    }
    if (*(char *)(param_1 + 0x420) == '\x01') {
      iVar2 = FUN_100182d59(param_1,*(undefined4 *)(param_1 + 0x424));
    }
    else {
      iVar2 = FUN_1001892ae(param_1,0);
    }
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10068f39d(iVar2,uVar3);
      }
    }
    FUN_1001c64c1(param_1);
  }
  return;
}

