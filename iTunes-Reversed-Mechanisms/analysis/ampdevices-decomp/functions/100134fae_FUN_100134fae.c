// name: FUN_100134fae
// address: 100134fae

void FUN_100134fae(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1008395f0;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 4) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100134fe5;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100134fe5:
  operator_delete(param_1);
  return;
}

