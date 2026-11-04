// name: FUN_10016a247
// address: 10016a247

undefined8
FUN_10016a247(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100165eef(param_1,param_2,0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100172686(param_1,lVar1,param_3,0,param_4);
    FUN_10017060f(lVar1);
  }
  return uVar2;
}

