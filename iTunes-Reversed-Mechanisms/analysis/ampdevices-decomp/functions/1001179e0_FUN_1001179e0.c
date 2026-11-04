// name: FUN_1001179e0
// address: 1001179e0

void FUN_1001179e0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc260 + (param_3 & 0xffffffff) * 8);
  FUN_10011987c(*(undefined8 *)(param_1 + 0xc2c0),*puVar1,param_2,puVar1[1]);
  return;
}

