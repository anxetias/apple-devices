// name: FUN_10013969e
// address: 10013969e

void FUN_10013969e(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  if (*param_2 != 0) {
    return;
  }
  cVar2 = FUN_100153f48(*param_3);
  if (cVar2 == '\0') {
    FUN_1001b7b04(local_70,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001aa38a(local_50,local_70,0x1d50);
    FUN_1001aaadc(param_2,local_50);
    FUN_1001aaad2(local_50);
    FUN_1001b7a50(local_70);
    return;
  }
  if (*(int *)(param_1 + 0x1a0) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    uVar4 = FUN_100153f3a(*param_3);
    iVar3 = FUN_10012d403(uVar1,uVar4);
    if (iVar3 != 0) {
      FUN_1001b7b04(local_70,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001aa38a(local_40,&DAT_1008c4de0,(long)iVar3);
      FUN_1001aa4ea(local_50,local_70,0x1d58,local_40);
      FUN_1001aaadc(param_2,local_50);
      FUN_1001aaad2(local_50);
      FUN_1001aaad2(local_40);
      FUN_1001b7a50(local_70);
    }
  }
  if (*param_2 != 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_100153f3a(*param_3);
  FUN_1001a8d5a(local_70,*puVar5,1);
  FUN_1001aaf3c(local_40,"settingInfo");
  FUN_100139ade(local_50,local_70,local_40);
  FUN_1001ab006(local_40);
  FUN_1001aaf3c(local_60,"transportKey");
  FUN_100139ade(local_40,local_70,local_60);
  FUN_1001ab006(local_60);
  cVar2 = FUN_1001b8428(local_50);
  if ((cVar2 == '\0') && (cVar2 = FUN_1001b8428(local_40), cVar2 == '\0')) {
    iVar3 = FUN_10028b1e6(*(undefined8 *)(param_1 + 0x1a8),local_50,local_40);
    if (iVar3 == 0) goto LAB_1001398b7;
    FUN_1001b7b04(local_60,"Provisioning session returned error.");
    FUN_1001b7a44(local_a0);
    FUN_1001b7a44(local_90);
    FUN_1001aa318(local_30);
    FUN_1001aaaac(local_80,&DAT_1008c4de0,(long)iVar3,local_60,local_a0,local_90,local_30);
    FUN_1001aaadc(param_2,local_80);
    FUN_1001aaad2(local_80);
    FUN_1001aaad2(local_30);
  }
  else {
    FUN_1001b7b04(local_60,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7b04(local_a0,"Either settingInfo or transportKey were empty in the server response.");
    FUN_1001b7a44(local_90);
    FUN_1001b7a44(local_80);
    FUN_1001aa318(local_a8);
    FUN_1001aaaac(local_30,local_60,0x1d5a,local_a0,local_90,local_80,local_a8);
    FUN_1001aaadc(param_2,local_30);
    FUN_1001aaad2(local_30);
    FUN_1001aaad2(local_a8);
    FUN_1001b7a50(local_80);
  }
  FUN_1001b7a50(local_90);
  FUN_1001b7a50(local_a0);
  FUN_1001b7a50(local_60);
LAB_1001398b7:
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_50);
  FUN_1001a8fac(local_70);
  return;
}

