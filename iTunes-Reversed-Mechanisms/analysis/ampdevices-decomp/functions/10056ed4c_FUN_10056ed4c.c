// name: FUN_10056ed4c
// address: 10056ed4c

void FUN_10056ed4c(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar10 = (ulong)param_2;
    uVar7 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = ((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar7 >> 0x38 < 2) {
      uVar11 = (ulong)(param_2 & (int)uVar2 - 1U);
    }
    else {
      uVar11 = uVar10;
      if (uVar2 <= uVar10) {
        uVar11 = (ulong)param_2 % (uVar2 & 0xffffffff);
      }
    }
    lVar3 = *param_1;
    puVar4 = *(undefined8 **)(lVar3 + uVar11 * 8);
    if ((puVar4 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar4, plVar12 != (long *)0x0)) {
      uVar1 = uVar2 - 1;
      do {
        uVar8 = plVar12[1];
        bVar5 = (byte)(uVar7 >> 0x38);
        if (uVar8 == uVar10) {
          if (*(uint *)(plVar12 + 2) == param_2) {
            lVar13 = *plVar12;
            if (bVar5 < 2) {
              uVar10 = (ulong)(param_2 & (uint)uVar1);
            }
            else if (uVar2 <= uVar10) {
              uVar10 = uVar10 % uVar2;
            }
            plVar6 = *(long **)(lVar3 + uVar10 * 8);
            do {
              plVar9 = plVar6;
              plVar6 = (long *)*plVar9;
            } while ((long *)*plVar9 != plVar12);
            if (plVar9 == param_1 + 2) {
LAB_10056ee8f:
              if (lVar13 == 0) {
LAB_10056eeb8:
                *(undefined8 *)(lVar3 + uVar10 * 8) = 0;
                lVar13 = *plVar12;
                goto LAB_10056eec3;
              }
              uVar7 = *(ulong *)(lVar13 + 8);
              if (bVar5 < 2) {
                uVar11 = uVar7 & uVar1;
              }
              else {
                uVar11 = uVar7;
                if (uVar2 <= uVar7) {
                  uVar11 = uVar7 % uVar2;
                }
              }
              if (uVar11 != uVar10) goto LAB_10056eeb8;
            }
            else {
              uVar7 = plVar9[1];
              if (bVar5 < 2) {
                uVar7 = uVar7 & uVar1;
              }
              else if (uVar2 <= uVar7) {
                uVar7 = uVar7 % uVar2;
              }
              if (uVar7 != uVar10) goto LAB_10056ee8f;
LAB_10056eec3:
              if (lVar13 == 0) {
                lVar13 = 0;
                goto LAB_10056eefb;
              }
              uVar7 = *(ulong *)(lVar13 + 8);
            }
            if (bVar5 < 2) {
              uVar7 = uVar7 & uVar1;
            }
            else if (uVar2 <= uVar7) {
              uVar7 = uVar7 % uVar2;
            }
            if (uVar7 != uVar10) {
              *(long **)(*param_1 + uVar7 * 8) = plVar9;
              lVar13 = *plVar12;
            }
LAB_10056eefb:
            *plVar9 = lVar13;
            *plVar12 = 0;
            param_1[3] = param_1[3] + -1;
            operator_delete(plVar12);
            return;
          }
        }
        else {
          if (bVar5 < 2) {
            uVar8 = uVar8 & uVar1;
          }
          else if (uVar2 <= uVar8) {
            uVar8 = uVar8 % uVar2;
          }
          if (uVar8 != uVar11) {
            return;
          }
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  return;
}

