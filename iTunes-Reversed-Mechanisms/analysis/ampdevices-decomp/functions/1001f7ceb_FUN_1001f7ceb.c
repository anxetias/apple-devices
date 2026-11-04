// name: FUN_1001f7ceb
// address: 1001f7ceb

undefined8 FUN_1001f7ceb(long param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1001f77de();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9719(uVar3);
    }
  }
  else {
    if (*(long *)(param_1 + 0x428) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c96a3(uVar3);
      }
      FUN_1001782e9(0,0);
      return 0xffffffca;
    }
    if (param_2 != (char *)0x0) {
      iVar2 = FUN_1001f0a31(*(long *)(param_1 + 0x428),param_2 + (*param_2 == '/'),2);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_1001f7970(iVar2);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c962d(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

