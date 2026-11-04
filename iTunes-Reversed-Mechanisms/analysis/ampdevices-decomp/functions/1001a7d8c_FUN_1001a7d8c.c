// name: FUN_1001a7d8c
// address: 1001a7d8c

void FUN_1001a7d8c(long *param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*param_1 == 0) || (uVar1 = _CFArrayGetCount(), uVar1 <= param_2)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069eb65(uVar3);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_1001a7cc4(param_1);
  _CFArrayRemoveValueAtIndex(*param_1,param_2);
  return;
}

