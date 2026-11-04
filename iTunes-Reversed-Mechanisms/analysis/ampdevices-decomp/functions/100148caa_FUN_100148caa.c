// name: FUN_100148caa
// address: 100148caa

void FUN_100148caa(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10083aaa0;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100148ce1;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100148ce1:
  operator_delete(param_1);
  return;
}

