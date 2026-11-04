// name: FUN_10017d5ba
// address: 10017d5ba

undefined8 FUN_10017d5ba(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) {
    if ((*param_1 == 0x41464350) || (*param_1 == 0x504f5358)) {
      if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010017d5f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(long *)(param_1 + 4) + 0xb8))();
        return uVar2;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100685ab8(uVar2);
      }
      goto LAB_10017d60d;
    }
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100685b2e(uVar2);
  }
LAB_10017d60d:
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

