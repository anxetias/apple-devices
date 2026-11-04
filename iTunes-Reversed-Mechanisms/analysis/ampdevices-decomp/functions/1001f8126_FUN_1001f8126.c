// name: FUN_1001f8126
// address: 1001f8126

undefined8 FUN_1001f8126(long param_1,long param_2,ulong param_3,ulong *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  cVar1 = FUN_1001f77de(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9bb5(uVar3);
    }
  }
  else {
    if (*(long *)(param_1 + 0x428) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c9b3f(uVar3);
      }
      FUN_1001782e9(0,0);
      return 0xffffffca;
    }
    if (param_2 != 0) {
      uVar2 = FUN_1001f1120(*(long *)(param_1 + 0x428),param_2,param_3 & 0xffffffff);
      uVar4 = (ulong)uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c9a53(uVar3);
        }
        FUN_1001782e9(0,0);
        uVar3 = FUN_1001f7970(uVar4);
        return uVar3;
      }
      if (param_4 != (ulong *)0x0) {
        *param_4 = uVar4;
      }
      if (uVar4 < param_3) {
        return 0xffffffd9;
      }
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9ac9(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

