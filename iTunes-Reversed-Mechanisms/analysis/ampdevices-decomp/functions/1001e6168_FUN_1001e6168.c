// name: FUN_1001e6168
// address: 1001e6168

undefined4
FUN_1001e6168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_1001b7b04(local_58,param_3);
  uVar1 = FUN_1001ba114(param_1,local_58,1);
  if ((char)uVar1 != '\0') {
    FUN_1001b7b04(local_38,param_4);
    FUN_1001ba564(local_48,param_1,local_58,local_38);
    FUN_1001b80b2(param_2,local_48);
    FUN_1001b7a50(local_48);
    FUN_1001b7a50(local_38);
  }
  FUN_1001b7a50(local_58);
  return uVar1;
}

