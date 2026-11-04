// name: FUN_10013d322
// address: 10013d322

void FUN_10013d322(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083a470;
  FUN_100205d70(param_1 + 8);
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10013d363;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10013d363:
  operator_delete(param_1);
  return;
}

