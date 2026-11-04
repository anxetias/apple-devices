// name: FUN_10014b53e
// address: 10014b53e

undefined8 FUN_10014b53e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  FUN_1001b7b04(local_60,"--");
  FUN_1001b7a5c(local_40,local_60);
  FUN_1001bbcfe(local_40,param_2 + 8);
  FUN_1001b7b04(local_50,"--\r\n");
  FUN_1001b7a5c(local_30,local_40);
  FUN_1001bbcfe(local_30,local_50);
  FUN_1001b7a50(local_50);
  FUN_1001b7a50(local_40);
  FUN_1001b7a50(local_60);
  if (*(char *)(param_2 + 0x28) == '\0') {
    *(undefined1 *)(param_2 + 0x28) = 1;
    uVar1 = FUN_1001b83ae(local_30);
    uVar2 = FUN_1001b83f0(local_30);
    FUN_1001a8772(param_2 + 0x18,uVar1,uVar2);
  }
  FUN_1001a7a9e(param_1,param_2 + 0x18);
  FUN_1001b7a50(local_30);
  return param_1;
}

