// name: FUN_1001f805a
// address: 1001f805a

undefined8 FUN_1001f805a(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1001f77de();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c99dd(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else if (*(long *)(param_1 + 0x428) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9967(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffca;
  }
  else {
    iVar2 = FUN_1001f10d8();
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c98f1(uVar3);
      }
      FUN_1001782e9(0,0);
      uVar3 = FUN_1001f7970(iVar2);
    }
  }
  return uVar3;
}

