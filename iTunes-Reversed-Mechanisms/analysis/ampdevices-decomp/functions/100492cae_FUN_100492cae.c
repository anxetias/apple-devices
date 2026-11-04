// name: FUN_100492cae
// address: 100492cae

undefined4 FUN_100492cae(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined8 local_38;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1001aa318(local_50);
  FUN_1001aa318(local_48);
  FUN_1001aa318(local_40);
  local_38 = 0;
  FUN_10032f0f2(local_78);
  FUN_1002e5e5a(local_b0,param_1);
  local_58 = local_a0;
  FUN_1001aaadc(local_50,local_98);
  FUN_1001aaadc(local_48,local_90);
  FUN_1001aaadc(local_40,local_88);
  local_38 = local_80;
  FUN_1001ab006(local_88);
  FUN_1001ab006(local_90);
  FUN_1001ab006(local_98);
  if (*param_2 == 0) {
    local_58 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1005d1bb6(param_2);
    local_58 = 0x3c;
  }
  FUN_100314020(param_1);
  uVar1 = FUN_1002e6017(param_1,&local_68,param_2,uVar2);
  if ((char)uVar1 != '\0') {
    FUN_1002e69b9(param_1,4);
  }
  FUN_1003142ca(param_1);
  FUN_1001a85d4(local_78);
  FUN_1001ab006(local_40);
  FUN_1001ab006(local_48);
  FUN_1001ab006(local_50);
  return uVar1;
}

