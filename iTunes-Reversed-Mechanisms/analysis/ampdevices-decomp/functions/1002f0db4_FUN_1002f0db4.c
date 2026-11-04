// name: FUN_1002f0db4
// address: 1002f0db4

bool FUN_1002f0db4(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10 + (ulong)(*(long *)(param_3 + 0x10) != 0) * 4);
  uVar3 = (**(code **)(*param_2 + 0x40))(param_2[1],100);
  uVar2 = uVar3 % 100;
  if (uVar3 < 100) {
    uVar2 = uVar3;
  }
  return uVar1 < uVar2;
}

