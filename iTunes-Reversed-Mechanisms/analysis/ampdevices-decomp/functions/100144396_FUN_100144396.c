// name: FUN_100144396
// address: 100144396

void FUN_100144396(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10014a662(uVar2);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_1001a7ad8(param_1 + 0x40,param_2);
  return;
}

