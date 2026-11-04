// name: FUN_100572a2a
// address: 100572a2a

undefined4
FUN_100572a2a(long *param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x98))(param_1,param_4);
  lVar3 = (**(code **)(*param_1 + 0x98))(param_1,param_5);
  uVar1 = 0;
  if (lVar2 != 0 || lVar3 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x88))
                      (param_1,param_2,param_3,*(int *)(param_4 + 0x10) == 0x73696e66,lVar2,lVar3);
  }
  FUN_10017060f(lVar2);
  FUN_10017060f(lVar3);
  return uVar1;
}

