// name: FUN_100116b42
// address: 100116b42

uint FUN_100116b42(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0xc260 + (ulong)param_3 * 8);
  uVar2 = FUN_10011987c(*(undefined8 *)(param_1 + 0xc2c0),*puVar1,param_2,puVar1[1]);
  puVar1 = *(undefined8 **)(param_1 + 0xc260 + (ulong)(param_3 + 1) * 8);
  uVar3 = FUN_10011987c(*(undefined8 *)(param_1 + 0xc2c0),*puVar1,param_2,puVar1[1]);
  return uVar3 | uVar2;
}

