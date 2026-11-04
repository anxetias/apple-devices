// name: FUN_100447d46
// address: 100447d46

bool FUN_100447d46(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long local_28;
  
  local_28 = 0;
  if (*(int *)(param_1 + 0x1c) == 0x46494c45) {
    FUN_10043e902();
    bVar4 = false;
    FUN_1004406ae(param_1,1,0);
    iVar2 = FUN_1004471ac(param_2,*(undefined8 *)(param_1 + 0x498),&local_28,0);
    lVar1 = local_28;
    if (local_28 != 0 && iVar2 == 0) {
      lVar3 = FUN_10017076e(local_28);
      bVar4 = 0 < lVar3;
    }
    FUN_10017060f(lVar1);
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

