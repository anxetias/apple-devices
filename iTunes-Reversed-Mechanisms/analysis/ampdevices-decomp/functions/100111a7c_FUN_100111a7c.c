// name: FUN_100111a7c
// address: 100111a7c

undefined8 FUN_100111a7c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 in_RAX;
  undefined4 local_14;
  
  local_14 = (undefined4)((ulong)in_RAX >> 0x20);
  *(undefined4 *)(param_1 + 0xb10) = param_3;
  FUN_100117ae8(&local_14,param_2,1);
  *(undefined4 *)(param_1 + 0xb14) = local_14;
  return 0;
}

