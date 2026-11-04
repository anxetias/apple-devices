// name: FUN_1002f0cca
// address: 1002f0cca

void FUN_1002f0cca(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  plVar1 = *(long **)(param_1 + 8);
  local_2c = *(undefined4 *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
  *(undefined4 *)(param_1 + 0x10) = local_2c;
  plVar1 = *(long **)(param_1 + 8);
  local_30 = *(undefined4 *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_30,4,1);
  *(undefined4 *)(param_1 + 0x14) = local_30;
  return;
}

