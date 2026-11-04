// name: FUN_10063c950
// address: 10063c950

undefined4 FUN_10063c950(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint local_b8 [2];
  undefined4 local_b0;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1002fa385(*(undefined8 *)(param_1 + 0x410),param_4,local_b8);
  uVar1 = FUN_10056df1e(param_2,param_3,*(byte *)(param_1 + 0x9b8) ^ 1,local_70,
                        *(long *)(param_1 + 0x410) + (ulong)local_b8[0] * 4 + 0x1a8);
  FUN_1005389ba(param_1 + 0x420,local_b0);
  return uVar1;
}

