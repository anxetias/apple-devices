// name: FUN_100238b48
// address: 100238b48

void FUN_100238b48(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    *(undefined4 *)(lVar2 + -0x30) = 0;
    FUN_1002188e4(lVar2 + -0x28);
    *(undefined8 *)(lVar2 + -0x18) = 0;
    *(undefined8 *)(lVar2 + -0x10) = 0;
    FUN_100205d70(lVar2 + -0x28);
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

