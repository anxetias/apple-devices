// name: FUN_1002f0bbe
// address: 1002f0bbe

bool FUN_1002f0bbe(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  
  if (*(char *)(param_4 + 0x20) == '\x01') {
    uVar5 = *(uint *)(param_4 + 0x30);
    iVar2 = *(int *)(param_4 + 0x28);
  }
  else {
    iVar2 = (**(code **)(*param_2 + 0x28))
                      (param_2[1],*(undefined8 *)(param_4 + 8),&local_38,&local_34);
    if (iVar2 != 0) {
      local_38 = 0;
      local_34 = 0;
    }
    iVar2 = (**(code **)(*param_2 + 0x30))
                      (param_2[1],*(undefined8 *)(param_4 + 8),&local_40,&local_3c);
    uVar5 = 0;
    uVar4 = 0;
    if (iVar2 == 0) {
      uVar5 = local_3c;
      uVar4 = local_40;
    }
    *(undefined4 *)(param_4 + 0x24) = local_38;
    *(int *)(param_4 + 0x28) = local_34;
    *(undefined4 *)(param_4 + 0x2c) = uVar4;
    *(uint *)(param_4 + 0x30) = uVar5;
    *(undefined1 *)(param_4 + 0x20) = 1;
    iVar2 = local_34;
  }
  bVar6 = false;
  if (((uVar5 != 0) && (*(ulong *)(param_1 + 0x10) < (ulong)uVar5)) &&
     (iVar1 = *(int *)(param_4 + 0x2c),
     (uint)(*(int *)(param_4 + 0x24) - iVar1) <= *(int *)(param_1 + 0x1c) - 1U)) {
    iVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x38))((*(long **)(param_1 + 8))[1]);
    bVar6 = false;
    if ((uint)(iVar3 - iVar1) < *(uint *)(param_1 + 0x18)) {
      bVar6 = (iVar2 + uVar5) * *(int *)(param_1 + 0x20) < uVar5 * 100;
    }
  }
  return bVar6;
}

