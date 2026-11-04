// name: FUN_10029a91a
// address: 10029a91a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10029a91a(long param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong unaff_R12;
  bool bVar13;
  undefined1 auVar14 [16];
  
  DAT_1008b5be0 = (long *)0x0;
  DAT_1008b5be8 = 0;
  DAT_1008b5bd0 = (void *)0x0;
  DAT_1008b5bd8 = 0;
  DAT_1008b5bf0 = 1.0;
  uVar9 = 0;
  uVar10 = 0;
  lVar11 = 0;
  do {
    uVar1 = *(ulong *)(param_1 + lVar11);
    if (uVar10 != 0) {
      uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
      uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar8 >> 0x38 < 2) {
        unaff_R12 = uVar10 - 1 & uVar1;
      }
      else {
        unaff_R12 = uVar1;
        if (uVar10 <= uVar1) {
          unaff_R12 = uVar1 % uVar10;
        }
      }
      plVar4 = *(long **)((long)DAT_1008b5bd0 + unaff_R12 * 8);
      if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
        do {
          uVar6 = plVar4[1];
          if (uVar6 == uVar1) {
            if (plVar4[2] == uVar1) goto LAB_10029ad89;
          }
          else {
            if ((byte)(uVar8 >> 0x38) < 2) {
              uVar6 = uVar6 & uVar10 - 1;
            }
            else if (uVar10 <= uVar6) {
              uVar6 = uVar6 % uVar10;
            }
            if (uVar6 != unaff_R12) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    plVar4 = operator_new(0x20);
    *plVar4 = 0;
    plVar4[1] = uVar1;
    lVar2 = ((long *)(lVar11 + param_1))[1];
    plVar4[2] = *(long *)(lVar11 + param_1);
    plVar4[3] = lVar2;
    if ((uVar10 == 0) || ((float)uVar10 * DAT_1008b5bf0 < (float)(uVar9 + 1))) {
      uVar8 = 1;
      if (2 < uVar10) {
        uVar8 = (ulong)((uVar10 & uVar10 - 1) != 0);
      }
      auVar14 = ZEXT416((uint)((float)(uVar9 + 1) / DAT_1008b5bf0));
      auVar14 = roundss(auVar14,auVar14,10);
      uVar9 = (ulong)auVar14._0_4_;
      uVar8 = uVar10 * 2 | uVar8;
      uVar9 = (long)(auVar14._0_4_ - _DAT_10070844c) & (long)uVar9 >> 0x3f | uVar9;
      if (uVar9 < uVar8) {
        uVar9 = uVar8;
      }
      uVar8 = 2;
      if ((uVar9 != 1) && (uVar8 = uVar9, (uVar9 & uVar9 - 1) != 0)) {
        uVar8 = std::__next_prime(uVar9);
        uVar10 = DAT_1008b5bd8;
      }
      if (uVar10 < uVar8) {
LAB_10029ab4e:
        uVar10 = uVar8;
        if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1001082d0();
        }
        pvVar5 = operator_new(uVar10 * 8);
        pvVar3 = DAT_1008b5bd0;
        bVar13 = DAT_1008b5bd0 != (void *)0x0;
        DAT_1008b5bd0 = pvVar5;
        if (bVar13) {
          operator_delete(pvVar3);
        }
        uVar9 = 0;
        DAT_1008b5bd8 = uVar10;
        do {
          *(undefined8 *)((long)DAT_1008b5bd0 + uVar9 * 8) = 0;
          plVar7 = DAT_1008b5be0;
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
        if (DAT_1008b5be0 != (long *)0x0) {
          uVar9 = DAT_1008b5be0[1];
          uVar8 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
          uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
          uVar8 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar8 >> 0x38 < 2) {
            uVar9 = uVar9 & uVar10 - 1;
          }
          else if (uVar10 <= uVar9) {
            uVar9 = uVar9 % uVar10;
          }
          *(long ***)((long)DAT_1008b5bd0 + uVar9 * 8) = &DAT_1008b5be0;
          plVar12 = (long *)*plVar7;
          if (plVar12 != (long *)0x0) {
            do {
              uVar6 = plVar12[1];
              if ((byte)(uVar8 >> 0x38) < 2) {
                uVar6 = uVar6 & uVar10 - 1;
              }
              else if (uVar10 <= uVar6) {
                uVar6 = uVar6 % uVar10;
              }
              if (uVar6 != uVar9) {
                if (*(long *)((long)DAT_1008b5bd0 + uVar6 * 8) == 0) {
                  *(long **)((long)DAT_1008b5bd0 + uVar6 * 8) = plVar7;
                  uVar9 = uVar6;
                }
                else {
                  *plVar7 = *plVar12;
                  *plVar12 = **(long **)((long)DAT_1008b5bd0 + uVar6 * 8);
                  **(undefined8 **)((long)DAT_1008b5bd0 + uVar6 * 8) = plVar12;
                  plVar12 = plVar7;
                }
              }
              plVar7 = plVar12;
              plVar12 = (long *)*plVar7;
            } while (plVar12 != (long *)0x0);
          }
        }
      }
      else if (uVar8 < uVar10) {
        auVar14 = roundss(ZEXT416((uint)((float)DAT_1008b5be8 / DAT_1008b5bf0)),
                          ZEXT416((uint)((float)DAT_1008b5be8 / DAT_1008b5bf0)),10);
        uVar9 = (ulong)auVar14._0_4_;
        uVar9 = (long)(auVar14._0_4_ - _DAT_10070844c) & (long)uVar9 >> 0x3f | uVar9;
        if ((uVar10 < 3) ||
           (uVar6 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
           uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333),
           1 < (byte)(((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar6 = std::__next_prime(uVar9);
        }
        else {
          lVar2 = 0x3f;
          if (uVar9 - 1 != 0) {
            for (; uVar9 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uVar6 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
          if (uVar9 < 2) {
            uVar6 = uVar9;
          }
        }
        pvVar3 = DAT_1008b5bd0;
        if (uVar6 < uVar8) {
          uVar6 = uVar8;
        }
        bVar13 = uVar6 < uVar10;
        uVar10 = DAT_1008b5bd8;
        if (bVar13) {
          uVar8 = uVar6;
          if (uVar6 != 0) goto LAB_10029ab4e;
          DAT_1008b5bd0 = (void *)0x0;
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
          DAT_1008b5bd8 = 0;
          uVar10 = 0;
        }
      }
      if ((uVar10 & uVar10 - 1) == 0) {
        unaff_R12 = uVar10 - 1 & uVar1;
      }
      else {
        unaff_R12 = uVar1;
        if (uVar10 <= uVar1) {
          unaff_R12 = uVar1 % uVar10;
        }
      }
    }
    pvVar3 = DAT_1008b5bd0;
    plVar7 = *(long **)((long)DAT_1008b5bd0 + unaff_R12 * 8);
    if (plVar7 == (long *)0x0) {
      *plVar4 = (long)DAT_1008b5be0;
      DAT_1008b5be0 = plVar4;
      *(long ***)((long)pvVar3 + unaff_R12 * 8) = &DAT_1008b5be0;
      if (*plVar4 != 0) {
        uVar9 = *(ulong *)(*plVar4 + 8);
        if ((uVar10 & uVar10 - 1) == 0) {
          uVar9 = uVar9 & uVar10 - 1;
        }
        else if (uVar10 <= uVar9) {
          uVar9 = uVar9 % uVar10;
        }
        plVar7 = (long *)(uVar9 * 8 + (long)DAT_1008b5bd0);
        goto LAB_10029ad75;
      }
    }
    else {
      *plVar4 = *plVar7;
LAB_10029ad75:
      *plVar7 = (long)plVar4;
    }
    uVar9 = DAT_1008b5be8 + 1;
    DAT_1008b5be8 = uVar9;
LAB_10029ad89:
    lVar11 = lVar11 + 0x10;
    if (lVar11 == 0x340) {
      return;
    }
  } while( true );
}

