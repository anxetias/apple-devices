// name: FUN_1001ceabd
// address: 1001ceabd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ceabd(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006afb88(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = param_2;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[4] = param_6;
    dVar3 = (double)FUN_1001ebd46();
    param_1[5] = dVar3 + _DAT_100711ef0;
  }
  return;
}

