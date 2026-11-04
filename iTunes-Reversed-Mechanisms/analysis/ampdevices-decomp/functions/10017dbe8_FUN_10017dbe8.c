// name: FUN_10017dbe8
// address: 10017dbe8

undefined8 FUN_10017dbe8(int *param_1,undefined8 param_2,long param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) {
    if ((*param_1 == 0x41464350) || (*param_1 == 0x504f5358)) {
      if (param_3 == 0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_100685df2(uVar2);
        }
      }
      else {
        if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010017dc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(*(long *)(param_1 + 4) + 0x18))();
          return uVar2;
        }
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_100685d7c(uVar2);
        }
      }
      goto LAB_10017dc3f;
    }
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100685e68(uVar2);
  }
LAB_10017dc3f:
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

