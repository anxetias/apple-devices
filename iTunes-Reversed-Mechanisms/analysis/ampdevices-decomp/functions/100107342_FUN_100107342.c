// name: FUN_100107342
// address: 100107342

undefined8 FUN_100107342(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 0x481) = 0;
  iVar1 = (**(code **)(*param_1 + 0x10))();
  uVar3 = 0xfffffffe;
  if (iVar1 == 0) {
    uVar4 = *(int *)((long)param_1 + 0x240c) * 8;
    if (*(uint *)(param_1 + 0x481) <= uVar4) {
      *(uint *)(param_1 + 0x481) = uVar4;
      *(int *)(param_2 + 0x70) = *(int *)((long)param_1 + 0x240c);
      uVar2 = (**(code **)(*param_1 + 8))(param_1);
      *(undefined4 *)(param_2 + 0x68) = uVar2;
      *(undefined2 *)(param_2 + 0x6c) = *(undefined2 *)((long)param_1 + 0x241c);
      *(int *)(param_2 + 100) = (int)param_1[0x484];
      uVar3 = 0;
    }
  }
  return uVar3;
}

