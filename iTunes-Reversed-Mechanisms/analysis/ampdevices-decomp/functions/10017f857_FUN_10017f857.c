// name: FUN_10017f857
// address: 10017f857

undefined8 FUN_10017f857(int *param_1,int *param_2,undefined1 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) ||
     ((*param_1 != 0x41464350 && (*param_1 != 0x504f5358)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068738a(uVar2);
    }
  }
  else {
    if (((param_2 != (int *)0x0) && (*(long *)(param_2 + 4) != 0)) &&
       ((*param_2 == 0x41464350 || (*param_2 == 0x504f5358)))) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0x80);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_10068729e(uVar2);
        }
        FUN_1001782e9(0,0);
        return 0xfffffffc;
      }
                    /* WARNING: Could not recover jumptable at 0x00010017f8b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100687314(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

