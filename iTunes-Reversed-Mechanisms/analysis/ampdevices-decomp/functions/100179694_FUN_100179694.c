// name: FUN_100179694
// address: 100179694

long * FUN_100179694(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1001796c9;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1001796c9:
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == 0) {
    param_1[4] = 0;
  }
  else if (lVar2 == param_2) {
    param_1[4] = (long)param_1;
    (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(*(long **)(param_2 + 0x20),param_1);
  }
  else {
    param_1[4] = lVar2;
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return param_1;
}

