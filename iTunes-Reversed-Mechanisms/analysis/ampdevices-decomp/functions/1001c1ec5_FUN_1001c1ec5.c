// name: FUN_1001c1ec5
// address: 1001c1ec5

undefined8 FUN_1001c1ec5(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  cVar1 = _CFBundleGetLocalizationInfoForLocalization(0,&local_20,&local_1c,0,0);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar2 = _CFBundleCopyLocalizationForLocalizationInfo(local_20,local_1c,0xffffffff,0xffff);
    cVar1 = FUN_100170633(uVar2,&cf_no_NO);
    uVar3 = uVar2;
    if (cVar1 != '\0') {
      uVar3 = FUN_1001705fc(&cf_nb_NO);
      FUN_10017060f(uVar2);
    }
  }
  return uVar3;
}

