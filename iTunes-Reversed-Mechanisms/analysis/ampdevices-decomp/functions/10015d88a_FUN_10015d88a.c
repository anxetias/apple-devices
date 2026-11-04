// name: FUN_10015d88a
// address: 10015d88a

undefined8 FUN_10015d88a(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066d6e9(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    *param_3 = param_1;
    param_3[1] = 0;
    lVar2 = FUN_1001c64d2(param_2);
    *(long *)(param_3 + 2) = lVar2;
    uVar3 = 0xffffff94;
    if (lVar2 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

