// name: FUN_1005ce9d6
// address: 1005ce9d6

void FUN_1005ce9d6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  for (puVar2 = (undefined8 *)*param_1; puVar2 != (undefined8 *)param_1[1]; puVar2 = puVar2 + 1) {
    FUN_1001659a7(uVar1,*puVar2);
  }
  FUN_100171502(param_2,param_3,uVar1);
  FUN_10017060f(uVar1);
  return;
}

