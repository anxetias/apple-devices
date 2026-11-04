// name: FUN_100189624
// address: 100189624

undefined8 FUN_100189624(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  char cVar3;
  undefined8 uVar4;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((iVar1 = *param_1, iVar1 != 0x41464350 && (iVar1 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_10068ef05(uVar4);
    }
  }
  else if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
          ((iVar2 = *param_2, iVar2 != 0x41464350 && (iVar2 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_10068ee8f(uVar4);
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0xa8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (iVar1 != iVar2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000100189683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,1);
      return uVar4;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_10068ee19(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

