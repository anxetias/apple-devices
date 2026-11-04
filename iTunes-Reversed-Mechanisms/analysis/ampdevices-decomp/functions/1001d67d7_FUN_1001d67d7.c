// name: FUN_1001d67d7
// address: 1001d67d7

void FUN_1001d67d7(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1001e8dbb(param_1 + 0x18);
  if (cVar1 == '\0') {
    FUN_1001e9afc(param_1 + 0x38);
    if (*(int *)(param_1 + 0x14) != 1) goto LAB_1001d6857;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b4738(uVar2);
    }
  }
  else {
    FUN_1001e944c(param_1 + 0x18);
    if (*(int *)(param_1 + 0x14) != 1) goto LAB_1001d6857;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b46c2(uVar2);
    }
  }
  FUN_1001782e9(0,0);
LAB_1001d6857:
  FUN_1001d6790(param_1);
  return;
}

