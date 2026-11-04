// name: FUN_1001f7852
// address: 1001f7852

undefined8 FUN_1001f7852(long param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_28 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9189(uVar3);
    }
  }
  else {
    *param_2 = 0;
    cVar1 = FUN_1001f77de();
    if (cVar1 != '\0') {
      if (*(long *)(param_1 + 0x428) == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c909d(uVar3);
        }
        FUN_1001782e9(0,0);
        return 0xffffffca;
      }
      iVar2 = FUN_1001f02d6(*(long *)(param_1 + 0x428),local_28);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c9027(uVar3);
        }
        FUN_1001782e9(0,0);
        uVar3 = FUN_1001f7970(iVar2);
        return uVar3;
      }
      *param_2 = local_28[0];
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9113(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

