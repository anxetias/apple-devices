// name: FUN_100416c68
// address: 100416c68

void FUN_100416c68(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100857d90;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100416c9f;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100416c9f:
  operator_delete(param_1);
  return;
}

