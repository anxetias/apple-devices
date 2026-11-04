// name: FUN_100188255
// address: 100188255

undefined8 FUN_100188255(int *param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068dc3d(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (*(code **)(param_1 + 0x130) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010018827e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x130))(param_1,param_2);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068dbc7(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}

