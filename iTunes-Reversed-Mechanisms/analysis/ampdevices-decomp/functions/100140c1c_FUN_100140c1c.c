// name: FUN_100140c1c
// address: 100140c1c

undefined8
FUN_100140c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  FUN_10015189a(param_1,param_3);
  cVar1 = FUN_1001b8428(param_1);
  if (cVar1 == '\0' && *param_5 != 0) {
    if ((param_4 & 1) == 0) {
      FUN_1001a7b90(local_30,&PTR_cf_storefront_header_suffix_10083a728);
      FUN_1001b7a44(local_60);
      FUN_1001b7a44(local_50);
      cVar1 = FUN_1001a944e(param_5,local_30,local_50);
      puVar2 = local_60;
      if (cVar1 != '\0') {
        puVar2 = local_50;
      }
      FUN_1001b7a5c(local_40,puVar2);
      FUN_1001b7a50(local_50);
      FUN_1001bbcfe(param_1,local_40);
      FUN_1001b7a50(local_40);
      puVar2 = local_60;
    }
    else {
      FUN_1001a7b90(local_30,&PTR_cf_subscription_storefront_header_suffix_10083a720);
      FUN_1001b7a44(local_70);
      FUN_1001b7a44(local_50);
      cVar1 = FUN_1001a944e(param_5,local_30,local_50);
      puVar2 = local_70;
      if (cVar1 != '\0') {
        puVar2 = local_50;
      }
      FUN_1001b7a5c(local_40,puVar2);
      FUN_1001b7a50(local_50);
      FUN_1001bbcfe(param_1,local_40);
      FUN_1001b7a50(local_40);
      puVar2 = local_70;
    }
    FUN_1001b7a50(puVar2);
    FUN_1001ab240(local_30);
  }
  return param_1;
}

