// name: FUN_100187e4f
// address: 100187e4f

undefined8 FUN_100187e4f(int *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068d6b1(uVar2);
    }
  }
  else if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068d63b(uVar2);
    }
  }
  else {
    if (*(code **)(param_1 + 0x11a) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100187e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x11a))();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068d5c5(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

