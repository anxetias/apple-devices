// name: FUN_10053864f
// address: 10053864f

undefined1 FUN_10053864f(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (param_2 == 0x10) {
    cVar1 = FUN_100170633(param_1,&cf_ar_SA);
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(param_1,&cf_he_IL);
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(param_1,&cf_hr_HR);
        if (cVar1 == '\0') {
          cVar1 = FUN_100170633(param_1,&cf_hu_HU);
          if (cVar1 == '\0') {
            cVar1 = FUN_100170633(param_1,&cf_ro_RO);
            if (cVar1 == '\0') {
              cVar1 = FUN_100170633(param_1,&cf_sk_SK);
              if (cVar1 == '\0') {
                cVar1 = FUN_100170633(param_1,&cf_th_TH);
                if (cVar1 == '\0') goto LAB_1005386e7;
              }
            }
          }
        }
      }
    }
    uVar2 = 0;
  }
  else {
LAB_1005386e7:
    uVar2 = 1;
  }
  return uVar2;
}

