// name: FUN_10046fa3a
// address: 10046fa3a

undefined8 FUN_10046fa3a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)_CMBaseObjectGetDerivedStorage();
  if (((piVar2 != (int *)0x0) && (*piVar2 == 0x62797473)) &&
     (plVar1 = *(long **)(piVar2 + 2), plVar1 != (long *)0x0)) {
    *param_3 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010046fa7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3);
    return uVar3;
  }
  return 0xffffffce;
}

