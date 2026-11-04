// name: FUN_10013a4dc
// address: 10013a4dc

void FUN_10013a4dc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100839df8;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10013a513;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10013a513:
  operator_delete(param_1);
  return;
}

