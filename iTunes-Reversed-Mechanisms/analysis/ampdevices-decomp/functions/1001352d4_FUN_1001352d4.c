// name: FUN_1001352d4
// address: 1001352d4

undefined8 FUN_1001352d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 local_28 [16];
  
  uVar1 = FUN_1001b83f0(param_3);
  switch(uVar1 & 3) {
  case 0:
    FUN_1001b7a5c(param_1,param_3);
    return param_1;
  case 1:
    FUN_1001b7a44(param_1);
    return param_1;
  case 2:
    FUN_1001b7b04(local_28,"==");
    FUN_1001b7a5c(param_1,param_3);
    FUN_1001bbcfe(param_1,local_28);
    break;
  case 3:
    FUN_1001b7b04(local_28,"=");
    FUN_1001b7a5c(param_1,param_3);
    FUN_1001bbcfe(param_1,local_28);
  }
  FUN_1001b7a50(local_28);
  return param_1;
}

