// name: FUN_1002f0a6e
// address: 1002f0a6e

void FUN_1002f0a6e(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint local_2c;
  
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(ulong *)(param_1 + 0x10) = (ulong)local_2c;
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(uint *)(param_1 + 0x18) = local_2c;
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(uint *)(param_1 + 0x1c) = local_2c;
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(uint *)(param_1 + 0x20) = local_2c;
  return;
}

