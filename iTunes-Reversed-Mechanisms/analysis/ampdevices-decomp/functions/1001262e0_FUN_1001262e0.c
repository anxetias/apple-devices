// name: FUN_1001262e0
// address: 1001262e0

void FUN_1001262e0(long param_1,long param_2,uint *param_3,ulong param_4,uint param_5,char param_6)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  if (0 < (int)param_5) {
    bVar4 = param_6 << 3;
    param_4 = param_4 & 0xffffffff;
    if (param_5 < 4) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        puVar1 = param_3;
        *puVar1 = (uint)*(ushort *)(param_2 + uVar2 * 2) |
                  *(int *)(param_1 + uVar2 * 4) << (bVar4 & 0x1f);
        puVar1[param_4] =
             (uint)*(ushort *)(param_2 + 2 + uVar2 * 2) |
             *(int *)(param_1 + 4 + uVar2 * 4) << (bVar4 & 0x1f);
        puVar1[param_4 * 2] =
             (uint)*(ushort *)(param_2 + 4 + uVar2 * 2) |
             *(int *)(param_1 + 8 + uVar2 * 4) << (bVar4 & 0x1f);
        puVar1[param_4 * 3] =
             (uint)*(ushort *)(param_2 + 6 + uVar2 * 2) |
             *(int *)(param_1 + 0xc + uVar2 * 4) << (bVar4 & 0x1f);
        uVar2 = uVar2 + 4;
        param_3 = puVar1 + param_4 * 4;
      } while ((param_5 & 0x7ffffffc) != uVar2);
      param_3 = puVar1 + param_4 * 4;
    }
    if ((ulong)(param_5 & 3) != 0) {
      uVar3 = 0;
      do {
        *param_3 = (uint)*(ushort *)(param_2 + uVar2 * 2 + uVar3 * 2) |
                   *(int *)(param_1 + uVar2 * 4 + uVar3 * 4) << (bVar4 & 0x1f);
        uVar3 = uVar3 + 1;
        param_3 = param_3 + param_4;
      } while ((param_5 & 3) != uVar3);
    }
  }
  return;
}

