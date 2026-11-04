// name: FUN_1001cd9a6
// address: 1001cd9a6

undefined4 FUN_1001cd9a6(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined4 local_20 [2];
  
  lVar2 = FUN_1001cda26(param_1,param_3);
  if (lVar2 != 0) {
    cVar1 = FUN_100164e20(lVar2,local_20);
    if (cVar1 != '\0') {
      param_2 = local_20[0];
    }
    FUN_10017060f(lVar2);
  }
  return param_2;
}

