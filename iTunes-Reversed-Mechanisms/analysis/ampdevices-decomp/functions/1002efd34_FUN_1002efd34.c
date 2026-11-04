// name: FUN_1002efd34
// address: 1002efd34

void FUN_1002efd34(long param_1,long param_2,long *param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  uint local_2c;
  
  if (param_4 < 2) {
    uVar2 = 10;
    *(undefined8 *)(param_1 + 0x18) = 10;
    *(undefined8 *)(param_1 + 0x20) = 0x32;
    *(undefined8 *)(param_1 + 0x28) = 10;
  }
  else {
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
    plVar1 = *(long **)(param_1 + 8);
    local_2c = *(uint *)(param_2 + *param_3);
    *param_3 = *param_3 + 4;
    (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_2c,4,1);
    uVar2 = (ulong)local_2c;
  }
  *(ulong *)(param_1 + 0x30) = uVar2;
  return;
}

