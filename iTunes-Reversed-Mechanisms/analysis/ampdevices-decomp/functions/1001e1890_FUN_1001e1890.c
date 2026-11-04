// name: FUN_1001e1890
// address: 1001e1890

void FUN_1001e1890(ushort *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (0xff < *param_1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb983(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001e3a8f(param_1,param_2,0xff);
  return;
}

