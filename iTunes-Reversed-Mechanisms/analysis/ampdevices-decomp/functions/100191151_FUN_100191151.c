// name: FUN_100191151
// address: 100191151

undefined8
FUN_100191151(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006940ec(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    param_3[0x12] = 0;
    uVar2 = FUN_10019184c(param_1,param_2,0,0,param_4,param_5,0,3);
  }
  return uVar2;
}

