// name: FUN_100442d8a
// address: 100442d8a

bool FUN_100442d8a(undefined8 param_1,short *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = FUN_1001705e9();
  lVar2 = FUN_100173434();
  if (lVar1 == lVar2) {
    FUN_1001e115f(param_1,param_2);
    bVar3 = *param_2 != 0;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

