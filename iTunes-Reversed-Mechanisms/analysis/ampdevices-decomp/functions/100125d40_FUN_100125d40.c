// name: FUN_100125d40
// address: 100125d40

void FUN_100125d40(long param_1,long param_2,uint *param_3,uint param_4,uint param_5,byte param_6,
                  int param_7,long param_8,int param_9)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  bVar2 = (char)param_9 * '\b';
  if (param_7 == 0) {
    if (param_9 == 0) {
      if (0 < (int)param_5) {
        uVar8 = (ulong)param_4;
        if (param_5 < 4) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            puVar3 = param_3;
            *puVar3 = *(uint *)(param_1 + uVar4 * 4);
            puVar3[1] = *(uint *)(param_2 + uVar4 * 4);
            puVar3[uVar8] = *(uint *)(param_1 + 4 + uVar4 * 4);
            puVar3[uVar8 + 1] = *(uint *)(param_2 + 4 + uVar4 * 4);
            puVar3[uVar8 * 2] = *(uint *)(param_1 + 8 + uVar4 * 4);
            puVar3[uVar8 * 2 + 1] = *(uint *)(param_2 + 8 + uVar4 * 4);
            puVar3[uVar8 * 3] = *(uint *)(param_1 + 0xc + uVar4 * 4);
            puVar3[uVar8 * 3 + 1] = *(uint *)(param_2 + 0xc + uVar4 * 4);
            uVar4 = uVar4 + 4;
            param_3 = puVar3 + uVar8 * 4;
          } while ((param_5 & 0x7ffffffc) != uVar4);
          param_3 = puVar3 + uVar8 * 4;
        }
        if ((ulong)(param_5 & 3) != 0) {
          param_3 = param_3 + 1;
          uVar5 = 0;
          do {
            param_3[-1] = *(uint *)(param_1 + uVar4 * 4 + uVar5 * 4);
            *param_3 = *(uint *)(param_2 + uVar4 * 4 + uVar5 * 4);
            uVar5 = uVar5 + 1;
            param_3 = param_3 + uVar8;
          } while ((param_5 & 3) != uVar5);
        }
      }
    }
    else if (0 < (int)param_5) {
      if (param_5 == 1) {
        uVar8 = 0;
        lVar6 = 0;
      }
      else {
        uVar4 = (ulong)param_4;
        uVar8 = 0;
        lVar6 = 0;
        do {
          puVar3 = param_3;
          *puVar3 = (uint)*(ushort *)(param_8 + uVar8 * 2) |
                    *(int *)(param_1 + uVar8 * 2) << (bVar2 & 0x1f);
          puVar3[1] = (uint)*(ushort *)(param_8 + 2 + uVar8 * 2) |
                      *(int *)(param_2 + uVar8 * 2) << (bVar2 & 0x1f);
          puVar3[uVar4] =
               (uint)*(ushort *)(param_8 + 4 + uVar8 * 2) |
               *(int *)(param_1 + 4 + uVar8 * 2) << (bVar2 & 0x1f);
          puVar3[uVar4 + 1] =
               (uint)*(ushort *)(param_8 + 6 + uVar8 * 2) |
               *(int *)(param_2 + 4 + uVar8 * 2) << (bVar2 & 0x1f);
          lVar6 = lVar6 + 2;
          uVar8 = uVar8 + 4;
          param_3 = puVar3 + uVar4 * 2;
        } while ((param_5 * 2 & 0xfffffffc) != uVar8);
        param_3 = puVar3 + uVar4 * 2;
        if ((param_5 & 1) == 0) {
          return;
        }
      }
      *param_3 = (uint)*(ushort *)(param_8 + uVar8 * 2) |
                 *(int *)(param_1 + lVar6 * 4) << (bVar2 & 0x1f);
      param_3[1] = (uint)*(ushort *)(param_8 + 2 + uVar8 * 2) |
                   *(int *)(param_2 + lVar6 * 4) << (bVar2 & 0x1f);
    }
  }
  else if (0 < (int)param_5) {
    param_3 = param_3 + 1;
    uVar8 = 0;
    do {
      iVar1 = *(int *)(param_2 + uVar8 * 4);
      iVar7 = (*(int *)(param_1 + uVar8 * 4) + iVar1) - (iVar1 * param_7 >> (param_6 & 0x1f));
      param_3[-1] = (uint)*(ushort *)(param_8 + uVar8 * 4) | iVar7 << (bVar2 & 0x1f);
      *param_3 = (uint)*(ushort *)(param_8 + 2 + uVar8 * 4) | iVar7 - iVar1 << (bVar2 & 0x1f);
      uVar8 = uVar8 + 1;
      param_3 = param_3 + param_4;
    } while (param_5 != uVar8);
  }
  return;
}

