// name: FUN_10017d489
// address: 10017d489

undefined8 FUN_10017d489(int *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006859d6(uVar2);
    }
  }
  else {
    *param_2 = 0;
    if ((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) {
      if ((*param_1 == 0x41464350) || (*param_1 == 0x504f5358)) {
                    /* WARNING: Could not recover jumptable at 0x00010017d4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(long *)(param_1 + 4) + 0x10))();
        return uVar2;
      }
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100685960(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

