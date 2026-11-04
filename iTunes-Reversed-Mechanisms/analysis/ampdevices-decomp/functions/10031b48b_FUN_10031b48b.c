// name: FUN_10031b48b
// address: 10031b48b

undefined8 FUN_10031b48b(int *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1[1] != 0) && (*param_1 != 0)) {
    lVar1 = FUN_100314a6c();
    if (lVar1 != 0) {
      uVar2 = FUN_1002f950a(lVar1,param_1[1]);
      return uVar2;
    }
  }
  return 0;
}

