// name: FUN_10017cdfb
// address: 10017cdfb

undefined4 FUN_10017cdfb(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100684dce(uVar3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x110) != (code *)0x0) {
      uVar2 = (**(code **)(param_1 + 0x110))(param_1);
      *param_1 = 0;
      FUN_1001c64c1(param_1);
      return uVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100684d58(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

