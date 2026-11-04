// name: FUN_10014f94a
// address: 10014f94a

undefined8 FUN_10014f94a(undefined8 param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  long local_88 [2];
  undefined1 local_78 [8];
  cfstringStruct *local_70 [2];
  cfstringStruct *local_60;
  byte local_58 [16];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  
  local_70[0] = &cf_metrics;
  FUN_1001a8c1c(local_40);
  FUN_10032f0f2(local_98);
  FUN_10012a5e6(local_88,param_2 + 0x40,local_40,local_98);
  FUN_1001a8fac(local_98);
  FUN_1001ab006(local_40);
  if (local_88[0] != 0) {
    local_70[0] = &cf_disabled;
    FUN_1001a7b90(local_40);
    bVar1 = FUN_1001a957a(local_88,local_40,local_58);
    FUN_1001ab240(local_40);
    if ((bVar1 & local_58[0]) == 0) {
      FUN_1001aaf14(&local_60,param_2 + 0x1a0);
      FUN_1001a7bac(local_48,&local_60);
      FUN_10032f0f2(local_c8);
      FUN_10032f0f2(local_40);
      cVar2 = FUN_1001a9164(local_88,local_48,local_40);
      puVar3 = local_c8;
      if (cVar2 != '\0') {
        puVar3 = local_40;
      }
      FUN_1001a7a9e(local_58,puVar3);
      FUN_1001a8fac(local_40);
      FUN_1001a7b90(local_78);
      FUN_1001b7a44(local_b8);
      FUN_1001b7a44(local_40);
      cVar2 = FUN_1001a944e(local_58,local_78,local_40);
      puVar3 = local_b8;
      if (cVar2 != '\0') {
        puVar3 = local_40;
      }
      FUN_1001b7a5c(local_70,puVar3);
      FUN_1001b7a50(local_40);
      FUN_1001b7a50(local_b8);
      FUN_1001ab240(local_78);
      FUN_1001a8fac(local_58);
      FUN_1001a8fac(local_c8);
      FUN_1001ab240(local_48);
      FUN_1001ab006(&local_60);
      cVar2 = FUN_1001b8428(local_70);
      if (cVar2 != '\0') {
        local_60 = &cf_metricsUrl;
        FUN_1001a7b90(local_48);
        FUN_1001b7a44(local_a8);
        FUN_1001b7a44(local_40);
        cVar2 = FUN_1001a944e(local_88,local_48,local_40);
        puVar3 = local_a8;
        if (cVar2 != '\0') {
          puVar3 = local_40;
        }
        FUN_1001b7a5c(local_58,puVar3);
        FUN_1001b7a50(local_40);
        FUN_1001b80b2(local_70,local_58);
        FUN_1001b7a50(local_58);
        FUN_1001b7a50(local_a8);
        FUN_1001ab240(local_48);
      }
      cVar2 = FUN_1001b8428(local_70);
      if (cVar2 == '\0') {
        FUN_1001b7b04(local_58,"/2/");
        FUN_1001b7a5c(local_40,local_70);
        FUN_1001bbcfe(local_40,local_58);
        FUN_1001b7a5c(param_1,local_40);
        FUN_1001bbcfe(param_1,param_2 + 0x1a0);
        FUN_1001b7a50(local_40);
        FUN_1001b7a50(local_58);
        FUN_1001b7a50(local_70);
        goto LAB_10014fba9;
      }
      FUN_1001b7a50(local_70);
    }
  }
  FUN_1001b7a44(param_1);
LAB_10014fba9:
  FUN_1001a8fac(local_88);
  return param_1;
}

