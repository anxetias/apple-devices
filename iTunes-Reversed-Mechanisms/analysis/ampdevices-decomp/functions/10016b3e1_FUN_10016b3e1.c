// name: FUN_10016b3e1
// address: 10016b3e1

undefined8 FUN_10016b3e1(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 != 0) {
    lVar1 = _CFDataGetLength();
    if (lVar1 < 2) {
      uVar2 = 0;
    }
    else {
      local_20 = _CFDataGetBytePtr(param_1);
      local_18 = local_20;
      uVar2 = FUN_10016b428(&local_20,2);
    }
    return uVar2;
  }
  return 0;
}

