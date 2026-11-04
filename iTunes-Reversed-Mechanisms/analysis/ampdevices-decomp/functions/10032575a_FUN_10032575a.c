// name: FUN_10032575a
// address: 10032575a

undefined8 FUN_10032575a(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38));
  uVar3 = FUN_100172e65(DAT_1008c4d90,lVar2,PTR__kCFTypeSetCallBacks_10082e148);
  if (0 < lVar2) {
    lVar6 = 0;
    do {
      lVar4 = FUN_10016499b(*(undefined8 *)(param_1 + 0x38),lVar6);
      if (lVar4 != 0) {
        cVar1 = FUN_100167dd2(lVar4,&cf_AMSCollectionFiltered,0);
        if (cVar1 != '\0') {
          uVar5 = FUN_100165701(DAT_1008c4d90,lVar6);
          FUN_100172f53(uVar3,uVar5);
          FUN_10017060f(uVar5);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
  }
  return uVar3;
}

