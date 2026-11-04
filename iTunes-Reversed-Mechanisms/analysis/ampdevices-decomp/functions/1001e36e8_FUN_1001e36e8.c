// name: FUN_1001e36e8
// address: 1001e36e8

undefined1 FUN_1001e36e8(byte *param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_1 == (byte *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bca62(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bcad8(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = FUN_1001df897(param_2);
  if (0xff < uVar4) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bcb4e(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (*param_1 < uVar4) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001df8db(param_1 + (*param_1 - uVar4) + 1,uVar4,param_2,uVar4,param_3);
  }
  return uVar2;
}

