// name: FUN_100160f1a
// address: 100160f1a

void FUN_100160f1a(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066f473(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(param_1,0x48);
    *param_1 = 0x62776266;
    *(undefined8 *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 6) = param_3;
    *(undefined8 *)(param_1 + 8) = param_4;
  }
  return;
}

