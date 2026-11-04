// name: FUN_10014ada8
// address: 10014ada8

undefined1 FUN_10014ada8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_1001b7b04(local_c8,"--");
  FUN_1001b7a5c(local_48,local_c8);
  FUN_1001bbcfe(local_48,param_1 + 8);
  FUN_1001b7b04(local_b8,"\r\nContent-Disposition: form-data; name=\"");
  FUN_1001b7a5c(local_58,local_48);
  FUN_1001bbcfe(local_58,local_b8);
  FUN_1001b7a5c(local_68,local_58);
  FUN_1001bbcfe(local_68,param_2);
  FUN_1001b7b04(local_a8,"\"\r\n\r\n");
  FUN_1001b7a5c(local_78,local_68);
  FUN_1001bbcfe(local_78,local_a8);
  FUN_1001b7a5c(local_88,local_78);
  FUN_1001bbcfe(local_88,param_3);
  FUN_1001b7b04(local_98,"\r\n");
  FUN_1001b7a5c(local_38,local_88);
  FUN_1001bbcfe(local_38,local_98);
  FUN_1001b7a50(local_98);
  FUN_1001b7a50(local_88);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_a8);
  FUN_1001b7a50(local_68);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_b8);
  FUN_1001b7a50(local_48);
  FUN_1001b7a50(local_c8);
  uVar1 = FUN_1001b83ae(local_38);
  uVar2 = FUN_1001b83f0(local_38);
  FUN_1001a8772(param_1 + 0x18,uVar1,uVar2);
  FUN_1001b7a50(local_38);
  return 1;
}

