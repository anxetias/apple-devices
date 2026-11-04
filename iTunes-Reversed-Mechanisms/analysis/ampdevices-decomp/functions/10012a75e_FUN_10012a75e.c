// name: FUN_10012a75e
// address: 10012a75e

undefined1 FUN_10012a75e(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  FUN_1001cd96e(local_50,"store-site-id");
  cVar1 = FUN_1001b8428(local_50);
  if (cVar1 == '\0') {
    FUN_1001b7b04(local_30,"store-site-id");
    FUN_100133b90(param_3,local_30,local_50);
    FUN_1001b7a50(local_30);
  }
  if (*(int *)(param_1 + 0x1a0) != 0) {
    FUN_1001b7b04(local_30,"ign-bsn");
    FUN_1001bb832(local_40,*(undefined4 *)(param_1 + 0x1a0));
    FUN_10012a852(param_3,local_30,local_40);
    FUN_1001b7a50(local_40);
    FUN_1001b7a50(local_30);
  }
  FUN_1001b7a50(local_50);
  return 1;
}

