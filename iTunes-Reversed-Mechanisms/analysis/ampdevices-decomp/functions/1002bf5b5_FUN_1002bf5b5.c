// name: FUN_1002bf5b5
// address: 1002bf5b5

long * FUN_1002bf5b5(ulong param_1,undefined8 param_2,undefined4 param_3,char param_4,
                    undefined4 param_5,undefined4 param_6,undefined2 param_7,byte param_8,
                    char param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long **pplVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  code *pcVar13;
  size_t sVar14;
  ulong uVar15;
  size_t sVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long **pplVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 *puVar25;
  void *pvVar26;
  void *pvVar27;
  long **pplVar28;
  long lVar29;
  undefined8 *puVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined8 *local_718;
  undefined8 *puStack_710;
  undefined8 *local_708;
  undefined4 local_6fc;
  ulong local_6f8;
  long *local_6f0;
  long **local_6e8;
  long *local_6e0;
  long *local_6d8;
  long *plStack_6d0;
  long *local_6c8;
  ulong local_6c0;
  long **local_6b8;
  long *local_6b0;
  undefined1 local_6a8 [512];
  undefined1 local_4a8 [512];
  short local_2a8;
  undefined2 uStack_2a6;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined2 local_29c;
  char *local_29a;
  undefined8 local_a8;
  undefined4 local_a0;
  long *local_98;
  long *plStack_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_6e0 = (long *)CONCAT44(local_6e0._4_4_,param_5);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_718 = (undefined8 *)0x0;
  puStack_710 = (undefined8 *)0x0;
  local_708 = (undefined8 *)0x0;
  if (param_1 == 0) {
LAB_1002bf864:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_29a = "TrackDataIsValid(trackData)";
LAB_1002bfeda:
      local_29c = 0x822;
      uStack_2a0 = 1;
      uStack_2a4 = 0x7a0a90;
      uStack_2a6 = 0x822;
      local_2a8 = 0x202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2a8,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_2a8 = 0x202;
        uStack_2a6 = 0x822;
        uStack_2a4 = 0x7ab58c;
        uStack_2a0 = 1;
        local_29c = 0x822;
        local_29a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2a8,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1002bf864;
    }
    local_6c0 = param_1;
    if ((char)param_3 == '\0') {
      plVar20 = (long *)0x0;
      goto LAB_1002c0434;
    }
    local_6f8 = CONCAT44(local_6f8._4_4_,param_6);
    local_80 = &local_78;
    local_a8 = 0;
    local_a0 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_98 = (long *)0x0;
    plStack_90 = (long *)0x0;
    local_88 = (long *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_2a8 = 0;
    local_6c8 = (long *)0x0;
    local_6d8 = (long *)0x0;
    plStack_6d0 = (long *)0x0;
    local_6fc = param_3;
    if (*(int *)(param_1 + 0x80) == 0x74646174) {
LAB_1002bf6fd:
      local_6b0 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
      if (local_6b0 != (long *)0x0) {
        *local_6b0 = 0;
        local_6b0[1] = 0;
        local_6b0[2] = 0;
      }
      lVar8 = FUN_1002f930c(local_6c0);
      local_6b8 = &local_6d8;
      for (; lVar8 != 0; lVar8 = FUN_1002f9451(lVar8)) {
        uVar5 = FUN_1004744bf(lVar8,0);
        if (((uVar5 & 0x18040) == 0x40) && (cVar4 = FUN_1002bd328(lVar8), cVar4 != '\0')) {
          if (plStack_6d0 < local_6c8) {
            *plStack_6d0 = lVar8;
            plStack_6d0 = plStack_6d0 + 1;
          }
          else {
            lVar22 = (long)plStack_6d0 - (long)local_6d8 >> 3;
            uVar24 = lVar22 + 1;
            if (0x1fffffffffffffff < uVar24) goto LAB_1002c056e;
            uVar19 = (long)local_6c8 - (long)local_6d8 >> 2;
            if (uVar19 <= uVar24) {
              uVar19 = uVar24;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_6c8 - (long)local_6d8)) {
              uVar19 = 0x1fffffffffffffff;
            }
            if (uVar19 == 0) {
              auVar32 = ZEXT816(0);
            }
            else {
              auVar32 = FUN_100249b6c(&local_6c8);
            }
            lVar10 = auVar32._0_8_;
            plVar20 = (long *)(lVar10 + lVar22 * 8);
            plVar18 = (long *)(lVar10 + auVar32._8_8_ * 8);
            *plVar20 = lVar8;
            plVar23 = (long *)(lVar10 + lVar22 * 8 + 8);
            plVar20 = (long *)((long)plVar20 - ((long)plStack_6d0 - (long)local_6d8));
            _memcpy(plVar20,local_6d8,(long)plStack_6d0 - (long)local_6d8);
            plVar1 = local_6d8;
            bVar31 = local_6d8 != (long *)0x0;
            local_6d8 = plVar20;
            plStack_6d0 = plVar23;
            local_6c8 = plVar18;
            if (bVar31) {
              operator_delete(plVar1);
              plStack_6d0 = plVar23;
            }
          }
        }
      }
      lVar8 = (long)plStack_6d0 - (long)local_6d8;
      if (lVar8 != 0) {
        FUN_1003071cd(local_6c0);
        if (local_6d8 != plStack_6d0) {
          FUN_1001d26f2(local_6d8,(ulong)((long)plStack_6d0 - (long)local_6d8) >> 3,FUN_1002c0965,0)
          ;
        }
        FUN_100307383(local_6c0);
        pplVar28 = (long **)(lVar8 >> 3);
        pplVar9 = (long **)0x0;
        pplVar21 = (long **)0x1;
        local_6b8 = pplVar28;
        do {
          lVar8 = local_6d8[(long)pplVar9];
          if ((int)pplVar21 == 1) {
            FUN_10047db99(lVar8,&local_2a8);
          }
          else {
            FUN_10047db99(lVar8,local_4a8);
            cVar4 = FUN_1001e3edc(local_4a8,&local_2a8,1);
            if (cVar4 == '\0') {
              if (local_2a8 != 0) {
                if (local_98 != plStack_90) {
                  FUN_1001d26f2(local_98,(ulong)((long)plStack_90 - (long)local_98) >> 3,
                                FUN_1002c062c,0);
                }
                uVar24 = local_6b0[1];
                if (uVar24 < (ulong)local_6b0[2]) {
                  FUN_1002c06a2(uVar24,&local_2a8);
                  lVar22 = uVar24 + 0x250;
                  local_6b0[1] = lVar22;
                }
                else {
                  lVar22 = FUN_1002c2d4e(local_6b0,&local_2a8);
                }
                local_6b0[1] = lVar22;
              }
              local_2a8 = 0;
              local_a8 = 0;
              local_a0 = 0;
              plStack_90 = local_98;
              FUN_1002a41f4(&local_80,local_78);
              local_80 = &local_78;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 0;
              local_60 = 0;
              FUN_1001e1c39(local_4a8,&local_2a8);
            }
          }
          if (*(int *)(lVar8 + 0x144) == 0) {
            local_a8._0_4_ = (int)local_a8 + 1;
          }
          local_a8 = CONCAT44(local_a8._4_4_ + 1,(int)local_a8);
          if (*(int *)(*(long *)(lVar8 + 0x78) + 0xc) != 0) {
            FUN_1002c33aa(&local_80,*(long *)(lVar8 + 0x78) + 0xc);
          }
          if ((local_68 == 0) && (cVar4 = FUN_1005d1e25(lVar8), cVar4 != '\0')) {
            local_68 = lVar8;
          }
          if (plStack_90 < local_88) {
            *plStack_90 = lVar8;
            plVar23 = plStack_90 + 1;
          }
          else {
            lVar22 = (long)plStack_90 - (long)local_98 >> 3;
            uVar24 = lVar22 + 1;
            if (0x1fffffffffffffff < uVar24) {
              local_6b8 = &local_98;
LAB_1002c056e:
              FUN_1002c2cdc(local_6b8);
              goto LAB_1002c05a5;
            }
            uVar19 = (long)local_88 - (long)local_98 >> 2;
            if (uVar19 <= uVar24) {
              uVar19 = uVar24;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_88 - (long)local_98)) {
              uVar19 = 0x1fffffffffffffff;
            }
            if (uVar19 == 0) {
              auVar32 = ZEXT816(0);
            }
            else {
              auVar32 = FUN_100249b6c(&local_88);
            }
            lVar10 = auVar32._0_8_;
            plVar20 = (long *)(lVar10 + lVar22 * 8);
            plVar18 = (long *)(lVar10 + auVar32._8_8_ * 8);
            *plVar20 = lVar8;
            plVar23 = (long *)(lVar10 + lVar22 * 8 + 8);
            plVar20 = (long *)((long)plVar20 - ((long)plStack_90 - (long)local_98));
            _memcpy(plVar20,local_98,(long)plStack_90 - (long)local_98);
            plVar1 = local_98;
            bVar31 = local_98 != (long *)0x0;
            pplVar28 = local_6b8;
            local_98 = plVar20;
            local_88 = plVar18;
            if (bVar31) {
              plStack_90 = plVar23;
              operator_delete(plVar1);
              pplVar28 = local_6b8;
            }
          }
          bVar31 = pplVar21 < pplVar28;
          pplVar9 = pplVar21;
          pplVar21 = (long **)(ulong)((int)pplVar21 + 1);
          plStack_90 = plVar23;
        } while (bVar31);
        if (local_2a8 != 0) {
          if (local_98 != plVar23) {
            FUN_1001d26f2(local_98,(ulong)((long)plVar23 - (long)local_98) >> 3 & 0xffffffff,
                          FUN_1002c062c,0);
          }
          uVar24 = local_6b0[1];
          if (uVar24 < (ulong)local_6b0[2]) {
            FUN_1002c06a2(uVar24,&local_2a8);
            lVar8 = uVar24 + 0x250;
            local_6b0[1] = lVar8;
          }
          else {
            lVar8 = FUN_1002c2d4e(local_6b0,&local_2a8);
          }
          local_6b0[1] = lVar8;
        }
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 != '\0') goto LAB_1002bf6fd;
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "TrackDataIsValid(trackData)";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      local_6b0 = (long *)0x0;
      FUN_1001782e9(0,0);
    }
    if (local_6d8 != (long *)0x0) {
      plStack_6d0 = local_6d8;
      operator_delete(local_6d8);
    }
    FUN_1002c0924(&local_2a8);
    puVar3 = puStack_710;
    puVar17 = local_718;
    if (local_6b0 != (long *)0x0) {
      lVar8 = *local_6b0;
      lVar22 = local_6b0[1];
      lVar10 = lVar22 - lVar8 >> 4;
      local_6b8 = (long **)(lVar10 * 0x14c1bacf914c1bad);
      lVar29 = (long)puStack_710 - (long)local_718;
      lVar11 = lVar29 >> 3;
      bVar31 = local_6b8 < (long **)(lVar11 * -0x5555555555555555);
      uVar24 = (long)local_6b8 + lVar11 * 0x5555555555555555;
      if (bVar31 || uVar24 == 0) {
        puVar30 = puStack_710;
        if (bVar31) {
          puVar30 = local_718 + lVar10 * -0x1bacf914c1bacf9;
          for (puVar17 = puStack_710; puVar17 != puVar30; puVar17 = puVar17 + -3) {
            pvVar2 = (void *)puVar17[-3];
            if (pvVar2 != (void *)0x0) {
              puVar17[-2] = pvVar2;
              operator_delete(pvVar2);
            }
          }
        }
      }
      else if ((ulong)(((long)local_708 - (long)puStack_710 >> 3) * -0x5555555555555555) < uVar24) {
        if ((long **)0xaaaaaaaaaaaaaaa < local_6b8) {
          FUN_1002c2cdc();
LAB_1002c05a5:
                    /* WARNING: Does not return */
          pcVar13 = (code *)invalidInstructionException();
          (*pcVar13)();
        }
        lVar10 = (long)local_708 - (long)local_718 >> 3;
        local_6e8 = (long **)(lVar10 * 0x5555555555555556);
        if (local_6e8 <= local_6b8) {
          local_6e8 = local_6b8;
        }
        if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
          local_6e8 = (long **)0xaaaaaaaaaaaaaaa;
        }
        if ((long **)0xaaaaaaaaaaaaaaa < local_6e8) {
                    /* WARNING: Subroutine does not return */
          FUN_1001082d0();
        }
        puVar12 = operator_new((long)local_6e8 * 0x18);
        lVar29 = lVar29 + (long)puVar12;
        local_6e8 = (long **)(puVar12 + (long)local_6e8 * 3);
        uVar24 = (uVar24 * 0x18 - 0x18) / 0x18;
        ___bzero(lVar29,uVar24 * 0x18 + 0x18);
        pplVar9 = local_6e8;
        puVar30 = (undefined8 *)(lVar29 + uVar24 * 0x18 + 0x18);
        puVar25 = puVar17;
        if (puVar17 != puVar3) {
          lVar10 = 0;
          do {
            puVar25 = (undefined8 *)((long)puVar17 + lVar10);
            uVar7 = puVar25[1];
            *(undefined8 *)((long)puVar12 + lVar10) = *puVar25;
            ((undefined8 *)((long)puVar12 + lVar10))[1] = uVar7;
            *(undefined8 *)((long)puVar12 + lVar10 + 0x10) = puVar25[2];
            *puVar25 = 0;
            puVar25[1] = 0;
            puVar25[2] = 0;
            lVar10 = lVar10 + 0x18;
          } while (puVar25 + 3 != puVar3);
          do {
            pvVar2 = (void *)*puVar17;
            if (pvVar2 != (void *)0x0) {
              puVar17[1] = pvVar2;
              operator_delete(pvVar2);
            }
            puVar17 = puVar17 + 3;
            puVar25 = local_718;
          } while (puVar17 != puVar3);
        }
        local_708 = pplVar9;
        local_718 = puVar12;
        if (puVar25 != (undefined8 *)0x0) {
          puStack_710 = puVar30;
          operator_delete(puVar25);
          puVar30 = puStack_710;
        }
      }
      else {
        uVar24 = (uVar24 * 0x18 - 0x18) / 0x18;
        ___bzero(puStack_710,uVar24 * 0x18 + 0x18);
        puVar30 = puVar3 + uVar24 * 3 + 3;
      }
      puStack_710 = puVar30;
      lVar10 = FUN_1002f930c(local_6c0);
      local_6e8 = (long **)CONCAT44(local_6e8._4_4_,(int)(char)local_6fc);
      local_6e0 = (long *)CONCAT44(local_6e0._4_4_,(uint)(byte)local_6e0);
      local_6f8 = CONCAT44(local_6f8._4_4_,(uint)(byte)local_6f8);
      uVar5 = (uint)param_8;
      for (; lVar10 != 0; lVar10 = FUN_1002f9451(lVar10)) {
        uVar6 = FUN_1004744bf(lVar10,0);
        if (((((uVar6 & 0x18040) == 0x40) && (cVar4 = FUN_1002bd328(lVar10), cVar4 != '\0')) &&
            ((param_4 != '\x01' || (*(int *)(lVar10 + 0x144) == 0)))) &&
           ((((param_9 == '\0' || (cVar4 = FUN_1004746c0(lVar10), cVar4 == '\0')) &&
             (lVar11 = FUN_1002bd7f7(lVar10,(ulong)local_6e0 & 0xffffffff,local_6f8 & 0xffffffff,
                                     param_7,uVar5,0,0), lVar11 != 0)) &&
            ((*(char *)(lVar11 + 0x45) == '\0' && (FUN_10047db99(lVar10), lVar22 != lVar8)))))) {
          uVar6 = 1;
          pplVar9 = (long **)0x0;
          do {
            cVar4 = FUN_1001e3edc(local_6a8,(long)pplVar9 * 0x250 + *local_6b0,1);
            if (cVar4 != '\0') {
              plVar20 = local_718 + (long)pplVar9 * 3;
              plVar18 = (long *)plVar20[1];
              if (plVar18 < (long *)plVar20[2]) {
                *plVar18 = lVar10;
                plVar18 = plVar18 + 1;
              }
              else {
                lVar11 = (long)plVar18 - *plVar20 >> 3;
                uVar24 = lVar11 + 1;
                if (0x1fffffffffffffff < uVar24) {
                  FUN_1002c2cdc(plVar20);
                  goto LAB_1002c05a5;
                }
                uVar15 = plVar20[2] - *plVar20;
                uVar19 = (long)uVar15 >> 2;
                if (uVar19 <= uVar24) {
                  uVar19 = uVar24;
                }
                if (0x7ffffffffffffff7 < uVar15) {
                  uVar19 = 0x1fffffffffffffff;
                }
                local_6f0 = (long *)CONCAT44(local_6f0._4_4_,uVar5);
                if (uVar19 == 0) {
                  auVar32 = ZEXT816(0);
                }
                else {
                  auVar32 = FUN_100249b6c(local_718 + (long)pplVar9 * 3 + 2);
                }
                lVar29 = auVar32._0_8_;
                plVar1 = (long *)(lVar29 + lVar11 * 8);
                *plVar1 = lVar10;
                plVar18 = (long *)(lVar29 + lVar11 * 8 + 8);
                sVar16 = plVar20[1] - *plVar20;
                pvVar26 = (void *)((long)plVar1 - sVar16);
                _memcpy(pvVar26,(void *)*plVar20,sVar16);
                pvVar2 = (void *)*plVar20;
                *plVar20 = (long)pvVar26;
                plVar20[1] = (long)plVar18;
                plVar20[2] = lVar29 + auVar32._8_8_ * 8;
                if (pvVar2 != (void *)0x0) {
                  operator_delete(pvVar2);
                }
                uVar5 = (uint)local_6f0;
              }
              plVar20[1] = (long)plVar18;
              break;
            }
            pplVar9 = (long **)(ulong)uVar6;
            uVar6 = uVar6 + 1;
          } while (pplVar9 < local_6b8);
        }
      }
      plVar20 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
      if (plVar20 == (long *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_2a8 = 0x202;
          uStack_2a6 = 0x822;
          uStack_2a4 = 0x7a0a90;
          uStack_2a0 = 1;
          local_29c = 0x822;
          local_29a = "recentTVShowsList != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2a8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        *plVar20 = 0;
        plVar20[1] = 0;
        plVar20[2] = 0;
        if (lVar22 != lVar8) {
          pcVar13 = FUN_1002c062c;
          if ((char)local_6fc < '\0') {
            pcVar13 = FUN_1002c061f;
          }
          local_6c0 = CONCAT44(local_6c0._4_4_,*(undefined4 *)(local_6c0 + 0x2d08));
          local_6e0 = plVar20 + 2;
          pplVar9 = (long **)0x0;
          local_6f0 = plVar20;
          do {
            FUN_1002bf230(local_6c0 & 0xffffffff,local_718 + (long)pplVar9 * 3,pcVar13,
                          (ulong)local_6e8 & 0xffffffff,param_10,param_11);
            pvVar2 = (void *)local_718[(long)pplVar9 * 3];
            sVar16 = (long)local_718[(long)pplVar9 * 3 + 1] - (long)pvVar2;
            if (0 < (long)sVar16 >> 3) {
              pvVar26 = (void *)plVar20[1];
              if (*local_6e0 - (long)pvVar26 < (long)sVar16) {
                lVar8 = (long)pvVar26 - *plVar20 >> 3;
                uVar24 = ((long)sVar16 >> 3) + lVar8;
                if (0x1fffffffffffffff < uVar24) {
                  FUN_1002c2cdc(local_6f0);
                  goto LAB_1002c05a5;
                }
                uVar15 = *local_6e0 - *plVar20;
                uVar19 = (long)uVar15 >> 2;
                if (uVar19 <= uVar24) {
                  uVar19 = uVar24;
                }
                if (0x7ffffffffffffff7 < uVar15) {
                  uVar19 = 0x1fffffffffffffff;
                }
                if (uVar19 == 0) {
                  auVar32 = ZEXT816(0);
                }
                else {
                  auVar32 = FUN_100249b6c(local_6e0);
                }
                plVar20 = local_6f0;
                lVar8 = auVar32._0_8_ + lVar8 * 8;
                sVar14 = 0;
                do {
                  *(undefined8 *)(lVar8 + sVar14) = *(undefined8 *)((long)pvVar2 + sVar14);
                  sVar14 = sVar14 + 8;
                } while (sVar16 != sVar14);
                local_6f8 = auVar32._0_8_ + auVar32._8_8_ * 8;
                _memcpy((void *)(lVar8 + sVar16),pvVar26,local_6f0[1] - (long)pvVar26);
                lVar22 = plVar20[1];
                plVar20[1] = (long)pvVar26;
                sVar14 = (long)pvVar26 - *plVar20;
                pvVar27 = (void *)(lVar8 - sVar14);
                _memcpy(pvVar27,(void *)*plVar20,sVar14);
                pvVar2 = (void *)*plVar20;
                *plVar20 = (long)pvVar27;
                plVar20[1] = (lVar22 - (long)pvVar26) + (long)(lVar8 + sVar16);
                plVar20[2] = local_6f8;
                if (pvVar2 != (void *)0x0) {
                  operator_delete(pvVar2);
                }
              }
              else {
                if (pvVar2 != (void *)local_718[(long)pplVar9 * 3 + 1]) {
                  _memmove(pvVar26,pvVar2,sVar16);
                }
                plVar20[1] = (long)pvVar26 + sVar16;
              }
            }
            pplVar9 = (long **)(ulong)((int)pplVar9 + 1);
          } while (pplVar9 < local_6b8);
        }
      }
      pvVar2 = (void *)*local_6b0;
      plVar18 = local_6b0;
      if (pvVar2 != (void *)0x0) {
        pvVar26 = (void *)local_6b0[1];
        pvVar27 = pvVar2;
        if (pvVar26 != pvVar2) {
          do {
            pvVar26 = (void *)((long)pvVar26 + -0x250);
            FUN_1002c0924(pvVar26);
          } while (pvVar26 != pvVar2);
          pvVar27 = (void *)*local_6b0;
        }
        plVar18 = local_6b0;
        local_6b0[1] = (long)pvVar2;
        operator_delete(pvVar27);
      }
      operator_delete(plVar18);
      goto LAB_1002c0434;
    }
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_29a = "tvShowList != nullptr";
      goto LAB_1002bfeda;
    }
  }
  plVar20 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_1002c0434:
  local_2a8 = (short)&local_718;
  uStack_2a6 = (undefined2)((ulong)&local_718 >> 0x10);
  uStack_2a4 = (undefined4)((ulong)&local_718 >> 0x20);
  FUN_1002c2cec();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar20;
}

