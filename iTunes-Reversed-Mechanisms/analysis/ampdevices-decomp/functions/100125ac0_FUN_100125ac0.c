// name: FUN_100125ac0
// address: 100125ac0

void FUN_100125ac0(long param_1,long param_2,undefined1 *param_3,int param_4,uint param_5,
                  byte param_6,int param_7,long param_8,int param_9)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  bVar4 = (char)param_9 * '\b';
  if (param_7 == 0) {
    if (param_9 == 0) {
      if (0 < (int)param_5) {
        if (param_5 == 1) {
          uVar10 = 0;
        }
        else {
          uVar6 = (ulong)(param_4 * 3 - 3);
          uVar10 = 0;
          do {
            uVar3 = *(undefined4 *)(param_1 + uVar10 * 4);
            param_3[2] = (char)((uint)uVar3 >> 0x10);
            param_3[1] = (char)((uint)uVar3 >> 8);
            *param_3 = (char)uVar3;
            uVar3 = *(undefined4 *)(param_2 + uVar10 * 4);
            param_3[5] = (char)((uint)uVar3 >> 0x10);
            param_3[4] = (char)((uint)uVar3 >> 8);
            param_3[3] = (char)uVar3;
            uVar3 = *(undefined4 *)(param_1 + 4 + uVar10 * 4);
            param_3[uVar6 + 5] = (char)((uint)uVar3 >> 0x10);
            param_3[uVar6 + 4] = (char)((uint)uVar3 >> 8);
            param_3[uVar6 + 3] = (char)uVar3;
            uVar3 = *(undefined4 *)(param_2 + 4 + uVar10 * 4);
            param_3[uVar6 + 8] = (char)((uint)uVar3 >> 0x10);
            param_3[uVar6 + 7] = (char)((uint)uVar3 >> 8);
            param_3[uVar6 + 6] = (char)uVar3;
            param_3 = param_3 + uVar6 * 2 + 6;
            uVar10 = uVar10 + 2;
          } while ((param_5 & 0x7ffffffe) != uVar10);
        }
        if ((param_5 & 1) != 0) {
          uVar3 = *(undefined4 *)(param_1 + uVar10 * 4);
          param_3[2] = (char)((uint)uVar3 >> 0x10);
          param_3[1] = (char)((uint)uVar3 >> 8);
          *param_3 = (char)uVar3;
          uVar3 = *(undefined4 *)(param_2 + uVar10 * 4);
          param_3[5] = (char)((uint)uVar3 >> 0x10);
          param_3[4] = (char)((uint)uVar3 >> 8);
          param_3[3] = (char)uVar3;
        }
      }
    }
    else if (0 < (int)param_5) {
      param_3 = param_3 + 5;
      uVar10 = 0;
      do {
        uVar9 = *(int *)(param_1 + uVar10 * 4) << (bVar4 & 0x1f);
        uVar8 = *(ushort *)(param_8 + uVar10 * 4) | uVar9;
        uVar11 = *(int *)(param_2 + uVar10 * 4) << (bVar4 & 0x1f);
        uVar5 = *(ushort *)(param_8 + 2 + uVar10 * 4) | uVar11;
        param_3[-3] = (char)(uVar9 >> 0x10);
        param_3[-4] = (char)(uVar8 >> 8);
        param_3[-5] = (char)uVar8;
        *param_3 = (char)(uVar11 >> 0x10);
        param_3[-1] = (char)(uVar5 >> 8);
        param_3[-2] = (char)uVar5;
        uVar10 = uVar10 + 1;
        param_3 = param_3 + (ulong)(param_4 * 3 - 3) + 3;
      } while (param_5 != uVar10);
    }
  }
  else if (param_9 == 0) {
    if (0 < (int)param_5) {
      param_3 = param_3 + 5;
      uVar10 = 0;
      do {
        iVar2 = *(int *)(param_2 + uVar10 * 4);
        iVar7 = (*(int *)(param_1 + uVar10 * 4) + iVar2) - (iVar2 * param_7 >> (param_6 & 0x1f));
        param_3[-3] = (char)((uint)iVar7 >> 0x10);
        param_3[-4] = (char)((uint)iVar7 >> 8);
        param_3[-5] = (char)iVar7;
        iVar7 = iVar7 - iVar2;
        *param_3 = (char)((uint)iVar7 >> 0x10);
        param_3[-1] = (char)((uint)iVar7 >> 8);
        param_3[-2] = (char)iVar7;
        uVar10 = uVar10 + 1;
        param_3 = param_3 + (ulong)(param_4 * 3 - 3) + 3;
      } while (param_5 != uVar10);
    }
  }
  else if (0 < (int)param_5) {
    param_3 = param_3 + 5;
    uVar10 = 0;
    do {
      iVar2 = *(int *)(param_2 + uVar10 * 4);
      iVar7 = (*(int *)(param_1 + uVar10 * 4) + iVar2) - (iVar2 * param_7 >> (param_6 & 0x1f));
      uVar8 = iVar7 << (bVar4 & 0x1f);
      uVar5 = *(ushort *)(param_8 + uVar10 * 4) | uVar8;
      uVar1 = *(ushort *)(param_8 + 2 + uVar10 * 4);
      param_3[-3] = (char)(uVar8 >> 0x10);
      param_3[-4] = (char)(uVar5 >> 8);
      param_3[-5] = (char)uVar5;
      uVar8 = iVar7 - iVar2 << (bVar4 & 0x1f);
      uVar5 = uVar1 | uVar8;
      *param_3 = (char)(uVar8 >> 0x10);
      param_3[-1] = (char)(uVar5 >> 8);
      param_3[-2] = (char)uVar5;
      uVar10 = uVar10 + 1;
      param_3 = param_3 + (ulong)(param_4 * 3 - 3) + 3;
    } while (param_5 != uVar10);
  }
  return;
}

