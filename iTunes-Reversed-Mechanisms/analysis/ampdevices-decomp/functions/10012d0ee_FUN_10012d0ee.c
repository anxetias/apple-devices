// name: FUN_10012d0ee
// address: 10012d0ee

void FUN_10012d0ee(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100838da8;
  FUN_100205d70(param_1 + 8);
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10012d12f;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10012d12f:
  operator_delete(param_1);
  return;
}

