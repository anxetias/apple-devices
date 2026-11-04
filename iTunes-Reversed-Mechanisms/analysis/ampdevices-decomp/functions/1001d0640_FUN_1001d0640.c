// name: FUN_1001d0640
// address: 1001d0640

undefined8 FUN_1001d0640(undefined8 param_1,ulong param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0b8c(uVar2);
    }
  }
  else {
    if ((param_2 & 0xff1) != 0) {
      uVar2 = FUN_1001d027d(param_1,0xffffffff);
      return uVar2;
    }
    uVar2 = FUN_1001cc310(param_1,param_2,param_2 & 0xffffffff,param_3,param_4);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0b16(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

