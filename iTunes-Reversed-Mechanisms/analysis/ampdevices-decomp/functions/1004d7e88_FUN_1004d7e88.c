// name: FUN_1004d7e88
// address: 1004d7e88

void FUN_1004d7e88(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10085eb58;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1004d7ebf;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1004d7ebf:
  operator_delete(param_1);
  return;
}

