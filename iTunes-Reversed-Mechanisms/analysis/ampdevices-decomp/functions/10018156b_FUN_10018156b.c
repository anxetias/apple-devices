// name: FUN_10018156b
// address: 10018156b

undefined8
FUN_10018156b(int *param_1,short *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100689056(uVar2);
    }
  }
  else if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100688fe0(uVar2);
    }
  }
  else {
    if (param_5 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0x68);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_100688ef4(uVar2);
        }
        FUN_1001782e9(0,0);
        return 0xfffffffc;
      }
                    /* WARNING: Could not recover jumptable at 0x0001001815b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100688f6a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

