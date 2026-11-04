// name: FUN_1001b31f0
// address: 1001b31f0

void FUN_1001b31f0(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((double)param_1[7] <= 0.0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0dbf(uVar2);
    }
    FUN_1001782e9(0,0);
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_1001953eb(DAT_100700458 / (double)param_1[7]);
  }
  return;
}

