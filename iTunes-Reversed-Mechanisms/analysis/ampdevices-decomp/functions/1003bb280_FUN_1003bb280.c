// name: FUN_1003bb280
// address: 1003bb280

void FUN_1003bb280(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  for (lVar3 = *param_1; lVar3 != param_1[1]; lVar3 = lVar3 + 0x10) {
    uVar2 = FUN_1001b8d0c(lVar3);
    FUN_1001709a5(uVar1,uVar2);
    FUN_10017060f(uVar2);
  }
  FUN_100171502(param_2,param_3,uVar1);
  FUN_10017060f(uVar1);
  return;
}

