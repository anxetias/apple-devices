// name: FUN_10061fc8e
// address: 10061fc8e

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10061fc8e(ulong param_1,undefined4 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  undefined2 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  int *piVar21;
  undefined2 *puVar22;
  size_t sVar23;
  float *pfVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  void *pvVar29;
  undefined8 *puVar30;
  uint uVar31;
  ulong uVar32;
  undefined4 *puVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined4 *puVar36;
  long *plVar37;
  undefined4 *puVar38;
  uint *puVar39;
  char *pcVar40;
  double dVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qa_09;
  undefined8 extraout_XMM1_Qa_10;
  undefined8 extraout_XMM1_Qa_11;
  undefined8 extraout_XMM1_Qa_12;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  undefined8 extraout_XMM1_Qb_09;
  undefined8 extraout_XMM1_Qb_10;
  undefined1 auVar44 [16];
  undefined8 extraout_XMM1_Qb_11;
  undefined8 extraout_XMM1_Qb_12;
  undefined1 auVar45 [16];
  int iVar49;
  undefined1 auVar46 [16];
  int iVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 in_stack_fffffffffffffc58 [16];
  undefined1 auVar56 [12];
  undefined1 local_388 [16];
  double local_378;
  long local_370;
  long local_368;
  long local_360;
  uint local_354;
  undefined8 *local_350;
  undefined1 local_348 [16];
  undefined8 local_338;
  long local_328;
  char *local_320;
  undefined1 local_318 [16];
  long *local_308;
  long local_300;
  ulong local_2f8;
  undefined4 local_2ec;
  undefined4 *local_2e8;
  long local_2e0;
  long local_2d8;
  byte local_2ca;
  byte local_2c9;
  undefined8 local_2c8;
  undefined8 local_2c0;
  ulong local_2b8;
  byte local_2a9;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined2 uStack_28c;
  undefined2 uStack_28a;
  undefined2 uStack_288;
  undefined4 uStack_286;
  undefined2 uStack_282;
  double local_280;
  undefined2 local_278;
  undefined4 *local_276;
  undefined2 local_26e;
  double local_26c;
  undefined2 local_264;
  undefined8 local_262;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  undefined2 uStack_234;
  undefined2 uStack_232;
  undefined8 uStack_230;
  undefined2 uStack_228;
  undefined4 uStack_226;
  undefined2 uStack_222;
  undefined4 *local_220;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_2d8 = *(long *)(param_1 + 0x10);
  local_300 = *(long *)(param_1 + 0x18);
  local_2e0 = *(long *)(param_1 + 0x20);
  pcVar40 = *(char **)(local_2d8 + 0x30);
  local_308 = (long *)0x0;
  local_318 = (undefined1  [16])0x0;
  local_338 = 0;
  local_348 = (undefined1  [16])0x0;
  local_350 = param_3;
  local_2e8 = param_2;
  local_2c8 = param_1;
  uVar4 = FUN_10027bd6f();
  local_2ca = FUN_10027bdd3();
  if (*(char *)(local_2d8 + 0x390) == '\0') {
    local_2ec = 0;
  }
  else {
    local_2ec = (undefined4)
                CONCAT71((int7)((ulong)local_2e0 >> 8),*(char *)(local_2e0 + 0x2c8) != '\0');
  }
  local_2a9 = true;
  local_320 = pcVar40;
  if (*(char *)(local_2d8 + 0x38d) == '\0') {
    if ((*(char *)(local_2e0 + 0x379) == '\0') || (*(char *)(local_2d8 + 0x38b) == '\0')) {
      cVar5 = '\0';
    }
    else if (*(char *)(local_2d8 + 0x38c) == '\0') {
      cVar5 = '\x01';
    }
    else {
      cVar5 = FUN_100537ef0(0);
    }
    local_2a9 = cVar5 != '\0';
  }
  local_368 = CONCAT71(local_368._1_7_,uVar4);
  local_2c9 = FUN_100537825();
  uVar31 = *(uint *)(local_2c8 + 0x38);
  local_378 = (double)FUN_1001ebd46();
  if (*(char *)(local_2c8 + 0x4de) != '\0') {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x8220202;
      uStack_234 = 0xa90;
      uStack_232 = 0x7a;
      uStack_230._0_2_ = 1;
      uStack_230._2_2_ = 0;
      uStack_230._4_2_ = 0x822;
      uStack_230._6_2_ = 0x5526;
      uStack_228 = 0x7f;
      uStack_226 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (local_350 == (undefined8 *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x8220202;
      uStack_234 = 0xa90;
      uStack_232 = 0x7a;
      uStack_230._0_2_ = 1;
      uStack_230._2_2_ = 0;
      uStack_230._4_2_ = 0x822;
      uStack_230._6_2_ = 0x5565;
      uStack_228 = 0x7f;
      uStack_226 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    iVar8 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_100620184;
  }
  *local_350 = 0;
  if (local_300 == 0) {
LAB_100620113:
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      pcVar40 = "TrackDataIsValid(sourceTrackData)";
LAB_100622094:
      uStack_230._4_2_ = 0x822;
      uStack_230._2_2_ = 0;
      uStack_230._0_2_ = 1;
      uStack_232 = 0x7a;
      uStack_234 = 0xa90;
      local_238 = 0x8220202;
      uStack_230._6_2_ = SUB82(pcVar40,0);
      uStack_228 = (undefined2)((ulong)pcVar40 >> 0x10);
      uStack_226 = (undefined4)((ulong)pcVar40 >> 0x20);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (*(int *)(local_300 + 0x80) != 0x74646174) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_238 = 0x8220202;
        uStack_234 = 0xb58c;
        uStack_232 = 0x7a;
        uStack_230._0_2_ = 1;
        uStack_230._2_2_ = 0;
        uStack_230._4_2_ = 0x822;
        uStack_230._6_2_ = 0xec03;
        uStack_228 = 0x7a;
        uStack_226 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_100620113;
    }
    if (local_320 != (char *)0x0) {
      if (*(int *)(local_320 + 0x80) != 0x74646174) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          local_238 = 0x8220202;
          uStack_234 = 0xb58c;
          uStack_232 = 0x7a;
          uStack_230._0_2_ = 1;
          uStack_230._2_2_ = 0;
          uStack_230._4_2_ = 0x822;
          uStack_230._6_2_ = 0xec03;
          uStack_228 = 0x7a;
          uStack_226 = 1;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        cVar5 = FUN_1001782e9(0,1);
        if (cVar5 == '\0') goto LAB_100620158;
      }
      FUN_100177cff(&local_354);
      local_360 = CONCAT44(local_360._4_4_,local_354 - 0xed4e00);
      if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      puVar36 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        local_238 = 0x8000100;
        uStack_234 = SUB82(local_2e8,0);
        uStack_232 = (undefined2)((ulong)local_2e8 >> 0x10);
        uStack_230._0_2_ = (undefined2)((ulong)local_2e8 >> 0x20);
        uStack_230._2_2_ = (undefined2)((ulong)local_2e8 >> 0x30);
        __os_log_impl(0x100000000,puVar36,1,"sync> autofill available free bytes = %lld",&local_238,
                      0xc);
      }
      local_238 = 0;
      uStack_234 = 0;
      uStack_232 = 0;
      uStack_230._0_2_ = 0;
      uStack_230._2_2_ = 0;
      uStack_230._4_2_ = 0;
      uStack_230._6_2_ = 0;
      uStack_228 = 0;
      uStack_226 = 0;
      uStack_222 = 0;
      uStack_288 = 0;
      uStack_286 = 0;
      uStack_282 = 0;
      local_298._0_4_ = 0;
      local_298._4_4_ = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      uStack_28a = 0;
      FUN_100622e46(&local_238,*(undefined4 *)(local_300 + 0x9c));
      lVar10 = FUN_1002f930c(local_300);
      uVar31 = uVar31 & 1 | 0x52;
      local_2f8 = 0x7ffffffffffffffc;
      for (; lVar10 != 0; lVar10 = FUN_1002f9451(lVar10)) {
        uVar7 = FUN_1004744bf(lVar10,0);
        cVar5 = FUN_1002bd328(lVar10);
        if ((cVar5 != '\0') && ((uVar7 & 0x200005) == 1)) {
          puVar36 = (undefined4 *)
                    CONCAT26(uStack_230._6_2_,
                             CONCAT24(uStack_230._4_2_,
                                      CONCAT22(uStack_230._2_2_,(undefined2)uStack_230)));
          puVar19 = (undefined4 *)CONCAT26(uStack_222,CONCAT42(uStack_226,uStack_228));
          if (puVar36 < puVar19) {
            *puVar36 = *(undefined4 *)(lVar10 + 8);
            puVar36 = puVar36 + 1;
          }
          else {
            pvVar29 = (void *)CONCAT26(uStack_232,CONCAT24(uStack_234,local_238));
            sVar23 = (long)puVar36 - (long)pvVar29;
            lVar35 = (long)sVar23 >> 2;
            uVar32 = lVar35 + 1;
            if (0x3fffffffffffffff < uVar32) {
                    /* WARNING: Subroutine does not return */
              FUN_1001bd596(&local_238);
            }
            uVar20 = (long)puVar19 - (long)pvVar29;
            uVar11 = (long)uVar20 >> 1;
            if (uVar11 <= uVar32) {
              uVar11 = uVar32;
            }
            if (0x7ffffffffffffffb < uVar20) {
              uVar11 = 0x3fffffffffffffff;
            }
            if (uVar11 == 0) {
              auVar55 = ZEXT816(0);
              lVar28 = lVar35;
            }
            else {
              auVar55 = FUN_1001b5f6e(&uStack_228,uVar11);
              pvVar29 = (void *)CONCAT26(uStack_232,CONCAT24(uStack_234,local_238));
              sVar23 = CONCAT26(uStack_230._6_2_,
                                CONCAT24(uStack_230._4_2_,
                                         CONCAT22(uStack_230._2_2_,(undefined2)uStack_230))) -
                       (long)pvVar29;
              lVar28 = (long)sVar23 >> 2;
            }
            lVar12 = auVar55._0_8_;
            puVar19 = (undefined4 *)(lVar12 + lVar35 * 4);
            lVar13 = lVar12 + auVar55._8_8_ * 4;
            *puVar19 = *(undefined4 *)(lVar10 + 8);
            puVar36 = (undefined4 *)(lVar12 + lVar35 * 4 + 4);
            puVar19 = puVar19 + -lVar28;
            _memcpy(puVar19,pvVar29,sVar23);
            pvVar29 = (void *)CONCAT26(uStack_232,CONCAT24(uStack_234,local_238));
            local_238 = SUB84(puVar19,0);
            uStack_234 = (undefined2)((ulong)puVar19 >> 0x20);
            uStack_232 = (undefined2)((ulong)puVar19 >> 0x30);
            uStack_230._0_2_ = SUB82(puVar36,0);
            uStack_230._2_2_ = (undefined2)((ulong)puVar36 >> 0x10);
            uStack_230._4_2_ = (undefined2)((ulong)puVar36 >> 0x20);
            uStack_230._6_2_ = (undefined2)((ulong)puVar36 >> 0x30);
            uStack_228 = (undefined2)lVar13;
            uStack_226 = (undefined4)((ulong)lVar13 >> 0x10);
            uStack_222 = (undefined2)((ulong)lVar13 >> 0x30);
            if (pvVar29 != (void *)0x0) {
              operator_delete(pvVar29);
            }
          }
          uStack_230._0_2_ = SUB82(puVar36,0);
          uStack_230._2_2_ = (undefined2)((ulong)puVar36 >> 0x10);
          uStack_230._4_2_ = (undefined2)((ulong)puVar36 >> 0x20);
          uStack_230._6_2_ = (undefined2)((ulong)puVar36 >> 0x30);
        }
      }
      FUN_100622e46(&local_298,
                    CONCAT26(uStack_230._6_2_,
                             CONCAT24(uStack_230._4_2_,
                                      CONCAT22(uStack_230._2_2_,(undefined2)uStack_230))) -
                    CONCAT26(uStack_232,CONCAT24(uStack_234,local_238)) >> 2);
      puVar36 = (undefined4 *)CONCAT26(uStack_232,CONCAT24(uStack_234,local_238));
      if (puVar36 !=
          (undefined4 *)
          CONCAT26(uStack_230._6_2_,
                   CONCAT24(uStack_230._4_2_,CONCAT22(uStack_230._2_2_,(undefined2)uStack_230)))) {
        local_2b8 = local_2c8 + 0x58;
        local_2a0 = (undefined4 *)(local_2c8 + 0x70);
        do {
          local_2c0 = puVar36;
          puVar36 = (undefined4 *)FUN_1002f950a(local_300,*puVar36);
          if (puVar36 != (undefined4 *)0x0) {
            puVar30 = *(undefined8 **)(puVar36 + 0x16);
            local_2a8 = puVar36;
            puVar36 = local_298;
            for (; puVar30 != (undefined8 *)0x0; puVar30 = (undefined8 *)*puVar30) {
              if (*(int *)((long)puVar30 + 0x3c) == 0x46494c45) {
                local_298 = puVar36;
                iVar8 = FUN_1002b0559(puVar30,uVar31);
                if (iVar8 == 0) {
                  uVar7 = FUN_1004eb707(local_2d8,puVar30,local_2b8,local_2a0,0);
                  puVar36 = local_298;
                  if (uVar7 < 4) {
                    puVar19 = (undefined4 *)CONCAT26(uStack_28a,CONCAT24(uStack_28c,uStack_290));
                    puVar38 = (undefined4 *)CONCAT26(uStack_282,CONCAT42(uStack_286,uStack_288));
                    if (puVar19 < puVar38) {
                      *puVar19 = *(undefined4 *)(puVar30 + 6);
                      puVar19 = puVar19 + 1;
                    }
                    else {
                      sVar23 = (long)puVar19 - (long)local_298;
                      lVar10 = (long)sVar23 >> 2;
                      uVar32 = lVar10 + 1;
                      if (0x3fffffffffffffff < uVar32) {
                    /* WARNING: Subroutine does not return */
                        FUN_1001bd596(&local_298);
                      }
                      uVar20 = (long)puVar38 - (long)local_298;
                      uVar11 = (long)uVar20 >> 1;
                      if (uVar11 <= uVar32) {
                        uVar11 = uVar32;
                      }
                      if (0x7ffffffffffffffb < uVar20) {
                        uVar11 = 0x3fffffffffffffff;
                      }
                      local_328 = CONCAT44(local_328._4_4_,uVar31);
                      if (uVar11 == 0) {
                        auVar55 = ZEXT816(0);
                        lVar35 = lVar10;
                      }
                      else {
                        auVar55 = FUN_1001b5f6e(&uStack_288,uVar11);
                        sVar23 = CONCAT26(uStack_28a,CONCAT24(uStack_28c,uStack_290)) -
                                 (long)local_298;
                        lVar35 = (long)sVar23 >> 2;
                      }
                      lVar13 = auVar55._0_8_;
                      puVar36 = (undefined4 *)(lVar13 + lVar10 * 4);
                      lVar28 = lVar13 + auVar55._8_8_ * 4;
                      *puVar36 = *(undefined4 *)(puVar30 + 6);
                      puVar19 = (undefined4 *)(lVar13 + lVar10 * 4 + 4);
                      puVar36 = puVar36 + -lVar35;
                      _memcpy(puVar36,local_298,sVar23);
                      uStack_290 = SUB84(puVar19,0);
                      uStack_28c = (undefined2)((ulong)puVar19 >> 0x20);
                      uStack_28a = (undefined2)((ulong)puVar19 >> 0x30);
                      uStack_288 = (undefined2)lVar28;
                      uStack_286 = (undefined4)((ulong)lVar28 >> 0x10);
                      uStack_282 = (undefined2)((ulong)lVar28 >> 0x30);
                      if (local_298 != (undefined4 *)0x0) {
                        operator_delete(local_298);
                        local_298 = puVar36;
                        puVar36 = local_298;
                      }
                      uVar31 = (uint)local_328;
                    }
                    uStack_290 = SUB84(puVar19,0);
                    uStack_28c = (undefined2)((ulong)puVar19 >> 0x20);
                    uStack_28a = (undefined2)((ulong)puVar19 >> 0x30);
                    break;
                  }
                }
                else {
                  if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  puVar19 = DAT_1008c75b8;
                  uVar31 = uVar31 & 0xffffffee;
                  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                  puVar36 = local_298;
                  if (cVar5 != '\0') {
                    FUN_100476ac1(local_388,local_2a8);
                    local_254 = (char *)FUN_1001b83ae(local_388);
                    local_258 = 0x8220202;
                    local_24c = 0x400;
                    local_24a = iVar8;
                    __os_log_impl(0x100000000,puVar19,1,
                                  "sync> failed to prepare track \"%{public}s\" (%d)",&local_258,
                                  0x12);
                    FUN_1001b7a50(local_388);
                    puVar36 = local_298;
                  }
                }
              }
            }
            local_298 = puVar36;
            iVar8 = FUN_1006020dd(local_2c8);
            if (iVar8 != 0) {
              if (iVar8 == -0x80) {
                iVar25 = 0x17;
              }
              else {
                uVar9 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar9,0x10);
                iVar25 = 0x17;
                if (cVar5 != '\0') {
                  local_258 = 0x8220202;
                  local_254 = "Assertion failure";
                  local_24c = 0x400;
                  local_24a = iVar8;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_258,
                                      0x12);
                }
              }
              goto LAB_100620680;
            }
          }
          puVar36 = local_2c0 + 1;
        } while (puVar36 !=
                 (undefined4 *)
                 CONCAT26(uStack_230._6_2_,
                          CONCAT24(uStack_230._4_2_,
                                   CONCAT22(uStack_230._2_2_,(undefined2)uStack_230))));
      }
      FUN_10061c164(local_318,
                    CONCAT26(uStack_28a,CONCAT24(uStack_28c,uStack_290)) - (long)local_298 >> 2);
      if (local_298 == (undefined4 *)CONCAT26(uStack_28a,CONCAT24(uStack_28c,uStack_290))) {
        iVar8 = 0;
        iVar25 = 0;
      }
      else {
        local_2f8 = local_2f8 - 4;
        puVar36 = local_298;
        do {
          lVar10 = FUN_1002f9e29(local_300,*puVar36);
          if (lVar10 != 0) {
            if ((ulong)local_318._8_8_ < local_308) {
              *(long *)local_318._8_8_ = lVar10;
              plVar37 = (long *)(local_318._8_8_ + 8);
              pvVar29 = (void *)local_318._0_8_;
            }
            else {
              lVar35 = (long)(local_318._8_8_ - local_318._0_8_) >> 3;
              uVar32 = lVar35 + 1;
              if (0x1fffffffffffffff < uVar32) {
                    /* WARNING: Subroutine does not return */
                FUN_100263112(local_318);
              }
              uVar11 = (long)local_308 - local_318._0_8_ >> 2;
              if (uVar11 <= uVar32) {
                uVar11 = uVar32;
              }
              if (local_2f8 <= (ulong)((long)local_308 - local_318._0_8_)) {
                uVar11 = 0x1fffffffffffffff;
              }
              if (uVar11 == 0) {
                auVar55 = ZEXT816(0);
              }
              else {
                auVar55 = FUN_100249b6c(&local_308);
              }
              lVar28 = auVar55._0_8_;
              plVar1 = (long *)(lVar28 + lVar35 * 8);
              plVar2 = (long *)(lVar28 + auVar55._8_8_ * 8);
              *plVar1 = lVar10;
              plVar37 = (long *)(lVar28 + lVar35 * 8 + 8);
              pvVar29 = (void *)((long)plVar1 - (local_318._8_8_ - local_318._0_8_));
              _memcpy(pvVar29,(void *)local_318._0_8_,local_318._8_8_ - local_318._0_8_);
              uVar9 = local_318._0_8_;
              local_318._8_8_ = plVar37;
              local_318._0_8_ = pvVar29;
              local_308 = plVar2;
              if ((void *)uVar9 != (void *)0x0) {
                operator_delete((void *)uVar9);
                pvVar29 = (void *)local_318._0_8_;
              }
            }
            local_318._0_8_ = pvVar29;
            local_318._8_8_ = plVar37;
          }
          puVar36 = puVar36 + 1;
        } while (puVar36 != (undefined4 *)CONCAT26(uStack_28a,CONCAT24(uStack_28c,uStack_290)));
        iVar8 = 0;
        iVar25 = 0;
      }
LAB_100620680:
      if (local_298 != (undefined4 *)0x0) {
        uStack_290 = SUB84(local_298,0);
        uStack_28c = (undefined2)((ulong)local_298 >> 0x20);
        uStack_28a = (undefined2)((ulong)local_298 >> 0x30);
        operator_delete(local_298);
      }
      pvVar29 = (void *)CONCAT26(uStack_232,CONCAT24(uStack_234,local_238));
      if (pvVar29 != (void *)0x0) {
        uStack_230._0_2_ = (undefined2)local_238;
        uStack_230._2_2_ = (undefined2)((uint)local_238 >> 0x10);
        uStack_230._4_2_ = uStack_234;
        uStack_230._6_2_ = uStack_232;
        operator_delete(pvVar29);
      }
      if (iVar25 != 0x17) {
        if (iVar25 != 0) goto LAB_100620184;
        uVar32 = (ulong)(local_318._8_8_ - local_318._0_8_) >> 3;
        if ((int)uVar32 == 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_238 = 0x8220202;
            uStack_234 = 0xa90;
            uStack_232 = 0x7a;
            uStack_230._0_2_ = 1;
            uStack_230._2_2_ = 0;
            uStack_230._4_2_ = 0x822;
            uStack_230._6_2_ = 0x567a;
            uStack_228 = 0x7c;
            uStack_226 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_100622a38;
        }
        FUN_1003071cd(local_300);
        uVar9 = local_318._0_8_;
        uVar14 = local_318._8_8_;
        local_238 = 0x622ed0;
        uStack_234 = 1;
        uStack_232 = 0;
        lVar10 = (long)(local_318._8_8_ - local_318._0_8_) >> 3;
        auVar55 = ZEXT816(0);
        if (0x80 < lVar10) {
          auVar55 = FUN_100623442(lVar10);
        }
        pvVar29 = auVar55._0_8_;
        FUN_10062348f(uVar9,uVar14,&local_238,lVar10,pvVar29,auVar55._8_8_);
        if (pvVar29 != (void *)0x0) {
          operator_delete(pvVar29);
        }
        FUN_100307383(local_300);
        FUN_10062307c(local_348,1);
        lVar10 = local_348._0_8_;
        FUN_10031c15f(local_300);
        auVar55._8_8_ = extraout_XMM1_Qb;
        auVar55._0_8_ = extraout_XMM1_Qa;
        local_370 = local_2e0 + 0x280;
        local_2c8 = uVar32 & 0xffffffff;
        local_2a8 = (undefined4 *)0x1;
        uVar11 = 0;
        local_328 = lVar10;
        local_2b8 = 0;
        local_2f8 = 0;
        local_2a0 = (undefined4 *)uVar32;
        do {
          auVar56 = in_stack_fffffffffffffc58._4_12_;
          lVar35 = *(long *)(local_318._0_8_ + uVar11 * 8);
          if (((lVar35 == 0) || (lVar28 = *(long *)(lVar35 + 8), lVar28 == 0)) ||
             (*(long *)(lVar28 + 0x10) == 0)) {
            uVar9 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar9,0x10);
            if (cVar5 != '\0') {
              local_238 = 0x8220202;
              uStack_234 = 0xa90;
              uStack_232 = 0x7a;
              uStack_230._0_2_ = 1;
              uStack_230._2_2_ = 0;
              uStack_230._4_2_ = 0x822;
              uStack_230._6_2_ = 0x8d38;
              uStack_228 = 0x7b;
              uStack_226 = 1;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            auVar55._8_8_ = extraout_XMM1_Qb_01;
            auVar55._0_8_ = extraout_XMM1_Qa_01;
          }
          else {
            uVar32 = *(long *)(lVar28 + 0x28);
            if (uVar11 != 0) {
              if (local_2b8 == uVar32) {
                uVar9 = *(undefined8 *)(local_318._0_8_ + -8 + uVar11 * 8);
                if (DAT_1008c7808 == '\0') {
                  FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
                  auVar56 = in_stack_fffffffffffffc58._4_12_;
                  DAT_1008c7808 = '\x01';
                }
                _DAT_1008c77d8 = _DAT_1008c77f8;
                uRam00000001008c77e0 = uRam00000001008c7800;
                _DAT_1008c77c8 = _DAT_1008c77e8;
                uRam00000001008c77d0 = uRam00000001008c77f0;
                in_stack_fffffffffffffc58._12_4_ = 0;
                in_stack_fffffffffffffc58._0_12_ = auVar56;
                in_stack_fffffffffffffc58 = in_stack_fffffffffffffc58 << 0x20;
                cVar5 = FUN_10030272d(lVar35,uVar9,&DAT_1008c77c8,0,0,(undefined1)local_2ec,
                                      in_stack_fffffffffffffc58);
                auVar55._8_8_ = extraout_XMM1_Qb_07;
                auVar55._0_8_ = extraout_XMM1_Qa_07;
                uVar32 = local_2b8;
                if (cVar5 != '\0') {
                  if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  puVar36 = DAT_1008c75b8;
                  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                  auVar55._8_8_ = extraout_XMM1_Qb_08;
                  auVar55._0_8_ = extraout_XMM1_Qa_08;
                  if (cVar5 != '\0') {
                    FUN_100476ac1(&local_238,lVar28);
                    uVar9 = FUN_1001b83ae(&local_238);
                    local_298._0_4_ = 0x8220102;
                    local_298._4_4_ = (undefined4)uVar9;
                    uStack_290 = (undefined4)((ulong)uVar9 >> 0x20);
                    __os_log_impl(0x100000000,puVar36,1,
                                  "sync> skipping duplicate autofilled track \"%{public}s\"",
                                  &local_298,0xc);
                    FUN_1001b7a50(&local_238);
                    auVar55._8_8_ = extraout_XMM1_Qb_09;
                    auVar55._0_8_ = extraout_XMM1_Qa_09;
                  }
                  goto LAB_1006208a1;
                }
              }
              else {
                *(ulong *)(lVar10 + 8) = local_2b8;
                *(int *)(lVar10 + 4) = (int)uVar11 + -1;
                puVar36 = (undefined4 *)(ulong)((int)local_2a8 + 1);
                FUN_10062307c(local_348,puVar36);
                auVar55._8_8_ = extraout_XMM1_Qb_00;
                auVar55._0_8_ = extraout_XMM1_Qa_00;
                lVar13 = ((ulong)local_2a8 & 0xffffffff) * 0x60;
                lVar10 = local_348._0_8_ + lVar13;
                local_328 = local_348._0_8_;
                *(int *)(local_348._0_8_ + lVar13) = (int)uVar11;
                local_2a8 = puVar36;
              }
            }
            local_2b8 = uVar32;
            if (*(char *)(lVar28 + 300) != '\0') {
              auVar55 = pmovsxbd(auVar55,_DAT_1007115d0);
              *(ulong *)(lVar10 + 0x24) =
                   CONCAT44(auVar55._4_4_ + (int)((ulong)*(undefined8 *)(lVar10 + 0x24) >> 0x20),
                            (int)*(char *)(lVar28 + 300) + (int)*(undefined8 *)(lVar10 + 0x24));
            }
            cVar5 = FUN_1004817dc(lVar28,0);
            auVar42._8_8_ = extraout_XMM1_Qb_02;
            auVar42._0_8_ = extraout_XMM1_Qa_02;
            if (cVar5 == '\x02') {
              *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + 1;
            }
            else {
              *(int *)(lVar10 + 0x38) = *(int *)(lVar10 + 0x38) + 1;
            }
            if (*(int *)(lVar28 + 0x144) != 0) {
              auVar55 = pmovsxbd(auVar42,_DAT_1007115d0);
              *(ulong *)(lVar10 + 0x14) =
                   CONCAT44(auVar55._4_4_ + (int)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20),
                            *(int *)(lVar28 + 0x144) + (int)*(undefined8 *)(lVar10 + 0x14));
            }
            if (((*(long *)(lVar35 + 8) != 0) && (*(long *)(*(long *)(lVar35 + 8) + 0x10) != 0)) &&
               (*(long *)(*(long *)(lVar35 + 0x10) + 0x38) != 0)) {
              *(int *)(lVar10 + 0x50) = *(int *)(lVar10 + 0x50) + 1;
            }
            uVar31 = *(uint *)(lVar35 + 0x60);
            if ((((uint)local_360 <= uVar31) && (uVar31 <= local_354)) &&
               (*(uint *)(lVar10 + 0x44) < uVar31)) {
              FUN_100178093(uVar31,&local_238);
              uStack_232 = 0;
              uStack_230._0_2_ = 0;
              uStack_230._2_2_ = 0;
              FUN_1001781a2(&local_238);
              if (*(uint *)(lVar10 + 0x44) < (uint)local_298) {
                *(uint *)(lVar10 + 0x44) = (uint)local_298;
              }
            }
            if (*(char *)(local_2e0 + 0x2a2) != '\0') {
              cVar5 = FUN_1004746c0(lVar28);
              auVar55._8_8_ = extraout_XMM1_Qb_03;
              auVar55._0_8_ = extraout_XMM1_Qa_03;
              if (cVar5 != '\0') goto LAB_1006208a1;
            }
            lVar13 = FUN_1006033a6(local_2d8,lVar35,(undefined1)local_2ec);
            auVar55._8_8_ = extraout_XMM1_Qb_04;
            auVar55._0_8_ = extraout_XMM1_Qa_04;
            if ((lVar13 == 0) || ((*(byte *)(*(long *)(lVar13 + 8) + 0xc6) & 4) != 0)) {
              uVar4 = *(undefined1 *)(local_2e0 + 0x2b0);
              uVar6 = FUN_1004eb61a(local_2d8,lVar35,local_370);
              in_stack_fffffffffffffc58 = (undefined1  [16])0x0;
              lVar35 = FUN_1004eb21f(local_2d8,lVar35,uVar4,uVar6,*(undefined2 *)(local_2e0 + 0x3a6)
                                     ,local_2a9,(undefined1  [16])0x0,0);
              auVar55._8_8_ = extraout_XMM1_Qb_05;
              auVar55._0_8_ = extraout_XMM1_Qa_05;
              *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + lVar35;
              local_2f8 = local_2f8 + lVar35;
            }
            if (*(int *)(lVar28 + 0xc) != 0) {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                uStack_234 = 0xa90;
                uStack_232 = 0x7a;
                uStack_230._0_2_ = 1;
                uStack_230._2_2_ = 0;
                uStack_230._4_2_ = 0x822;
                uStack_230._6_2_ = 0x5582;
                uStack_228 = 0x7f;
                uStack_226 = 1;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,
                                    0x16);
              }
              FUN_1001782e9(0);
              auVar55._8_8_ = extraout_XMM1_Qb_06;
              auVar55._0_8_ = extraout_XMM1_Qa_06;
            }
            *(undefined4 *)(lVar28 + 0xc) = 1;
          }
LAB_1006208a1:
          uVar11 = uVar11 + 1;
        } while (local_2c8 != uVar11);
        *(ulong *)(lVar10 + 8) = local_2b8;
        *(int *)(lVar10 + 4) = (int)local_2a0 + -1;
        local_2c8 = (ulong)local_2a8 & 0xffffffff;
        lVar10 = local_328;
        if ((int)local_2a8 == 0) {
          local_2c0 = (undefined4 *)((ulong)local_2c0._4_4_ << 0x20);
          local_2a0 = (undefined4 *)((ulong)local_2a0._4_4_ << 0x20);
        }
        else {
          uVar32 = (ulong)local_2a8 & 0xffffffff;
          lVar35 = 0;
          iVar8 = 1;
          local_2a0 = (undefined4 *)((ulong)local_2a0._4_4_ << 0x20);
          local_2c0 = (undefined4 *)((ulong)local_2c0._4_4_ << 0x20);
          uVar31 = 0;
          do {
            *(int *)(local_328 + 0x10 + lVar35) = iVar8;
            uVar7 = *(uint *)(local_328 + 0x24 + lVar35);
            if (uVar7 != 0) {
              *(float *)(local_328 + 0x2c + lVar35) =
                   (float)uVar7 / (float)*(uint *)(local_328 + 0x28 + lVar35);
              local_2c0 = (undefined4 *)CONCAT44(local_2c0._4_4_,(int)local_2c0 + 1);
            }
            lVar28 = *(long *)(local_328 + 8 + lVar35);
            if ((lVar28 != 0) && (*(char *)(lVar28 + 0xe6) == '\x02')) {
              piVar21 = (int *)(local_328 + 0x34 + lVar35);
              *piVar21 = *piVar21 + *(int *)(local_328 + 0x38 + lVar35);
              *(undefined4 *)(local_328 + 0x38 + lVar35) = 0;
            }
            uVar7 = *(uint *)(local_328 + 0x34 + lVar35);
            if (uVar7 != 0) {
              *(float *)(local_328 + 0x3c + lVar35) =
                   (float)uVar7 / (float)(uVar7 + *(int *)(local_328 + 0x38 + lVar35));
              uVar31 = uVar31 + 1;
            }
            uVar7 = *(uint *)(local_328 + 0x14 + lVar35);
            if (uVar7 != 0) {
              *(float *)(local_328 + 0x1c + lVar35) =
                   (float)uVar7 / (float)*(uint *)(local_328 + 0x18 + lVar35);
              local_2a0 = (undefined4 *)CONCAT44(local_2a0._4_4_,(int)local_2a0 + 1);
            }
            lVar35 = lVar35 + 0x60;
            iVar8 = iVar8 + 1;
          } while (uVar32 * 0x60 != lVar35);
          if ((int)local_2a0 != 0) {
            uVar9 = local_348._8_8_;
            local_238 = 0x6232b5;
            uStack_234 = 1;
            uStack_232 = 0;
            lVar10 = (local_348._8_8_ - local_328 >> 5) * -0x5555555555555555;
            auVar55 = ZEXT816(0);
            if (0x3000 < local_348._8_8_ - local_328) {
              auVar55 = FUN_1006238d8(lVar10);
            }
            pvVar29 = auVar55._0_8_;
            FUN_10062392f(local_328,uVar9,&local_238,lVar10,pvVar29,auVar55._8_8_);
            auVar44._8_8_ = extraout_XMM1_Qb_10;
            auVar44._0_8_ = extraout_XMM1_Qa_10;
            if (pvVar29 != (void *)0x0) {
              operator_delete(pvVar29);
            }
            piVar21 = (int *)(local_348._0_8_ + 0x14);
            lVar10 = 0;
            do {
              if (*piVar21 != 0) {
                fVar43 = (float)(uint)((int)local_2a0 + (int)lVar10) /
                         (float)((ulong)local_2a0 & 0xffffffff);
                auVar44 = ZEXT416((uint)fVar43);
                piVar21[3] = (int)fVar43;
              }
              auVar55 = _DAT_100700430;
              lVar10 = lVar10 + -1;
              piVar21 = piVar21 + 0x18;
            } while (uVar32 + lVar10 != 0);
            iVar8 = (int)local_2a8;
            lVar10 = local_348._0_8_;
            if (iVar8 != 1) {
              local_2b8 = local_348._0_8_ + 0x20;
              local_360 = local_348._0_8_ + 0x140;
              uVar11 = 0;
              auVar42 = pmovsxbq(ZEXT416((uint)(float)((ulong)local_2a0 & 0xffffffff)),
                                 _DAT_10075ec70);
              auVar44 = pmovsxbq(auVar44,_DAT_10075ec72);
              do {
                iVar25 = (int)uVar11;
                if (*(int *)(local_348._0_8_ + 0x14 + uVar11 * 0x60) != 0) {
                  uVar7 = iVar25 + 1;
                  if (uVar7 < (uint)local_2c8) {
                    lVar28 = uVar11 * 0x60 + local_348._0_8_;
                    fVar43 = *(float *)(lVar28 + 0x20);
                    lVar35 = (ulong)uVar7 * 0x60;
                    pfVar24 = (float *)(local_2b8 + lVar35);
                    uVar26 = 1;
                    lVar13 = 0;
                    do {
                      uVar27 = uVar26;
                      if (pfVar24[-3] == 0.0) break;
                      if ((pfVar24[-1] != *(float *)(lVar28 + 0x1c)) ||
                         (NAN(pfVar24[-1]) || NAN(*(float *)(lVar28 + 0x1c)))) {
                        uVar27 = (int)lVar13 + 1;
                        break;
                      }
                      fVar43 = fVar43 + *pfVar24;
                      uVar26 = uVar26 + 1;
                      lVar13 = lVar13 + 1;
                      pfVar24 = pfVar24 + 0x18;
                      uVar27 = iVar8 - iVar25;
                    } while (uVar32 - uVar7 != lVar13);
                    if (uVar27 != 1) {
                      fVar43 = fVar43 / (float)uVar27;
                      *(float *)(lVar28 + 0x20) = fVar43;
                      if (uVar7 < uVar27 + iVar25) {
                        lVar28 = (ulong)(uVar27 - 1) - 1;
                        auVar46._8_4_ = (int)lVar28;
                        auVar46._0_8_ = lVar28;
                        auVar46._12_4_ = (int)((ulong)lVar28 >> 0x20);
                        pfVar24 = (float *)(lVar35 + local_360);
                        auVar46 = auVar46 ^ auVar55;
                        uVar11 = 0;
                        do {
                          auVar51._8_4_ = (int)uVar11;
                          auVar51._0_8_ = uVar11;
                          auVar51._12_4_ = (int)(uVar11 >> 0x20);
                          auVar54 = (auVar51 | auVar44) ^ auVar55;
                          iVar49 = auVar46._4_4_;
                          iVar50 = auVar46._12_4_;
                          if ((bool)(~(iVar49 < auVar54._4_4_ ||
                                      auVar46._0_4_ < auVar54._0_4_ && auVar54._4_4_ == iVar49) & 1)
                             ) {
                            pfVar24[-0x48] = fVar43;
                          }
                          if (auVar54._12_4_ <= iVar50 &&
                              (auVar54._8_4_ <= auVar46._8_4_ || auVar54._12_4_ != iVar50)) {
                            pfVar24[-0x30] = fVar43;
                          }
                          auVar51 = (auVar51 | auVar42) ^ auVar55;
                          if (auVar51._4_4_ <= iVar49 &&
                              (auVar51._4_4_ != iVar49 || auVar51._0_4_ <= auVar46._0_4_)) {
                            pfVar24[-0x18] = fVar43;
                          }
                          if (auVar51._12_4_ <= iVar50 &&
                              (auVar51._12_4_ != iVar50 || auVar51._8_4_ <= auVar46._8_4_)) {
                            *pfVar24 = fVar43;
                          }
                          uVar11 = uVar11 + 4;
                          pfVar24 = pfVar24 + 0x60;
                        } while (((ulong)(uVar27 - 1) + 3 & 0x1fffffffc) != uVar11);
                      }
                      iVar25 = iVar25 + uVar27 + -1;
                    }
                  }
                }
                uVar11 = (ulong)(iVar25 + 1U);
              } while (iVar25 + 1U < iVar8 - 1U);
            }
          }
          if (((int)local_2c0 != 0 & (byte)local_368) == 1) {
            FUN_10062321c(lVar10,local_348._8_8_,FUN_100623306);
            auVar54._8_8_ = extraout_XMM1_Qb_11;
            auVar54._0_8_ = extraout_XMM1_Qa_11;
            piVar21 = (int *)(local_348._0_8_ + 0x24);
            lVar10 = 0;
            do {
              if (*piVar21 != 0) {
                fVar43 = (float)(uint)((int)local_2c0 + (int)lVar10) /
                         (float)((ulong)local_2c0 & 0xffffffff);
                auVar54 = ZEXT416((uint)fVar43);
                piVar21[3] = (int)fVar43;
              }
              auVar55 = _DAT_100700430;
              lVar10 = lVar10 + -1;
              piVar21 = piVar21 + 0x18;
            } while (uVar32 + lVar10 != 0);
            iVar8 = (int)local_2a8;
            lVar10 = local_348._0_8_;
            if (iVar8 != 1) {
              local_2b8 = local_348._0_8_ + 0x30;
              local_368 = local_348._0_8_ + 0x150;
              uVar11 = 0;
              auVar42 = pmovsxbq(ZEXT416((uint)(float)((ulong)local_2c0 & 0xffffffff)),
                                 _DAT_10075ec70);
              auVar44 = pmovsxbq(auVar54,_DAT_10075ec72);
              do {
                iVar25 = (int)uVar11;
                if (*(int *)(local_348._0_8_ + 0x24 + uVar11 * 0x60) != 0) {
                  uVar7 = iVar25 + 1;
                  if (uVar7 < (uint)local_2c8) {
                    lVar28 = uVar11 * 0x60 + local_348._0_8_;
                    fVar43 = *(float *)(lVar28 + 0x30);
                    lVar35 = (ulong)uVar7 * 0x60;
                    pfVar24 = (float *)(local_2b8 + lVar35);
                    uVar26 = 1;
                    lVar13 = 0;
                    do {
                      uVar27 = uVar26;
                      if (pfVar24[-3] == 0.0) break;
                      if ((pfVar24[-1] != *(float *)(lVar28 + 0x2c)) ||
                         (NAN(pfVar24[-1]) || NAN(*(float *)(lVar28 + 0x2c)))) {
                        uVar27 = (int)lVar13 + 1;
                        break;
                      }
                      fVar43 = fVar43 + *pfVar24;
                      uVar26 = uVar26 + 1;
                      lVar13 = lVar13 + 1;
                      pfVar24 = pfVar24 + 0x18;
                      uVar27 = iVar8 - iVar25;
                    } while (uVar32 - uVar7 != lVar13);
                    if (uVar27 != 1) {
                      fVar43 = fVar43 / (float)uVar27;
                      *(float *)(lVar28 + 0x30) = fVar43;
                      if (uVar7 < uVar27 + iVar25) {
                        lVar28 = (ulong)(uVar27 - 1) - 1;
                        auVar47._8_4_ = (int)lVar28;
                        auVar47._0_8_ = lVar28;
                        auVar47._12_4_ = (int)((ulong)lVar28 >> 0x20);
                        pfVar24 = (float *)(lVar35 + local_368);
                        auVar47 = auVar47 ^ auVar55;
                        uVar11 = 0;
                        do {
                          auVar52._8_4_ = (int)uVar11;
                          auVar52._0_8_ = uVar11;
                          auVar52._12_4_ = (int)(uVar11 >> 0x20);
                          auVar46 = (auVar52 | auVar44) ^ auVar55;
                          iVar49 = auVar47._4_4_;
                          iVar50 = auVar47._12_4_;
                          if ((bool)(~(iVar49 < auVar46._4_4_ ||
                                      auVar47._0_4_ < auVar46._0_4_ && auVar46._4_4_ == iVar49) & 1)
                             ) {
                            pfVar24[-0x48] = fVar43;
                          }
                          if (auVar46._12_4_ <= iVar50 &&
                              (auVar46._8_4_ <= auVar47._8_4_ || auVar46._12_4_ != iVar50)) {
                            pfVar24[-0x30] = fVar43;
                          }
                          auVar46 = (auVar52 | auVar42) ^ auVar55;
                          if (auVar46._4_4_ <= iVar49 &&
                              (auVar46._4_4_ != iVar49 || auVar46._0_4_ <= auVar47._0_4_)) {
                            pfVar24[-0x18] = fVar43;
                          }
                          if (auVar46._12_4_ <= iVar50 &&
                              (auVar46._12_4_ != iVar50 || auVar46._8_4_ <= auVar47._8_4_)) {
                            *pfVar24 = fVar43;
                          }
                          uVar11 = uVar11 + 4;
                          pfVar24 = pfVar24 + 0x60;
                        } while (((ulong)(uVar27 - 1) + 3 & 0x1fffffffc) != uVar11);
                      }
                      iVar25 = iVar25 + uVar27 + -1;
                    }
                  }
                }
                uVar11 = (ulong)(iVar25 + 1U);
              } while (iVar25 + 1U < iVar8 - 1U);
            }
          }
          if ((uVar31 != 0 & local_2ca) == 1) {
            FUN_10062321c(lVar10,local_348._8_8_,FUN_100623357);
            auVar45._8_8_ = extraout_XMM1_Qb_12;
            auVar45._0_8_ = extraout_XMM1_Qa_12;
            piVar21 = (int *)(local_348._0_8_ + 0x34);
            lVar10 = 0;
            do {
              if (*piVar21 != 0) {
                fVar43 = (float)(uVar31 + (int)lVar10) / (float)uVar31;
                auVar45 = ZEXT416((uint)fVar43);
                piVar21[3] = (int)fVar43;
              }
              auVar55 = _DAT_100700430;
              lVar10 = lVar10 + -1;
              piVar21 = piVar21 + 0x18;
            } while (uVar32 + lVar10 != 0);
            iVar8 = (int)local_2a8;
            lVar10 = local_348._0_8_;
            if (iVar8 != 1) {
              local_2b8 = local_348._0_8_ + 0x160;
              uVar11 = 0;
              auVar42 = pmovsxbq(ZEXT416((uint)(float)uVar31),_DAT_10075ec70);
              auVar44 = pmovsxbq(auVar45,_DAT_10075ec72);
              do {
                iVar25 = (int)uVar11;
                if (*(int *)(local_348._0_8_ + 0x34 + uVar11 * 0x60) != 0) {
                  uVar31 = iVar25 + 1;
                  if (uVar31 < (uint)local_2c8) {
                    lVar28 = uVar11 * 0x60 + local_348._0_8_;
                    fVar43 = *(float *)(lVar28 + 0x40);
                    lVar35 = (ulong)uVar31 * 0x60;
                    pfVar24 = (float *)(local_348._0_8_ + 0x40 + lVar35);
                    uVar7 = 1;
                    lVar13 = 0;
                    do {
                      uVar26 = uVar7;
                      if (pfVar24[-3] == 0.0) break;
                      if ((pfVar24[-1] != *(float *)(lVar28 + 0x3c)) ||
                         (NAN(pfVar24[-1]) || NAN(*(float *)(lVar28 + 0x3c)))) {
                        uVar26 = (int)lVar13 + 1;
                        break;
                      }
                      fVar43 = fVar43 + *pfVar24;
                      uVar7 = uVar7 + 1;
                      lVar13 = lVar13 + 1;
                      pfVar24 = pfVar24 + 0x18;
                      uVar26 = iVar8 - iVar25;
                    } while (uVar32 - uVar31 != lVar13);
                    if (uVar26 != 1) {
                      fVar43 = fVar43 / (float)uVar26;
                      *(float *)(lVar28 + 0x40) = fVar43;
                      if (uVar31 < uVar26 + iVar25) {
                        lVar28 = (ulong)(uVar26 - 1) - 1;
                        auVar48._8_4_ = (int)lVar28;
                        auVar48._0_8_ = lVar28;
                        auVar48._12_4_ = (int)((ulong)lVar28 >> 0x20);
                        pfVar24 = (float *)(lVar35 + local_2b8);
                        auVar48 = auVar48 ^ auVar55;
                        uVar11 = 0;
                        do {
                          auVar53._8_4_ = (int)uVar11;
                          auVar53._0_8_ = uVar11;
                          auVar53._12_4_ = (int)(uVar11 >> 0x20);
                          auVar46 = (auVar53 | auVar44) ^ auVar55;
                          iVar49 = auVar48._4_4_;
                          iVar50 = auVar48._12_4_;
                          if ((bool)(~(iVar49 < auVar46._4_4_ ||
                                      auVar48._0_4_ < auVar46._0_4_ && auVar46._4_4_ == iVar49) & 1)
                             ) {
                            pfVar24[-0x48] = fVar43;
                          }
                          if (auVar46._12_4_ <= iVar50 &&
                              (auVar46._8_4_ <= auVar48._8_4_ || auVar46._12_4_ != iVar50)) {
                            pfVar24[-0x30] = fVar43;
                          }
                          auVar46 = (auVar53 | auVar42) ^ auVar55;
                          if (auVar46._4_4_ <= iVar49 &&
                              (auVar46._4_4_ != iVar49 || auVar46._0_4_ <= auVar48._0_4_)) {
                            pfVar24[-0x18] = fVar43;
                          }
                          if (auVar46._12_4_ <= iVar50 &&
                              (auVar46._12_4_ != iVar50 || auVar46._8_4_ <= auVar48._8_4_)) {
                            *pfVar24 = fVar43;
                          }
                          uVar11 = uVar11 + 4;
                          pfVar24 = pfVar24 + 0x60;
                        } while (((ulong)(uVar26 - 1) + 3 & 0x1fffffffc) != uVar11);
                      }
                      iVar25 = iVar25 + uVar26 + -1;
                    }
                  }
                }
                uVar11 = (ulong)(iVar25 + 1U);
              } while (iVar25 + 1U < iVar8 - 1U);
            }
          }
          pfVar24 = (float *)(lVar10 + 0x20);
          do {
            pfVar24[0xd] = *pfVar24 + pfVar24[4] + pfVar24[8];
            pfVar24 = pfVar24 + 0x18;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
        uVar9 = local_348._8_8_;
        local_238 = 0x6233a8;
        uStack_234 = 1;
        uStack_232 = 0;
        pcVar40 = (char *)((local_348._8_8_ - lVar10 >> 5) * -0x5555555555555555);
        auVar55 = ZEXT816(0);
        if (0x3000 < local_348._8_8_ - lVar10) {
          auVar55 = FUN_1006238d8(pcVar40);
        }
        pvVar29 = auVar55._0_8_;
        FUN_10062392f(lVar10,uVar9,&local_238,pcVar40,pvVar29,auVar55._8_8_);
        if (pvVar29 != (void *)0x0) {
          operator_delete(pvVar29);
        }
        cVar5 = FUN_1001cd44e("log-device-autofill-stats",0,0);
        if (((int)local_2a8 != 0) && (cVar5 != '\0')) {
          local_2b8 = local_348._0_8_;
          lVar10 = local_2c8 * 0x60;
          lVar35 = 0;
          pcVar40 = DAT_1008c75c0;
          do {
            if (pcVar40 != (char *)0xffffffffffffffff) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            puVar36 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            pcVar40 = (char *)0xffffffffffffffff;
            if (cVar5 != '\0') {
              FUN_1001de8ee(*(long *)(local_2b8 + 8 + lVar35) + 0xb8,&local_238);
              FUN_1001b8dfc(&local_258,&local_238);
              uVar9 = FUN_1001b83ae(&local_258);
              dVar41 = (double)*(float *)(local_2b8 + 0x54 + lVar35);
              local_280 = (double)*(float *)(local_2b8 + 0x1c + lVar35);
              local_276 = (undefined4 *)(double)*(float *)(local_2b8 + 0x2c + lVar35);
              local_26c = (double)*(float *)(local_2b8 + 0x3c + lVar35);
              local_262 = *(undefined8 *)(local_2b8 + 0x48 + lVar35);
              local_298._0_4_ = 0x8220602;
              local_298._4_4_ = (undefined4)uVar9;
              uStack_290 = (undefined4)((ulong)uVar9 >> 0x20);
              uStack_28c = 0x800;
              uStack_28a = SUB82(dVar41,0);
              uStack_288 = (undefined2)((ulong)dVar41 >> 0x10);
              uStack_286 = (undefined4)((ulong)dVar41 >> 0x20);
              uStack_282 = 0x800;
              local_278 = 0x800;
              local_26e = 0x800;
              local_264 = 0x800;
              __os_log_impl(0x100000000,puVar36,1,
                            "sync> autofill album \"%{public}s\": total score = %.5f, average play count = %.5f, average user rating = %.5f, average loved tracks = %.2f, total size = %lld"
                            ,&local_298,0x3e);
              FUN_1001b7a50(&local_258);
              pcVar40 = DAT_1008c75c0;
            }
            lVar35 = lVar35 + 0x60;
          } while (lVar10 != lVar35);
        }
        FUN_10031c2c9(local_320);
        lVar10 = FUN_1002f930c(local_320);
        local_2b8 = CONCAT44(local_2b8._4_4_,(uint)local_2a9);
        while (lVar10 != 0) {
          if ((*(byte *)(lVar10 + 0xc6) & 4) != 0) {
            uVar31 = *(uint *)(lVar10 + 0xc2);
            if ((uVar31 >> 8 & 1) != 0) {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                uStack_234 = 0xa90;
                uStack_232 = 0x7a;
                uStack_230._0_2_ = 1;
                uStack_230._2_2_ = 0;
                uStack_230._4_2_ = 0x822;
                uStack_230._6_2_ = 0x55b6;
                uStack_228 = 0x7f;
                uStack_226 = 1;
                pcVar40 = "%{public}s: (%{public}s)";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              uVar31 = *(uint *)(lVar10 + 0xc2);
            }
            *(uint *)(lVar10 + 0xc2) = uVar31 | 0x100;
            lVar35 = *(long *)(lVar10 + 0x58);
            cVar5 = *(char *)(lVar35 + 0x45);
            if (cVar5 == '\x01') {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                uStack_234 = 0xa90;
                uStack_232 = 0x7a;
                uStack_230._0_2_ = 1;
                uStack_230._2_2_ = 0;
                uStack_230._4_2_ = 0x822;
                uStack_230._6_2_ = 0x55da;
                uStack_228 = 0x7f;
                uStack_226 = 1;
                pcVar40 = "%{public}s: (%{public}s)";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              cVar5 = *(char *)(lVar35 + 0x45);
            }
            if (cVar5 == '\0') {
              pcVar40 = (char *)0x0;
              lVar35 = FUN_1004eb21f(local_2d8,lVar35,*(undefined1 *)(local_2e0 + 0x2b0),0,0,
                                     local_2b8 & 0xffffffff,(undefined1  [16])0x0,0);
              local_2e8 = (undefined4 *)((long)local_2e8 + lVar35);
            }
          }
          lVar10 = FUN_1002f9451(lVar10);
        }
        if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        puVar36 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          local_238 = 0x8000100;
          uStack_234 = SUB82(local_2e8,0);
          uStack_232 = (undefined2)((ulong)local_2e8 >> 0x10);
          uStack_230._0_2_ = (undefined2)((ulong)local_2e8 >> 0x20);
          uStack_230._2_2_ = (undefined2)((ulong)local_2e8 >> 0x30);
          pcVar40 = "sync> autofill remaining free bytes = %lld";
          __os_log_impl(0x100000000,puVar36,1,"sync> autofill remaining free bytes = %lld",
                        &local_238,0xc);
        }
        if ((int)local_2a8 == 0) {
LAB_100621d88:
          local_2a0 = (undefined4 *)((ulong)local_2a0._4_4_ << 0x20);
          local_320 = (char *)0x0;
        }
        else {
          if ((int)local_2a0 == 0 && (int)local_2c0 == 0) goto LAB_100621d88;
          uVar9 = local_348._0_8_;
          lVar10 = local_2c8 * 0x60;
          lVar35 = 0;
          local_320 = (char *)0x0;
          local_2a0 = (undefined4 *)((ulong)local_2a0._4_4_ << 0x20);
          do {
            fVar43 = *(float *)(uVar9 + 0x54 + lVar35);
            puVar36 = local_2e8;
            if (((fVar43 != 0.0) || (NAN(fVar43))) &&
               (lVar28 = *(long *)(uVar9 + 0x48 + lVar35), lVar28 != 0)) {
              puVar36 = (undefined4 *)((long)local_2e8 - lVar28);
              if ((long)local_2e8 < lVar28) {
                if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar19 = DAT_1008c75b8;
                uVar14 = _os_log_type_enabled(DAT_1008c75b8,1);
                if ((char)uVar14 == '\0') {
                  local_2a0 = (undefined4 *)
                              CONCAT44(local_2a0._4_4_,(int)CONCAT71((int7)((ulong)uVar14 >> 8),1));
                  puVar36 = local_2e8;
                }
                else {
                  FUN_1001de8ee(*(long *)(uVar9 + 8 + lVar35) + 0xb8,&local_238);
                  uVar14 = FUN_1001b8dfc(&local_258,&local_238);
                  local_2a0 = (undefined4 *)
                              CONCAT44(local_2a0._4_4_,(int)CONCAT71((int7)((ulong)uVar14 >> 8),1));
                  uVar14 = FUN_1001b83ae(&local_258);
                  dVar41 = (double)*(float *)(uVar9 + 0x54 + lVar35);
                  local_280 = *(double *)(uVar9 + 0x48 + lVar35);
                  local_298._4_4_ = (undefined4)uVar14;
                  uStack_290 = (undefined4)((ulong)uVar14 >> 0x20);
                  uStack_28a = SUB82(dVar41,0);
                  uStack_288 = (undefined2)((ulong)dVar41 >> 0x10);
                  uStack_286 = (undefined4)((ulong)dVar41 >> 0x20);
                  pcVar40 = 
                  "sync> skipping scored album \"%{public}s\", total score = %.5f, total size = %lld, remaining free bytes = %lld"
                  ;
                  puVar36 = local_2e8;
LAB_100621d10:
                  local_278 = 0x800;
                  uStack_282 = 0x800;
                  uStack_28c = 0x800;
                  local_298._0_4_ = 0x8220402;
                  local_276 = puVar36;
                  __os_log_impl(0x100000000,puVar19,1,pcVar40,&local_298,0x2a);
                  FUN_1001b7a50(&local_258);
                }
              }
              else {
                *(undefined1 *)(uVar9 + 0x58 + lVar35) = 1;
                if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                local_2f8 = local_2f8 - lVar28;
                local_2c0 = DAT_1008c75b8;
                cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                pcVar40 = (char *)CONCAT71((int7)((ulong)pcVar40 >> 8),1);
                local_320 = pcVar40;
                if (cVar5 != '\0') {
                  FUN_1001de8ee(*(long *)(uVar9 + 8 + lVar35) + 0xb8,&local_238);
                  FUN_1001b8dfc(&local_258,&local_238);
                  uVar14 = FUN_1001b83ae(&local_258);
                  dVar41 = (double)*(float *)(uVar9 + 0x54 + lVar35);
                  local_280 = *(double *)(uVar9 + 0x48 + lVar35);
                  local_298._4_4_ = (undefined4)uVar14;
                  uStack_290 = (undefined4)((ulong)uVar14 >> 0x20);
                  uStack_28a = SUB82(dVar41,0);
                  uStack_288 = (undefined2)((ulong)dVar41 >> 0x10);
                  uStack_286 = (undefined4)((ulong)dVar41 >> 0x20);
                  pcVar40 = 
                  "sync> choosing scored album \"%{public}s\", total score = %.5f, total size = %lld, remaining free bytes = %lld"
                  ;
                  puVar19 = local_2c0;
                  goto LAB_100621d10;
                }
              }
            }
            lVar35 = lVar35 + 0x60;
            local_2e8 = puVar36;
          } while (lVar10 != lVar35);
        }
        puVar36 = local_2e8;
        if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        puVar19 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          local_238 = 0x8000200;
          uStack_234 = (undefined2)local_2f8;
          uStack_232 = (undefined2)(local_2f8 >> 0x10);
          uStack_230._0_2_ = (undefined2)(local_2f8 >> 0x20);
          uStack_230._2_2_ = (undefined2)(local_2f8 >> 0x30);
          uStack_230._4_2_ = 0x800;
          uStack_230._6_2_ = SUB82(puVar36,0);
          uStack_228 = (undefined2)((ulong)puVar36 >> 0x10);
          uStack_226 = (undefined4)((ulong)puVar36 >> 0x20);
          __os_log_impl(0x100000000,puVar19,1,
                        "sync> remaining album bytes after scored albums = %lld, remaining free bytes = %lld"
                        ,&local_238,0x16);
        }
        if (((char)local_2a0 == '\0') &&
           ((((char)local_320 != '\0' & local_2c9) != 1 || ((long)local_2f8 <= (long)puVar36)))) {
          uVar9 = local_348._0_8_;
          uVar14 = local_348._8_8_;
          FUN_10062321c(local_348._0_8_,local_348._8_8_,FUN_1006233f9);
          local_2c0 = (undefined4 *)uVar14;
          if ((int)local_2a8 != 0) {
            puVar19 = (undefined4 *)(local_2c8 * 0x60);
            puVar38 = (undefined4 *)0x0;
            local_2a0 = puVar19;
            do {
              if ((*(char *)(uVar9 + 0x58 + (long)puVar38) == '\0') &&
                 (lVar10 = *(long *)(uVar9 + 0x48 + (long)puVar38), lVar10 != 0)) {
                puVar33 = (undefined4 *)((long)puVar36 - lVar10);
                if ((long)puVar36 < lVar10) {
                  if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  puVar33 = DAT_1008c75b8;
                  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                  puVar19 = local_2a0;
                  if (cVar5 != '\0') {
                    FUN_1003a0c1e(&local_298,*(undefined8 *)(uVar9 + 8 + (long)puVar38),0);
                    uVar15 = FUN_1001b83ae(&local_298);
                    uVar14 = *(undefined8 *)(uVar9 + 0x48 + (long)puVar38);
                    local_238 = 0x8220302;
                    uStack_234 = (undefined2)uVar15;
                    uStack_232 = (undefined2)((ulong)uVar15 >> 0x10);
                    uStack_230._0_2_ = (undefined2)((ulong)uVar15 >> 0x20);
                    uStack_230._2_2_ = (undefined2)((ulong)uVar15 >> 0x30);
                    uStack_230._4_2_ = 0x800;
                    uStack_230._6_2_ = (undefined2)uVar14;
                    uStack_228 = (undefined2)((ulong)uVar14 >> 0x10);
                    uStack_226 = (undefined4)((ulong)uVar14 >> 0x20);
                    uStack_222 = 0x800;
                    local_220 = puVar36;
                    __os_log_impl(0x100000000,puVar33,1,
                                  "sync> skipping recent album \"%{public}s\", total size = %lld, remaining free bytes = %lld"
                                  ,&local_238,0x20);
                    FUN_1001b7a50(&local_298);
                    puVar19 = local_2a0;
                  }
                }
                else {
                  *(undefined1 *)(uVar9 + 0x58 + (long)puVar38) = 1;
                  if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  puVar3 = DAT_1008c75b8;
                  local_2f8 = local_2f8 - lVar10;
                  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                  puVar19 = local_2a0;
                  puVar36 = puVar33;
                  if (cVar5 != '\0') {
                    FUN_1003a0c1e(&local_298,*(undefined8 *)(uVar9 + 8 + (long)puVar38),0);
                    uVar15 = FUN_1001b83ae(&local_298);
                    uVar14 = *(undefined8 *)(uVar9 + 0x48 + (long)puVar38);
                    local_238 = 0x8220302;
                    uStack_234 = (undefined2)uVar15;
                    uStack_232 = (undefined2)((ulong)uVar15 >> 0x10);
                    uStack_230._0_2_ = (undefined2)((ulong)uVar15 >> 0x20);
                    uStack_230._2_2_ = (undefined2)((ulong)uVar15 >> 0x30);
                    uStack_230._4_2_ = 0x800;
                    uStack_230._6_2_ = (undefined2)uVar14;
                    uStack_228 = (undefined2)((ulong)uVar14 >> 0x10);
                    uStack_226 = (undefined4)((ulong)uVar14 >> 0x20);
                    uStack_222 = 0x800;
                    local_220 = puVar33;
                    __os_log_impl(0x100000000,puVar3,1,
                                  "sync> choosing recent album \"%{public}s\", total size = %lld, remaining free bytes = %lld"
                                  ,&local_238,0x20);
                    FUN_1001b7a50(&local_298);
                    puVar19 = local_2a0;
                  }
                }
              }
              puVar38 = puVar38 + 0x18;
            } while (puVar19 != puVar38);
          }
          FUN_10062321c(uVar9,local_2c0,FUN_1006233a8);
        }
        if ((long)local_2f8 < 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_238 = 0x8220202;
            uStack_234 = 0xa90;
            uStack_232 = 0x7a;
            uStack_230._0_2_ = 1;
            uStack_230._2_2_ = 0;
            uStack_230._4_2_ = 0x822;
            uStack_230._6_2_ = 0x5620;
            uStack_228 = 0x7f;
            uStack_226 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        puVar19 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          local_238 = 0x8000200;
          uStack_234 = (undefined2)local_2f8;
          uStack_232 = (undefined2)(local_2f8 >> 0x10);
          uStack_230._0_2_ = (undefined2)(local_2f8 >> 0x20);
          uStack_230._2_2_ = (undefined2)(local_2f8 >> 0x30);
          uStack_230._4_2_ = 0x800;
          uStack_230._6_2_ = SUB82(puVar36,0);
          uStack_228 = (undefined2)((ulong)puVar36 >> 0x10);
          uStack_226 = (undefined4)((ulong)puVar36 >> 0x20);
          __os_log_impl(0x100000000,puVar19,1,
                        "sync> remaining album bytes after recent albums = %lld, remaining free bytes = %lld"
                        ,&local_238,0x16);
        }
        iVar8 = FUN_100594adc(local_350,0);
        if (iVar8 != -0x80) {
          if (iVar8 == 0) {
            FUN_10031c15f(local_300);
            local_2a0 = (undefined4 *)local_348._0_8_;
            local_2c0 = puVar36;
            if ((int)local_2a8 != 0) {
              uVar32 = 0;
              local_2a8 = (undefined4 *)(CONCAT44(local_2a8._4_4_,local_2ec) & 0xffffffff000000ff);
              do {
                if (*(char *)(local_2a0 + uVar32 * 0x18 + 0x16) != '\0') {
                  puVar39 = local_2a0 + uVar32 * 0x18;
                  for (uVar31 = *puVar39; uVar31 <= puVar39[1]; uVar31 = uVar31 + 1) {
                    lVar10 = *(long *)(local_318._0_8_ + (ulong)uVar31 * 8);
                    if (((lVar10 == 0) || (*(long *)(lVar10 + 8) == 0)) ||
                       (*(long *)(*(long *)(lVar10 + 8) + 0x10) == 0)) {
                      uVar9 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar5 != '\0') {
                        local_238 = 0x8220202;
                        uStack_234 = 0xa90;
                        uStack_232 = 0x7a;
                        uStack_230._0_2_ = 1;
                        uStack_230._2_2_ = 0;
                        uStack_230._4_2_ = 0x822;
                        uStack_230._6_2_ = 0x8d38;
                        uStack_228 = 0x7b;
                        uStack_226 = 1;
                        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                            &local_238,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    else {
                      if (*(char *)(local_2e0 + 0x2a2) != '\0') {
                        cVar5 = FUN_1004746c0();
                        if (cVar5 != '\0') goto LAB_1006223bb;
                      }
                      lVar35 = FUN_1006033a6(local_2d8,lVar10,(ulong)local_2a8 & 0xffffffff);
                      if (lVar35 == 0) {
                        iVar8 = FUN_10059571f(*local_350,lVar10,0);
                        if (iVar8 != 0) {
                          if (iVar8 == -0x80) goto LAB_100622a38;
                          uVar9 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar9,0x10);
                          if (cVar5 == '\0') goto LAB_100622a38;
                          uStack_230._6_2_ = (undefined2)iVar8;
                          uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
                          goto LAB_1006229ef;
                        }
                      }
                      else {
                        uVar7 = *(uint *)(*(long *)(lVar35 + 8) + 0xc2);
                        if ((uVar7 >> 8 & 1) != 0) {
                          *(uint *)(*(long *)(lVar35 + 8) + 0xc2) = uVar7 & 0xfffffeff;
                          FUN_1002fe59d(lVar10,lVar35);
                          if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          puVar36 = DAT_1008c75b8;
                          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar5 != '\0') {
                            FUN_100476ac1(&local_298,*(undefined8 *)(lVar35 + 8));
                            uVar14 = FUN_1001b83ae(&local_298);
                            uVar9 = *(undefined8 *)(lVar35 + 0x68);
                            local_238 = 0x8220202;
                            uStack_234 = (undefined2)uVar14;
                            uStack_232 = (undefined2)((ulong)uVar14 >> 0x10);
                            uStack_230._0_2_ = (undefined2)((ulong)uVar14 >> 0x20);
                            uStack_230._2_2_ = (undefined2)((ulong)uVar14 >> 0x30);
                            uStack_230._4_2_ = 0x800;
                            uStack_230._6_2_ = (undefined2)uVar9;
                            uStack_228 = (undefined2)((ulong)uVar9 >> 0x10);
                            uStack_226 = (undefined4)((ulong)uVar9 >> 0x20);
                            __os_log_impl(0x100000000,puVar36,1,
                                          "sync> keeping autofilled track \"%{public}s\", size = %llu"
                                          ,&local_238,0x16);
                            FUN_1001b7a50(&local_298);
                          }
                        }
                      }
                    }
LAB_1006223bb:
                  }
                }
                uVar32 = uVar32 + 1;
              } while (uVar32 != local_2c8);
            }
            local_348._8_8_ = local_2a0;
            iVar8 = 0;
            if ((undefined4 *)0x9fffff < local_2c0) {
              uStack_230._0_2_ = 0;
              uStack_230._2_2_ = 0;
              uStack_230._4_2_ = 0;
              uStack_230._6_2_ = 0;
              uStack_228 = 0;
              uStack_226 = 0;
              uStack_222 = 0;
              local_238 = SUB84(&uStack_230,0);
              uStack_234 = (undefined2)((ulong)&uStack_230 >> 0x20);
              uStack_232 = (undefined2)((ulong)&uStack_230 >> 0x30);
              piVar21 = (int *)*local_350;
              if (((piVar21 != (int *)0x0) && (*piVar21 == 0x4f4c5354)) &&
                 ((piVar21[1] != 0 &&
                  (iVar8 = (int)((ulong)(*(long *)(piVar21 + 4) - *(long *)(piVar21 + 2)) >> 3) *
                           -0x49249249, iVar8 != 0)))) {
                iVar25 = 0;
                do {
                  uVar32 = FUN_100596915(*local_350,iVar25,0);
                  if (uVar32 != 0) {
                    puVar30 = &uStack_230;
                    puVar16 = (undefined8 *)
                              CONCAT26(uStack_230._6_2_,
                                       CONCAT24(uStack_230._4_2_,
                                                CONCAT22(uStack_230._2_2_,(undefined2)uStack_230)));
                    while (puVar34 = puVar30, puVar16 != (undefined8 *)0x0) {
                      while (puVar30 = puVar16, (ulong)puVar30[4] <= uVar32) {
                        if (uVar32 <= (ulong)puVar30[4]) goto LAB_100622588;
                        puVar16 = (undefined8 *)puVar30[1];
                        if ((undefined8 *)puVar30[1] == (undefined8 *)0x0) {
                          puVar34 = puVar30 + 1;
                          goto LAB_10062253a;
                        }
                      }
                      puVar16 = (undefined8 *)*puVar30;
                    }
LAB_10062253a:
                    pauVar17 = operator_new(0x28);
                    *(ulong *)pauVar17[2] = uVar32;
                    *pauVar17 = (undefined1  [16])0x0;
                    *(undefined8 **)pauVar17[1] = puVar30;
                    *puVar34 = pauVar17;
                    lVar10 = *(long *)CONCAT26(uStack_232,CONCAT24(uStack_234,local_238));
                    if (lVar10 != 0) {
                      local_238 = (undefined4)lVar10;
                      uStack_234 = (undefined2)((ulong)lVar10 >> 0x20);
                      uStack_232 = (undefined2)((ulong)lVar10 >> 0x30);
                      pauVar17 = (undefined1 (*) [16])*puVar34;
                    }
                    FUN_1001ad344(CONCAT26(uStack_230._6_2_,
                                           CONCAT24(uStack_230._4_2_,
                                                    CONCAT22(uStack_230._2_2_,(undefined2)uStack_230
                                                            ))),pauVar17);
                    lVar10 = CONCAT26(uStack_222,CONCAT42(uStack_226,uStack_228)) + 1;
                    uStack_228 = (undefined2)lVar10;
                    uStack_226 = (undefined4)((ulong)lVar10 >> 0x10);
                    uStack_222 = (undefined2)((ulong)lVar10 >> 0x30);
                  }
LAB_100622588:
                  iVar25 = iVar25 + 1;
                } while (iVar25 != iVar8);
              }
              uVar32 = (ulong)(local_318._8_8_ - local_318._0_8_) >> 3;
              if ((int)uVar32 != 0) {
                uVar11 = 0;
                local_2c8 = CONCAT44(local_2c8._4_4_,local_2ec) & 0xffffffff000000ff;
                do {
                  uVar20 = *(ulong *)(local_318._0_8_ + uVar11 * 8);
                  if (((uVar20 == 0) || (lVar10 = *(long *)(uVar20 + 8), lVar10 == 0)) ||
                     (*(long *)(lVar10 + 0x10) == 0)) {
                    uVar9 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar5 != '\0') {
                      local_298._0_4_ = 0x8220202;
                      local_298._4_4_ = 0x7a0a90;
                      uStack_290 = 1;
                      uStack_28c = 0x822;
                      uStack_28a = 0x8d38;
                      uStack_288 = 0x7b;
                      uStack_286 = 1;
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                          &local_298,0x16);
                    }
                    FUN_1001782e9(0,0);
                    puVar36 = local_2c0;
                  }
                  else {
                    puVar22 = (undefined2 *)
                              CONCAT26(uStack_230._6_2_,
                                       CONCAT24(uStack_230._4_2_,
                                                CONCAT22(uStack_230._2_2_,(undefined2)uStack_230)));
                    if (puVar22 != (undefined2 *)0x0) {
                      puVar18 = (undefined2 *)&uStack_230;
                      do {
                        if (*(ulong *)(puVar22 + 0x10) >= uVar20) {
                          puVar18 = puVar22;
                        }
                        puVar22 = *(undefined2 **)
                                   (puVar22 + (ulong)(*(ulong *)(puVar22 + 0x10) < uVar20) * 4);
                      } while (puVar22 != (undefined2 *)0x0);
                      if (((undefined8 *)puVar18 != &uStack_230) &&
                         (puVar36 = local_2c0, *(ulong *)(puVar18 + 0x10) <= uVar20))
                      goto LAB_1006227b2;
                    }
                    if (*(char *)(local_2e0 + 0x2a2) != '\0') {
                      cVar5 = FUN_1004746c0(lVar10);
                      puVar36 = local_2c0;
                      if (cVar5 != '\0') goto LAB_1006227b2;
                    }
                    lVar35 = FUN_1006033a6(local_2d8,uVar20,local_2c8 & 0xffffffff);
                    if (lVar35 == 0) {
                      uVar4 = *(undefined1 *)(local_2e0 + 0x2b0);
                      uVar6 = FUN_1004eb61a(local_2d8,uVar20,local_370);
                      local_2a8 = (undefined4 *)
                                  FUN_1004eb21f(local_2d8,uVar20,uVar4,uVar6,
                                                *(undefined2 *)(local_2e0 + 0x3a6),
                                                local_2b8 & 0xffffffff,(undefined1  [16])0x0,0);
                      local_2a0 = (undefined4 *)((long)local_2c0 - (long)local_2a8);
                      puVar36 = local_2c0;
                      if (local_2a8 <= local_2c0) {
                        iVar8 = FUN_10059571f(*local_350,uVar20,0);
                        if (iVar8 != 0) {
                          if (iVar8 != -0x80) {
                            uVar9 = FUN_1001cc310();
                            cVar5 = _os_log_type_enabled(uVar9,0x10);
                            if (cVar5 != '\0') {
                              local_298._0_4_ = 0x8220202;
                              local_298._4_4_ = 0x7a0a90;
                              uStack_290 = 1;
                              uStack_28c = 0x400;
                              uStack_28a = (undefined2)iVar8;
                              uStack_288 = (undefined2)((uint)iVar8 >> 0x10);
                              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                                  &local_298,0x12);
                            }
                          }
                          goto LAB_100622a07;
                        }
                        if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        puVar36 = DAT_1008c75b8;
                        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar5 != '\0') {
                          FUN_100476ac1(&local_258,lVar10);
                          uVar9 = FUN_1001b83ae(&local_258);
                          local_298._0_4_ = 0x8220202;
                          local_298._4_4_ = (undefined4)uVar9;
                          uStack_290 = (undefined4)((ulong)uVar9 >> 0x20);
                          uStack_28c = 0x800;
                          uStack_28a = SUB82(local_2a8,0);
                          uStack_288 = (undefined2)((ulong)local_2a8 >> 0x10);
                          uStack_286 = (undefined4)((ulong)local_2a8 >> 0x20);
                          __os_log_impl(0x100000000,puVar36,1,
                                        "sync> choosing remaining track \"%{public}s\" for autofill, size = %llu"
                                        ,&local_298,0x16);
                          FUN_1001b7a50(&local_258);
                        }
                        *(undefined4 *)(lVar10 + 0xc) = 1;
                        puVar36 = local_2a0;
                      }
                    }
                    else {
                      puVar36 = local_2c0;
                      if ((*(byte *)(*(long *)(lVar35 + 8) + 0xc3) & 1) != 0) {
                        puVar19 = (undefined4 *)
                                  FUN_1004eb21f(local_2d8,lVar35,*(undefined1 *)(local_2e0 + 0x2b0),
                                                0,0,local_2b8 & 0xffffffff,(undefined1  [16])0x0,0);
                        puVar36 = local_2c0;
                        if (puVar19 <= local_2c0) {
                          puVar39 = (uint *)(*(long *)(lVar35 + 8) + 0xc2);
                          *puVar39 = *puVar39 & 0xfffffeff;
                          local_2a8 = (undefined4 *)((long)local_2c0 - (long)puVar19);
                          FUN_1002fe59d(uVar20,lVar35);
                          if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          puVar38 = DAT_1008c75b8;
                          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                          puVar36 = local_2a8;
                          if (cVar5 != '\0') {
                            FUN_100476ac1(&local_258,*(undefined8 *)(lVar35 + 8));
                            uVar9 = FUN_1001b83ae(&local_258);
                            local_298._0_4_ = 0x8220202;
                            local_298._4_4_ = (undefined4)uVar9;
                            uStack_290 = (undefined4)((ulong)uVar9 >> 0x20);
                            uStack_28c = 0x800;
                            uStack_28a = SUB82(puVar19,0);
                            uStack_288 = (undefined2)((ulong)puVar19 >> 0x10);
                            uStack_286 = (undefined4)((ulong)puVar19 >> 0x20);
                            __os_log_impl(0x100000000,puVar38,1,
                                          "sync> keeping remaining autofilled track \"%{public}s\", size = %llu"
                                          ,&local_298,0x16);
                            FUN_1001b7a50(&local_258);
                            puVar36 = local_2a8;
                          }
                        }
                      }
                    }
                  }
LAB_1006227b2:
                  local_2c0 = puVar36;
                  uVar11 = uVar11 + 1;
                } while (uVar11 != (uVar32 & 0xffffffff));
              }
              iVar8 = 0;
LAB_100622a07:
              FUN_100230408(CONCAT26(uStack_230._6_2_,
                                     CONCAT24(uStack_230._4_2_,
                                              CONCAT22(uStack_230._2_2_,(undefined2)uStack_230))));
            }
          }
          else {
            uVar9 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar9,0x10);
            if (cVar5 != '\0') {
              uStack_230._6_2_ = (undefined2)iVar8;
              uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
LAB_1006229ef:
              uStack_230._2_2_ = 0;
              uStack_230._0_2_ = 1;
              uStack_232 = 0x7a;
              uStack_234 = 0xa90;
              uStack_230._4_2_ = 0x400;
              local_238 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_238,0x12);
            }
          }
        }
      }
LAB_100622a38:
      FUN_10031c15f(local_300);
      if (DAT_1008c75c0 != (char *)0xffffffffffffffff) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      puVar36 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        dVar41 = (double)FUN_1001ebd46();
        dVar41 = (dVar41 - local_378) * _DAT_100708b48;
        local_238 = 0x8000100;
        uStack_234 = SUB82(dVar41,0);
        uStack_232 = (undefined2)((ulong)dVar41 >> 0x10);
        uStack_230._0_2_ = (undefined2)((ulong)dVar41 >> 0x20);
        uStack_230._2_2_ = (undefined2)((ulong)dVar41 >> 0x30);
        __os_log_impl(0x100000000,puVar36,1,"perf> CreateAutoFillTrackList() took %.2f ms",
                      &local_238,0xc);
      }
      goto LAB_100620184;
    }
LAB_100620158:
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      pcVar40 = "TrackDataIsValid(destTrackData)";
      goto LAB_100622094;
    }
  }
  iVar8 = -0x80;
  FUN_1001782e9(0,0);
LAB_100620184:
  if ((void *)local_348._0_8_ != (void *)0x0) {
    operator_delete((void *)local_348._0_8_);
  }
  if ((void *)local_318._0_8_ != (void *)0x0) {
    local_318._8_8_ = local_318._0_8_;
    operator_delete((void *)local_318._0_8_);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

