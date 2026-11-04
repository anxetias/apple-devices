// name: FUN_1003256d6
// address: 1003256d6

undefined8 FUN_1003256d6(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38));
  uVar2 = FUN_100170720(DAT_1008c4d90,lVar1,PTR__kCFTypeArrayCallBacks_10082e130);
  if (0 < lVar1) {
    lVar4 = 0;
    do {
      uVar3 = FUN_10016499b(*(undefined8 *)(param_1 + 0x38),lVar4);
      uVar3 = FUN_100166c1b(uVar3,&cf_AMSCollectionName);
      FUN_1001709a5(uVar2,uVar3);
      lVar4 = lVar4 + 1;
    } while (lVar1 != lVar4);
  }
  return uVar2;
}

