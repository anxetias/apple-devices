// name: FUN_100156b18
// address: 100156b18

void FUN_100156b18(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083bf70;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 4) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100156b4f;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100156b4f:
  operator_delete(param_1);
  return;
}

