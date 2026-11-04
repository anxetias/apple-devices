// name: FUN_100625382
// address: 100625382

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100625382(long param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  float fVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_88 [16];
  long *local_78;
  ulong local_70;
  long *local_68;
  long *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1002188e4(param_4);
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x56d2;
      uStack_48 = 0x7f;
      uStack_47 = 0;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,
                          "**ERROR**: SocialProfileLookup::Setup() failed! status:%d",&local_58,0x16
                         );
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_1001b8428(param_3);
    if (cVar2 == '\0') {
      plVar16 = (long *)(param_1 + 0x48);
      local_78 = param_4;
      lVar5 = FUN_1002b8060(plVar16,param_2);
      if (lVar5 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x56dd;
          uStack_48 = 0x7f;
          uStack_47 = 0;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar4,0x10,
                              "**ERROR**: SocialProfileLookup::Setup() failed! status:%d",&local_58,
                              0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = 0x2368;
        goto LAB_10062545e;
      }
      iVar3 = FUN_10058dc38(param_2,param_3,local_78);
      if (iVar3 != 0) {
        if (DAT_1008c7d30 != -1) {
          _dispatch_once(&DAT_1008c7d30,&PTR___NSConcreteGlobalBlock_100871100);
        }
        uVar4 = DAT_1008c7d28;
        cVar2 = _os_log_type_enabled(DAT_1008c7d28,0x10);
        if (cVar2 != '\0') {
          uVar6 = FUN_1001b83ae(param_3);
          local_58 = 0x8220202;
          uStack_54 = (undefined4)uVar6;
          uStack_50 = (undefined4)((ulong)uVar6 >> 0x20);
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar3;
          uStack_48 = (undefined1)((uint)iVar3 >> 0x10);
          uStack_47 = (undefined1)((uint)iVar3 >> 0x18);
          __os_log_impl(0x100000000,uVar4,0x10,
                        "**ERROR**: AddSocialProfile - SocialProfileInfo::Create(%{public}s) failed! status:%d"
                        ,&local_58,0x12);
        }
        goto LAB_10062545e;
      }
      local_60 = *(long **)(param_1 + 0x50);
      if (local_60 != (long *)0x0) {
        uVar14 = (long)local_60 - ((ulong)local_60 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar14 >> 0x38 < 2) {
          local_70 = (long)local_60 - 1U & param_2;
        }
        else {
          local_70 = param_2;
          if (local_60 <= param_2) {
            local_70 = param_2 % (ulong)local_60;
          }
        }
        puVar8 = *(undefined8 **)(*plVar16 + local_70 * 8);
        if ((puVar8 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar8, plVar11 != (long *)0x0)) {
          do {
            uVar12 = plVar11[1];
            if (uVar12 == param_2) {
              if (plVar11[2] == param_2) goto LAB_100625b3d;
            }
            else {
              if ((byte)(uVar14 >> 0x38) < 2) {
                uVar12 = uVar12 & (long)local_60 - 1U;
              }
              else if (local_60 <= uVar12) {
                uVar12 = uVar12 % (ulong)local_60;
              }
              if (uVar12 != local_70) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      plVar15 = (long *)(param_1 + 0x58);
      plVar11 = operator_new(0x28);
      local_58 = SUB84(plVar11,0);
      uStack_54 = (undefined4)((ulong)plVar11 >> 0x20);
      uStack_50 = SUB84(plVar15,0);
      uStack_4c = (undefined2)((ulong)plVar15 >> 0x20);
      uStack_4a = (undefined2)((ulong)plVar15 >> 0x30);
      *plVar11 = 0;
      plVar11[1] = param_2;
      plVar11[2] = param_2;
      plVar11[3] = 0;
      plVar11[4] = 0;
      uStack_48 = 1;
      fVar18 = (float)(*(long *)(param_1 + 0x60) + 1);
      local_68 = plVar15;
      if ((local_60 == (long *)0x0) ||
         (uVar14 = local_70, (float)local_60 * *(float *)(param_1 + 0x68) < fVar18)) {
        uVar14 = 1;
        if (2 < local_60) {
          uVar14 = (ulong)(((ulong)local_60 & (long)local_60 - 1U) != 0);
        }
        uVar14 = uVar14 | (long)local_60 * 2;
        auVar20 = ZEXT416((uint)(fVar18 / *(float *)(param_1 + 0x68)));
        auVar20 = roundss(auVar20,auVar20,10);
        uVar12 = (ulong)auVar20._0_4_;
        uVar12 = (long)(auVar20._0_4_ - _DAT_10070844c) & (long)uVar12 >> 0x3f | uVar12;
        if (uVar12 < uVar14) {
          uVar12 = uVar14;
        }
        local_70 = 2;
        uVar14 = local_70;
        if ((uVar12 != 1) && (uVar14 = uVar12, (uVar12 & uVar12 - 1) != 0)) {
          uVar14 = std::__next_prime(uVar12);
          local_60 = *(long **)(param_1 + 0x50);
        }
        local_70 = uVar14;
        plVar15 = (long *)local_70;
        if (local_60 < local_70) {
LAB_10062581e:
          if ((ulong)plVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1001082d0();
          }
          pvVar9 = operator_new((long)plVar15 * 8);
          pvVar1 = (void *)*plVar16;
          *plVar16 = (long)pvVar9;
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
          *(long **)(param_1 + 0x50) = plVar15;
          uVar14 = 0;
          do {
            *(undefined8 *)(*plVar16 + uVar14 * 8) = 0;
            uVar14 = uVar14 + 1;
          } while (plVar15 != (long *)uVar14);
          plVar13 = (long *)*local_68;
          if (plVar13 != (long *)0x0) {
            uVar14 = plVar13[1];
            uVar12 = (long)plVar15 - ((ulong)plVar15 >> 1 & 0x5555555555555555);
            uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar12 >> 0x38 < 2) {
              uVar14 = uVar14 & (long)plVar15 - 1U;
            }
            else if (plVar15 <= uVar14) {
              uVar14 = uVar14 % (ulong)plVar15;
            }
            *(long **)(*plVar16 + uVar14 * 8) = local_68;
            plVar17 = (long *)*plVar13;
            if (plVar17 != (long *)0x0) {
              do {
                uVar7 = plVar17[1];
                if ((byte)(uVar12 >> 0x38) < 2) {
                  uVar7 = uVar7 & (long)plVar15 - 1U;
                }
                else if (plVar15 <= uVar7) {
                  uVar7 = uVar7 % (ulong)plVar15;
                }
                if (uVar7 != uVar14) {
                  if (*(long *)(*plVar16 + uVar7 * 8) == 0) {
                    *(long **)(*plVar16 + uVar7 * 8) = plVar13;
                    uVar14 = uVar7;
                  }
                  else {
                    *plVar13 = *plVar17;
                    *plVar17 = **(long **)(*plVar16 + uVar7 * 8);
                    **(undefined8 **)(*plVar16 + uVar7 * 8) = plVar17;
                    plVar17 = plVar13;
                  }
                }
                plVar13 = plVar17;
                plVar17 = (long *)*plVar13;
              } while (plVar17 != (long *)0x0);
            }
          }
        }
        else {
          plVar15 = local_60;
          if (local_70 < local_60) {
            auVar20 = ZEXT416((uint)((float)*(ulong *)(param_1 + 0x60) / *(float *)(param_1 + 0x68))
                             );
            auVar20 = roundss(auVar20,auVar20,10);
            uVar14 = (ulong)auVar20._0_4_;
            uVar14 = (long)(auVar20._0_4_ - _DAT_10070844c) & (long)uVar14 >> 0x3f | uVar14;
            if ((local_60 < 3) ||
               (uVar12 = (long)local_60 - ((ulong)local_60 >> 1 & 0x5555555555555555),
               uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333),
               1 < (byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
               ) {
              plVar15 = (long *)std::__next_prime(uVar14);
            }
            else {
              lVar5 = 0x3f;
              if (uVar14 - 1 != 0) {
                for (; uVar14 - 1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              plVar15 = (long *)(1L << (-((byte)lVar5 ^ 0x3f) & 0x3f));
              if (uVar14 < 2) {
                plVar15 = (long *)uVar14;
              }
            }
            if (plVar15 < local_70) {
              plVar15 = (long *)local_70;
            }
            if (plVar15 < local_60) {
              if (plVar15 != (long *)0x0) goto LAB_10062581e;
              pvVar1 = (void *)*plVar16;
              *plVar16 = 0;
              if (pvVar1 != (void *)0x0) {
                operator_delete(pvVar1);
              }
              *(undefined8 *)(param_1 + 0x50) = 0;
              plVar15 = (long *)0;
            }
            else {
              plVar15 = (long *)*(ulong *)(param_1 + 0x50);
            }
          }
        }
        local_60 = plVar15;
        if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
          uVar14 = (long)plVar15 - 1U & param_2;
        }
        else {
          uVar14 = param_2;
          if (plVar15 <= param_2) {
            uVar14 = param_2 % (ulong)plVar15;
          }
        }
      }
      lVar5 = *plVar16;
      plVar15 = *(long **)(lVar5 + uVar14 * 8);
      if (plVar15 == (long *)0x0) {
        *plVar11 = *local_68;
        *local_68 = (long)plVar11;
        *(long **)(lVar5 + uVar14 * 8) = local_68;
        if (*plVar11 != 0) {
          uVar14 = *(ulong *)(*plVar11 + 8);
          if (((ulong)local_60 & (long)local_60 - 1U) == 0) {
            uVar14 = uVar14 & (long)local_60 - 1U;
          }
          else if (local_60 <= uVar14) {
            uVar14 = uVar14 % (ulong)local_60;
          }
          plVar15 = (long *)(uVar14 * 8 + *plVar16);
          goto LAB_100625b36;
        }
      }
      else {
        *plVar11 = *plVar15;
LAB_100625b36:
        *plVar15 = (long)plVar11;
      }
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
LAB_100625b3d:
      plVar15 = local_78;
      FUN_100203686(plVar11 + 3,local_78);
      FUN_1001b7a5c(local_88,*plVar15 + 0x20);
      local_60 = (long *)FUN_1001bd420(local_88);
      plVar16 = *(long **)(param_1 + 0x28);
      if (plVar16 != (long *)0x0) {
        uVar14 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar14 >> 0x38 < 2) {
          plVar15 = (long *)((long)plVar16 - 1U & (ulong)local_60);
        }
        else {
          plVar15 = local_60;
          if (plVar16 <= local_60) {
            plVar15 = (long *)((ulong)local_60 % (ulong)plVar16);
          }
        }
        plVar11 = *(long **)(*(long *)(param_1 + 0x20) + (long)plVar15 * 8);
        local_68 = plVar16;
        if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
          local_70 = (long)plVar16 - 1;
          do {
            plVar13 = (long *)plVar11[1];
            if (plVar13 == local_60) {
              iVar3 = FUN_1001b9c66(plVar11 + 2,local_88);
              if (iVar3 == 0) goto LAB_100625fbf;
            }
            else {
              if ((byte)(uVar14 >> 0x38) < 2) {
                plVar13 = (long *)((ulong)plVar13 & local_70);
              }
              else if (local_68 <= plVar13) {
                plVar13 = (long *)((ulong)plVar13 % (ulong)local_68);
              }
              plVar16 = local_68;
              if (plVar13 != plVar15) break;
            }
            plVar11 = (long *)*plVar11;
            plVar16 = local_68;
          } while (plVar11 != (long *)0x0);
        }
      }
      puVar8 = operator_new(0x28);
      local_68 = (long *)(param_1 + 0x30);
      local_58 = SUB84(puVar8,0);
      uStack_54 = (undefined4)((ulong)puVar8 >> 0x20);
      uStack_50 = SUB84(local_68,0);
      uStack_4c = (undefined2)((ulong)local_68 >> 0x20);
      uStack_4a = (undefined2)((ulong)local_68 >> 0x30);
      uStack_48 = 0;
      *puVar8 = 0;
      puVar8[1] = local_60;
      auVar20._0_8_ = FUN_1001b7a88(puVar8 + 2,local_88);
      auVar20._8_8_ = extraout_XMM0_Qb;
      puVar8[4] = 0;
      uStack_48 = 1;
      auVar19._4_12_ = auVar20._4_12_;
      fVar18 = (float)(*(long *)(param_1 + 0x38) + 1);
      if ((plVar16 == (long *)0x0) || ((float)plVar16 * *(float *)(param_1 + 0x40) < fVar18)) {
        uVar14 = 1;
        if ((long *)0x2 < plVar16) {
          uVar14 = (ulong)(((ulong)plVar16 & (long)plVar16 - 1U) != 0);
        }
        plVar11 = (long *)(uVar14 | (long)plVar16 * 2);
        auVar19._0_4_ = fVar18 / *(float *)(param_1 + 0x40);
        auVar20 = roundss(auVar19,auVar19,10);
        uVar14 = (ulong)auVar20._0_4_;
        plVar16 = (long *)((long)(auVar20._0_4_ - _DAT_10070844c) & (long)uVar14 >> 0x3f | uVar14);
        if (plVar16 < plVar11) {
          plVar16 = plVar11;
        }
        plVar11 = (long *)0x2;
        if ((plVar16 != (long *)0x1) &&
           (plVar11 = plVar16, ((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
          plVar11 = (long *)std::__next_prime((ulong)plVar16);
        }
        plVar16 = *(long **)(param_1 + 0x28);
        if (plVar16 < plVar11) {
LAB_100625da5:
          if ((ulong)plVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1001082d0();
          }
          pvVar9 = operator_new((long)plVar11 * 8);
          pvVar1 = *(void **)(param_1 + 0x20);
          *(void **)(param_1 + 0x20) = pvVar9;
          if (pvVar1 != (void *)0x0) {
            operator_delete(pvVar1);
          }
          *(long **)(param_1 + 0x28) = plVar11;
          plVar16 = (long *)0x0;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)plVar16 * 8) = 0;
            plVar16 = (long *)((long)plVar16 + 1);
          } while (plVar11 != plVar16);
          plVar15 = (long *)*local_68;
          plVar16 = plVar11;
          if (plVar15 != (long *)0x0) {
            plVar13 = (long *)plVar15[1];
            uVar14 = (long)plVar11 - ((ulong)plVar11 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
            uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
            if (uVar14 >> 0x38 < 2) {
              plVar13 = (long *)((ulong)plVar13 & (long)plVar11 - 1U);
            }
            else if (plVar11 <= plVar13) {
              plVar13 = (long *)((ulong)plVar13 % (ulong)plVar11);
            }
            *(long **)(*(long *)(param_1 + 0x20) + (long)plVar13 * 8) = local_68;
            plVar17 = (long *)*plVar15;
            if (plVar17 != (long *)0x0) {
              do {
                plVar10 = (long *)plVar17[1];
                if ((byte)(uVar14 >> 0x38) < 2) {
                  plVar10 = (long *)((ulong)plVar10 & (long)plVar11 - 1U);
                }
                else if (plVar11 <= plVar10) {
                  plVar10 = (long *)((ulong)plVar10 % (ulong)plVar11);
                }
                if (plVar10 != plVar13) {
                  if (*(long *)(*(long *)(param_1 + 0x20) + (long)plVar10 * 8) == 0) {
                    *(long **)(*(long *)(param_1 + 0x20) + (long)plVar10 * 8) = plVar15;
                    plVar13 = plVar10;
                  }
                  else {
                    *plVar15 = *plVar17;
                    *plVar17 = **(long **)(*(long *)(param_1 + 0x20) + (long)plVar10 * 8);
                    **(undefined8 **)(*(long *)(param_1 + 0x20) + (long)plVar10 * 8) = plVar17;
                    plVar17 = plVar15;
                  }
                }
                plVar15 = plVar17;
                plVar17 = (long *)*plVar15;
              } while (plVar17 != (long *)0x0);
            }
          }
        }
        else if (plVar11 < plVar16) {
          auVar20 = ZEXT416((uint)((float)*(ulong *)(param_1 + 0x38) / *(float *)(param_1 + 0x40)));
          auVar20 = roundss(auVar20,auVar20,10);
          uVar14 = (ulong)auVar20._0_4_;
          plVar15 = (long *)((long)(auVar20._0_4_ - _DAT_10070844c) & (long)uVar14 >> 0x3f | uVar14)
          ;
          if ((plVar16 < (long *)0x3) ||
             (uVar14 = (long)plVar16 - ((ulong)plVar16 >> 1 & 0x5555555555555555),
             uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333),
             1 < (byte)(((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)))
          {
            plVar13 = (long *)std::__next_prime((ulong)plVar15);
          }
          else {
            lVar5 = 0x3f;
            if ((long)plVar15 - 1U != 0) {
              for (; (long)plVar15 - 1U >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            plVar13 = (long *)(1L << (-((byte)lVar5 ^ 0x3f) & 0x3f));
            if (plVar15 < (long *)0x2) {
              plVar13 = plVar15;
            }
          }
          if (plVar13 < plVar11) {
            plVar13 = plVar11;
          }
          if (plVar13 < plVar16) {
            plVar11 = plVar13;
            if (plVar13 != (long *)0x0) goto LAB_100625da5;
            pvVar1 = *(void **)(param_1 + 0x20);
            *(undefined8 *)(param_1 + 0x20) = 0;
            if (pvVar1 != (void *)0x0) {
              operator_delete(pvVar1);
            }
            *(undefined8 *)(param_1 + 0x28) = 0;
            plVar16 = (long *)0x0;
          }
          else {
            plVar16 = *(long **)(param_1 + 0x28);
          }
        }
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar15 = (long *)((ulong)local_60 & (long)plVar16 - 1U);
        }
        else {
          plVar15 = local_60;
          if (plVar16 <= local_60) {
            plVar15 = (long *)((ulong)local_60 % (ulong)plVar16);
          }
        }
      }
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (long)plVar15 * 8);
      if (puVar8 == (undefined8 *)0x0) {
        *(undefined8 *)CONCAT44(uStack_54,local_58) = *(undefined8 *)(param_1 + 0x30);
        *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_54,local_58);
        *(long **)(*(long *)(param_1 + 0x20) + (long)plVar15 * 8) = local_68;
        lVar5 = *(long *)CONCAT44(uStack_54,local_58);
        if (lVar5 != 0) {
          plVar11 = *(long **)(lVar5 + 8);
          if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
            plVar11 = (long *)((ulong)plVar11 & (long)plVar16 - 1U);
          }
          else if (plVar16 <= plVar11) {
            plVar11 = (long *)((ulong)plVar11 % (ulong)plVar16);
          }
          *(long **)(*(long *)(param_1 + 0x20) + (long)plVar11 * 8) =
               (long *)CONCAT44(uStack_54,local_58);
        }
      }
      else {
        *(undefined8 *)CONCAT44(uStack_54,local_58) = *puVar8;
        *puVar8 = CONCAT44(uStack_54,local_58);
      }
      plVar11 = (long *)CONCAT44(uStack_54,local_58);
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
LAB_100625fbf:
      plVar16 = local_78;
      plVar11[4] = param_2;
      FUN_1001b7a50(local_88);
      plVar11 = (long *)FUN_1003070df();
      if (plVar11 == (long *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        (**(code **)(*plVar11 + 0x10))(plVar11,0x74326170,plVar11,*plVar16,0);
        *(byte *)((long)plVar11 + 0x1bb2) = *(byte *)((long)plVar11 + 0x1bb2) | 1;
      }
      goto LAB_10062545e;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xa3ab;
      uStack_48 = 0x7e;
      uStack_47 = 0;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,
                          "**ERROR**: SocialProfileLookup::Setup() failed! status:%d",&local_58,0x16
                         );
    }
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_10062545e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

