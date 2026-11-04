// name: FUN_10017983e
// address: 10017983e

undefined8 FUN_10017983e(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x48617368)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100683ab6(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      (**(code **)(param_1 + 6))();
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100683a40(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

