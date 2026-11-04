// name: FUN_1005c8f0e
// address: 1005c8f0e

undefined8
FUN_1005c8f0e(undefined8 param_1,undefined4 param_2,int param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_40 [16];
  
  if (param_4 != 0) {
    FUN_1001b7a44(local_40);
    FUN_1001b80b2(param_4,local_40);
    FUN_1001b7a50(local_40);
  }
  if (param_5 != 0) {
    FUN_1001b7a44(local_40);
    FUN_1001b80b2(param_5,local_40);
    FUN_1001b7a50(local_40);
  }
  if (param_3 < -0x1f) {
    if (param_3 == -0x27) {
      uVar2 = 0x10cc0217;
      goto LAB_1005c8fbd;
    }
    if (param_3 == -0x23) {
      uVar2 = 0x10cc0219;
      goto LAB_1005c8fbd;
    }
  }
  else {
    if (param_3 == -0x1f) {
      uVar2 = 0x10cc0216;
      goto LAB_1005c8fbd;
    }
    if (param_3 == 0) {
      FUN_1001b7a44(param_1);
      return param_1;
    }
  }
  uVar2 = 0x10cc0218;
LAB_1005c8fbd:
  if (param_5 != 0) {
    FUN_1005c8b89(local_40,param_3);
    FUN_1001b80b2(param_5,local_40);
    FUN_1001b7a50(local_40);
  }
  uVar1 = FUN_100502680(param_2);
  uVar2 = FUN_100416f20(uVar1,uVar2);
  FUN_1001b7eb0(param_1,uVar2);
  return param_1;
}

