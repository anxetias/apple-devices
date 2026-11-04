// name: FUN_1001d6276
// address: 1001d6276

int FUN_1001d6276(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_1001c62d9(param_1,0x118);
  *(code **)(param_1 + 0x50) = FUN_1001d8ed6;
  iVar2 = FUN_1001e8dd6(param_1 + 0x18,0,0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b411e(iVar2,uVar3);
    }
  }
  return iVar2;
}

