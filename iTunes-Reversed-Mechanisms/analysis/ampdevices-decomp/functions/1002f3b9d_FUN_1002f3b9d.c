// name: FUN_1002f3b9d
// address: 1002f3b9d

bool FUN_1002f3b9d(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  FUN_1001b7eb0(local_20,param_1);
  FUN_1001bac36(local_20);
  FUN_1001b7eb0(local_40,&cf_application_x_ibooks_zip);
  iVar1 = FUN_1001b9c66(local_20,local_40);
  if (iVar1 == 0) {
    bVar2 = true;
  }
  else {
    FUN_1001b7eb0(local_30,&cf_application_ibooks_zip);
    iVar1 = FUN_1001b9c66(local_20,local_30);
    bVar2 = iVar1 == 0;
    FUN_1001b7a50(local_30);
  }
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_20);
  return bVar2;
}

