// name: FUN_1003531c2
// address: 1003531c2

long FUN_1003531c2(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined2 local_1a;
  
  FUN_1001c62d9(&local_1a,2);
  local_1a = 5;
  lVar1 = FUN_100352c96(param_1,&local_1a,0);
  lVar2 = lVar1 + 0x20;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  FUN_100352999(lVar1);
  return lVar2;
}

