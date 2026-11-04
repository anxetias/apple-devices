// name: FUN_10053ef9a
// address: 10053ef9a

undefined8 FUN_10053ef9a(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 != (uint *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x10))();
    uVar2 = (**(code **)(*param_1 + 0x138))(param_1);
    param_2[0x40c] = uVar2;
    *(byte *)((long)param_2 + 2) = *(byte *)((long)param_2 + 2) | 4;
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    param_2[0x405] = uVar2;
    if (uVar2 == 0) {
      uVar2 = *param_2;
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar2 = *param_2;
      *param_2 = uVar2 | 0x800;
      uVar2 = uVar2 | 0x800;
      if ((uVar4 & 0xfffd) != 0) {
        uVar3 = (**(code **)(*param_1 + 0x1f0))(param_1);
        param_2[0x40a] = uVar3;
        uVar2 = *param_2 | 0x8000;
        if (uVar3 == 0) {
          uVar2 = *param_2;
        }
      }
    }
    *param_2 = uVar2 | 0x20000;
    if ((uVar1 & 2) != 0) {
      *(byte *)((long)param_2 + 0x103b) = *(byte *)((long)param_2 + 0x103b) | 0x80;
    }
    if ((uVar1 & 1) != 0) {
      *(byte *)(param_2 + 0x40e) = (byte)param_2[0x40e] | 0x40;
    }
  }
  return 0;
}

