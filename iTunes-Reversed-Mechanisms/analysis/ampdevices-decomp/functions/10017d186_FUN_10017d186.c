// name: FUN_10017d186
// address: 10017d186

undefined8 FUN_10017d186(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006854c4(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068544e(uVar2);
    }
  }
  else {
    if (*(code **)(param_1 + 0x11e) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010017d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x11e))();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006853d8(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

