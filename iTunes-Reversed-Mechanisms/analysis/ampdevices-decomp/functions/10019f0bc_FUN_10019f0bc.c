// name: FUN_10019f0bc
// address: 10019f0bc

void FUN_10019f0bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069ba5e(uVar2);
    }
  }
  else {
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010019f0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x80))(param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x88));
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069b9e8(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

