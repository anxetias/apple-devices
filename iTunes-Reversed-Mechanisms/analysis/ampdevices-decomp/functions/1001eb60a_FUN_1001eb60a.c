// name: FUN_1001eb60a
// address: 1001eb60a

undefined8 FUN_1001eb60a(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1001ebea9(&cf_ProductVersion);
  if (lVar1 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    uVar2 = _CFAutorelease(lVar1);
    FUN_1001b7eb0(param_1,uVar2);
  }
  return param_1;
}

