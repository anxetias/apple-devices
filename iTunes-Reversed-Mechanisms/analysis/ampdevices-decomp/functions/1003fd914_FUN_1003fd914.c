// name: FUN_1003fd914
// address: 1003fd914

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1003fd914(uint *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  uint7 uVar18;
  undefined1 *puVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint local_4fc;
  undefined8 local_4f8;
  long local_4a0 [4];
  undefined1 local_480 [8];
  undefined1 local_478 [16];
  long *local_468;
  undefined6 uStack_460;
  undefined2 uStack_45a;
  undefined4 uStack_458;
  ushort uStack_454;
  undefined4 local_450;
  char cStack_44c;
  undefined2 uStack_44b;
  undefined8 local_448;
  unkbyte9 Stack_440;
  undefined7 local_437;
  unkbyte9 Stack_430;
  long local_418;
  long local_410;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined4 local_3e8;
  undefined1 local_3d4 [4];
  int local_3d0;
  int local_3cc;
  int local_3c8;
  undefined4 local_3bc;
  long local_3b8;
  undefined1 local_3b0;
  undefined1 local_3af;
  undefined1 local_3ae;
  undefined1 local_3ad;
  undefined1 local_3ac;
  undefined1 local_3ab;
  undefined1 local_3a8 [8];
  undefined8 local_3a0;
  uint local_398;
  undefined1 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_384;
  long local_380;
  uint local_378;
  uint local_374;
  long local_370;
  uint local_368;
  int iStack_364;
  int iStack_360;
  undefined2 uStack_35c;
  undefined2 uStack_35a;
  char cStack_358;
  char cStack_357;
  undefined2 uStack_356;
  undefined2 uStack_354;
  undefined2 uStack_352;
  int iStack_350;
  int iStack_34c;
  uint uStack_348;
  undefined1 local_344 [16];
  undefined4 local_334;
  uint local_330;
  ulong local_32c;
  int local_318;
  char *local_314;
  undefined2 local_30c;
  undefined2 uStack_30a;
  undefined2 uStack_308;
  undefined2 uStack_306;
  char cStack_304;
  undefined1 uStack_303;
  char local_301;
  undefined4 local_300;
  undefined8 local_2fc;
  char local_2ee;
  char local_2ed;
  int local_2ec;
  long local_2e8;
  undefined8 local_2dc;
  undefined8 uStack_2d4;
  int local_2cc;
  byte local_2c8;
  char local_2c7;
  byte local_2c6;
  undefined1 local_2c5;
  byte local_2c3;
  char local_2c2;
  undefined4 local_2c0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_27f;
  undefined1 local_27e;
  byte local_27d;
  undefined4 local_27c;
  undefined4 local_258;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_380 = *(long *)(param_1 + 0x40002);
  uVar6 = FUN_1003f16c4(param_1,&local_4fc,0x5c);
  puVar19 = (undefined1 *)(ulong)uVar6;
  if (uVar6 != 0xffffff80) {
    if (uVar6 == 0) {
      if (*(char *)((long)param_1 + 0x100127) != '\0') {
        local_4fc = local_4fc >> 0x18 | (local_4fc & 0xff0000) >> 8 | (local_4fc & 0xff00) << 8 |
                    local_4fc << 0x18;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = local_4f8;
        auVar21 = pshufb(auVar21,_DAT_10070e4b0);
        local_4f8 = auVar21._0_8_;
      }
      if (local_4fc == 0x706c686d) {
        FUN_100177cff(&local_3bc);
        if (local_4f8._4_4_ == 0) {
          puVar19 = (undefined1 *)0x0;
        }
        else {
          uVar6 = 0;
          do {
            local_468 = (long *)0x0;
            uStack_460 = 0;
            local_478 = (undefined1  [16])0x0;
            uStack_45a = 0;
            uStack_458 = 0;
            uStack_454 = 0;
            cStack_44c = '\0';
            uStack_44b = 0;
            local_450 = 0;
            local_448 = 0x3ff0000000000000;
            Stack_430 = SUB169((undefined1  [16])0x0,7);
            Stack_440 = SUB169((undefined1  [16])0x0,0);
            local_437 = 0;
            local_3f8 = (undefined1  [16])0x0;
            local_408 = (undefined1  [16])0x0;
            local_3e8 = 0x3f800000;
            FUN_1001c62d9(&local_3b0,0x28);
            uVar7 = FUN_1003f16c4(param_1,&local_318,0xb8);
            puVar19 = (undefined1 *)(ulong)uVar7;
            local_378 = uVar6;
            if (uVar7 != 0) {
              if (uVar7 != 0xffffff80) {
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 != '\0') {
                  puVar17 = &local_368;
                  local_368 = 0x8220202;
                  iStack_364 = 0x7a0a90;
                  iStack_360 = 1;
                  uStack_35c = 0x400;
                  uStack_35a = (undefined2)uVar7;
                  cStack_358 = (char)(uVar7 >> 0x10);
                  cStack_357 = (char)(uVar7 >> 0x18);
LAB_1003ff4ab:
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",puVar17,0x12
                                     );
                }
              }
LAB_1003ff4be:
              FUN_1002842e4(local_408);
              break;
            }
            if (*(char *)((long)param_1 + 0x100127) != '\0') {
              FUN_1003f8d18(&local_318);
            }
            if (local_318 != 0x7079686d) {
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_368 = 0x8220202;
                iStack_364 = 0x7a0a90;
                iStack_360 = 1;
                uStack_35c = 0x822;
                uStack_35a = 0xbdcf;
                cStack_358 = '|';
                cStack_357 = '\0';
                uStack_356 = 1;
                uStack_354 = 0;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_368,
                                    0x16);
              }
              puVar19 = &DAT_ffffff30;
              FUN_1001782e9(0,0);
              goto LAB_1003ff4be;
            }
            bVar4 = local_2c6;
            if ((((local_2c6 == 0) && (bVar4 = local_2c8, local_2c8 == 0)) &&
                (bVar4 = 0x11, local_301 == '\0')) &&
               ((bVar4 = 0xb, local_2ee == '\0' && (bVar4 = 0x14, local_2c7 == '\0')))) {
              bVar4 = 0;
            }
            if (local_2c2 != '\0') {
              bVar4 = 0x1e;
            }
            local_258 = 0x200001;
            local_478._8_8_ = &local_258;
            cStack_44c = cStack_304;
            uStack_460 = (undefined6)local_2fc;
            uStack_45a = (undefined2)((ulong)local_2fc >> 0x30);
            uStack_454 = (ushort)bVar4;
            if (local_2e8 != 0) {
              lVar11 = FUN_10048b5ec(local_380);
              if (lVar11 == 0) {
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 != '\0') {
                  local_368 = 0x8220202;
                  iStack_364 = 0x7a0a90;
                  iStack_360 = 1;
                  uStack_35c = 0x822;
                  uStack_35a = 0xbdf5;
                  cStack_358 = '|';
                  cStack_357 = '\0';
                  uStack_356 = 1;
                  uStack_354 = 0;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_368,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                if ((param_1[0x40006] & 4) == 0) {
                  local_410 = lVar11;
                  lVar11 = *(long *)(lVar11 + 0x28);
                }
                else {
                  local_410 = -1;
                }
                local_468 = &local_418;
                local_418 = lVar11;
              }
            }
            if (cStack_304 == '\0') {
              local_370 = 0;
LAB_1003fdbc9:
              uVar15 = FUN_1002e2674(local_380,0,local_478,&local_370);
              puVar19 = (undefined1 *)(uVar15 & 0xffffffff);
              if ((int)uVar15 != 0) {
                if ((int)uVar15 != -0x80) {
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    puVar17 = &local_368;
                    local_368 = 0x8220202;
                    iStack_364 = 0x7a0a90;
                    iStack_360 = 1;
                    uStack_35c = 0x400;
                    uStack_35a = (undefined2)uVar15;
                    cStack_358 = (char)(uVar15 >> 0x10);
                    cStack_357 = (char)(uVar15 >> 0x18);
                    goto LAB_1003ff4ab;
                  }
                }
                goto LAB_1003ff4be;
              }
              local_384 = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
            }
            else {
              local_370 = FUN_10048604a(local_380);
              if (local_370 == 0) goto LAB_1003fdbc9;
              local_384 = 0;
            }
            lVar11 = local_370;
            *(undefined4 *)(local_370 + 0x26c) = local_300;
            *(undefined4 *)(local_370 + 0x270) = local_2c0;
            *(undefined8 *)(local_370 + 0x1d8) = local_290;
            *(undefined8 *)(local_370 + 0x1e0) = uStack_288;
            if (local_2ec != 0) {
              uVar8 = FUN_1003ee795();
              FUN_10048ec28(lVar11,uVar8,local_2c5,0);
            }
            lVar11 = local_370;
            *(undefined8 *)(local_370 + 0x288) = local_2dc;
            *(undefined8 *)(local_370 + 0x290) = uStack_2d4;
            if (local_2cc == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_1003ee795();
            }
            *(undefined4 *)(lVar11 + 0x430) = uVar8;
            *(uint *)(lVar11 + 0x330) =
                 *(uint *)(lVar11 + 0x330) & 0xffffefff | (local_2c3 & 1) << 0xc;
            *(undefined8 *)(lVar11 + 0x390) = local_29c;
            *(undefined4 *)(lVar11 + 0x398) = local_294;
            *(undefined1 *)(lVar11 + 0x438) = local_27f;
            *(undefined1 *)(lVar11 + 0x439) = local_27e;
            *(undefined4 *)(lVar11 + 0x43c) = local_27c;
            *(uint *)(lVar11 + 0x240) =
                 *(uint *)(lVar11 + 0x240) & 0xfffeffff | (local_27d & 1) << 0x10;
            uVar6 = FUN_100160255(*(undefined8 *)(param_1 + 0x40000),local_480);
            puVar19 = (undefined1 *)(ulong)uVar6;
            if (uVar6 != 0) {
              if (uVar6 != 0xffffff80) {
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 != '\0') {
                  puVar17 = &local_368;
                  local_368 = 0x8220202;
                  iStack_364 = 0x7a0a90;
                  iStack_360 = 1;
                  uStack_35c = 0x400;
                  uStack_35a = (undefined2)uVar6;
                  cStack_358 = (char)(uVar6 >> 0x10);
                  cStack_357 = (char)(uVar6 >> 0x18);
                  goto LAB_1003ff4ab;
                }
              }
              goto LAB_1003ff4be;
            }
            uVar6 = 0;
            if (CONCAT22(uStack_30a,local_30c) != 0) {
              local_374 = 0;
LAB_1003fdd40:
              uVar7 = FUN_1004002e0(param_1,local_3d4);
              puVar19 = (undefined1 *)(ulong)uVar7;
              if (uVar7 != 0) {
                if (uVar7 == 0xffffff80) goto LAB_1003ff4be;
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 == '\0') goto LAB_1003ff4be;
                puVar17 = &local_368;
                local_368 = 0x8220202;
                iStack_364 = 0x7a0a90;
                iStack_360 = 1;
                uStack_35c = 0x400;
                uStack_35a = (undefined2)uVar7;
                cStack_358 = (char)(uVar7 >> 0x10);
                cStack_357 = (char)(uVar7 >> 0x18);
                goto LAB_1003ff4ab;
              }
              uVar7 = local_3cc - local_3d0;
              if (local_3c8 < 0x32) {
                switch(local_3c8) {
                case 1:
                  uVar7 = FUN_100400583(param_1,1,local_370 + 0x178,local_370 + 0x1c8);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  if ((uVar7 != 0xffffff80) && (uVar7 != 0)) {
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      uStack_35a = (undefined2)uVar7;
                      cStack_358 = (char)(uVar7 >> 0x10);
                      cStack_357 = (char)(uVar7 >> 0x18);
                      goto LAB_1003fe48c;
                    }
                  }
                  break;
                case 2:
                  uVar7 = FUN_100400583(param_1,1,local_370 + 0x178,local_370 + 0x1cc);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  if ((uVar7 != 0xffffff80) && (uVar7 != 0)) {
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      uStack_35a = (undefined2)uVar7;
                      cStack_358 = (char)(uVar7 >> 0x10);
                      cStack_357 = (char)(uVar7 >> 0x18);
                      goto LAB_1003fe48c;
                    }
                  }
                  break;
                case 3:
                  FUN_1001b7a44(&local_58);
                  uVar7 = FUN_100400ad6(param_1,0,&local_58);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  if (uVar7 != 0xffffff80) {
                    if (uVar7 == 0) {
                      FUN_100487e4d(local_370,&local_58);
                    }
                    else {
                      uVar13 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar5 != '\0') {
                        uStack_35a = (undefined2)uVar7;
                        cStack_358 = (char)(uVar7 >> 0x10);
                        cStack_357 = (char)(uVar7 >> 0x18);
LAB_1003fe66e:
                        uStack_35c = 0x400;
                        iStack_360 = 1;
                        iStack_364 = 0x7a0a90;
                        local_368 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                            &local_368,0x12);
                      }
                    }
                  }
                  goto LAB_1003fe5bf;
                case 4:
                  FUN_1001b7a44(&local_58);
                  uVar7 = FUN_100400ad6(param_1,0,&local_58);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  if (uVar7 != 0xffffff80) {
                    if (uVar7 == 0) {
                      FUN_10048828b(local_370,&local_58);
                    }
                    else {
                      uVar13 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar5 != '\0') {
                        uStack_35a = (undefined2)uVar7;
                        cStack_358 = (char)(uVar7 >> 0x10);
                        cStack_357 = (char)(uVar7 >> 0x18);
                        goto LAB_1003fe66e;
                      }
                    }
                  }
LAB_1003fe5bf:
                  FUN_1001b7a50(&local_58);
                  break;
                default:
switchD_1003fddf7_default:
                  uVar7 = FUN_100160dce(*(undefined8 *)(param_1 + 0x40000),uVar7);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                }
                goto LAB_1003fe5c8;
              }
              if (5 < local_3c8 - 0x32U) {
                if (local_3c8 == 100) {
                  FUN_1001c62d9(param_1,0x270);
                  uVar7 = FUN_1003f0368(param_1,param_1,(long)(int)uVar7);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  if (uVar7 == 0) {
                    if (*(char *)((long)param_1 + 0x100127) != '\0') {
                      FUN_1003f7eed(param_1);
                    }
                    lVar11 = local_370;
                    uVar8 = FUN_1003ee795(param_1[5]);
                    FUN_10048ec28(lVar11,uVar8,local_2c5,0);
                    uVar13 = *(undefined8 *)(param_1 + 1);
                    uVar9 = (*(byte *)((long)param_1 + 0x222) & 1) << 0x11;
                    uVar7 = *(uint *)(local_370 + 0x330);
                    *(uint *)(local_370 + 0x330) = uVar7 & 0xfffdffff | uVar9;
                    uVar14 = (*(byte *)((long)param_1 + 0x223) & 1) << 0x12;
                    *(uint *)(local_370 + 0x330) = uVar7 & 0xfff9ffff | uVar9 | uVar14;
                    *(uint *)(local_370 + 0x330) =
                         uVar7 & 0xffe9ffff | uVar9 | uVar14 |
                         (*(byte *)((long)param_1 + 3) & 1) << 0x14;
                    uVar7 = param_1[0x88];
                    uVar9 = param_1[0x8a];
                    uVar1 = *(undefined2 *)((long)param_1 + 0x22a);
                    uVar14 = param_1[0x8b];
                    *(undefined8 *)(local_370 + 0x33c) = uVar13;
                    *(ulong *)(local_370 + 0x344) =
                         CONCAT26((short)uVar14,CONCAT24(uVar1,CONCAT22((short)uVar9,(short)uVar7)))
                    ;
                    *(undefined2 *)(local_370 + 0x34c) = *(undefined2 *)((long)param_1 + 0x22e);
                    goto LAB_1003fe0c7;
                  }
                  if (uVar7 != 0xffffff80) {
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      uStack_35a = (undefined2)uVar7;
                      cStack_358 = (char)(uVar7 >> 0x10);
                      cStack_357 = (char)(uVar7 >> 0x18);
LAB_1003ff35b:
                      uStack_35c = 0x400;
                      iStack_360 = 1;
                      iStack_364 = 0x7a0a90;
                      local_368 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                          &local_368,0x12);
                    }
                    goto LAB_1003fee03;
                  }
                  goto LAB_1003ff4be;
                }
                if (local_3c8 != 0x66) goto switchD_1003fddf7_default;
                FUN_1001c62d9(param_1,0x14c);
                uVar9 = FUN_1003f0368(param_1,param_1,(long)(int)uVar7);
                puVar19 = (undefined1 *)(ulong)uVar9;
                if (uVar9 == 0) {
                  if (uVar7 == 0x14c) {
                    if (*(char *)((long)param_1 + 0x100127) != '\0') {
                      FUN_1003f7f6e(param_1);
                    }
                    uVar7 = param_1[1];
                    uVar15 = 6;
                    if (uVar7 < 6) {
                      uVar15 = (ulong)uVar7;
                    }
                    *(int *)(local_370 + 0x3f0) = (int)uVar15;
                    if (uVar7 != 0) {
                      uVar16 = 0;
                      do {
                        *(uint *)(local_370 + 0x3f4 + uVar16 * 4) = param_1[uVar16 + 3];
                        uVar16 = uVar16 + 1;
                      } while (uVar15 != uVar16);
                    }
                  }
                  goto LAB_1003fe0c7;
                }
                if (uVar9 == 0xffffff80) goto LAB_1003ff4be;
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 != '\0') {
                  uStack_35a = (undefined2)uVar9;
                  cStack_358 = (char)(uVar9 >> 0x10);
                  cStack_357 = (char)(uVar9 >> 0x18);
                  goto LAB_1003ff35b;
                }
                goto LAB_1003fee03;
              }
              uVar18 = (uint7)(uint3)(uVar7 >> 8);
              switch(local_3c8) {
              case 0x32:
                FUN_1001c62d9(param_1,0x48);
                uVar7 = FUN_1003f0368(param_1,param_1,(long)(int)uVar7);
                puVar19 = (undefined1 *)(ulong)uVar7;
                if (uVar7 != 0) {
                  if (uVar7 != 0xffffff80) {
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      uStack_35a = (undefined2)uVar7;
                      cStack_358 = (char)(uVar7 >> 0x10);
                      cStack_357 = (char)(uVar7 >> 0x18);
                      goto LAB_1003ff35b;
                    }
                    goto LAB_1003fee03;
                  }
                  goto LAB_1003ff4be;
                }
                if (*(char *)((long)param_1 + 0x100127) == '\0') {
                  uVar7 = param_1[1];
                  local_398 = param_1[2];
                  uVar9 = param_1[4];
                }
                else {
                  uVar7 = param_1[1];
                  uVar9 = param_1[2];
                  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                          uVar7 << 0x18;
                  param_1[1] = uVar7;
                  local_398 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                              uVar9 << 0x18;
                  param_1[2] = local_398;
                  uVar9 = param_1[4];
                  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18;
                  param_1[4] = uVar9;
                }
                local_3b0 = (undefined1)*param_1;
                local_3af = *(undefined1 *)((long)param_1 + 2);
                local_3ae = *(undefined1 *)((long)param_1 + 1);
                local_3ac = (undefined1)param_1[3];
                local_390 = FUN_1003ee795(uVar7);
                local_3ab = *(undefined1 *)((long)param_1 + 0xd);
                local_3ad = *(undefined1 *)((long)param_1 + 0xe);
                local_38c = FUN_1003ee795(uVar9);
                switch(*(undefined1 *)((long)param_1 + 3)) {
                case 1:
                  local_394 = 0;
                  break;
                case 2:
                  local_394 = 1;
                  break;
                case 3:
                  local_394 = 2;
                  break;
                case 4:
                  local_394 = 3;
                  break;
                case 5:
                  local_394 = 4;
                  break;
                default:
                  local_394 = 0;
                  local_398 = 0x3e;
                }
                uVar15 = CONCAT71(uVar18,1);
                break;
              case 0x33:
                uVar9 = FUN_1003f0368(param_1,param_1,(long)(int)uVar7);
                puVar19 = (undefined1 *)(ulong)uVar9;
                if (uVar9 == 0) {
                  uVar7 = FUN_1001d1aa6(param_1,uVar7,FUN_100289b76,0,local_3a8);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  uVar15 = CONCAT71(uVar18,1);
                  if (uVar7 == 0) break;
                  if (uVar7 != 0xffffff80) {
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      uStack_35a = (undefined2)uVar7;
                      cStack_358 = (char)(uVar7 >> 0x10);
                      cStack_357 = (char)(uVar7 >> 0x18);
                      goto LAB_1003fe48c;
                    }
                    goto LAB_1003fe5c8;
                  }
                  goto LAB_1003ff4be;
                }
                if (uVar9 == 0xffffff80) goto LAB_1003ff4be;
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 != '\0') {
                  uStack_35a = (undefined2)uVar9;
                  cStack_358 = (char)(uVar9 >> 0x10);
                  cStack_357 = (char)(uVar9 >> 0x18);
LAB_1003fe48c:
                  uStack_35c = 0x400;
                  iStack_360 = 1;
                  iStack_364 = 0x7a0a90;
                  local_368 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_368,
                                      0x12);
                }
                goto LAB_1003fe5c8;
              case 0x34:
                uVar7 = FUN_100160dce(*(undefined8 *)(param_1 + 0x40000),uVar7);
                puVar19 = (undefined1 *)(ulong)uVar7;
                if ((uVar7 != 0xffffff80) && (uVar7 != 0)) {
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    uStack_35a = (undefined2)uVar7;
                    cStack_358 = (char)(uVar7 >> 0x10);
                    cStack_357 = (char)(uVar7 >> 0x18);
                    goto LAB_1003fe48c;
                  }
                }
                goto LAB_1003fe5c8;
              case 0x35:
                uVar7 = FUN_100160dce(*(undefined8 *)(param_1 + 0x40000),uVar7);
                puVar19 = (undefined1 *)(ulong)uVar7;
                if ((uVar7 != 0xffffff80) && (uVar7 != 0)) {
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    uStack_35a = (undefined2)uVar7;
                    cStack_358 = (char)(uVar7 >> 0x10);
                    cStack_357 = (char)(uVar7 >> 0x18);
                    goto LAB_1003fe48c;
                  }
                }
LAB_1003fe5c8:
                uVar15 = (ulong)local_374;
                if ((int)puVar19 != 0) {
                  if ((int)puVar19 == -0x80) goto LAB_1003ff4be;
LAB_1003fee03:
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 == '\0') goto LAB_1003ff4be;
                  puVar17 = &local_368;
                  local_368 = 0x8220202;
                  iStack_364 = 0x7a0a90;
                  iStack_360 = 1;
                  uStack_35c = 0x400;
                  uStack_35a = SUB82(puVar19,0);
                  cStack_358 = (char)((ulong)puVar19 >> 0x10);
                  cStack_357 = (char)((ulong)puVar19 >> 0x18);
                  goto LAB_1003ff4ab;
                }
                break;
              case 0x36:
                uVar9 = FUN_1003f0368(param_1,param_1,(long)(int)uVar7);
                puVar19 = (undefined1 *)(ulong)uVar9;
                if (uVar9 != 0) {
                  if (uVar9 == 0xffffff80) goto LAB_1003ff4be;
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 == '\0') goto LAB_1003ff4be;
                  puVar17 = &local_368;
                  local_368 = 0x8220202;
                  iStack_364 = 0x7a0a90;
                  iStack_360 = 1;
                  uStack_35c = 0x400;
                  uStack_35a = (undefined2)uVar9;
                  cStack_358 = (char)(uVar9 >> 0x10);
                  cStack_357 = (char)(uVar9 >> 0x18);
                  goto LAB_1003ff4ab;
                }
                if (7 < uVar7) {
                  iVar10 = (int)uVar7 >> 3;
                  uVar7 = FUN_100594adc(&local_3a0,iVar10);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  if (uVar7 != 0) {
                    if (uVar7 == 0xffffff80) goto LAB_1003ff4be;
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 == '\0') goto LAB_1003ff4be;
                    puVar17 = &local_368;
                    local_368 = 0x8220202;
                    iStack_364 = 0x7a0a90;
                    iStack_360 = 1;
                    uStack_35c = 0x400;
                    uStack_35a = (undefined2)uVar7;
                    cStack_358 = (char)(uVar7 >> 0x10);
                    cStack_357 = (char)(uVar7 >> 0x18);
                    goto LAB_1003ff4ab;
                  }
                  lVar11 = 0;
                  do {
                    uVar15 = *(ulong *)(param_1 + lVar11 * 2);
                    if (*(char *)((long)param_1 + 0x100127) != '\0') {
                      *(ulong *)(param_1 + lVar11 * 2) =
                           uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                           (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                           (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                           (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38;
                    }
                    lVar12 = FUN_100300729(local_380);
                    if (lVar12 == 0) {
                      uVar15 = *(ulong *)(param_1 + lVar11 * 2);
                      *(ulong *)(param_1 + lVar11 * 2) =
                           uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                           (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                           (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                           (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38;
                      lVar12 = FUN_100300729(local_380);
                      if (lVar12 != 0) goto LAB_1003fdfb5;
                    }
                    else {
LAB_1003fdfb5:
                      FUN_10059563f(local_3a0,lVar12,0);
                    }
                    lVar11 = lVar11 + 1;
                  } while (iVar10 + (uint)(iVar10 == 0) != (int)lVar11);
                }
LAB_1003fe0c7:
                uVar15 = (ulong)local_374;
                break;
              case 0x37:
                lVar11 = FUN_100492e62(local_370,1);
                if (lVar11 == 0) {
                  uVar7 = FUN_100160dce(*(undefined8 *)(param_1 + 0x40000),uVar7);
                  puVar19 = (undefined1 *)(ulong)uVar7;
                  goto LAB_1003fe5c8;
                }
                local_58 = 0;
                uStack_54 = 0;
                uVar7 = FUN_100401975(param_1,param_1,uVar7,&local_58);
                puVar19 = (undefined1 *)(ulong)uVar7;
                if (uVar7 != 0) {
                  if (uVar7 == 0xffffff80) goto LAB_1003ff4be;
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 == '\0') goto LAB_1003ff4be;
                  puVar17 = &local_368;
                  local_368 = 0x8220202;
                  iStack_364 = 0x7a0a90;
                  iStack_360 = 1;
                  uStack_35c = 0x400;
                  uStack_35a = (undefined2)uVar7;
                  cStack_358 = (char)(uVar7 >> 0x10);
                  cStack_357 = (char)(uVar7 >> 0x18);
                  goto LAB_1003ff4ab;
                }
                uVar13 = CONCAT44(uStack_54,local_58);
                FUN_1001667c0(lVar11,uVar13);
                FUN_10017060f(uVar13);
                uVar15 = (ulong)local_374;
              }
              uVar6 = uVar6 + 1;
              local_374 = (uint)uVar15;
              if (CONCAT22(uStack_30a,local_30c) <= uVar6) goto LAB_1003fe688;
              goto LAB_1003fdd40;
            }
            uVar15 = 0;
LAB_1003fe688:
            if (cStack_304 != '\0') {
              FUN_1004870ae(local_370,&local_258);
              if (((short)local_258 == 0) || (((short)local_258 == 1 && (local_258._2_2_ == 0x20))))
              {
                uVar6 = FUN_1001ddeca(local_370 + 0x178,*(undefined8 *)(param_1 + 0x40004),
                                      local_370 + 0x1c8);
                puVar19 = (undefined1 *)(ulong)uVar6;
                if (uVar6 != 0) {
                  if (uVar6 != 0xffffff80) {
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      puVar17 = &local_368;
                      local_368 = 0x8220202;
                      iStack_364 = 0x7a0a90;
                      iStack_360 = 1;
                      uStack_35c = 0x400;
                      uStack_35a = (undefined2)uVar6;
                      cStack_358 = (char)(uVar6 >> 0x10);
                      cStack_357 = (char)(uVar6 >> 0x18);
                      goto LAB_1003ff4ab;
                    }
                  }
                  goto LAB_1003ff4be;
                }
              }
            }
            local_368 = local_368 & 0xffffff00;
            iVar10 = FUN_100492887(local_370,&local_368);
            if (iVar10 - 0x71U < 0xffffff90) {
              FUN_10048ec28(local_370,7,(undefined1)local_368,0);
            }
            if ((char)uVar15 != '\0') {
              FUN_100581b2a(local_370,&local_3b0,1);
              lVar11 = local_370;
              bVar20 = true;
              if ((*(byte *)(local_380 + 0x1bb4) & 8) == 0) {
                cVar5 = FUN_100585dd7(local_370);
                bVar20 = cVar5 != '\0';
              }
              FUN_1005821b3(lVar11,bVar20);
              if (local_2ed != '\0') {
                *(byte *)(local_370 + 0x298) = *(byte *)(local_370 + 0x298) | 2;
                FUN_100352633();
              }
              FUN_1005814bd(&local_3b0);
            }
            if (CONCAT22(uStack_306,uStack_308) != 0) {
              local_374 = 0;
              do {
                uVar6 = FUN_1003f16c4(param_1,&local_368,0x4c);
                puVar19 = (undefined1 *)(ulong)uVar6;
                if (uVar6 != 0) {
                  if (uVar6 == 0xffffff80) goto LAB_1003ff4be;
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 == '\0') goto LAB_1003ff4be;
                  puVar17 = &local_58;
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  local_50 = 1;
                  uStack_4c = 0x400;
                  uStack_4a = (undefined2)uVar6;
                  uStack_48 = (undefined2)(uVar6 >> 0x10);
                  goto LAB_1003ff4ab;
                }
                if (*(char *)((long)param_1 + 0x100127) != '\0') {
                  auVar22._4_4_ = iStack_364;
                  auVar22._0_4_ = local_368;
                  auVar22._12_2_ = uStack_35c;
                  auVar22._8_4_ = iStack_360;
                  auVar22._14_2_ = uStack_35a;
                  auVar3._2_2_ = uStack_352;
                  auVar3._0_2_ = uStack_354;
                  auVar3._4_4_ = iStack_350;
                  auVar3._8_4_ = iStack_34c;
                  auVar3._12_4_ = uStack_348;
                  local_344 = pshufb(local_344,_DAT_100711fe0);
                  auVar21 = pshufb(auVar22,_DAT_100718a70);
                  local_368 = auVar21._0_4_;
                  iStack_364 = auVar21._4_4_;
                  iStack_360 = auVar21._8_4_;
                  uStack_35c = auVar21._12_2_;
                  uStack_35a = auVar21._14_2_;
                  auVar21 = pshufb(auVar3,_DAT_100718a70);
                  uStack_354 = auVar21._0_2_;
                  uStack_352 = auVar21._2_2_;
                  iStack_350 = auVar21._4_4_;
                  iStack_34c = auVar21._8_4_;
                  uStack_348 = auVar21._12_4_;
                  local_32c = local_32c >> 0x38 | (local_32c & 0xff000000000000) >> 0x28 |
                              (local_32c & 0xff0000000000) >> 0x18 | (local_32c & 0xff00000000) >> 8
                              | (local_32c & 0xff000000) << 8 | (local_32c & 0xff0000) << 0x18 |
                              (local_32c & 0xff00) << 0x28 | local_32c << 0x38;
                  local_330 = local_330 >> 0x18 | (local_330 & 0xff0000) >> 8 |
                              (local_330 & 0xff00) << 8 | local_330 << 0x18;
                }
                if (local_368 != 0x7069686d) {
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    local_50 = 1;
                    uStack_4c = 0x822;
                    uStack_4a = 0xbe0f;
                    uStack_48 = 0x7c;
                    uStack_46 = 1;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  puVar19 = &DAT_ffffff30;
                  FUN_1001782e9(0,0);
                  goto LAB_1003ff4be;
                }
                if (iStack_350 == 0) {
                  if (((cStack_357 != '\0') && (cVar5 = FUN_10048c4f9(local_370), cVar5 != '\0')) &&
                     (local_344._0_8_ != 0)) {
                    FUN_1001b7b04(&local_58,"");
                    lVar11 = FUN_1002bb612(local_380,&local_58,local_344._0_8_);
                    FUN_1001b7a50(&local_58);
                    if (lVar11 != 0) {
                      *(byte *)(lVar11 + 0xc5) = *(byte *)(lVar11 + 0xc5) | 8;
                      goto LAB_1003fe898;
                    }
                  }
LAB_1003feb59:
                  uVar6 = FUN_100160dce(*(undefined8 *)(param_1 + 0x40000),iStack_360 - iStack_364);
                  puVar19 = (undefined1 *)(ulong)uVar6;
                  if (uVar6 != 0) {
                    if (uVar6 == 0xffffff80) goto LAB_1003ff4be;
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 == '\0') goto LAB_1003ff4be;
                    puVar17 = &local_58;
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    local_50 = 1;
                    uStack_4c = 0x400;
                    uStack_4a = (undefined2)uVar6;
                    uStack_48 = (undefined2)(uVar6 >> 0x10);
                    goto LAB_1003ff4ab;
                  }
                }
                else {
                  lVar11 = FUN_1002f96a6(*(undefined8 *)(param_1 + 0x40052));
                  if (lVar11 == 0) goto LAB_1003feb59;
LAB_1003fe898:
                  uVar6 = *(uint *)(local_370 + 0x240);
                  *(uint *)(local_370 + 0x240) = uVar6 & 0xffffffbf;
                  local_3b8 = FUN_100489a1f(local_370,lVar11,0,local_32c);
                  if (local_3b8 == 0) {
                    uVar13 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      local_50 = 1;
                      uStack_4c = 0x822;
                      uStack_4a = 0xfbaa;
                      uStack_48 = 0x7b;
                      uStack_46 = 1;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    puVar19 = (undefined1 *)0xffffff94;
                    FUN_1001782e9(0,0);
                    goto LAB_1003ff4be;
                  }
                  *(uint *)(local_370 + 0x240) =
                       *(uint *)(local_370 + 0x240) & 0xffffffbf | uVar6 & 0x40;
                  if (cStack_358 != '\0') {
                    *(byte *)(lVar11 + 0xc2) = *(byte *)(lVar11 + 0xc2) | 4;
                  }
                  lVar12 = *(long *)(lVar11 + 0x58);
                  if (((lVar12 != 0) && (*(int *)(lVar12 + 0x60) == 0)) &&
                     (*(int *)(lVar12 + 0x60) = iStack_34c, iStack_34c == 0)) {
                    *(undefined4 *)(lVar12 + 0x60) = local_3bc;
                  }
                  if (cStack_357 != '\0') {
                    FUN_1003a6b70(local_408,CONCAT22(uStack_352,uStack_354),local_3b8);
                    if (local_344._0_8_ != 0) {
                      *(byte *)(lVar11 + 0xc5) = *(byte *)(lVar11 + 0xc5) | 4;
                      FUN_100471a46(lVar11);
                      *(undefined8 *)(*(long *)(lVar11 + 0x70) + 0x38) = local_344._0_8_;
                    }
                  }
                  *(uint *)(local_3b8 + 0x5c) = CONCAT22(uStack_352,uStack_354);
                  *(ushort *)(local_3b8 + 0x60) =
                       ((ushort)*(undefined4 *)(local_3b8 + 0x60) & 0xfff7) +
                       ((ushort)local_334 & 1) * 8;
                  if (uStack_348 != 0) {
                    lVar12 = FUN_1004022c2(local_408);
                    if (lVar12 == 0) {
                      uVar13 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar5 != '\0') {
                        local_58 = 0x8220202;
                        uStack_54 = 0x7a0a90;
                        local_50 = 1;
                        uStack_4c = 0x822;
                        uStack_4a = 0xbe3d;
                        uStack_48 = 0x7c;
                        uStack_46 = 1;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      puVar19 = (undefined1 *)0x2373;
                      FUN_1001782e9(0,0);
                      goto LAB_1003ff4be;
                    }
                    local_58 = (uint)local_32c;
                    uStack_54 = (undefined4)(local_32c >> 0x20);
                    uVar13 = *(undefined8 *)(lVar12 + 0x28);
                    local_50 = (undefined4)uVar13;
                    uStack_4c = (undefined2)((ulong)uVar13 >> 0x20);
                    uStack_4a = (undefined2)((ulong)uVar13 >> 0x30);
                    FUN_1002bbb84(local_370 + 0x4a0,&local_58);
                  }
                  if (CONCAT22(uStack_35a,uStack_35c) != 0) {
                    uVar6 = 0;
                    do {
                      uVar7 = FUN_1004002e0(param_1,local_3d4);
                      puVar19 = (undefined1 *)(ulong)uVar7;
                      if (uVar7 != 0) {
                        if (uVar7 == 0xffffff80) goto LAB_1003ff4be;
                        uVar13 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar5 == '\0') goto LAB_1003ff4be;
                        puVar17 = &local_58;
                        local_58 = 0x8220202;
                        uStack_54 = 0x7a0a90;
                        local_50 = 1;
                        uStack_4c = 0x400;
                        uStack_4a = (undefined2)uVar7;
                        uStack_48 = (undefined2)(uVar7 >> 0x10);
                        goto LAB_1003ff4ab;
                      }
                      iVar10 = local_3cc - local_3d0;
                      if (local_3c8 == 100) {
                        FUN_1001c62d9(param_1,0x14);
                        uVar7 = FUN_1003f0368(param_1,param_1,(long)iVar10);
                        puVar19 = (undefined1 *)(ulong)uVar7;
                        if (uVar7 != 0) {
                          if (uVar7 == 0xffffff80) goto LAB_1003ff4be;
                          uVar13 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar5 == '\0') goto LAB_1003ff4be;
                          puVar17 = &local_58;
                          local_58 = 0x8220202;
                          uStack_54 = 0x7a0a90;
                          local_50 = 1;
                          uStack_4c = 0x400;
                          uStack_4a = (undefined2)uVar7;
                          uStack_48 = (undefined2)(uVar7 >> 0x10);
                          goto LAB_1003ff4ab;
                        }
                        uVar7 = *param_1;
                        if (*(char *)((long)param_1 + 0x100127) != '\0') {
                          uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                                  uVar7 << 0x18;
                          *param_1 = uVar7;
                        }
                        *(uint *)(local_3b8 + 0x44) = uVar7;
                      }
                      else {
                        if (local_3c8 == 1) {
                          FUN_1001b7a44(&local_58);
                          uVar7 = FUN_100400ad6(param_1,0,&local_58);
                          if ((uVar7 == 0) && ((*(byte *)(lVar11 + 0xc5) & 8) != 0)) {
                            FUN_100476c9b(lVar11,&local_58);
                            FUN_100477669(lVar11,&local_58);
                          }
                          FUN_1001b7a50(&local_58);
                        }
                        else {
                          uVar7 = FUN_100160dce(*(undefined8 *)(param_1 + 0x40000),iVar10);
                        }
                        puVar19 = (undefined1 *)(ulong)uVar7;
                        if (uVar7 != 0) {
                          if (uVar7 == 0xffffff80) goto LAB_1003ff4be;
                          uVar13 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar5 == '\0') goto LAB_1003ff4be;
                          puVar17 = &local_58;
                          local_58 = 0x8220202;
                          uStack_54 = 0x7a0a90;
                          local_50 = 1;
                          uStack_4c = 0x400;
                          uStack_4a = (undefined2)uVar7;
                          uStack_48 = (undefined2)(uVar7 >> 0x10);
                          goto LAB_1003ff4ab;
                        }
                      }
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < CONCAT22(uStack_35a,uStack_35c));
                  }
                }
                local_374 = local_374 + 1;
              } while (local_374 < CONCAT22(uStack_306,uStack_308));
            }
            uVar6 = local_378;
            uVar2 = *(ushort *)(local_370 + 0x10);
            if (uVar2 < 0x19) {
              if (uVar2 == 0xb) {
LAB_1003febef:
                FUN_1002b9206();
              }
              else if (uVar2 == 0x11) {
                FUN_100489136(local_370,&local_368);
                uStack_348 = uStack_348 & 0xfffffffe;
                FUN_10049089c(local_370,&local_368);
                uVar6 = local_378;
              }
            }
            else if (uVar2 == 0x19) {
              *(undefined2 *)(local_370 + 0x10) = 0;
            }
            else if (uVar2 == 0x22) goto LAB_1003febef;
            FUN_1001c62d9(local_4a0,0x20);
            local_4a0[0] = local_370;
            (**(code **)(param_1 + 0x40008))
                      (*(undefined8 *)(param_1 + 0x40002),0x72706c79,local_4a0,
                       *(undefined8 *)(param_1 + 0x4000a));
            if ((char)local_384 != '\0') {
              FUN_100488970(local_370);
            }
            FUN_1002842e4(local_408);
            uVar6 = uVar6 + 1;
            puVar19 = (undefined1 *)0x0;
          } while (uVar6 < local_4f8._4_4_);
        }
      }
      else {
        uVar13 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar13,0x10);
        if (cVar5 != '\0') {
          local_318 = 0x8220202;
          local_314 = "Assertion failure";
          local_30c = 0x822;
          uStack_30a = 0xbda2;
          uStack_308 = 0x7c;
          uStack_306 = 1;
          cStack_304 = '\0';
          uStack_303 = 0;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_318,0x16);
        }
        FUN_1001782e9(0,0);
        puVar19 = &DAT_ffffff30;
      }
    }
    else {
      uVar13 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar13,0x10);
      if (cVar5 != '\0') {
        local_318 = 0x8220202;
        local_314 = "Assertion failure";
        local_30c = 0x400;
        uStack_30a = (undefined2)uVar6;
        uStack_308 = (undefined2)(uVar6 >> 0x10);
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_318,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar19;
}

