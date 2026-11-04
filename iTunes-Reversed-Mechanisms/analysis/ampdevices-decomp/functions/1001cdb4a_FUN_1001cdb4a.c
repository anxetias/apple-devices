// name: FUN_1001cdb4a
// address: 1001cdb4a

undefined8 FUN_1001cdb4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 local_20;
  
  lVar2 = FUN_1001cda26(param_1,param_3);
  if (lVar2 != 0) {
    cVar1 = FUN_100164e20(lVar2,&local_20);
    if (cVar1 != '\0') {
      param_2 = local_20;
    }
    FUN_10017060f(lVar2);
  }
  return param_2;
}

