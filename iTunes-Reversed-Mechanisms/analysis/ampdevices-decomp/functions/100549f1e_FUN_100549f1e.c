// name: FUN_100549f1e
// address: 100549f1e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100549f1e(long param_1,undefined8 param_2,int param_3,void *param_4,uint param_5,
             undefined8 param_6,undefined8 *param_7)

{
  long *plVar1;
  long *plVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  uint *puVar17;
  undefined4 uVar18;
  long lVar19;
  uint uVar20;
  undefined4 *puVar21;
  ulong *puVar22;
  undefined1 *puVar23;
  long lVar24;
  uint uVar25;
  uint *puVar26;
  bool bVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined8 local_e8;
  long *plStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  void *local_c0;
  uint local_b4;
  undefined8 local_b0;
  uint *local_a8;
  ulong local_a0;
  double local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  char local_48;
  long local_38;
  
  local_98 = (double)CONCAT44(local_98._4_4_,param_5);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d0 = param_2;
  if (param_4 == (void *)0x0) {
    uVar14 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar14,0x10);
    if (cVar7 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x2592;
      uStack_58 = 0x7b;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    puVar23 = (undefined1 *)0xffffffce;
    goto LAB_10054a269;
  }
  local_c8 = 0;
  *(undefined8 *)(param_1 + 0x1030) = 0;
  local_90 = param_1;
  if (param_3 < 0x48545450) {
    if ((param_3 == 0x44574e4c) || (param_3 == 0x46494c45)) {
LAB_100549fea:
      FUN_1001c62d9(&local_68,0x28);
      param_1 = local_90;
      uVar14 = *(undefined8 *)(local_90 + 0x38);
      uVar5 = *(undefined8 *)(local_90 + 0x40);
      local_88._0_2_ = (undefined2)uVar14;
      local_88._2_2_ = (undefined2)((ulong)uVar14 >> 0x10);
      uStack_84 = (undefined4)((ulong)uVar14 >> 0x20);
      uStack_80 = (undefined4)uVar5;
      uStack_7c = (undefined2)((ulong)uVar5 >> 0x20);
      uStack_7a = (undefined2)((ulong)uVar5 >> 0x30);
      if (*(long *)(local_90 + 0x40) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(local_90 + 0x40) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      uVar8 = FUN_1005d77b9(&local_88,local_98._0_4_ >> 9 & 1,&local_68,&local_c8);
      plVar1 = (long *)CONCAT26(uStack_7a,CONCAT24(uStack_7c,uStack_80));
      local_c0 = param_4;
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar16 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar16 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar23 = (undefined1 *)(ulong)uVar8;
      if (uVar8 == 0) {
        *(ulong *)(param_1 + 0x1020) = CONCAT44(uStack_64,local_68);
        *(ulong *)(param_1 + 0x1028) = CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60));
        *(bool *)(param_1 + 0x1038) = local_48 != '\0';
      }
      param_5 = local_98._0_4_ & 0x200;
      goto LAB_10054a11d;
    }
LAB_10054a1c8:
    puVar23 = (undefined1 *)0xfffffffc;
    if ((param_5 >> 9 & 1) == 0) {
LAB_10054a1d8:
      uVar14 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar14,0x10);
      param_1 = local_90;
      if (cVar7 != '\0') {
        uStack_5a = SUB82(puVar23,0);
        uStack_58 = (undefined2)((ulong)puVar23 >> 0x10);
        goto LAB_10054a517;
      }
    }
  }
  else {
    if ((param_3 != 0x48545450) && (param_3 != 0x53485244)) {
      if (param_3 == 0x4d46494c) goto LAB_100549fea;
      goto LAB_10054a1c8;
    }
    local_e8 = *(undefined8 *)(param_1 + 0x38);
    plStack_e0 = *(long **)(param_1 + 0x40);
    if (*(long *)(param_1 + 0x40) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x40) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    param_5 = param_5 & 0x200;
    local_c0 = param_4;
    uVar8 = FUN_1005d7f70(&local_e8,param_5 >> 9,&local_c8,param_6,param_1 + 0x1030);
    puVar23 = (undefined1 *)(ulong)uVar8;
    if (plStack_e0 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      lVar16 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar16 == 0) {
        (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
        std::__shared_weak_count::__release_weak();
      }
    }
LAB_10054a11d:
    pvVar6 = local_c0;
    iVar9 = (int)puVar23;
    if (param_5 == 0) {
      if (iVar9 == -0x80) goto LAB_10054a225;
      if (iVar9 == 0) goto LAB_10054a140;
      goto LAB_10054a1d8;
    }
    if (iVar9 != 0) goto LAB_10054a225;
LAB_10054a140:
    *(int *)(param_1 + 0x48) = param_3;
    local_b4 = param_5;
    _memcpy((void *)(param_1 + 0x4c),local_c0,0x460);
    lVar16 = param_1 + 0x710;
    uVar8 = FUN_10015c62d(local_c8,lVar16,0,0);
    if (uVar8 == 0xffffff80) goto LAB_10054a21b;
    if (uVar8 != 0) {
      uVar14 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar14,0x10);
      if (cVar7 == '\0') goto LAB_10054a21b;
      puVar21 = &local_68;
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x400;
      uStack_5a = (undefined2)uVar8;
      uStack_58 = (undefined2)(uVar8 >> 0x10);
LAB_10054a55e:
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",puVar21,0x12);
      goto LAB_10054a21b;
    }
    bVar27 = local_b4 != 0;
    uVar13 = FUN_10054bb72(local_90,(ulong)local_98 & 0xffffffff);
    iVar9 = (int)uVar13;
    param_1 = local_90;
    if (bVar27) {
      puVar23 = (undefined1 *)(uVar13 & 0xffffffff);
      if (iVar9 == 0) {
LAB_10054a2ad:
        uVar8 = *(uint *)(*(long *)(local_90 + 0x720) + 0x14 +
                         (ulong)(*(char *)(*(long *)(local_90 + 0x720) + 8) == '\x01') * 8);
        *(uint *)(local_90 + 0x145c) =
             uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        if (((ulong)local_98 & 0x10) == 0) {
          lVar19 = 0;
          puVar22 = (ulong *)0x0;
          lVar24 = 0;
        }
        else {
          if (param_3 == 0x46494c45) {
            FUN_10017d489((long)pvVar6 + 0x2c,local_90 + 0x16dc);
          }
          lVar24 = local_90 + 0x14d4;
          puVar22 = (ulong *)(local_90 + 0x2b34);
          lVar19 = local_90 + 0x617c;
        }
        iVar9 = FUN_1005d872c(lVar16,0,0,&local_a8);
        if (local_a8 != (uint *)0x0 && iVar9 == 0) {
          iVar9 = FUN_1001c97e8(local_a8,0x2d2d2d2d,"com.apple.iTunes",0x10,"Encoding Params",0xf,
                                &local_88);
          lVar16 = CONCAT44(uStack_84,CONCAT22(local_88._2_2_,(undefined2)local_88));
          if (lVar16 != 0 && iVar9 == 0) {
            iVar9 = FUN_1001ca7a7(lVar16,1,&local_b0,&local_a0);
            if (0 < (int)(uint)local_a0 && iVar9 == 0) {
              if (0x7f < (uint)local_a0) {
                uVar14 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar14,0x10);
                if (cVar7 != '\0') {
                  local_68 = 0x8220202;
                  uStack_64 = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5c = 0x822;
                  uStack_5a = 0x6c81;
                  uStack_58 = 0x7e;
                  uStack_56 = 1;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              piVar15 = (int *)FUN_1001c6429((long)(int)(uint)local_a0);
              if (piVar15 == (int *)0x0) {
                uVar14 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar14,0x10);
                if (cVar7 != '\0') {
                  local_68 = 0x8220202;
                  uStack_64 = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5c = 0x822;
                  uStack_5a = 0xc11b;
                  uStack_58 = 0x7b;
                  uStack_56 = 1;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                iVar9 = FUN_1001cad10(CONCAT44(uStack_84,
                                               CONCAT22(local_88._2_2_,(undefined2)local_88)),1,
                                      &local_b0,piVar15,local_a0 & 0xffffffff);
                if (iVar9 == 0) {
                  iVar9 = (int)(uint)local_a0 >> 3;
                  if (0 < iVar9) {
                    if ((*piVar15 != 0x73726576) || (piVar15[1] != 0x1000000)) {
                      FUN_1001c64c1(piVar15);
                      goto LAB_10054a59c;
                    }
                    if (iVar9 != 1) {
                      uVar8 = iVar9 + 1;
                      puVar17 = (uint *)(piVar15 + 3);
                      do {
                        uVar12 = puVar17[-1];
                        uVar25 = *puVar17;
                        uVar10 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8
                                 | uVar12 << 0x18;
                        uVar12 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8
                                 | uVar25 << 0x18;
                        if (uVar10 == 0x62726174) {
                          *(uint *)(local_90 + 0x87c) = uVar12;
LAB_10054a741:
                          *(undefined1 *)(local_90 + 0x874) = 1;
                        }
                        else if (uVar10 == 0x61636266) {
                          *(uint *)(local_90 + 0x878) = uVar12;
                          goto LAB_10054a741;
                        }
                        uVar8 = uVar8 - 1;
                        puVar17 = puVar17 + 2;
                      } while (2 < uVar8);
                    }
                  }
                }
                FUN_1001c64c1(piVar15);
              }
            }
          }
LAB_10054a59c:
          if (param_7 != (undefined8 *)0x0) {
            iVar9 = FUN_1001c97e8(local_a8,0x2d2d2d2d,"com.apple.iTunes",0x10,"iTunNORM",8,&local_88
                                 );
            lVar16 = CONCAT44(uStack_84,CONCAT22(local_88._2_2_,(undefined2)local_88));
            if (lVar16 != 0 && iVar9 == 0) {
              iVar9 = FUN_1001ca7a7(lVar16,1,&local_b0,&local_a0);
              if (0 < (int)(uint)local_a0 && iVar9 == 0) {
                lVar16 = FUN_1001c6429(local_a0 & 0xffffffff);
                if (lVar16 == 0) {
                  uVar14 = FUN_1001cc310();
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 != '\0') {
                    local_68 = 0x8220202;
                    uStack_64 = 0x7a0a90;
                    uStack_60 = 1;
                    uStack_5c = 0x822;
                    uStack_5a = 0xc11b;
                    uStack_58 = 0x7b;
                    uStack_56 = 1;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  iVar9 = FUN_1001cad10(CONCAT44(uStack_84,
                                                 CONCAT22(local_88._2_2_,(undefined2)local_88)),1,
                                        &local_b0,lVar16,local_a0 & 0xffffffff);
                  if (iVar9 == 0) {
                    FUN_1001c62d9(param_7,0x34);
                    iVar9 = FUN_1003a92b4(lVar16,local_a0 & 0xffffffff,param_7);
                    local_c0 = (void *)CONCAT44(local_c0._4_4_,iVar9);
                    if (iVar9 != -0x80) {
                      if (iVar9 != 0) {
                        local_d8 = FUN_1001cc310();
                        cVar7 = _os_log_type_enabled(local_d8,0x10);
                        if (cVar7 != '\0') {
                          local_68 = 0x8220202;
                          uStack_64 = 0x7a0a90;
                          uStack_60 = 1;
                          uStack_5c = 0x400;
                          uStack_5a = SUB82(local_c0,0);
                          uStack_58 = (undefined2)((ulong)local_c0 >> 0x10);
                          __os_log_error_impl(0x100000000,local_d8,0x10,"%{public}s: err == (%d)",
                                              &local_68,0x12);
                        }
                        if ((int)local_c0 != 0) goto LAB_10054a6cf;
                      }
                      *param_7 = 0x4e4f524d6954756e;
                    }
                  }
LAB_10054a6cf:
                  FUN_1001c64c1(lVar16);
                }
              }
            }
          }
          if (((lVar24 != 0) &&
              (iVar9 = FUN_1003b4bc4(local_a8,lVar24,puVar22,lVar19), iVar9 != -0x80)) &&
             (iVar9 != 0)) {
            uVar14 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar14,0x10);
            if (cVar7 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x400;
              uStack_5a = (undefined2)iVar9;
              uStack_58 = (undefined2)((uint)iVar9 >> 0x10);
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_68,0x12);
            }
          }
          if (puVar22 != (ulong *)0x0) {
            *(undefined2 *)(puVar22 + 0x16) = 0;
            iVar9 = FUN_1001c955b(local_a8,0x636f7672,0,0,&local_68);
            if (CONCAT44(uStack_64,local_68) != 0 && iVar9 == 0) {
              FUN_1001ca647(CONCAT44(uStack_64,local_68),&local_88);
              iVar9 = CONCAT22(local_88._2_2_,(undefined2)local_88);
              if (0x80 < iVar9) {
                local_88._0_2_ = 0x80;
                local_88._2_2_ = 0;
                iVar9 = 0x80;
              }
              *(short *)(puVar22 + 0x16) = (short)iVar9;
              FUN_1001ca6f8(CONCAT44(uStack_64,local_68),(long)puVar22 + 0xb4);
              *puVar22 = *puVar22 | 0x140;
            }
          }
          if (((ulong)local_98 & 0x20) != 0) {
            local_88._0_2_ = 0;
            local_88._2_2_ = 0;
            FUN_1003affb3(local_a8,*(undefined8 *)(local_90 + 0x61d8),&local_88,local_90 + 0x61d0);
            *(undefined2 *)(local_90 + 0x61cc) = (undefined2)local_88;
          }
          puVar3 = (undefined2 *)(local_90 + 0x61e4);
          iVar9 = FUN_1001cb213(local_a8,0xa9746f6f,puVar3);
          if (iVar9 != 0) {
            *puVar3 = 0;
          }
          FUN_1001c8d4b(local_a8,0);
        }
        lVar16 = *(long *)(local_90 + 0x800);
        if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) == 1)) {
          local_a0 = 0;
          local_b0 = 0;
          uVar8 = *(uint *)(lVar16 + 0x14);
          uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
          *(uint *)(local_90 + 0x850) = uVar8;
          if (0x64726d72 < (int)uVar8) {
            if ((uVar8 == 0x64726d73) || (uVar8 == 0x6d703461)) goto LAB_10054a936;
LAB_10054aa73:
            if (local_b4 != 0) {
              uVar8 = *(uint *)(lVar16 + 0x30);
              *(float *)(local_90 + 0x858) =
                   (float)(uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18) * DAT_100701cfc;
              auVar29 = pshufb(ZEXT416(*(uint *)(lVar16 + 0x28)),_DAT_100747460);
              *(long *)(local_90 + 0x860) = auVar29._0_8_;
              uVar8 = 0;
              goto LAB_10054a21b;
            }
            uVar14 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar14,0x10);
            if (cVar7 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x822;
              uStack_5a = 0x682b;
              uStack_58 = 0x7e;
              uStack_56 = 1;
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            goto LAB_10054ac5c;
          }
          if ((uVar8 != 0x61617664) && (uVar8 != 0x616c6163)) goto LAB_10054aa73;
LAB_10054a936:
          uVar8 = FUN_10054c380(lVar16 + 0x10,&local_a8,&local_a0,&local_b0);
          if (uVar8 != 0 || local_a8 == (uint *)0x0) {
            uVar14 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar14,0x10);
            if (cVar7 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x822;
              uStack_5a = 0x683f;
              uStack_58 = 0x7e;
              uStack_56 = 1;
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            goto LAB_10054a21b;
          }
          piVar15 = (int *)(local_90 + 0x850);
          uVar12 = local_a8[1];
          puVar17 = (uint *)0x0;
          uVar25 = 0;
          puVar26 = local_a8;
          if (uVar12 != 0x73647365) {
            puVar26 = puVar17;
            puVar17 = local_a8;
          }
          uVar10 = uVar25;
          if (local_a0 != 0) {
            iVar9 = *(int *)(local_a0 + 4);
            if (iVar9 != 0x6d726461) {
              FUN_10054949c(local_90,local_a0,local_b0);
              uVar10 = 0;
              if (local_a0 == 0) goto LAB_10054aa0a;
              iVar9 = *(int *)(local_a0 + 4);
            }
            if (iVar9 == 0x666e6973) {
              uVar10 = FUN_100549d90(local_90,local_a0,local_b0,(ulong)local_98 & 0xffffffff);
              local_98 = (double)((ulong)local_98 & 0xfffffffffffffffd);
            }
            else {
              uVar10 = uVar25;
              if (((local_98._0_4_ >> 0xc & 1) != 0) && (uVar8 = 0xfffffffc, iVar9 == 0x6d726461))
              goto LAB_10054a21b;
            }
          }
LAB_10054aa0a:
          uVar8 = uVar10;
          if (((((ulong)local_98 & 1) != 0) || (((ulong)local_98 & 2) != 0)) ||
             (uVar8 == 0xffffff80)) {
            if ((int)uVar8 < 0) {
              if ((uVar8 != 0xffff5bec) && (uVar8 != 0xffffff80)) {
LAB_10054aac3:
                uVar14 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar14,0x10);
                if (cVar7 != '\0') {
                  local_68 = 0x8220202;
                  uStack_64 = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5c = 0x400;
                  uStack_5a = (undefined2)uVar8;
                  uStack_58 = (undefined2)(uVar8 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_68,
                                      0x12);
                }
              }
            }
            else {
              if (uVar8 == 0) goto LAB_10054aae8;
              if (uVar8 != 0x2375) goto LAB_10054aac3;
            }
            goto LAB_10054a21b;
          }
LAB_10054aae8:
          iVar9 = *piVar15;
          if ((iVar9 == 0x61617664) || (iVar9 == 0x616c6163)) {
            if (iVar9 == 0x61617664 && uVar12 == 0x73647365) {
LAB_10054ab75:
              uVar8 = *puVar26;
              uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      uVar8 << 0x18;
              if (uVar8 < 0xd) {
                uVar14 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar14,0x10);
                if (cVar7 != '\0') {
                  local_88._0_2_ = 0x202;
                  local_88._2_2_ = 0x822;
                  uStack_84 = 0x7a0a90;
                  uStack_80 = 1;
                  uStack_7c = 0x822;
                  uStack_7a = 0x68f1;
                  uStack_78 = 0x7e;
                  uStack_76 = 1;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_88,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_10054ac5c;
              }
              FUN_10015fb7e(&local_68,puVar26 + 3,uVar8 - 0xc);
              lVar16 = local_90 + 0x880;
              uVar8 = FUN_1005d55b0(&local_68,lVar16);
              if (uVar8 != 0xffffff80) {
                if (uVar8 == 0) {
                  if (CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60)) <
                      CONCAT44(uStack_64,local_68)) {
                    uVar14 = FUN_1001cc310();
                    cVar7 = _os_log_type_enabled(uVar14,0x10);
                    if (cVar7 != '\0') {
                      local_88._0_2_ = 0x202;
                      local_88._2_2_ = 0x822;
                      uStack_84 = 0x7a0a90;
                      uStack_80 = 1;
                      uStack_7c = 0x822;
                      uStack_7a = 0x6913;
                      uStack_78 = 0x7e;
                      uStack_76 = 1;
                      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                          &local_88,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else if (*(char *)(local_90 + 0x891) == '\x02') {
                    uVar8 = FUN_1005d607f(lVar16);
                    *(uint *)(local_90 + 0x85c) = uVar8;
                    *(uint *)(local_90 + 0x860) = uVar8;
                    if (uVar8 == 0xffffffff) {
                      uVar14 = FUN_1001cc310();
                      cVar7 = _os_log_type_enabled(uVar14,0x10);
                      if (cVar7 != '\0') {
                        local_88._0_2_ = 0x202;
                        local_88._2_2_ = 0x822;
                        uStack_84 = 0x7a0a90;
                        uStack_80 = 1;
                        uStack_7c = 0x822;
                        uStack_7a = 0x6928;
                        uStack_78 = 0x7e;
                        uStack_76 = 1;
                        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                            &local_88,0x16);
                      }
                      FUN_1001782e9(0,0);
                      uVar8 = 0xffffff30;
                      goto LAB_10054a21b;
                    }
                    if (2 < uVar8) {
                      if (uVar8 != 6) {
                        uVar14 = FUN_1001cc310();
                        cVar7 = _os_log_type_enabled(uVar14,0x10);
                        if (cVar7 != '\0') {
                          local_88._0_2_ = 0x202;
                          local_88._2_2_ = 0x822;
                          uStack_84 = 0x7a0a90;
                          uStack_80 = 1;
                          uStack_7c = 0x822;
                          uStack_7a = 0x693b;
                          uStack_78 = 0x7e;
                          uStack_76 = 1;
                          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                              &local_88,0x16);
                        }
                        FUN_1001782e9(0,0);
                        uVar8 = 0xffffff30;
                        goto LAB_10054a21b;
                      }
                      *(undefined4 *)(local_90 + 0x860) = 2;
                    }
                    if (*(char *)(local_90 + 0x8b6) != *(char *)(local_90 + 0x893)) {
                      *(char *)(local_90 + 0x8b6) = *(char *)(local_90 + 0x893);
                    }
                    *(float *)(local_90 + 0x858) = (float)*(uint *)(local_90 + 0x894);
                    *(uint *)(local_90 + 0x868) =
                         (uint)(*(char *)(local_90 + 0xa50) == '\0') * 0x40 + 0x3c0;
                    uVar11 = FUN_1005da85c(local_90 + 0x748);
                    lVar24 = local_90;
                    *(undefined4 *)(local_90 + 0xf54) = uVar11;
                    iVar9 = FUN_10054c8ac(local_90);
                    if (*(char *)(lVar24 + 0x891) != '\x02') {
                      uVar14 = FUN_1001cc310();
                      cVar7 = _os_log_type_enabled(uVar14,0x10);
                      if (cVar7 != '\0') {
                        local_88._0_2_ = 0x202;
                        local_88._2_2_ = 0x822;
                        uStack_84 = 0x7a0a90;
                        uStack_80 = 1;
                        uStack_7c = 0x822;
                        uStack_7a = 0x6957;
                        uStack_78 = 0x7e;
                        uStack_76 = 1;
                        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                            &local_88,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    *(undefined4 *)(local_90 + 0x6498) = 0xffff;
                    if (*(char *)(local_90 + 0x898) == '\x05') {
                      if (*(int *)(local_90 + 0x8a8) == 0) {
LAB_10054b2a2:
                        *(undefined2 *)(local_90 + 0x6498) = 0;
                        *(undefined1 *)(local_90 + 0x649a) = 1;
                      }
                      else {
                        *(undefined1 *)(local_90 + 0x6498) = 1;
                        *(undefined1 *)(local_90 + 0x649a) = 2;
                        uVar8 = *(uint *)(local_90 + 0x894);
                        uVar12 = *(uint *)(local_90 + 0x89c);
                        uVar25 = uVar12 / uVar8;
                        cVar7 = '\x01';
                        if (uVar12 != uVar8 * 2 && uVar12 != uVar8) {
                          uVar14 = FUN_1001cc310();
                          cVar7 = _os_log_type_enabled(uVar14,0x10);
                          if (cVar7 != '\0') {
                            local_88._0_2_ = 0x202;
                            local_88._2_2_ = 0x822;
                            uStack_84 = 0x7a0a90;
                            uStack_80 = 1;
                            uStack_7c = 0x822;
                            uStack_7a = 0x6998;
                            uStack_78 = 0x7e;
                            uStack_76 = 1;
                            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                                &local_88,0x16);
                          }
                          FUN_1001782e9(0,0);
                          uVar12 = *(uint *)(local_90 + 0x89c);
                          cVar7 = *(char *)(local_90 + 0x6498);
                        }
                        *(float *)(local_90 + 0x858) = (float)uVar12;
                        *(uint *)(local_90 + 0x868) = *(int *)(local_90 + 0x868) * uVar25;
                        *(bool *)(local_90 + 0x649b) = 1 < uVar25;
                        if (cVar7 == '\x01') {
                          if (*(int *)(local_90 + 0x8b0) != 0) {
                            if (*(int *)(local_90 + 0x860) != 1) {
                              uVar14 = FUN_1001cc310();
                              cVar7 = _os_log_type_enabled(uVar14,0x10);
                              if (cVar7 != '\0') {
                                local_88._0_2_ = 0x202;
                                local_88._2_2_ = 0x822;
                                uStack_84 = 0x7a0a90;
                                uStack_80 = 1;
                                uStack_7c = 0x822;
                                uStack_7a = 0x6a40;
                                uStack_78 = 0x7e;
                                uStack_76 = 1;
                                __os_log_error_impl(0x100000000,uVar14,0x10,
                                                    "%{public}s: (%{public}s)",&local_88,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            *(undefined2 *)(local_90 + 0x6499) = 0x301;
                            goto LAB_10054b296;
                          }
                          if (*(int *)(local_90 + 0x860) != 1) goto LAB_10054b915;
                          *(undefined4 *)(local_90 + 0x860) = 2;
                          *(undefined1 *)(local_90 + 0x649a) = 3;
                        }
                      }
                    }
                    else {
                      if ((24000 < *(uint *)(local_90 + 0x894)) ||
                         (iVar9 != *(int *)(local_90 + 0x868) * 2)) goto LAB_10054b2a2;
                      *(float *)(local_90 + 0x858) =
                           *(float *)(local_90 + 0x858) + *(float *)(local_90 + 0x858);
                      *(int *)(local_90 + 0x868) = iVar9;
                      *(undefined2 *)(local_90 + 0x649a) = 0x102;
                      if (*(int *)(local_90 + 0x860) == 1) {
                        *(undefined1 *)(local_90 + 0x649a) = 3;
LAB_10054b296:
                        *(undefined4 *)(local_90 + 0x860) = 2;
                      }
                      else {
LAB_10054b915:
                        *(undefined2 *)(local_90 + 0x6499) = 0x200;
                      }
                    }
                    if ((local_98._0_4_ >> 0xb & 1) == 0) goto LAB_10054b48d;
                    iVar9 = (int)local_d0;
                    if (iVar9 + 1U < 5) {
                      if (iVar9 == 0) goto LAB_10054b3ab;
                      if (iVar9 != -1) {
                        *(char *)(local_90 + 0x649a) = (char)local_d0;
                        if (iVar9 != 1) goto LAB_10054b48d;
                        goto LAB_10054b3b9;
                      }
                      *(undefined1 *)(local_90 + 0x649a) = 3;
                    }
                    else {
                      uVar14 = FUN_1001cc310();
                      cVar7 = _os_log_type_enabled(uVar14,0x10);
                      if (cVar7 != '\0') {
                        local_88._0_2_ = 0x202;
                        local_88._2_2_ = 0x822;
                        uStack_84 = 0x7a0a90;
                        uStack_80 = 1;
                        uStack_7c = 0x822;
                        uStack_7a = 0x6a52;
                        uStack_78 = 0x7e;
                        uStack_76 = 1;
                        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                            &local_88,0x16);
                      }
                      FUN_1001782e9(0,0);
LAB_10054b3ab:
                      *(undefined1 *)(local_90 + 0x649a) = 1;
LAB_10054b3b9:
                      lVar24 = local_90;
                      if (*(char *)(local_90 + 0x649b) != '\0') {
                        *(float *)(local_90 + 0x858) = *(float *)(local_90 + 0x858) * DAT_100700b28;
                        *(uint *)(local_90 + 0x868) = *(uint *)(local_90 + 0x868) >> 1;
                      }
                      *(undefined1 *)(local_90 + 0x649b) = 0;
                      *(undefined2 *)(local_90 + 0x6498) = 0;
                      uVar8 = FUN_1005d607f(lVar16);
                      *(uint *)(lVar24 + 0x85c) = uVar8;
                      *(uint *)(lVar24 + 0x860) = uVar8;
                      if (2 < uVar8) {
                        if (uVar8 != 6) {
                          uVar14 = FUN_1001cc310();
                          cVar7 = _os_log_type_enabled(uVar14,0x10);
                          if (cVar7 != '\0') {
                            local_88._0_2_ = 0x202;
                            local_88._2_2_ = 0x822;
                            uStack_84 = 0x7a0a90;
                            uStack_80 = 1;
                            uStack_7c = 0x822;
                            uStack_7a = 0x693b;
                            uStack_78 = 0x7e;
                            uStack_76 = 1;
                            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                                &local_88,0x16);
                          }
                          FUN_1001782e9(0,0);
                          uVar8 = 0xffffff30;
                          goto LAB_10054a21b;
                        }
                        *(undefined4 *)(local_90 + 0x860) = 2;
                      }
                    }
LAB_10054b48d:
                    *(undefined4 *)(local_90 + 0x864) = 0x20;
                    *(undefined4 *)(local_90 + 0x86c) = *(undefined4 *)(local_90 + 0x88c);
                    uVar8 = 0;
                    if (*(uint *)(local_90 + 0x884) < 0x800008) {
                      uVar8 = *(uint *)(local_90 + 0x884) >> 3;
                    }
                    *(uint *)(local_90 + 0x870) = uVar8;
                    *(uint *)(local_90 + 0x854) = (uint)*(byte *)(local_90 + 0x891);
                    iVar9 = *(int *)(local_90 + 0x850);
                    goto LAB_10054b4d8;
                  }
LAB_10054ac5c:
                  uVar8 = 0xffffff30;
                }
                else {
                  uVar14 = FUN_1001cc310();
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 != '\0') {
                    puVar21 = &local_88;
                    local_88._0_2_ = 0x202;
                    local_88._2_2_ = 0x822;
                    uStack_84 = 0x7a0a90;
                    uStack_80 = 1;
                    uStack_7c = 0x400;
                    uStack_7a = (undefined2)uVar8;
                    uStack_78 = (undefined2)(uVar8 >> 0x10);
                    goto LAB_10054a55e;
                  }
                }
              }
            }
            else {
LAB_10054b4d8:
              if ((iVar9 != 0x616c6163) || (puVar17 == (uint *)0x0)) goto LAB_10054b63a;
              FUN_1001c62d9(local_90 + 0x1000,0x18);
              uVar8 = *puVar17;
              if ((uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18)
                  - 0x24 < 0xffffffe8) {
                uVar8 = puVar17[4];
                *(char *)(local_90 + 0x1004) = (char)uVar8;
                if ((char)uVar8 == '\0') {
                  uVar8 = *(uint *)((long)puVar17 + 0x11);
                  *(uint *)(local_90 + 0x1005) = uVar8;
                  bVar4 = *(byte *)((long)puVar17 + 0x15);
                  *(byte *)(local_90 + 0x1009) = bVar4;
                  *(ushort *)(local_90 + 0x100a) =
                       *(ushort *)((long)puVar17 + 0x16) << 8 |
                       *(ushort *)((long)puVar17 + 0x16) >> 8;
                  uVar12 = puVar17[3];
                  uVar25 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18;
                  *(uint *)(local_90 + 0x1000) = uVar25;
                  uVar12 = puVar17[6];
                  uVar10 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18;
                  *(uint *)(local_90 + 0x100c) = uVar10;
                  uVar12 = puVar17[7];
                  uVar20 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18;
                  *(uint *)(local_90 + 0x1010) = uVar20;
                  uVar12 = puVar17[8];
                  uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                           uVar12 << 0x18;
                  *(uint *)(local_90 + 0x1014) = uVar12;
                  *(float *)(local_90 + 0x858) = (float)uVar12;
                  *(uint *)(local_90 + 0x860) = (uint)bVar4;
                  *(uint *)(local_90 + 0x868) = uVar25;
                  *(uint *)(local_90 + 0x864) = uVar8 & 0xff;
                  *(uint *)(local_90 + 0x86c) = uVar20;
                  *(uint *)(local_90 + 0x870) = uVar10;
                  *(undefined4 *)(local_90 + 0x854) = 1;
                  if ((((ulong)local_98 & 0x300) != 0) || (uVar8 = 0xffffff30, bVar4 - 1 < 2))
                  goto LAB_10054b63a;
                }
                else {
                  uVar14 = FUN_1001cc310();
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 != '\0') {
                    local_68 = 0x8220202;
                    uStack_64 = 0x7a0a90;
                    uStack_60 = 1;
                    uStack_5c = 0x822;
                    uStack_5a = 0x6b57;
                    uStack_58 = 0x7e;
                    uStack_56 = 1;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68
                                        ,0x16);
                  }
                  uVar8 = 0;
                  FUN_1001782e9(0,0);
                }
              }
              else {
                uVar14 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar14,0x10);
                if (cVar7 != '\0') {
                  local_68 = 0x8220202;
                  uStack_64 = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5c = 0x822;
                  uStack_5a = 0x6b37;
                  uStack_58 = 0x7e;
                  uStack_56 = 1;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                uVar8 = 0;
                FUN_1001782e9(0,0);
              }
            }
LAB_10054a21b:
            puVar23 = (undefined1 *)(ulong)uVar8;
            param_1 = local_90;
            goto LAB_10054a225;
          }
          if (iVar9 != 0x6d703461) {
            uVar14 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar14,0x10);
            if (cVar7 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x822;
              uStack_5a = 0x686b;
              uStack_58 = 0x7e;
              uStack_56 = 1;
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            uVar8 = 0;
            FUN_1001782e9(0,0);
            goto LAB_10054a21b;
          }
          if (puVar26 != (uint *)0x0) goto LAB_10054ab75;
LAB_10054b63a:
          lVar16 = *(long *)(local_90 + 0x808);
          uVar8 = *(uint *)(lVar16 + 0xc);
          if ((ulong)uVar8 != 0) {
            uVar12 = *(uint *)(local_90 + 0x868);
            uVar13 = 0;
            do {
              if (uVar12 < *(uint *)(lVar16 + 0x14 + uVar13 * 8)) {
                *(uint *)(lVar16 + 0x14 + uVar13 * 8) = uVar12;
              }
              uVar13 = uVar13 + 1;
            } while (uVar8 != uVar13);
          }
          FUN_10054c96a();
          lVar16 = local_90;
          auVar29._0_8_ =
               (double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(local_90 + 0x14b0));
          auVar29._8_4_ = (int)((ulong)*(undefined8 *)(local_90 + 0x14b0) >> 0x20);
          auVar29._12_4_ = DAT_10070d3c0._4_4_;
          dVar30 = (double)*(float *)(local_90 + 0x858);
          dVar28 = (((auVar29._0_8_ - _DAT_10070d3d0) + (auVar29._8_8_ - _UNK_10070d3d8)) *
                   _DAT_100708b48) / dVar30;
          uVar13 = (ulong)dVar28;
          *(ulong *)(local_90 + 0x14b8) =
               (long)(dVar28 - DAT_10070e4c0) & (long)uVar13 >> 0x3f | uVar13;
          *(float *)(local_90 + 0x1460) = *(float *)(local_90 + 0x858) / DAT_100717f3c;
          *(undefined8 *)(local_90 + 0x1478) = 0;
          *(undefined8 *)(local_90 + 0x1468) = 0;
          *(undefined4 *)(local_90 + 0x1470) = 0;
          *(undefined8 *)(local_90 + 0x1488) = 0;
          *(undefined8 *)(local_90 + 0x1490) = 0;
          if (*(int *)(local_90 + 0x86c) == 0) {
            local_98 = dVar30;
            uVar11 = FUN_10054d34a(local_90);
            *(undefined4 *)(lVar16 + 0x86c) = uVar11;
            dVar30 = local_98;
          }
          if ((*(char *)(lVar16 + 0x874) == '\x01') && (*(int *)(lVar16 + 0x87c) != 0)) {
            *(int *)(lVar16 + 0x86c) = *(int *)(lVar16 + 0x87c);
          }
          *(undefined8 *)(lVar16 + 0x2b68) = 0;
          *(undefined8 *)(lVar16 + 0x2b70) = 0;
          *(undefined8 *)(lVar16 + 0x2b58) = 0;
          *(undefined8 *)(lVar16 + 0x2b60) = 0;
          *(undefined8 *)(lVar16 + 0x2b78) = 0;
          iVar9 = *(int *)(lVar16 + 0x850);
          if ((iVar9 == 0x61617664) || (iVar9 == 0x6d703461)) {
            *(double *)(lVar16 + 0x2b58) = dVar30;
            *(undefined8 *)(lVar16 + 0x2b60) = 0x261616320;
            *(undefined4 *)(lVar16 + 0x2b68) = 0;
            uVar11 = *(undefined4 *)(lVar16 + 0x860);
            uVar18 = *(undefined4 *)(lVar16 + 0x868);
            *(undefined4 *)(lVar16 + 0x2b6c) = uVar18;
            *(undefined4 *)(lVar16 + 0x2b70) = 0;
            *(undefined4 *)(lVar16 + 0x2b74) = uVar11;
            *(undefined4 *)(lVar16 + 0x2b78) = 0;
            *(byte *)(lVar16 + 0x2b36) = *(byte *)(lVar16 + 0x2b36) | 0x80;
            if (iVar9 == 0x616c6163) goto LAB_10054b7e8;
          }
          else if (iVar9 == 0x616c6163) {
            uVar11 = *(undefined4 *)(lVar16 + 0x860);
            uVar18 = *(undefined4 *)(lVar16 + 0x868);
LAB_10054b7e8:
            *(double *)(lVar16 + 0x2b58) = dVar30;
            *(undefined4 *)(lVar16 + 0x2b60) = 0x616c6163;
            *(undefined4 *)(lVar16 + 0x2b68) = 0;
            *(undefined4 *)(lVar16 + 0x2b6c) = uVar18;
            *(undefined4 *)(lVar16 + 0x2b70) = 0;
            *(undefined4 *)(lVar16 + 0x2b74) = uVar11;
            *(undefined4 *)(lVar16 + 0x2b78) = 0;
            uVar8 = *(byte *)(lVar16 + 0x1005) - 0x10 >> 2;
            uVar12 = (uint)*(byte *)(lVar16 + 0x1005) << 0x1e | uVar8;
            if ((uVar12 < 5) && ((0x17U >> (uVar8 & 0x1f) & 1) != 0)) {
              *(undefined4 *)(lVar16 + 0x2b64) = *(undefined4 *)(&DAT_10075647c + (ulong)uVar12 * 4)
              ;
            }
            *(byte *)(lVar16 + 0x2b36) = *(byte *)(lVar16 + 0x2b36) | 0x80;
          }
          puVar23 = (undefined1 *)0x0;
          goto LAB_10054a269;
        }
        puVar23 = &DAT_ffffff30;
        param_1 = local_90;
        if (local_b4 != 0) {
          puVar23 = (undefined1 *)0x0;
        }
      }
      goto LAB_10054a225;
    }
    if (iVar9 == -0x80) {
      puVar23 = (undefined1 *)(uVar13 & 0xffffffff);
      goto LAB_10054a225;
    }
    if (iVar9 == 0) goto LAB_10054a2ad;
    puVar23 = (undefined1 *)(uVar13 & 0xffffffff);
    uVar14 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar14,0x10);
    param_1 = local_90;
    if (cVar7 == '\0') goto LAB_10054a225;
    uStack_5a = (undefined2)uVar13;
    uStack_58 = (undefined2)(uVar13 >> 0x10);
LAB_10054a517:
    uStack_5c = 0x400;
    uStack_60 = 1;
    uStack_64 = 0x7a0a90;
    local_68 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_68,0x12);
    param_1 = local_90;
  }
LAB_10054a225:
  if (((int)puVar23 != 0) && (local_c8 != 0)) {
    FUN_10015cc72(param_1 + 0x710);
    FUN_1001c23b3(param_1 + 0x710);
    FUN_1001c64c1(local_c8);
    *(undefined8 *)(local_90 + 0x718) = 0;
  }
LAB_10054a269:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar23;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

