// name: FUN_100238bea
// address: 100238bea

void FUN_100238bea(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x30) {
    *(undefined4 *)(lVar1 + -0x30) = 0;
    FUN_1002188e4(lVar1 + -0x28);
    *(undefined8 *)(lVar1 + -0x18) = 0;
    *(undefined8 *)(lVar1 + -0x10) = 0;
    FUN_100205d70(lVar1 + -0x28);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}

