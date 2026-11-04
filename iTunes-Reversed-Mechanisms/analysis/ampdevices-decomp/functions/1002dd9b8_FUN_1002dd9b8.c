// name: FUN_1002dd9b8
// address: 1002dd9b8

uint FUN_1002dd9b8(long param_1,long param_2)

{
  uint uVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  uVar1 = 0xffffffff;
  if (((*(byte *)(param_1 + 0x240) & 4) == 0) && (uVar1 = 1, (*(byte *)(param_2 + 0x240) & 4) == 0))
  {
    FUN_1001b7a44(local_50);
    FUN_1001b7a44(local_40);
    FUN_100486d8f(local_30,param_1);
    FUN_1001b80b2(local_50,local_30);
    FUN_1001b7a50(local_30);
    FUN_100486d8f(local_30,param_2);
    FUN_1001b80b2(local_40,local_30);
    FUN_1001b7a50(local_30);
    uVar1 = FUN_1001b96de(local_50,local_40,0x3f1);
    if (uVar1 == 0) {
      uVar1 = 0xffffffff;
      if (*(uint *)(param_2 + 0x58) <= *(uint *)(param_1 + 0x58)) {
        uVar1 = (uint)(*(uint *)(param_1 + 0x58) != *(uint *)(param_2 + 0x58));
      }
    }
    FUN_1001b7a50(local_40);
    FUN_1001b7a50(local_50);
  }
  return uVar1;
}

