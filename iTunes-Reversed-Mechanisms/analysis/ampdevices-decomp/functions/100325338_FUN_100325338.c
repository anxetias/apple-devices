// name: FUN_100325338
// address: 100325338

ulong FUN_100325338(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_10017076e(param_2);
  }
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_10017076e(param_3);
  }
  uVar9 = CONCAT71((int7)((ulong)param_4 >> 8),1);
  if (lVar1 == lVar2) {
    if (0 < lVar1) {
      lVar2 = 0;
      do {
        uVar3 = FUN_10016499b(param_2,lVar2);
        uVar4 = FUN_10016499b(param_3,lVar2);
        uVar5 = FUN_100166c1b(uVar3,&cf_AMSCollectionName);
        uVar6 = FUN_100166c1b(uVar4,&cf_AMSCollectionName);
        lVar7 = FUN_100173bb7(uVar5,uVar6,0);
        if (lVar7 != 0) {
LAB_100325482:
          uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
          goto LAB_100325484;
        }
        uVar5 = FUN_100166c1b(uVar3,&cf_AMSCollectionDisplayName);
        uVar6 = FUN_100166c1b(uVar4,&cf_AMSCollectionDisplayName);
        lVar7 = FUN_100173bb7(uVar5,uVar6,0);
        if (lVar7 != 0) goto LAB_100325482;
        lVar7 = FUN_1001668a7(uVar3,&cf_AMSCollectionReadOnly);
        lVar8 = FUN_1001668a7(uVar4,&cf_AMSCollectionReadOnly);
        if (lVar7 != lVar8) goto LAB_100325482;
        lVar7 = FUN_1001668a7(uVar3,&cf_AMSCollectionFiltered);
        lVar8 = FUN_1001668a7(uVar4,&cf_AMSCollectionFiltered);
        if (lVar7 != lVar8) goto LAB_100325482;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    uVar9 = 0;
  }
LAB_100325484:
  return uVar9 & 0xffffffff;
}

