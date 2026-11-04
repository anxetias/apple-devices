// name: FUN_1001f9964
// address: 1001f9964

undefined8 FUN_1001f9964(long param_1,long param_2,ulong param_3,ulong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  cVar1 = FUN_1001f77de(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006cb139(uVar3);
    }
  }
  else {
    if (*(long *)(param_1 + 0x430) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006cb0c3(uVar3);
      }
      FUN_1001782e9(0,0);
      return 0xffffffca;
    }
    if (param_2 != 0) {
      iVar2 = FUN_1001f5d01(*(long *)(param_1 + 0x430),param_2,param_3 & 0xffffffff);
      if (iVar2 < 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006cafd7(uVar3);
        }
        FUN_1001782e9(0,0);
        uVar3 = FUN_1001f7970(iVar2);
        return uVar3;
      }
      if (param_4 == (ulong *)0x0) {
        return 0;
      }
      *param_4 = param_3;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006cb04d(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

