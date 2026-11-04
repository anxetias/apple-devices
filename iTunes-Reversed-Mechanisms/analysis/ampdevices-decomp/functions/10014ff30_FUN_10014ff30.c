// name: FUN_10014ff30
// address: 10014ff30

void FUN_10014ff30(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083b630;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 4) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10014ff67;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10014ff67:
  operator_delete(param_1);
  return;
}

