// name: FUN_1003da7e0
// address: 1003da7e0

void FUN_1003da7e0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    if (plVar1 == param_2) {
      *(long *)(param_1 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001003da82a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
      return;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return;
}

