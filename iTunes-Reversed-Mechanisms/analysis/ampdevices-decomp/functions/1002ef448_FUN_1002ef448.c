// name: FUN_1002ef448
// address: 1002ef448

void FUN_1002ef448(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint local_2c;
  
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(uint *)(param_1 + 0x10) = local_2c;
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(ulong *)(param_1 + 0x18) = (ulong)local_2c;
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(ulong *)(param_1 + 0x20) = (ulong)local_2c;
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(uint *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(ulong *)(param_1 + 0x28) = (ulong)local_2c;
  *(undefined8 *)(param_1 + 0x30) = 1;
  return;
}

