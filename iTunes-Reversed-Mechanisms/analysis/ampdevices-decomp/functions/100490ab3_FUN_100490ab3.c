// name: FUN_100490ab3
// address: 100490ab3

undefined8 FUN_100490ab3(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1[3] != 0) && (*param_1 != 0)) {
    lVar1 = FUN_100309333();
    if (lVar1 != 0) {
      uVar2 = FUN_10048b5ec(lVar1,param_1[3]);
      return uVar2;
    }
  }
  return 0;
}

