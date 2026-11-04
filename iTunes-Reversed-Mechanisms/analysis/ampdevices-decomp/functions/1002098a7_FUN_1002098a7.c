// name: FUN_1002098a7
// address: 1002098a7

undefined4 FUN_1002098a7(undefined8 param_1,long param_2)

{
  uint in_EAX;
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  uVar1 = FUN_1001ce537();
  lVar2 = FUN_1001722b7(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_100164d80(lVar2,(long)&uStack_28 + 4);
    uVar1 = FUN_1001ce537();
    _CFPreferencesAppValueIsForced(param_1,uVar1);
    FUN_10017060f(lVar2);
  }
  if (param_2 != 0) {
    *(bool *)param_2 = lVar2 != 0;
  }
  return uStack_28._4_4_;
}

