// name: FUN_1004406ae
// address: 1004406ae

undefined8 FUN_1004406ae(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_10043e902();
  if (1 < param_2) {
    FUN_10043f63a(param_1);
    FUN_10043f0e2(param_1);
  }
  iVar1 = FUN_1004437d8(param_1,param_2);
  if (iVar1 == 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffff84;
    if (iVar1 != 4) {
      uVar2 = FUN_1004439a4(param_1,param_2,0);
      return uVar2;
    }
  }
  return uVar2;
}

