// name: FUN_1005f4d4c
// address: 1005f4d4c

undefined8 FUN_1005f4d4c(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1005f4b1c(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100166b7f(lVar1,param_1);
    uVar2 = FUN_1001705fc(uVar2);
    FUN_10017060f(lVar1);
  }
  return uVar2;
}

