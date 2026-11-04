// name: FUN_1004d6700
// address: 1004d6700

undefined4 FUN_1004d6700(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 local_68 [2];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  
  FUN_1004d647e(local_58);
  FUN_1001a7b90(local_28,&PTR_cf_blacklistedEvents_10085e9c8);
  FUN_10032f0f2(local_68);
  FUN_10032f0f2(&local_48);
  cVar1 = FUN_1001a90d0(local_58,local_28,&local_48);
  puVar3 = local_68;
  if (cVar1 != '\0') {
    puVar3 = &local_48;
  }
  FUN_1001a7a9e(local_38,puVar3);
  FUN_1001a7a94(&local_48);
  FUN_1001a7a94(local_68);
  FUN_1001ab240(local_28);
  FUN_1001a8fac(local_58);
  local_40 = FUN_1001a7bfa(local_38);
  local_48 = 0;
  uVar2 = FUN_10014a3be(local_38,param_2);
  FUN_1001a7a94(local_38);
  return uVar2;
}

