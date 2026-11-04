// name: FUN_1001703de
// address: 1001703de

undefined8 FUN_1001703de(undefined8 param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100679446(uVar4);
    }
    FUN_1001782e9(0,1);
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    *param_3 = 0xffffffce;
  }
  else {
    lVar3 = FUN_10016ff43();
    if (lVar3 != 0) {
      uVar4 = FUN_100175248(param_1,lVar3,0,0,0);
      if (param_3 != (undefined4 *)0x0) {
        uVar2 = FUN_10016925a(0);
        *param_3 = uVar2;
      }
      FUN_10017060f(0);
      FUN_10017060f(lVar3);
      return uVar4;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffffd5;
    }
  }
  return 0;
}

