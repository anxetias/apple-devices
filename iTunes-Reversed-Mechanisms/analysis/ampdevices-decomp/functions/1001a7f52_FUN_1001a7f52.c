// name: FUN_1001a7f52
// address: 1001a7f52

undefined8 FUN_1001a7f52(undefined8 param_1,long *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*param_2 == 0) || (uVar2 = _CFArrayGetCount(), uVar2 <= param_3)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069ebdb(uVar3);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') {
      FUN_1001aa318(param_1);
      return param_1;
    }
  }
  uVar3 = _CFArrayGetValueAtIndex(*param_2,param_3);
  FUN_1001a8bb0(param_1,uVar3);
  return param_1;
}

