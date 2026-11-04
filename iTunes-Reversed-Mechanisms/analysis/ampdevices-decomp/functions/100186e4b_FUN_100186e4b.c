// name: FUN_100186e4b
// address: 100186e4b

undefined8 FUN_100186e4b(int *param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068ca0f(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0xd8);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_10068c923(uVar2);
        }
        FUN_1001782e9(0,0);
        return 0xfffffffc;
      }
                    /* WARNING: Could not recover jumptable at 0x000100186e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068c999(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

