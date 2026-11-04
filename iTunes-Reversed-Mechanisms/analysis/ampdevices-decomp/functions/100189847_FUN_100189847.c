// name: FUN_100189847
// address: 100189847

undefined8 FUN_100189847(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) {
    if ((*param_1 == 0x41464350) || (*param_1 == 0x504f5358)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 4) + 0xc0);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010018987f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)();
        return uVar2;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_10068f153(uVar2);
      }
      goto LAB_10018989a;
    }
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10068f1c9(uVar2);
  }
LAB_10018989a:
  FUN_1001782e9(0,0);
  return 0;
}

