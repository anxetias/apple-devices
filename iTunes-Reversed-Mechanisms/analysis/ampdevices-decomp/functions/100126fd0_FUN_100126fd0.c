// name: FUN_100126fd0
// address: 100126fd0

undefined4
FUN_100126fd0(long param_1,ulong *param_2,int *param_3,uint param_4,int param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 local_34;
  
  uVar11 = 0xffffffce;
  if (param_6 != (int *)0x0 && (param_3 != (int *)0x0 && param_2 != (ulong *)0x0)) {
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc);
    uVar3 = *(uint *)(param_1 + 0x10);
    *param_6 = 0;
    uVar4 = (uint)param_2[2];
    uVar21 = uVar4;
    if (param_4 == 0) {
      local_34 = 0;
    }
    else {
      uVar6 = *param_2;
      iVar5 = *(int *)((long)param_2 + 0x14);
      uVar15 = (ulong)*(uint *)(param_1 + 4);
      uVar7 = ~(uint)(0xffffffffL << ((byte)param_5 & 0x3f));
      if (param_5 + -0x20 == 0) {
        uVar7 = 0xffffffff;
      }
      uVar14 = 0;
      uVar13 = 0;
LAB_1001270a8:
      do {
        if ((uint)(iVar5 << 3) <= uVar21) goto LAB_100127327;
        uVar9 = (int)(uVar15 >> 9) + 3;
        uVar17 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> uVar17 == 0; uVar17 = uVar17 - 1) {
          }
        }
        if (uVar2 <= uVar17) {
          uVar17 = uVar2;
        }
        uVar9 = *(uint *)(uVar6 + (uVar21 >> 3));
        uVar19 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18)
                 << ((byte)uVar21 & 7);
        uVar9 = uVar19 ^ 0xffffffff;
        if (uVar9 == 0) {
          uVar20 = 0x20;
          if (0xff7fffff < uVar19) goto LAB_1001270f1;
LAB_10012714f:
          uVar18 = uVar20 + uVar21 + 1;
          if (uVar17 != 1) {
            uVar19 = (uVar19 << ((char)uVar20 + 1U & 0x1f)) >> (-(byte)uVar17 & 0x1f);
            uVar9 = (uVar20 << ((byte)uVar17 & 0x1f)) - uVar20;
            if (uVar19 < 2) {
              uVar18 = uVar20 + uVar21 + uVar17;
              uVar20 = uVar9;
            }
            else {
              uVar18 = uVar18 + uVar17;
              uVar20 = (uVar9 + uVar19) - 1;
            }
          }
        }
        else {
          uVar20 = 0x1f;
          if (uVar9 != 0) {
            for (; uVar9 >> uVar20 == 0; uVar20 = uVar20 - 1) {
            }
          }
          uVar20 = uVar20 ^ 0x1f;
          if (uVar19 < 0xff800000) goto LAB_10012714f;
LAB_1001270f1:
          uVar17 = uVar21 + 9;
          uVar21 = uVar21 + 0x10;
          if (-1 < (int)uVar17) {
            uVar21 = uVar17;
          }
          uVar9 = *(uint *)(uVar6 + (uint)((int)uVar21 >> 3));
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          iVar10 = (uVar17 & 7) + param_5;
          cVar8 = (char)iVar10;
          if (iVar10 < 0x21) {
            uVar9 = uVar9 >> (-cVar8 & 0x1fU);
          }
          else {
            uVar9 = (uVar9 << (sbyte)(uVar17 & 7)) >> (-(char)(param_5 + -0x20) & 0x1fU) |
                    (uint)(*(byte *)(uVar6 + (((int)uVar21 >> 3) + 4)) >> (0x28U - cVar8 & 0x1f));
          }
          uVar18 = uVar17 + param_5;
          uVar20 = uVar9 & uVar7;
        }
        uVar21 = uVar18;
        piVar16 = param_3 + 1;
        *param_3 = (uVar20 + uVar14 + 1 >> 1) * (-(uVar20 + uVar14 & 1) | 1);
        uVar13 = uVar13 + 1;
        uVar14 = ((int)uVar15 - ((uint)((int)uVar15 * iVar1) >> 9)) + (uVar20 + uVar14) * iVar1;
        if (0xffff < uVar20) {
          uVar14 = 0xffff;
        }
        uVar15 = (ulong)uVar14;
        if ((param_4 <= uVar13) || ((uVar14 & 0x3fffff80) != 0)) {
          local_34 = 0;
          uVar14 = 0;
          param_3 = piVar16;
          if (param_4 <= uVar13) break;
          goto LAB_1001270a8;
        }
        uVar17 = *(uint *)(uVar6 + (uVar21 >> 3));
        uVar17 = (uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                 uVar17 << 0x18) << ((byte)uVar21 & 7);
        if (uVar17 < 0xff800000) {
          if (uVar14 == 0) {
            uVar9 = 0x20;
          }
          else {
            uVar9 = 0x1f;
            if (uVar14 != 0) {
              for (; uVar14 >> uVar9 == 0; uVar9 = uVar9 - 1) {
              }
            }
            uVar9 = uVar9 ^ 0x1f;
          }
          uVar19 = uVar14 + 0x10 >> 6;
          bVar12 = ((char)uVar9 + (char)uVar19) - 0x18;
          uVar14 = 0x1f;
          if (~uVar17 != 0) {
            for (; ~uVar17 >> uVar14 == 0; uVar14 = uVar14 - 1) {
            }
          }
          uVar14 = uVar14 ^ 0x1f;
          uVar18 = (uVar17 << ((char)uVar14 + 1U & 0x1f)) >> (-bVar12 & 0x1f);
          uVar17 = (~(-1 << (bVar12 & 0x1f)) & uVar3) * uVar14;
          uVar20 = (uVar17 + uVar18) - 1;
          if (uVar18 < 2) {
            uVar20 = uVar17;
          }
          uVar21 = (uVar21 + uVar9 + uVar19 + uVar14 + -0x17) - (uint)(uVar18 < 2);
          uVar14 = uVar20 + uVar13;
          if (uVar14 <= param_4) goto LAB_1001272b5;
LAB_100127327:
          local_34 = 0xffffff30;
          break;
        }
        uVar20 = uVar17 >> 7 & 0xffff;
        uVar21 = uVar21 + 0x19;
        uVar14 = (uVar17 >> 7 & 0xffff) + uVar13;
        if (param_4 < uVar14) goto LAB_100127327;
LAB_1001272b5:
        if (uVar20 != 0) {
          ___bzero();
          piVar16 = param_3 + (ulong)(uVar20 - 1) + 2;
          uVar13 = uVar14;
        }
        local_34 = 0;
        uVar14 = (uint)(uVar20 < 0xffff);
        uVar15 = 0;
        param_3 = piVar16;
      } while (uVar13 < param_4);
    }
    *param_6 = uVar21 - uVar4;
    FUN_10015fdfe(param_2,uVar21 - uVar4);
    uVar11 = 0xffffff30;
    if (*param_2 <= param_2[1]) {
      uVar11 = local_34;
    }
  }
  return uVar11;
}

