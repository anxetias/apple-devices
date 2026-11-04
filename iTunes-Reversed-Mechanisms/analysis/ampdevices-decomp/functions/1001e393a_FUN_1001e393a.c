// name: FUN_1001e393a
// address: 1001e393a

void FUN_1001e393a(ushort *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (ushort *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bce12(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else if (*param_1 != 0) {
    do {
      iVar2 = FUN_1001e39bb(param_1[1]);
      if (iVar2 != 8) {
        return;
      }
      FUN_1001c631b(param_1 + 2,param_1 + 1,(uint)*param_1 * 2 + -2);
      *param_1 = *param_1 - 1;
    } while (*param_1 != 0);
  }
  return;
}

