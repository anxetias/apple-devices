// name: FUN_100129e07
// address: 100129e07

void FUN_100129e07(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  cfstringStruct *local_90;
  undefined8 local_88;
  cfstringStruct *local_80 [2];
  undefined1 local_70 [16];
  cfstringStruct *local_60 [2];
  cfstringStruct *local_50;
  cfstringStruct *local_48 [2];
  undefined1 local_38 [8];
  undefined1 local_30 [16];
  
  FUN_100151a88(local_38,param_1);
  local_80[0] = &cf_passwordToken;
  FUN_1001a8c1c(local_60);
  FUN_1001b7a44(local_b0);
  FUN_100129a4c(local_30,param_2,local_60,local_b0);
  FUN_100151fb2(local_38,local_30);
  FUN_1001b7a50(local_30);
  FUN_1001b7a50(local_b0);
  FUN_1001ab006(local_60);
  local_88 = 0;
  local_60[0] = &cf_family_id;
  FUN_1001a8c1c(local_30,local_60);
  cVar1 = FUN_10012a57e(param_2,local_30,&local_88);
  FUN_1001ab006(local_30);
  if (cVar1 != '\0') {
    FUN_1001525a4(local_38,local_88);
  }
  local_80[0] = &cf_accountInfo;
  FUN_1001a8c1c(local_30);
  FUN_10032f0f2(local_a0);
  FUN_10012a5e6(local_60,param_2,local_30,local_a0);
  FUN_1001a8fac(local_a0);
  FUN_1001ab006(local_30);
  local_48[0] = &cf_appleId;
  FUN_1001a7b90(local_70);
  FUN_1001b7a44(local_f0);
  FUN_1001b7a44(local_30);
  cVar1 = FUN_1001a944e(local_60,local_70,local_30);
  puVar2 = local_f0;
  if (cVar1 != '\0') {
    puVar2 = local_30;
  }
  FUN_1001b7a5c(local_80,puVar2);
  FUN_1001b7a50(local_30);
  FUN_1001b7a50(local_f0);
  FUN_1001ab240(local_70);
  FUN_100151efc(local_38,local_80);
  cVar1 = FUN_1001b8428(local_80);
  if (cVar1 == '\0') {
    local_50 = &cf_address;
    FUN_1001a7b90(local_48);
    FUN_10032f0f2(local_e0);
    FUN_10032f0f2(local_30);
    cVar1 = FUN_1001a9164(local_60,local_48,local_30);
    puVar2 = local_e0;
    if (cVar1 != '\0') {
      puVar2 = local_30;
    }
    FUN_1001a7a9e(local_70,puVar2);
    FUN_1001a8fac(local_30);
    FUN_1001a8fac(local_e0);
    FUN_1001ab240(local_48);
    local_90 = &cf_firstName;
    FUN_1001a7b90(&local_50);
    FUN_1001b7a44(local_d0);
    FUN_1001b7a44(local_30);
    cVar1 = FUN_1001a944e(local_70,&local_50,local_30);
    puVar2 = local_d0;
    if (cVar1 != '\0') {
      puVar2 = local_30;
    }
    FUN_1001b7a5c(local_48,puVar2);
    FUN_1001b7a50(local_30);
    FUN_1001520c0(local_38,local_48);
    FUN_1001b7a50(local_48);
    FUN_1001b7a50(local_d0);
    FUN_1001ab240(&local_50);
    local_90 = &cf_lastName;
    FUN_1001a7b90(&local_50);
    FUN_1001b7a44(local_c0);
    FUN_1001b7a44(local_30);
    cVar1 = FUN_1001a944e(local_70,&local_50,local_30);
    puVar2 = local_c0;
    if (cVar1 != '\0') {
      puVar2 = local_30;
    }
    FUN_1001b7a5c(local_48,puVar2);
    FUN_1001b7a50(local_30);
    FUN_100152176(local_38,local_48);
    FUN_1001b7a50(local_48);
    FUN_1001b7a50(local_c0);
    FUN_1001ab240(&local_50);
    FUN_1001b7a44(local_30);
    local_50 = &cf_creditDisplay;
    FUN_1001a8c1c(local_48);
    cVar1 = FUN_1001483c8(param_2,local_48,local_30);
    FUN_1001ab006(local_48);
    if (cVar1 != '\0') {
      FUN_100152320(local_38,local_30);
    }
    FUN_1001aaf3c(local_48,"is-cloud-enabled");
    cVar1 = FUN_10012a6a4(param_2,local_48,0);
    FUN_1001ab006(local_48);
    if (cVar1 != '\0') {
      FUN_100152486(local_38,cVar1);
    }
    FUN_1001b7a50(local_30);
    FUN_1001a8fac(local_70);
  }
  FUN_100151cfc(local_38);
  FUN_1001b7a50(local_80);
  FUN_1001a8fac(local_60);
  FUN_100151a16(local_38);
  return;
}

