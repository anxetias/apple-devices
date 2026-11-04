// name: FUN_1002040cd
// address: 1002040cd

long FUN_1002040cd(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = FUN_10017076e();
  if (lVar2 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = 0;
    do {
      uVar3 = FUN_10016499b(param_1,lVar5);
      cVar1 = FUN_100167dd2(uVar3,&cf_AMSCollectionFiltered,0);
      if (cVar1 != '\0') {
        if (lVar4 == 0) {
          lVar4 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
        }
        uVar3 = FUN_100166c1b(uVar3,&cf_AMSCollectionName);
        FUN_1001709a5(lVar4,uVar3);
      }
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
  }
  return lVar4;
}

