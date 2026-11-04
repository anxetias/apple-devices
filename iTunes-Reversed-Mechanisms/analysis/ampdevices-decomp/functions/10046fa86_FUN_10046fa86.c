// name: FUN_10046fa86
// address: 10046fa86

undefined8
FUN_10046fa86(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = (int *)_CMBaseObjectGetDerivedStorage();
  if (((piVar2 != (int *)0x0) && (*piVar2 == 0x62797473)) &&
     (plVar1 = *(long **)(piVar2 + 2), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010046fad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4,param_5);
    return uVar3;
  }
  return 0xffffffce;
}

