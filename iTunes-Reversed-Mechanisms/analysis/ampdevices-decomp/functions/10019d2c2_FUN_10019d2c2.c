// name: FUN_10019d2c2
// address: 10019d2c2

void FUN_10019d2c2(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    FUN_1001e8f15(param_1 + 2);
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10069a438(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

