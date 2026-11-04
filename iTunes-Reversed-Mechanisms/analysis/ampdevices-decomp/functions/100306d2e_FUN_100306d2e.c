// name: FUN_100306d2e
// address: 100306d2e

undefined8 FUN_100306d2e(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1[1] != 0) && (*param_1 != 0)) {
    lVar1 = FUN_100309333();
    if (lVar1 != 0) {
      uVar2 = FUN_100300729(lVar1,param_1[1]);
      return uVar2;
    }
  }
  return 0;
}

