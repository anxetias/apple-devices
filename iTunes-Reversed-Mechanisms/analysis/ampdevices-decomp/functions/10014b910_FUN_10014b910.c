// name: FUN_10014b910
// address: 10014b910

undefined8 FUN_10014b910(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_10032f0f2();
  FUN_1001b7b04(local_38,"--");
  FUN_1001b7a5c(local_48,local_38);
  FUN_1001bbcfe(local_48,param_2 + 0x18);
  FUN_1001b7b04(local_58,"\r\nContent-Disposition: form-data; name=\"plist\"\r\n\r\n");
  FUN_1001b7a5c(local_68,local_48);
  FUN_1001bbcfe(local_68,local_58);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_48);
  FUN_1001b7a50(local_38);
  uVar1 = FUN_1001b83ae(local_68);
  uVar2 = FUN_1001b83f0(local_68);
  FUN_1001a8772(param_1,uVar1,uVar2);
  FUN_1001a99b0(local_48,param_2 + 8);
  uVar1 = FUN_1001a8626(local_48);
  uVar2 = FUN_1001a8610(local_48);
  FUN_1001a8772(param_1,uVar1,uVar2);
  FUN_1001b7b04(local_88,"\r\n--");
  FUN_1001b7a5c(local_58,local_88);
  FUN_1001bbcfe(local_58,param_2 + 0x18);
  FUN_1001b7b04(local_78,"--\r\n");
  FUN_1001b7a5c(local_38,local_58);
  FUN_1001bbcfe(local_38,local_78);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_88);
  uVar1 = FUN_1001b83ae(local_38);
  uVar2 = FUN_1001b83f0(local_38);
  FUN_1001a8772(param_1,uVar1,uVar2);
  FUN_1001b7a50(local_38);
  FUN_1001a85d4(local_48);
  FUN_1001b7a50(local_68);
  return param_1;
}

