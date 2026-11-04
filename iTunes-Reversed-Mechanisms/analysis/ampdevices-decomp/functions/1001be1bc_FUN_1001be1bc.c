// name: FUN_1001be1bc
// address: 1001be1bc

void FUN_1001be1bc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083cf98;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1001be1f3;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1001be1f3:
  operator_delete(param_1);
  return;
}

