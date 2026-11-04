// name: FUN_10018a1da
// address: 10018a1da

undefined8 FUN_10018a1da(int *param_1,int *param_2,long param_3)

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
      FUN_10068fc57(uVar4);
    }
  }
  else if (((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
          ((iVar2 = *param_2, iVar2 != 0x41464350 && (iVar2 != 0x504f5358)))) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_10068fbe1(uVar4);
    }
  }
  else if (iVar1 == iVar2) {
    if (param_3 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0xf0);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          FUN_10068faf5(uVar4);
        }
        FUN_1001782e9(0,0);
        return 0xfffffffc;
      }
                    /* WARNING: Could not recover jumptable at 0x00010018a248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)();
      return uVar4;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_10068fb6b(uVar4);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_10068fa7f(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

