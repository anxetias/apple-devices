// name: FUN_10063ae61
// address: 10063ae61

uint FUN_10063ae61(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_38 = param_6;
  local_34 = param_5;
  FUN_1001b7a44(local_68);
  uStack_40 = 0;
  local_48 = (ulong)CONCAT15((char)local_38,CONCAT14((char)local_34,param_4));
  local_58 = param_2;
  local_50 = param_3;
  FUN_100483f95(param_1,0x706c6461,local_68);
  uVar1 = (uint)local_48._6_1_;
  *(uint *)(param_1 + 0x330) = *(uint *)(param_1 + 0x330) & 0xfffffbff | (uVar1 & 1) << 10;
  FUN_1001b7a50();
  return uVar1 & 1;
}

