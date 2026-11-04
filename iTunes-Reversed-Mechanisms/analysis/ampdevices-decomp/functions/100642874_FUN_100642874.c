// name: FUN_100642874
// address: 100642874

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100642874(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_R12;
  long *plVar10;
  undefined1 auVar11 [16];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1002ec9a2(param_1,*(undefined8 *)(param_2 + 8));
  plVar10 = *(long **)(param_2 + 0x10);
  if (plVar10 != (long *)0x0) {
    plVar1 = param_1 + 2;
    uVar9 = param_1[1];
    do {
      uVar2 = *(uint *)(plVar10 + 2);
      uVar5 = (ulong)uVar2;
      if (uVar9 != 0) {
        uVar8 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
        uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar8 >> 0x38 < 2) {
          unaff_R12 = (ulong)(uVar2 & (int)uVar9 - 1U);
        }
        else {
          unaff_R12 = uVar5;
          if (uVar9 <= uVar5) {
            unaff_R12 = uVar5 % (uVar9 & 0xffffffff);
          }
        }
        plVar4 = *(long **)(*param_1 + unaff_R12 * 8);
        if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
          do {
            uVar7 = plVar4[1];
            if (uVar7 == uVar5) {
              if (*(uint *)(plVar4 + 2) == uVar2) goto LAB_100642b17;
            }
            else {
              if ((byte)(uVar8 >> 0x38) < 2) {
                uVar7 = uVar7 & uVar9 - 1;
              }
              else if (uVar9 <= uVar7) {
                uVar7 = uVar7 % uVar9;
              }
              if (uVar7 != unaff_R12) break;
            }
            plVar4 = (long *)*plVar4;
          } while (plVar4 != (long *)0x0);
        }
      }
      plVar4 = operator_new(0x18);
      *plVar4 = 0;
      plVar4[1] = uVar5;
      *(uint *)(plVar4 + 2) = uVar2;
      if ((uVar9 == 0) || ((float)uVar9 * *(float *)(param_1 + 4) < (float)(param_1[3] + 1))) {
        uVar8 = 1;
        if (2 < uVar9) {
          uVar8 = (ulong)((uVar9 & uVar9 - 1) != 0);
        }
        auVar11 = ZEXT416((uint)((float)(param_1[3] + 1) / *(float *)(param_1 + 4)));
        auVar11 = roundss(auVar11,auVar11,10);
        uVar7 = (ulong)auVar11._0_4_;
        uVar8 = uVar9 * 2 | uVar8;
        uVar7 = (long)(auVar11._0_4_ - _DAT_10070844c) & (long)uVar7 >> 0x3f | uVar7;
        if (uVar7 < uVar8) {
          uVar7 = uVar8;
        }
        FUN_1002ec9a2(param_1,uVar7);
        uVar9 = param_1[1];
        if ((uVar9 & uVar9 - 1) == 0) {
          unaff_R12 = (ulong)(uVar2 & (int)uVar9 - 1U);
        }
        else {
          unaff_R12 = uVar5;
          if (uVar9 <= uVar5) {
            unaff_R12 = uVar5 % uVar9;
          }
        }
      }
      lVar3 = *param_1;
      plVar6 = *(long **)(lVar3 + unaff_R12 * 8);
      if (plVar6 == (long *)0x0) {
        *plVar4 = *plVar1;
        *plVar1 = (long)plVar4;
        *(long **)(lVar3 + unaff_R12 * 8) = plVar1;
        if (*plVar4 != 0) {
          uVar5 = *(ulong *)(*plVar4 + 8);
          if ((uVar9 & uVar9 - 1) == 0) {
            uVar5 = uVar5 & uVar9 - 1;
          }
          else if (uVar9 <= uVar5) {
            uVar5 = uVar5 % uVar9;
          }
          plVar6 = (long *)(uVar5 * 8 + *param_1);
          goto LAB_100642b10;
        }
      }
      else {
        *plVar4 = *plVar6;
LAB_100642b10:
        *plVar6 = (long)plVar4;
      }
      param_1[3] = param_1[3] + 1;
LAB_100642b17:
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return;
}

