// name: FUN_10013c1c8
// address: 10013c1c8

undefined8 FUN_10013c1c8(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 local_30 [16];
  undefined1 local_20 [8];
  
  FUN_1001b7b04(local_30,"sign-sap-setup-buffer");
  FUN_1001a7b90(local_20,param_1 + 0x1a0);
  (**(code **)(*param_3 + 0x18))(param_3,local_30,local_20);
  FUN_1001ab240(local_20);
  FUN_1001b7a50(local_30);
  return 1;
}

