// name: FUN_10014f5d2
// address: 10014f5d2

undefined8 FUN_10014f5d2(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  
  FUN_1001b7b04(local_38,"deliveryVersion");
  FUN_10014f72c(param_3,local_38,"1.0");
  FUN_1001b7a50(local_38);
  FUN_1001b7b04(local_38,"postTime");
  FUN_1001a8d16(local_40);
  local_50 = FUN_1001a8c88(local_40);
  FUN_10014f7ae(local_48,&local_50,0);
  FUN_1001a7bac(local_28,local_48);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,local_28);
  FUN_1001ab240(local_28);
  FUN_1001aae6c(local_48);
  FUN_1001a8c12(local_40);
  FUN_1001b7a50(local_38);
  FUN_1001b7b04(local_38,"events");
  FUN_1001a7b90(local_28,param_1 + 0x1b0);
  (**(code **)(*param_3 + 0x18))(param_3,local_38,local_28);
  FUN_1001ab240(local_28);
  FUN_1001b7a50(local_38);
  return 1;
}

