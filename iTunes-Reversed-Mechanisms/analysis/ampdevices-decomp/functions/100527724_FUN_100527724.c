// name: FUN_100527724
// address: 100527724

void FUN_100527724(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1008685f8;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10052775b;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10052775b:
  operator_delete(param_1);
  return;
}

