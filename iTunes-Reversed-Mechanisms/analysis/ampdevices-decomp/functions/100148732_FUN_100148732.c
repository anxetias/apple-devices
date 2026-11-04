// name: FUN_100148732
// address: 100148732

void FUN_100148732(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083a900;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100148769;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100148769:
  operator_delete(param_1);
  return;
}

