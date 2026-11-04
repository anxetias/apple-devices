// name: FUN_10019ecc9
// address: 10019ecc9

void FUN_10019ecc9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_100170633(&cf_Host,param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(PTR_cf_Cookie_10083c4e0,param_1);
    if (cVar1 == '\0') {
      FUN_100171b23(param_3,param_1,param_2);
      return;
    }
  }
  return;
}

