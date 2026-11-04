// name: FUN_10017d2da
// address: 10017d2da

undefined8 FUN_10017d2da(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100685712(uVar2);
    }
  }
  else {
    if (*(code **)(param_1 + 0x12e) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010017d2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x12e))();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068569c(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

