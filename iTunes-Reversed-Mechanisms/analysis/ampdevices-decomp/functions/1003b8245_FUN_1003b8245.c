// name: FUN_1003b8245
// address: 1003b8245

void FUN_1003b8245(undefined8 param_1,short *param_2)

{
  undefined8 uVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FUN_1001b7a44();
  if ((param_2 == (short *)0x0) || (*param_2 != 0)) {
    uVar1 = FUN_1001c15fb();
    FUN_1001b8172(param_1,uVar1);
    if (param_2 != (short *)0x0) {
      FUN_1001b7b04(local_58,s__1007c8f7b);
      FUN_1001b7a5c(local_28,param_1);
      FUN_1001bbcfe(local_28,local_58);
      FUN_1001b8dfc(local_48,param_2);
      FUN_1001b7a5c(local_38,local_28);
      FUN_1001bbcfe(local_38,local_48);
      FUN_1001b80b2(param_1,local_38);
      FUN_1001b7a50(local_38);
      FUN_1001b7a50(local_48);
      FUN_1001b7a50(local_28);
      FUN_1001b7a50(local_58);
    }
  }
  return;
}

