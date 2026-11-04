// name: FUN_10053f052
// address: 10053f052

undefined8 FUN_10053f052(long *param_1,ulong *param_2,uint param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = (**(code **)(*param_1 + 0x10))();
  uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  *(undefined2 *)((long)param_2 + 0x1a) = uVar3;
  *(byte *)param_2 = (byte)*param_2 | 4;
  uVar3 = (**(code **)(*param_1 + 0x1e8))(param_1);
  *(undefined2 *)((long)param_2 + 0x16) = uVar3;
  uVar2 = *param_2;
  uVar5 = uVar2 | 0x1000000000;
  *param_2 = uVar5;
  if ((uVar2 & 0x40) == 0 && (param_3 >> 0xb & 1) == 0) {
    lVar6 = (**(code **)(*param_1 + 0x60))(param_1,0,0,0,param_2 + 0x16);
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1005d3cba(lVar6);
      }
    }
    uVar5 = *param_2 | 0x1c0;
    *param_2 = uVar5;
  }
  uVar2 = param_2[1];
  if ((uVar4 & 8) != 0) {
    uVar5 = uVar5 | 0x200000000000000;
    *param_2 = uVar5;
    param_2[1] = uVar2;
    *(byte *)(param_2 + 0x3fa) = 1;
  }
  if ((uVar4 & 4) != 0) {
    *param_2 = uVar5 | 0x200000000000000;
    param_2[1] = uVar2;
    *(byte *)((long)param_2 + 0x1fd1) = 1;
  }
  return 0;
}

