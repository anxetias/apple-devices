// name: FUN_1001548f8
// address: 1001548f8

void FUN_1001548f8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)plVar1[4];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (plVar2 == (long *)0x0) goto LAB_100154930;
  }
  (**(code **)(*plVar2 + lVar3))();
LAB_100154930:
  operator_delete(plVar1);
  return;
}

