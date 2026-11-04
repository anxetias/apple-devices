// name: FUN_100283f9c
// address: 100283f9c

long FUN_100283f9c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = 0;
    do {
      FUN_100284008(param_4 + lVar2,param_2 + lVar2);
      lVar1 = param_2 + lVar2;
      lVar2 = lVar2 + 0x40;
    } while (lVar1 + 0x40 != param_3);
    param_4 = param_4 + lVar2;
  }
  return param_4;
}

