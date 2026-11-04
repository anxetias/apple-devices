// name: FUN_1001e37e4
// address: 1001e37e4

void FUN_1001e37e4(long param_1,uint param_2,long param_3,uint param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bcc3a(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      if (param_2 < param_4) {
        param_4 = param_2;
      }
      FUN_1001c631b(param_1,param_3,(ulong)param_4 * 2);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bcbc4(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

