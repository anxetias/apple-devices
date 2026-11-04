// name: FUN_1004d6328
// address: 1004d6328

void FUN_1004d6328(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  uVar2 = (**(code **)(*param_1 + 0x10))();
  FUN_1001a7b90(local_30,&PTR_cf_location_10085e9b8);
  FUN_10032f0f2(local_60);
  FUN_10032f0f2(local_40);
  cVar1 = FUN_1001a90d0(uVar2,local_30,local_40);
  puVar3 = local_60;
  if (cVar1 != '\0') {
    puVar3 = local_40;
  }
  FUN_1001a7a9e(local_50,puVar3);
  FUN_1001a7a94(local_40);
  FUN_1001a7a94(local_60);
  FUN_1001ab240(local_30);
  FUN_1001a7b90(local_40,param_2);
  FUN_1001a7d28(local_50,local_40);
  FUN_1001ab240(local_40);
  FUN_1001a7b90(local_40,&PTR_cf_location_10085e9b8);
  FUN_1001a7b90(local_30,local_50);
  FUN_1001a9c16(uVar2,local_40,local_30);
  FUN_1001ab240(local_30);
  FUN_1001ab240(local_40);
  FUN_1001a7a94(local_50);
  return;
}

