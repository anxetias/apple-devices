// name: FUN_1001353b4
// address: 1001353b4

undefined1 FUN_1001353b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [18];
  char local_36;
  undefined1 local_30 [8];
  undefined1 local_28 [16];
  
  uVar1 = FUN_100156d72();
  FUN_1001363a8(local_a8,uVar1);
  FUN_1001b7b04(local_28,"clientId");
  FUN_100133b90(param_3,local_28,param_1 + 0x1a0);
  FUN_1001b7a50(local_28);
  FUN_1001b7b04(local_28,"productVersion");
  FUN_100133b90(param_3,local_28,local_98);
  FUN_1001b7a50(local_28);
  FUN_1001b7b04(local_28,"version");
  FUN_1001355a0(param_3,local_28,"2");
  FUN_1001b7a50(local_28);
  FUN_1001b7b04(local_28,"os");
  FUN_100135622(param_3,local_28,"OS X");
  FUN_1001b7a50(local_28);
  FUN_1001b7b04(local_28,"osVersion");
  uVar1 = FUN_1001eb65d();
  FUN_1001aaedc(local_30,uVar1);
  FUN_100133c14(param_3,local_28,local_30);
  FUN_1001ab006(local_30);
  FUN_1001b7a50(local_28);
  if (local_36 == '\x01') {
    FUN_1001b7b04(local_28,"buildVariant");
    FUN_1001356a6(param_3,local_28,"internal");
    FUN_1001b7a50(local_28);
  }
  FUN_1001b7a50(local_48);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_68);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_88);
  FUN_1001b7a50(local_98);
  FUN_1001b7a50(local_a8);
  return 1;
}

