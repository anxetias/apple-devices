// name: FUN_1001c3d42
// address: 1001c3d42

undefined8 FUN_1001c3d42(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_100174f92();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a6f64(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_3 != '\0') {
    uVar2 = FUN_100174fd6();
    return uVar2;
  }
  uVar2 = FUN_1001750b3(param_1,param_2);
  return uVar2;
}

