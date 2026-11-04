// name: FUN_1001cf9ec
// address: 1001cf9ec

undefined8 FUN_1001cf9ec(undefined8 param_1,uint param_2,undefined4 param_3,ushort *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_4 == (ushort *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0558(uVar2);
    }
  }
  else {
    if ((param_2 & 0xf) != 0) {
      uVar2 = FUN_1001d027d(param_1,0xffffffff,param_2,param_3,param_4 + 1,(uint)*param_4 * 2);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b04e2(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

