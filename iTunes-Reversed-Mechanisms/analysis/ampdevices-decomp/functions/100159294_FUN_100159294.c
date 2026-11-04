// name: FUN_100159294
// address: 100159294

undefined8 FUN_100159294(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = FUN_10015907a(param_2,param_3);
  if (lVar2 == 0) {
    FUN_1001b7a44(param_1);
    cVar1 = (**(code **)(*param_2 + 0x38))(param_2,param_3,param_1,1);
    if (cVar1 == '\0') {
      FUN_1001b7a50(param_1);
      FUN_1001b7a44(param_1);
    }
  }
  else {
    FUN_100164a65(param_1,lVar2);
    FUN_10017060f(lVar2);
  }
  return param_1;
}

