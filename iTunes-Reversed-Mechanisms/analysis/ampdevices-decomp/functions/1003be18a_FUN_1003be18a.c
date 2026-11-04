// name: FUN_1003be18a
// address: 1003be18a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003be18a(undefined8 param_1,double param_2,long param_3)

{
  undefined1 auVar1 [16];
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  float fVar20;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar21 [12];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined4 uVar22;
  undefined8 in_XMM1_Qb;
  float fVar23;
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_register_000012c4 [12];
  ulong local_3c8;
  long *local_3c0;
  long local_3b8;
  ulong *local_3b0;
  long *local_3a8;
  long local_3a0;
  ulong local_398;
  long local_390;
  long local_388;
  ulong local_380;
  double local_378;
  ulong *local_370;
  ulong local_368;
  long local_360;
  long local_358;
  long local_350;
  long local_348;
  ulong local_340;
  ulong local_338;
  long local_330;
  ulong local_328;
  double local_320;
  undefined4 local_318;
  char *local_314;
  undefined2 local_30c;
  uint uStack_30a;
  undefined2 uStack_306;
  undefined2 uStack_304;
  undefined2 uStack_302;
  long local_300;
  ulong local_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined4 *)(param_3 + 0x2048) = 0;
  lVar9 = *(long *)(param_3 + 0x470);
  local_388 = *(long *)(param_3 + 0x478);
  if ((lVar9 != 0) != (local_388 == 0)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_318 = 0x8220202;
      local_314 = "Assertion failure";
      local_30c = 0x822;
      uStack_30a = 0x7c963a;
      uStack_306 = 1;
      uStack_304 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_318,0x16);
    }
    FUN_1001782e9(0,0);
    *(undefined8 *)(param_3 + 0x2048) = 0;
    uVar15 = 0xffffdc8f;
    uVar5 = 0xffffdc8f;
    if (lVar9 == 0) goto LAB_1003beffb;
    goto LAB_1003bef93;
  }
  if (lVar9 == 0) {
    if (*(char *)(param_3 + 0x1eb7) != '\x01') {
      local_328 = 0;
      local_398 = 0;
      local_340 = 0;
      local_378 = *(double *)(param_3 + 0x2020);
      uVar7 = local_398;
      uVar14 = local_340;
      uVar12 = local_328;
      goto LAB_1003be394;
    }
    *(undefined8 *)(param_3 + 0x2048) = 0;
  }
  else {
    local_378 = *(double *)(param_3 + 0x2020);
    uVar7 = FUN_1001c661d();
    if (uVar7 < 0x1000) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_318 = 0x8220202;
        local_314 = "Assertion failure";
        local_30c = 0x822;
        uStack_30a = 0x7c965f;
        uStack_306 = 1;
        uStack_304 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_318,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = 0x1000;
    }
    uVar5 = FUN_10017cfbe(*(undefined8 *)(param_3 + 0x470),&local_3c8);
    if ((uVar5 != 0xffffff80) && (uVar5 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_318 = 0x8220202;
        local_314 = "Assertion failure";
        local_30c = 0x400;
        uStack_30a = uVar5;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_318,0x12);
      }
    }
    uVar14 = uVar7 - local_3c8 % uVar7;
    if (local_3c8 % uVar7 == 0) {
      uVar14 = 0;
    }
    *(undefined8 *)(param_3 + 0x2090) = *(undefined8 *)(param_3 + 0x2078);
    lVar8 = FUN_1001c64d2();
    *(long *)(param_3 + 0x2088) = lVar8;
    if (lVar8 == 0) {
      local_340 = uVar14;
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_318 = 0x8220202;
        local_314 = "Assertion failure";
        local_30c = 0x822;
        uStack_30a = 0x7c9679;
        uStack_306 = 1;
        uStack_304 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_318,0x16);
      }
      FUN_1001782e9(0,0);
      uVar14 = local_340;
    }
    uVar12 = (ulong)uVar5;
    if (*(char *)(param_3 + 0x1eb7) == '\0') {
LAB_1003be394:
      local_328 = uVar12;
      local_340 = uVar14;
      local_398 = uVar7;
      auVar19._0_8_ = local_378 / _DAT_100708b48;
      auVar19._8_8_ = 0;
      local_3a8 = (long *)(param_3 + 0x478);
      local_390 = param_3 + 0x1f18;
      local_358 = param_3 + 0x1ed0;
      local_3b8 = param_3 + 0x1eb8;
      local_350 = param_3 + 0x1f90;
      lVar8 = param_3 + 0x1ee8;
      local_3b0 = (ulong *)(param_3 + 0x488);
      local_3a0 = param_3 + 0x1f00;
      local_320 = 0.0;
      uVar14 = 0;
      local_348 = 0;
      local_368 = 0;
      local_380 = 0;
      lVar10 = 0;
      local_378 = auVar19._0_8_;
      local_360 = lVar9;
      local_330 = lVar8;
      while ((*(int *)(param_3 + 0x1eac) == 0 || (*(int *)(param_3 + 0x1eac) == -0x27))) {
        if (uVar14 < *(ulong *)(param_3 + 0x2070)) {
          local_338 = uVar14;
          if ((uVar14 != 0) && (local_348 != 0)) {
            FUN_1001c631b(local_348 + *(long *)(param_3 + 0x2058),*(long *)(param_3 + 0x2058),uVar14
                         );
          }
          FUN_1001ea458(local_390);
          lVar9 = FUN_1001eaad3(local_358);
          uVar14 = local_328;
          if (*(int *)(param_3 + 0x1eac) == 0 || lVar9 != 0) {
            do {
              if (lVar9 != 0) {
                FUN_1001ea9a5(lVar9,local_358);
                lVar8 = (ulong)*(uint *)(lVar9 + 0x20) * *(long *)(param_3 + 0x1d60);
                uVar7 = lVar8 + local_338;
                if (*(ulong *)(param_3 + 0x2060) < uVar7) {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "false";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  uVar7 = *(ulong *)(param_3 + 0x2060);
                  lVar8 = uVar7 - local_338;
                }
                FUN_1001c631b(*(undefined8 *)(lVar9 + 0x10),local_338 + *(long *)(param_3 + 0x2058),
                              lVar8);
                local_368 = local_368 + *(uint *)(lVar9 + 0x20);
                FUN_1001ea897(lVar9,local_3b8);
                uVar15 = FUN_1003be09a(param_3);
                uVar14 = (ulong)uVar15;
                local_338 = uVar7;
                break;
              }
              FUN_1001ea345(local_390);
              lVar9 = FUN_1001eaad3(local_358);
              uVar14 = local_328;
            } while (lVar9 != 0 || *(int *)(param_3 + 0x1eac) == 0);
          }
          auVar19._0_8_ = (double)FUN_1001ea4ac(local_390);
          auVar19._8_8_ = extraout_XMM0_Qb;
          lVar9 = local_360;
          lVar8 = local_330;
          local_328 = uVar14;
          if ((int)uVar14 != 0) goto LAB_1003beeb8;
          local_328 = 0;
          local_348 = 0;
          uVar14 = local_338;
        }
        if ((lVar9 != 0) && (lVar10 == 0)) {
          FUN_1001ea458(local_350);
          while (*(int *)(param_3 + 0x1eb0) == 0) {
            lVar10 = FUN_1001eaad3(lVar8);
            if (lVar10 != 0) {
              FUN_1001ea9a5(lVar10,lVar8);
              *(undefined8 *)(lVar10 + 0x18) = 0;
              if (*(long *)(param_3 + 0x2098) != 0) {
                FUN_1001c631b(*(undefined8 *)(param_3 + 0x2088),*(undefined8 *)(lVar10 + 0x10));
                *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_3 + 0x2098);
                *(undefined8 *)(param_3 + 0x2098) = 0;
              }
              goto LAB_1003be648;
            }
            FUN_1001ea345(local_350);
          }
          lVar10 = 0;
LAB_1003be648:
          auVar19._0_8_ = (double)FUN_1001ea4ac(local_350);
          auVar19._8_8_ = extraout_XMM0_Qb_00;
        }
        bVar4 = true;
        if (uVar14 < *(ulong *)(param_3 + 0x2070)) {
          if (*(int *)(param_3 + 0x1eac) == 0) {
            bVar4 = false;
          }
          else {
            lVar11 = FUN_1001eaad3(local_358);
            auVar19._8_8_ = extraout_XMM0_Qb_01;
            auVar19._0_8_ = (double)extraout_XMM0_Qa;
            bVar4 = uVar14 != 0 && lVar11 == 0;
          }
        }
        auVar21 = auVar19._4_12_;
        uVar22 = (undefined4)((ulong)param_2 >> 0x20);
        if (lVar9 != 0) {
          bVar4 = (bool)(lVar10 != 0 & bVar4);
        }
        if (bVar4) {
          uVar7 = (ulong)*(uint *)(param_3 + 0x2068);
          if (local_368 < *(uint *)(param_3 + 0x2068)) {
            uVar7 = local_368;
          }
          uVar16 = (ulong)*(int *)(param_3 + 0x206c);
          uVar12 = uVar7 - uVar7 % uVar16;
          if ((uVar12 < uVar16) && (uVar12 = local_368, (*(byte *)(param_3 + 0x2018) & 1) != 0)) {
            if ((uVar14 != 0) && (local_348 != 0)) {
              FUN_1001c631b(local_348 + *(long *)(param_3 + 0x2058),*(long *)(param_3 + 0x2058),
                            uVar14);
              uVar16 = (ulong)*(uint *)(param_3 + 0x206c);
            }
            auVar26._0_8_ =
                 FUN_1001c62d9(*(long *)(param_3 + 0x2058) + uVar14,
                               *(long *)(param_3 + 0x2070) - uVar14);
            auVar26._8_8_ = extraout_XMM0_Qb_02;
            auVar21 = auVar26._4_12_;
            uVar14 = *(ulong *)(param_3 + 0x2070);
            local_348 = 0;
            uVar12 = uVar16;
          }
          local_380 = local_380 + uVar7;
          local_2ec = 0;
          lVar8 = *(long *)(param_3 + 0x2058) + local_348;
          local_3c0 = (long *)(lVar10 + 0x10);
          local_370 = (ulong *)(lVar10 + 0x18);
          local_30c = (undefined2)lVar8;
          uStack_30a = (uint)((ulong)lVar8 >> 0x10);
          uStack_306 = (undefined2)((ulong)lVar8 >> 0x30);
          uStack_304 = (undefined2)uVar12;
          uStack_302 = (undefined2)(uVar12 >> 0x10);
          plVar13 = local_3a8;
          puVar2 = local_3b0;
          if (lVar9 != 0) {
            plVar13 = local_3c0;
            puVar2 = local_370;
          }
          local_300 = *plVar13 + *puVar2;
          if (local_388 != 0) {
            auVar18._0_4_ = (float)*(ulong *)(param_3 + 0x488);
            auVar18._4_12_ = auVar21;
            auVar24._4_12_ = in_XMM2._4_12_;
            auVar24._0_4_ = (float)local_320;
            auVar19 = insertps(auVar18,auVar24,0x10);
            auVar25._4_4_ = uVar22;
            auVar25._0_4_ = (float)*(ulong *)(param_3 + 0x480);
            auVar25._8_4_ = (int)in_XMM1_Qb;
            auVar25._12_4_ = (int)((ulong)in_XMM1_Qb >> 0x20);
            auVar1._4_12_ = in_register_000012c4;
            auVar1._0_4_ = (float)*(uint *)(param_3 + 0x1e9c);
            auVar26 = insertps(auVar25,auVar1,0x10);
            auVar19 = divps(auVar19,auVar26);
            fVar17 = auVar19._0_4_;
            in_XMM2._0_8_ = (double)fVar17;
            in_XMM2._8_8_ = 0;
            if (DAT_100700ab0 < in_XMM2._0_8_) {
              fVar20 = auVar19._4_4_;
              in_XMM2._4_4_ = fVar20;
              in_XMM2._0_4_ = fVar20;
              in_XMM2._8_4_ = auVar19._12_4_;
              in_XMM2._12_4_ = auVar19._12_4_;
              if (fVar20 < fVar17) {
                fVar23 = DAT_100700b60;
                if (DAT_100700b60 <= fVar17 / fVar20) {
                  fVar23 = fVar17 / fVar20;
                }
                fVar23 = fVar23 * (float)*(ulong *)(param_3 + 0x480);
                uVar7 = (ulong)fVar23;
                lVar9 = *local_3a8;
                fVar23 = fVar23 - _DAT_10070844c;
                in_XMM2 = ZEXT416((uint)fVar23);
                uVar7 = (long)fVar23 & (long)uVar7 >> 0x3f | uVar7;
                local_338 = uVar14;
                lVar8 = FUN_1001c63e1(uVar7);
                if (lVar8 == 0) {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "newBuffer != nullptr";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0);
                  *(undefined4 *)(param_3 + 0x1eb0) = 0xffffff94;
                  lVar9 = local_360;
                  lVar8 = local_330;
                  goto LAB_1003beeb8;
                }
                FUN_1001c631b(lVar9,lVar8,*(undefined8 *)(param_3 + 0x488));
                *(long *)(param_3 + 0x478) = lVar8;
                *(ulong *)(param_3 + 0x480) = uVar7;
                local_300 = lVar8 + *(long *)(param_3 + 0x488);
                local_2f8 = uVar7;
                FUN_1001c64c1(lVar9);
                uVar14 = local_338;
                lVar9 = local_360;
              }
            }
          }
          lVar8 = local_330;
          local_2f0 = (undefined4)(long)local_320;
          uVar7 = FUN_1003bdfa8(*(undefined8 *)(param_3 + 0x2008),0x656e6364,&local_318,
                                *(undefined8 *)(param_3 + 0x2010));
          if ((int)uVar7 == 0) {
            lVar11 = *(long *)(param_3 + 0x1d60) * (long)(int)local_2ec;
            local_348 = local_348 + lVar11;
            uVar14 = uVar14 - lVar11;
            local_368 = local_368 - (long)(int)local_2ec;
            auVar19._0_8_ = (double)(int)local_2ec / local_378;
            auVar19._8_8_ = 0;
            in_XMM1_Qb = 0;
            param_2 = local_320 + auVar19._0_8_;
            local_320 = param_2;
            if (local_388 == 0) {
              uVar7 = (long)local_2ec._4_4_ + *local_370;
              *local_370 = uVar7;
              if (uVar7 < *(ulong *)(param_3 + 0x2080)) {
                local_328 = 0;
                if (local_340 == 0) {
                  local_340 = 0;
                }
                else if (local_340 <= uVar7) goto LAB_1003bea18;
              }
              else {
LAB_1003bea18:
                local_338 = uVar14;
                FUN_1001ea458(local_350);
                if (*(long *)(param_3 + 0x2088) != 0) {
                  uVar14 = *local_370;
                  if (local_340 == 0) {
                    uVar7 = uVar14 % local_398;
                  }
                  else {
                    uVar7 = uVar14 - local_340;
                  }
                  if (uVar7 != 0) {
                    FUN_1001c631b((uVar14 - uVar7) + *local_3c0,*(long *)(param_3 + 0x2088),uVar7);
                    *local_370 = *local_370 - uVar7;
                    *(ulong *)(param_3 + 0x2098) = uVar7;
                  }
                  local_340 = 0;
                  lVar8 = local_330;
                }
                FUN_1001ea897(lVar10,local_3a0);
                lVar10 = local_350;
                FUN_1001ea4ac(local_350);
                FUN_1001ea458(lVar10);
                auVar19._0_8_ = (double)FUN_1003c0bfc(param_3);
                auVar19._8_8_ = extraout_XMM0_Qb_03;
                local_328 = 0;
                lVar10 = 0;
                uVar14 = local_338;
              }
            }
            else {
              *local_3b0 = *local_3b0 + (long)local_2ec._4_4_;
              local_328 = 0;
            }
            goto LAB_1003beb5c;
          }
          local_328 = uVar7;
          if ((int)uVar7 != -0x80) {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            lVar8 = local_330;
            if (cVar3 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,(int)local_328);
LAB_1003bee09:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
              lVar8 = local_330;
            }
          }
          goto LAB_1003beeb8;
        }
LAB_1003beb5c:
        if (*(int *)(param_3 + 0x1eac) != 0) {
          lVar11 = FUN_1001eaad3(local_358);
          auVar19._8_8_ = extraout_XMM0_Qb_04;
          auVar19._0_8_ = (double)extraout_XMM0_Qa_00;
          if (((lVar11 == 0) && (uVar14 == 0)) &&
             ((local_388 != 0 || ((lVar9 != 0 && (*(long *)(param_3 + 0x2098) == 0))))))
          goto LAB_1003beeb8;
        }
        if (*(int *)(param_3 + 0x1eb0) != 0) {
          local_328 = (ulong)*(uint *)(param_3 + 0x1eb0);
          goto LAB_1003beeb8;
        }
        if ((*(char *)(param_3 + 0x1eb4) == '\x01') && (*(long *)(param_3 + 0x1e90) != 0)) {
          local_328 = FUN_1001ceb24(*(long *)(param_3 + 0x1e90),0x7570726d,(long)local_320,
                                    *(undefined4 *)(param_3 + 0x1e9c),0);
          auVar19._8_8_ = extraout_XMM0_Qb_05;
          auVar19._0_8_ = (double)extraout_XMM0_Qa_01;
          if ((int)local_328 != 0) {
            if ((int)local_328 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              lVar8 = local_330;
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,(int)local_328);
                goto LAB_1003bee09;
              }
            }
            goto LAB_1003beeb8;
          }
        }
        *(int *)(param_3 + 0x2048) = (int)(long)local_320;
        if (*(char *)(param_3 + 0x1eb7) == '\x01') goto LAB_1003beeb8;
      }
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "(encodeData->readStatus == noErr) || (encodeData->readStatus == eofErr)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0);
      local_328 = (ulong)*(uint *)(param_3 + 0x1eac);
      lVar8 = local_330;
LAB_1003beeb8:
      if (local_380 >> 0x20 != 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "validSamplesWritten <= 4294967295U";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        lVar8 = local_330;
      }
      lVar11 = local_350;
      *(int *)(param_3 + 0x204c) = (int)local_380;
      *(int *)(param_3 + 0x2048) = (int)(long)local_320;
      if (lVar9 != 0) {
        if (lVar10 != 0) {
          FUN_1001ea458(local_350);
          if ((int)local_328 == 0) {
            FUN_1001ea897(lVar10,local_3a0);
            FUN_1001ea4ac(lVar11);
            FUN_1001ea458(lVar11);
            FUN_1003c0bfc(param_3);
            FUN_1001ea458(lVar11);
          }
          else {
            FUN_1001ea897(lVar10,lVar8);
          }
          FUN_1001ea4ac(lVar11);
        }
        uVar5 = (uint)local_328;
        goto LAB_1003bef93;
      }
      uVar15 = (uint)local_328;
    }
    else {
      *(undefined8 *)(param_3 + 0x2048) = 0;
LAB_1003bef93:
      uVar15 = uVar5;
      lVar9 = *(long *)(param_3 + 0x2088);
      if (lVar9 != 0) {
        if (*(long *)(param_3 + 0x2098) != 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "encodeData->bytesInSlopBuffer == 0";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          lVar9 = *(long *)(param_3 + 0x2088);
        }
        FUN_1001c64c1(lVar9);
        *(undefined8 *)(param_3 + 0x2088) = 0;
      }
    }
    if (uVar15 != 0) goto LAB_1003beffb;
  }
  uVar15 = (*(byte *)(param_3 + 0x1eb7) ^ 1) * 0x80 - 0x80;
LAB_1003beffb:
  *(uint *)(param_3 + 0x2050) = uVar15;
  if (*(char *)(param_3 + 0x1eb4) == '\0') {
    FUN_1001e9809(param_3 + 0x20a0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

