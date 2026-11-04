// name: FUN_1003a4e82
// address: 1003a4e82

void FUN_1003a4e82(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100856840;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 4) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1003a4eb9;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1003a4eb9:
  operator_delete(param_1);
  return;
}

