// name: FUN_100187fa3
// address: 100187fa3

undefined8
FUN_100187fa3(int *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined4 param_5,
             undefined8 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068d8ff(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(param_1 + 0x122) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100187ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(param_1 + 0x122))(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar2;
      }
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = 0;
      }
      uVar2 = FUN_10017d068(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_10017d186(param_1,param_3,param_4,param_5,param_6);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068d889(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

