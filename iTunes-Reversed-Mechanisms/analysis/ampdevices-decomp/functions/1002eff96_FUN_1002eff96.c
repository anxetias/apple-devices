// name: FUN_1002eff96
// address: 1002eff96

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002eff96(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  undefined1 auVar19 [16];
  ulong local_98;
  ulong local_78;
  ulong local_68;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = *(long **)(param_1 + 8);
  local_58 = *(int *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_58,4,1);
  *(int *)(param_1 + 0x10) = local_58;
  plVar1 = *(long **)(param_1 + 8);
  local_58 = *(int *)(param_2 + *param_3);
  *param_3 = *param_3 + 4;
  (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_58,4,1);
  iVar4 = local_58;
  if (local_58 != 0) {
    iVar6 = 0;
    do {
      plVar1 = *(long **)(param_1 + 8);
      uVar14 = *(undefined8 *)(param_2 + *param_3);
      local_58 = (int)uVar14;
      uStack_54 = (undefined4)((ulong)uVar14 >> 0x20);
      *param_3 = *param_3 + 8;
      (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_58,8,1);
      lVar3 = CONCAT44(uStack_54,local_58);
      plVar1 = *(long **)(param_1 + 8);
      local_58 = *(int *)(param_2 + *param_3);
      *param_3 = *param_3 + 4;
      (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_58,4,1);
      iVar18 = local_58;
      plVar1 = *(long **)(param_1 + 0x18);
      lVar7 = FUN_1002f17a0(plVar1,lVar3);
      if (lVar7 == 0) {
        puVar8 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
        if (puVar8 == (undefined8 *)0x0) {
          uVar14 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar14,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            local_4a = "genre_ids != __null";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          break;
        }
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 4) = 0x3f800000;
        uVar9 = ~(lVar3 << 0x20) + lVar3;
        uVar9 = uVar9 >> 0x16 ^ uVar9;
        uVar9 = ~(uVar9 << 0xd) + uVar9;
        uVar9 = (uVar9 >> 8 ^ uVar9) * 9;
        uVar9 = uVar9 >> 0xf ^ uVar9;
        uVar9 = ~(uVar9 << 0x1b) + uVar9;
        uVar9 = uVar9 >> 0x1f ^ uVar9;
        local_68 = plVar1[1];
        if (local_68 != 0) {
          uVar15 = local_68 - (local_68 >> 1 & 0x5555555555555555);
          uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
          uVar15 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar15 >> 0x38 < 2) {
            local_98 = local_68 - 1 & uVar9;
          }
          else {
            local_98 = uVar9;
            if (local_68 <= uVar9) {
              local_98 = uVar9 % local_68;
            }
          }
          plVar10 = *(long **)(*plVar1 + local_98 * 8);
          if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
            do {
              uVar16 = plVar10[1];
              if (uVar16 == uVar9) {
                if (plVar10[2] == lVar3) goto joined_r0x0001002f06fb;
              }
              else {
                if ((byte)(uVar15 >> 0x38) < 2) {
                  uVar16 = uVar16 & local_68 - 1;
                }
                else if (local_68 <= uVar16) {
                  uVar16 = uVar16 % local_68;
                }
                if (uVar16 != local_98) break;
              }
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
        plVar10 = operator_new(0x20);
        *plVar10 = 0;
        plVar10[1] = uVar9;
        plVar10[2] = lVar3;
        plVar10[3] = (long)puVar8;
        uVar15 = local_98;
        if (!(bool)(~(local_68 == 0) &
                   (float)(plVar1[3] + 1) <= (float)local_68 * *(float *)(plVar1 + 4))) {
          uVar15 = 1;
          if (2 < local_68) {
            uVar15 = (ulong)((local_68 & local_68 - 1) != 0);
          }
          auVar19 = ZEXT416((uint)((float)(plVar1[3] + 1) / *(float *)(plVar1 + 4)));
          auVar19 = roundss(auVar19,auVar19,10);
          uVar16 = (ulong)auVar19._0_4_;
          uVar15 = local_68 * 2 | uVar15;
          uVar16 = (long)(auVar19._0_4_ - _DAT_10070844c) & (long)uVar16 >> 0x3f | uVar16;
          if (uVar16 < uVar15) {
            uVar16 = uVar15;
          }
          local_78 = 2;
          if ((uVar16 != 1) && (local_78 = uVar16, (uVar16 & uVar16 - 1) != 0)) {
            local_78 = std::__next_prime(uVar16);
            local_68 = plVar1[1];
          }
          uVar15 = local_78;
          if (local_68 < local_78) {
LAB_1002f03a0:
            local_68 = uVar15;
            if (local_68 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1001082d0();
            }
            pvVar11 = operator_new(local_68 * 8);
            pvVar2 = (void *)*plVar1;
            *plVar1 = (long)pvVar11;
            if (pvVar2 != (void *)0x0) {
              operator_delete(pvVar2);
            }
            plVar1[1] = local_68;
            uVar15 = 0;
            do {
              *(undefined8 *)(*plVar1 + uVar15 * 8) = 0;
              uVar15 = uVar15 + 1;
            } while (local_68 != uVar15);
            plVar13 = (long *)plVar1[2];
            if (plVar13 != (long *)0x0) {
              uVar15 = plVar13[1];
              uVar16 = local_68 - (local_68 >> 1 & 0x5555555555555555);
              uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
              uVar16 = ((uVar16 >> 4) + uVar16 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar16 >> 0x38 < 2) {
                uVar15 = uVar15 & local_68 - 1;
              }
              else if (local_68 <= uVar15) {
                uVar15 = uVar15 % local_68;
              }
              *(long **)(*plVar1 + uVar15 * 8) = plVar1 + 2;
              plVar17 = (long *)*plVar13;
              if (plVar17 != (long *)0x0) {
                do {
                  uVar12 = plVar17[1];
                  if ((byte)(uVar16 >> 0x38) < 2) {
                    uVar12 = uVar12 & local_68 - 1;
                  }
                  else if (local_68 <= uVar12) {
                    uVar12 = uVar12 % local_68;
                  }
                  if (uVar12 != uVar15) {
                    if (*(long *)(*plVar1 + uVar12 * 8) == 0) {
                      *(long **)(*plVar1 + uVar12 * 8) = plVar13;
                      uVar15 = uVar12;
                    }
                    else {
                      *plVar13 = *plVar17;
                      *plVar17 = **(long **)(*plVar1 + uVar12 * 8);
                      **(undefined8 **)(*plVar1 + uVar12 * 8) = plVar17;
                      plVar17 = plVar13;
                    }
                  }
                  plVar13 = plVar17;
                  plVar17 = (long *)*plVar13;
                } while (plVar17 != (long *)0x0);
              }
            }
          }
          else if (local_78 < local_68) {
            auVar19 = roundss(ZEXT416((uint)((float)(ulong)plVar1[3] / *(float *)(plVar1 + 4))),
                              ZEXT416((uint)((float)(ulong)plVar1[3] / *(float *)(plVar1 + 4))),10);
            uVar16 = (ulong)auVar19._0_4_;
            uVar16 = (long)(auVar19._0_4_ - _DAT_10070844c) & (long)uVar16 >> 0x3f | uVar16;
            if ((local_68 < 3) ||
               (uVar15 = local_68 - (local_68 >> 1 & 0x5555555555555555),
               uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333),
               1 < (byte)(((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              uVar15 = std::__next_prime(uVar16);
            }
            else {
              lVar3 = 0x3f;
              if (uVar16 - 1 != 0) {
                for (; uVar16 - 1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              uVar15 = 1L << (-((byte)lVar3 ^ 0x3f) & 0x3f);
              if (uVar16 < 2) {
                uVar15 = uVar16;
              }
            }
            if (uVar15 < local_78) {
              uVar15 = local_78;
            }
            if (uVar15 < local_68) {
              if (uVar15 != 0) goto LAB_1002f03a0;
              pvVar2 = (void *)*plVar1;
              *plVar1 = 0;
              if (pvVar2 != (void *)0x0) {
                operator_delete(pvVar2);
              }
              plVar1[1] = 0;
              local_68 = 0;
            }
            else {
              local_68 = plVar1[1];
            }
          }
          if ((local_68 & local_68 - 1) == 0) {
            uVar15 = uVar9 & local_68 - 1;
          }
          else {
            uVar15 = uVar9;
            if (local_68 <= uVar9) {
              uVar15 = uVar9 % local_68;
            }
          }
        }
        lVar3 = *plVar1;
        plVar13 = *(long **)(lVar3 + uVar15 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar10 = plVar1[2];
          plVar1[2] = (long)plVar10;
          *(long **)(lVar3 + uVar15 * 8) = plVar1 + 2;
          if (*plVar10 != 0) {
            uVar9 = *(ulong *)(*plVar10 + 8);
            if ((local_68 & local_68 - 1) == 0) {
              uVar9 = uVar9 & local_68 - 1;
            }
            else if (local_68 <= uVar9) {
              uVar9 = uVar9 % local_68;
            }
            plVar13 = (long *)(uVar9 * 8 + *plVar1);
            goto LAB_1002f06ed;
          }
        }
        else {
          *plVar10 = *plVar13;
LAB_1002f06ed:
          *plVar13 = (long)plVar10;
        }
        plVar1[3] = plVar1[3] + 1;
      }
      else {
        puVar8 = *(undefined8 **)(lVar7 + 0x18);
      }
joined_r0x0001002f06fb:
      for (; iVar18 != 0; iVar18 = iVar18 + -1) {
        plVar1 = *(long **)(param_1 + 8);
        uVar14 = *(undefined8 *)(param_2 + *param_3);
        local_58 = (int)uVar14;
        uStack_54 = (undefined4)((ulong)uVar14 >> 0x20);
        *param_3 = *param_3 + 8;
        (**(code **)(*plVar1 + 0x48))(plVar1[1],&local_58,8,1);
        FUN_1002f0fa0(puVar8,CONCAT44(uStack_54,local_58));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

