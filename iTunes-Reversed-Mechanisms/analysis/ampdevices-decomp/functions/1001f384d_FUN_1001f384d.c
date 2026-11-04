// name: FUN_1001f384d
// address: 1001f384d

undefined8 FUN_1001f384d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1001b83ae(param_3);
  if (lVar1 != 0) {
    uVar2 = FUN_1001f3550(param_1,param_2,lVar1);
    return uVar2;
  }
  return 0xffffff94;
}

