// name: FUN_100325804
// address: 100325804

void FUN_100325804(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38));
  if (0 < lVar3) {
    lVar6 = 0;
    do {
      lVar4 = FUN_10016499b(*(undefined8 *)(param_1 + 0x38),lVar6);
      if (lVar4 != 0) {
        uVar5 = FUN_100165701(DAT_1008c4d90,lVar6);
        cVar1 = FUN_100172e6f(param_2,uVar5);
        cVar2 = FUN_100167dd2(lVar4,&cf_AMSCollectionFiltered,0);
        if ((bool)cVar2 != (cVar1 != '\0')) {
          FUN_100168b0b(lVar4,&cf_AMSCollectionFiltered,cVar1 != '\0',1);
        }
        FUN_10017060f(uVar5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
  }
  return;
}

