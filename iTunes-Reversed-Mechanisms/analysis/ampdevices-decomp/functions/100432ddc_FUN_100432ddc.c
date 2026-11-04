// name: FUN_100432ddc
// address: 100432ddc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100432ddc(undefined4 param_1,char *param_2,undefined1 *param_3,char *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined7 uVar21;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined7 uVar23;
  ulong uVar22;
  byte bVar24;
  char *pcVar25;
  long lVar26;
  ulong uVar27;
  uint uVar28;
  bool bVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_5d8 [16];
  double local_5c8;
  undefined1 *local_5c0;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  uint local_588;
  undefined4 local_584;
  long *local_580;
  undefined4 local_578;
  undefined4 local_574;
  ulong local_570;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  ulong local_550;
  ulong local_548;
  uint local_53c;
  undefined4 local_538;
  char local_531;
  char *local_530;
  char local_528;
  undefined1 uStack_527;
  undefined2 uStack_526;
  undefined8 uStack_524;
  undefined2 local_51c;
  uint local_51a;
  undefined2 uStack_516;
  undefined2 uStack_514;
  undefined2 uStack_512;
  undefined1 local_508 [10];
  char local_4fe;
  char local_4fd;
  char local_4e9;
  char local_4e6;
  char local_4d8;
  char local_4d4;
  char local_4d3;
  byte local_4d2;
  byte local_4d1;
  char local_4c0;
  char local_4af;
  char local_4ae;
  char local_4ad;
  char local_490;
  char local_484;
  char local_483;
  char local_470;
  char local_46f;
  char local_46e;
  char local_46d;
  char local_46c;
  char local_46b;
  char local_46a;
  char local_460;
  char local_45f;
  char local_45e;
  char local_45d;
  byte local_414;
  char local_40f;
  char local_403;
  undefined1 local_402 [9];
  char local_3f9;
  char local_3f4;
  char local_3f3;
  char local_3f2;
  char local_3f0;
  char local_3ef;
  char local_3ee;
  char local_3ed;
  char local_3ec;
  char local_3eb;
  char local_3ea;
  char local_3e9;
  char local_3e4;
  char local_3e3;
  short local_3e2;
  char local_3e0;
  uint local_3d8;
  long local_38;
  undefined8 extraout_XMM0_Qb;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c8 = (double)FUN_1001ebd46();
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar15 = DAT_1008c75b8;
  cVar6 = _os_log_type_enabled(DAT_1008c75b8,2);
  if (cVar6 != '\0') {
    local_528 = '\0';
    uStack_527 = 0;
    param_4 = "SetIPodPrefs() - start";
    __os_log_impl(0x100000000,uVar15,2,"SetIPodPrefs() - start",&local_528,2);
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_2 == (char *)0x0) {
    uVar15 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar15,0x10);
    if (cVar6 != '\0') {
      local_528 = '\x02';
      uStack_527 = 2;
      uStack_526 = 0x822;
      uStack_524._0_4_ = 0x7a0a90;
      uStack_524._4_4_ = 1;
      local_51c = 0x822;
      local_51a = 0x7a97f5;
      uStack_516 = 1;
      uStack_514 = 0;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_528,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_5c0 = param_3;
    local_530 = param_2;
    lVar14 = FUN_1004de449(param_1);
    if (lVar14 != 0) {
      auVar34 = FUN_1004e17a4(lVar14);
      uVar19 = auVar34._8_8_;
      uVar21 = auVar34._1_7_;
      uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14cd9));
      if ((((*(char *)(lVar14 + 0x14cd9) == local_530[0x289]) &&
           (uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14d7e)),
           *(char *)(lVar14 + 0x14d7e) == local_530[0x32e])) &&
          (uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14cef)),
          *(char *)(lVar14 + 0x14cef) == local_530[0x29f])) &&
         (((uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14cee)),
           *(char *)(lVar14 + 0x14cee) == local_530[0x29e] &&
           (uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14cf2)),
           *(char *)(lVar14 + 0x14cf2) == local_530[0x2a2])) &&
          ((uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14dc9)),
           *(char *)(lVar14 + 0x14dc9) == local_530[0x379] &&
           ((uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14dd5)),
            *(char *)(lVar14 + 0x14dd5) == local_530[0x385] &&
            (uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14de5)),
            *(char *)(lVar14 + 0x14de5) == local_530[0x395])))))))) {
        auVar34 = FUN_1001c5630(lVar14 + 0x14dd6,local_530 + 0x386,8);
        uVar19 = auVar34._8_8_;
        uVar15 = auVar34._0_8_;
        if (auVar34[0] == '\0') {
          local_560 = 0;
        }
        else {
          if (((*(char *)(lVar14 + 0x347) != '\0') &&
              (uVar15 = CONCAT71(auVar34._1_7_,*(char *)(lVar14 + 0x14deb)),
              *(char *)(lVar14 + 0x14deb) != local_530[0x39b])) ||
             (((*(char *)(lVar14 + 0x3a1) != '\0' &&
               (uVar15 = CONCAT71((int7)((ulong)uVar15 >> 8),*(char *)(lVar14 + 0x151e2)),
               *(char *)(lVar14 + 0x151e2) != local_530[0xd68])) ||
              ((*(char *)(lVar14 + 0x3a3) != '\0' &&
               (uVar15 = CONCAT71((int7)((ulong)uVar15 >> 8),*(char *)(lVar14 + 0x151e5)),
               *(char *)(lVar14 + 0x151e5) != local_530[0xd69])))))) goto LAB_100432fb6;
          uVar15 = CONCAT71((int7)((ulong)uVar15 >> 8),1);
          local_560 = (undefined4)uVar15;
        }
      }
      else {
LAB_100432fb6:
        local_560 = 0;
      }
      uVar21 = (undefined7)((ulong)uVar15 >> 8);
      pcVar18 = local_530;
      if (*(char *)(lVar14 + 0x6abf) == '\0') {
        uVar15 = CONCAT71(uVar21,1);
        auVar34._8_8_ = uVar19;
        auVar34._0_8_ = uVar15;
        local_53c = (uint)uVar15;
        if (local_530[0x31c] == '\0') goto LAB_100433054;
      }
      else {
        uVar15 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14d6c));
        auVar34._8_8_ = uVar19;
        auVar34._0_8_ = uVar15;
        param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
        local_53c = (uint)param_4;
        if (*(char *)(lVar14 + 0x14d6c) == local_530[0x31c]) {
LAB_100433054:
          uVar21 = (undefined7)((ulong)uVar15 >> 8);
          auVar34._1_7_ = uVar21;
          auVar34[0] = *(char *)(lVar14 + 0x14cdb);
          auVar34._8_8_ = uVar19;
          uVar23 = (undefined7)((ulong)param_4 >> 8);
          param_4 = (char *)CONCAT71(uVar23,1);
          local_53c = (uint)param_4;
          if ((((((*(char *)(lVar14 + 0x14cdb) == local_530[0x28b]) &&
                 (auVar34[0] = *(char *)(lVar14 + 0x14d00),
                 *(char *)(lVar14 + 0x14d00) == local_530[0x2b0])) &&
                (auVar34[0] = *(char *)(lVar14 + 0x14d6d),
                *(char *)(lVar14 + 0x14d6d) == local_530[0x31d])) &&
               ((auVar34[0] = *(char *)(lVar14 + 0x14d6e),
                *(char *)(lVar14 + 0x14d6e) == local_530[0x31e] &&
                (auVar34[0] = *(char *)(lVar14 + 0x14ddf),
                *(char *)(lVar14 + 0x14ddf) == local_530[0x38f])))) &&
              (auVar34[0] = *(char *)(lVar14 + 0x14df4),
              *(char *)(lVar14 + 0x14df4) == local_530[0x3a4])) &&
             (auVar34[0] = *(char *)(lVar14 + 0x14de4),
             *(char *)(lVar14 + 0x14de4) == local_530[0x394])) {
            uVar16 = CONCAT71(uVar21,*(char *)(lVar14 + 0x14de8));
            auVar34._0_8_ = uVar16;
            if (*(char *)(lVar14 + 0x14de8) == local_530[0x398]) {
              if (*(char *)(lVar14 + 0x390) == '\0') {
LAB_100433125:
                if (*(char *)(lVar14 + 0x388) != '\0') {
                  uVar16 = CONCAT71((int7)(uVar16 >> 8),*(char *)(lVar14 + 0x14df8));
                  auVar34._0_8_ = uVar16;
                  if (*(char *)(lVar14 + 0x14df8) != local_530[0x3a8]) goto LAB_100433284;
                }
                if (*(char *)(lVar14 + 0x366) != '\0') {
                  uVar16 = CONCAT71((int7)(uVar16 >> 8),*(char *)(lVar14 + 0x14d48));
                  auVar34._0_8_ = uVar16;
                  if (*(char *)(lVar14 + 0x14d48) != local_530[0x2f8]) goto LAB_100433284;
                }
                auVar34._0_8_ = uVar16;
                if (*(char *)(lVar14 + 0x367) != '\0') {
                  cVar6 = *(char *)(lVar14 + 0x14d55);
                  uVar15 = CONCAT71((int7)(uVar16 >> 8),cVar6);
                  auVar5._8_8_ = uVar19;
                  auVar5._0_8_ = uVar15;
                  auVar34._0_8_ = uVar15;
                  if ((((cVar6 != local_530[0x305]) ||
                       (param_4 = (char *)CONCAT71(uVar23,*(char *)(lVar14 + 0x14d56)),
                       auVar34 = auVar5, *(char *)(lVar14 + 0x14d56) != local_530[0x306])) ||
                      ((cVar6 != '\0' &&
                       (auVar34._1_7_ = (int7)((ulong)local_530 >> 8), auVar34[0] = local_530[0x304]
                       , *(char *)(lVar14 + 0x14d54) != local_530[0x304])))) ||
                     (auVar34 = FUN_1001c5630(lVar14 + 0x14d58,local_530 + 0x308,0x10),
                     pcVar18 = local_530, auVar34[0] == '\0')) goto LAB_100433284;
                }
                if (((((*(char *)(lVar14 + 0x368) == '\0') ||
                      (auVar4._1_7_ = auVar34._1_7_, auVar4[0] = *(char *)(lVar14 + 0x14df5),
                      auVar4._8_8_ = auVar34._8_8_, pcVar18 = local_530, auVar34 = auVar4,
                      *(char *)(lVar14 + 0x14df5) == local_530[0x3a5])) &&
                     (auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x152f0),
                                              *(undefined8 *)(local_530 + 0x7c0)),
                     pcVar18 = local_530, auVar34[0] == '\0')) &&
                    ((auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x152f8),
                                              *(undefined8 *)(local_530 + 0x7c8)),
                     pcVar18 = local_530, auVar34[0] == '\0' &&
                     (auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15300),
                                              *(undefined8 *)(local_530 + 2000)),
                     pcVar18 = local_530, auVar34[0] == '\0')))) &&
                   (auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15308),
                                            *(undefined8 *)(local_530 + 0x7d8)), auVar34[0] == '\0')
                   ) {
                  auVar34 = FUN_1002c17e8(*(undefined8 *)(lVar14 + 0x15310),
                                          *(undefined8 *)(pcVar18 + 0x7e0));
                  local_53c = auVar34._0_4_;
                  pcVar18 = local_530;
                }
              }
              else {
                auVar34[0] = *(char *)(lVar14 + 0x14d18);
                if (*(char *)(lVar14 + 0x14d18) == local_530[0x2c8]) {
                  uVar16 = CONCAT62(0,*(ushort *)(lVar14 + 0x14df6));
                  auVar34._0_8_ = uVar16;
                  if (*(ushort *)(lVar14 + 0x14df6) == *(ushort *)(local_530 + 0x3a6))
                  goto LAB_100433125;
                }
              }
            }
          }
        }
      }
LAB_100433284:
      uVar15 = auVar34._8_8_;
      if (*(char *)(lVar14 + 0x34e) == '\0') {
        local_55c = 0;
      }
      else if (*(char *)(lVar14 + 0x6abf) == '\0') {
        uVar19 = CONCAT71(auVar34._1_7_,1);
        auVar34._8_8_ = uVar15;
        auVar34._0_8_ = uVar19;
        local_55c = (undefined4)uVar19;
        if (pcVar18[0x318] == '\0') goto LAB_1004332d0;
      }
      else {
        uVar19 = CONCAT71(auVar34._1_7_,*(char *)(lVar14 + 0x14d68));
        auVar34._8_8_ = uVar15;
        auVar34._0_8_ = uVar19;
        param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
        local_55c = SUB84(param_4,0);
        if (*(char *)(lVar14 + 0x14d68) == pcVar18[0x318]) {
LAB_1004332d0:
          uVar21 = (undefined7)((ulong)uVar19 >> 8);
          auVar34._1_7_ = uVar21;
          auVar34[0] = *(char *)(lVar14 + 0x14d69);
          auVar34._8_8_ = uVar15;
          param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
          local_55c = SUB84(param_4,0);
          if (((*(char *)(lVar14 + 0x14d69) == pcVar18[0x319]) &&
              (auVar34[0] = *(char *)(lVar14 + 0x14d6a),
              *(char *)(lVar14 + 0x14d6a) == pcVar18[0x31a])) &&
             ((auVar34[0] = *(char *)(lVar14 + 0x14de9),
              *(char *)(lVar14 + 0x14de9) == pcVar18[0x399] &&
              (auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15330),
                                       *(undefined8 *)(pcVar18 + 0x7e8)), auVar34[0] == '\0')))) {
            auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15338),
                                    *(undefined8 *)(pcVar18 + 0x7f0));
            local_55c = auVar34._0_4_;
          }
        }
      }
      uVar15 = auVar34._8_8_;
      if (*(char *)(lVar14 + 0x34f) == '\0') {
        local_558 = 0;
      }
      else if (*(char *)(lVar14 + 0x6abf) == '\0') {
        uVar19 = CONCAT71(auVar34._1_7_,1);
        auVar34._8_8_ = uVar15;
        auVar34._0_8_ = uVar19;
        local_558 = (undefined4)uVar19;
        if (pcVar18[0x328] == '\0') goto LAB_100433388;
      }
      else {
        uVar19 = CONCAT71(auVar34._1_7_,*(char *)(lVar14 + 0x14d78));
        auVar34._8_8_ = uVar15;
        auVar34._0_8_ = uVar19;
        param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
        local_558 = SUB84(param_4,0);
        if (*(char *)(lVar14 + 0x14d78) == pcVar18[0x328]) {
LAB_100433388:
          uVar21 = (undefined7)((ulong)uVar19 >> 8);
          auVar34._1_7_ = uVar21;
          auVar34[0] = *(char *)(lVar14 + 0x14d79);
          auVar34._8_8_ = uVar15;
          param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
          local_558 = SUB84(param_4,0);
          if (((((*(char *)(lVar14 + 0x14d79) == pcVar18[0x329]) &&
                (auVar34[0] = *(char *)(lVar14 + 0x14d7a),
                *(char *)(lVar14 + 0x14d7a) == pcVar18[0x32a])) &&
               (auVar34[0] = *(char *)(lVar14 + 0x14d7b),
               *(char *)(lVar14 + 0x14d7b) == pcVar18[0x32b])) &&
              ((auVar34[0] = *(char *)(lVar14 + 0x14dea),
               *(char *)(lVar14 + 0x14dea) == pcVar18[0x39a] &&
               (auVar34 = FUN_1002c17e8(*(undefined8 *)(lVar14 + 0x15340),
                                        *(undefined8 *)(pcVar18 + 0x7f8)), pcVar18 = local_530,
               auVar34[0] == '\0')))) &&
             ((auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15348),
                                       *(undefined8 *)(local_530 + 0x800)), auVar34[0] == '\0' &&
              (auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15350),
                                       *(undefined8 *)(pcVar18 + 0x808)), auVar34[0] == '\0')))) {
            auVar34 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15358),
                                    *(undefined8 *)(pcVar18 + 0x810));
            local_558 = auVar34._0_4_;
          }
        }
      }
      uVar15 = auVar34._8_8_;
      uVar21 = auVar34._1_7_;
      auVar35._1_7_ = uVar21;
      auVar35[0] = *(char *)(lVar14 + 0x14d2a);
      auVar35._8_8_ = uVar15;
      local_531 = '\x01';
      if (((*(char *)(lVar14 + 0x14d2a) == pcVar18[0x2da]) &&
          (auVar35[0] = *(char *)(lVar14 + 0x14d29), *(char *)(lVar14 + 0x14d29) == pcVar18[0x2d9]))
         && ((auVar35[0] = *(char *)(lVar14 + 0x14d6b),
             *(char *)(lVar14 + 0x14d6b) == pcVar18[0x31b] &&
             (((auVar35[0] = *(char *)(lVar14 + 0x14d2b),
               *(char *)(lVar14 + 0x14d2b) == pcVar18[0x2db] &&
               (auVar35 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15318),
                                        *(undefined8 *)(pcVar18 + 0x818)), auVar35[0] == '\0')) &&
              (auVar35 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15320),
                                       *(undefined8 *)(pcVar18 + 0x820)), auVar35[0] == '\0')))))) {
        auVar35 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15328),*(undefined8 *)(pcVar18 + 0x828));
        local_531 = auVar35[0];
      }
      uVar15 = auVar35._8_8_;
      if (*(char *)(lVar14 + 0x33b) == '\0') {
        local_538 = 0;
      }
      else if (*(char *)(lVar14 + 0x6abf) == '\0') {
        uVar19 = CONCAT71(auVar35._1_7_,1);
        auVar35._8_8_ = uVar15;
        auVar35._0_8_ = uVar19;
        local_538 = (undefined4)uVar19;
        if (pcVar18[0x39c] == '\0') goto LAB_1004335c6;
      }
      else {
        uVar19 = CONCAT71(auVar35._1_7_,*(char *)(lVar14 + 0x14dec));
        auVar35._8_8_ = uVar15;
        auVar35._0_8_ = uVar19;
        param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
        local_538 = SUB84(param_4,0);
        if (*(char *)(lVar14 + 0x14dec) == pcVar18[0x39c]) {
LAB_1004335c6:
          auVar35._1_7_ = (int7)((ulong)uVar19 >> 8);
          auVar35[0] = *(char *)(lVar14 + 0x14ded);
          auVar35._8_8_ = uVar15;
          param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
          local_538 = SUB84(param_4,0);
          if ((*(char *)(lVar14 + 0x14ded) == pcVar18[0x39d]) &&
             (auVar35 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15360),
                                      *(undefined8 *)(pcVar18 + 0x830)), auVar35[0] == '\0')) {
            auVar35 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15368),
                                    *(undefined8 *)(pcVar18 + 0x838));
            local_538 = auVar35._0_4_;
          }
        }
      }
      uVar15 = auVar35._0_8_;
      if (*(char *)(lVar14 + 0x39c) == '\0') {
        local_554 = 0;
      }
      else if (*(char *)(lVar14 + 0x6abf) == '\0') {
        uVar15 = CONCAT71(auVar35._1_7_,1);
        local_554 = (undefined4)uVar15;
        if (pcVar18[0x39e] == '\0') {
          uVar15 = 0;
          goto LAB_100433658;
        }
      }
      else {
        uVar15 = CONCAT71(auVar35._1_7_,*(char *)(lVar14 + 0x14dee));
        param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),1);
        local_554 = SUB84(param_4,0);
        if (*(char *)(lVar14 + 0x14dee) == pcVar18[0x39e]) {
LAB_100433658:
          param_4 = (char *)CONCAT71((int7)((ulong)param_4 >> 8),*(char *)(lVar14 + 0x14def));
          local_554 = (undefined4)CONCAT71(auVar35._9_7_,1);
          if ((*(char *)(lVar14 + 0x14def) == pcVar18[0x39f]) &&
             (*(char *)(lVar14 + 0x14dee) == (char)uVar15)) {
            uVar15 = FUN_1002c12ed(*(undefined8 *)(lVar14 + 0x15370),
                                   *(undefined8 *)(pcVar18 + 0x840));
            local_554 = (undefined4)uVar15;
          }
        }
      }
      if (*(char *)(lVar14 + 0x379) == '\0') {
        bVar29 = false;
      }
      else {
        uVar15 = FUN_1002c0e84(*(undefined8 *)(pcVar18 + 0x848));
        bVar29 = true;
        if (((int)uVar15 == 0) &&
           (uVar15 = FUN_1002c0e84(*(undefined8 *)(local_530 + 0x850)), (int)uVar15 == 0)) {
          uVar15 = FUN_1002c0e84(*(undefined8 *)(local_530 + 0x858));
          bVar29 = (int)uVar15 != 0;
        }
      }
      if (*(char *)(lVar14 + 0x33c) == '\0') {
        local_578 = 0;
      }
      else {
        local_578 = (undefined4)CONCAT71((int7)((ulong)param_4 >> 8),1);
        param_4 = local_530;
        if ((((((*(char *)(lVar14 + 0x14d04) == local_530[0x2b4]) &&
               (*(char *)(lVar14 + 0x14d05) == local_530[0x2b5])) &&
              (*(char *)(lVar14 + 0x14d06) == local_530[0x2b6])) &&
             ((*(char *)(lVar14 + 0x14d07) == local_530[0x2b7] &&
              (*(char *)(lVar14 + 0x14dc4) == local_530[0x374])))) &&
            ((*(char *)(lVar14 + 0x14de6) == local_530[0x396] &&
             ((*(char *)(lVar14 + 0x14e00) == local_530[0x3b0] &&
              (*(char *)(lVar14 + 0x14e01) == local_530[0x3b1])))))) &&
           (*(char *)(lVar14 + 0x14e02) == local_530[0x3b2])) {
          local_578 = (undefined4)
                      CONCAT71((int7)((ulong)uVar15 >> 8),
                               *(char *)(lVar14 + 0x14e03) != local_530[0x3b3]);
        }
      }
      _memcpy(local_508,(void *)(lVar14 + 0x14cd0),0x4d0);
      if (*(char *)(lVar14 + 0x6aca) != '\0') {
LAB_1004337cc:
        uVar16 = FUN_1004dccf5(lVar14,"");
        uVar11 = (uint)uVar16;
        uVar27 = uVar16 & 0xffffffff;
        if (uVar11 != 0xffffff80) {
          if (uVar11 == 0) {
            pcVar18 = (char *)CONCAT71((int7)(uVar16 >> 8),1);
            local_564 = SUB84(pcVar18,0);
            local_584 = 0;
            goto LAB_100433828;
          }
          uVar15 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 == '\0') goto LAB_100435e46;
LAB_100433a51:
          local_51a = uVar11;
          uStack_524._4_4_ = 1;
          uStack_524._0_4_ = 0x7a0a90;
          uStack_526 = 0x822;
          uStack_527 = 2;
          local_528 = '\x02';
          local_51c = 0x400;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_528,0x12);
        }
        goto LAB_100435e46;
      }
      pcVar18 = *(char **)(lVar14 + 0x30);
      local_584 = (undefined4)CONCAT71((int7)((ulong)param_4 >> 8),1);
      if ((pcVar18 != (char *)0x0) && ((pcVar18[0x2be0] & 0x20U) != 0)) goto LAB_1004337cc;
      local_564 = 0;
LAB_100433828:
      if (((((char)local_53c == '\0') && ((char)local_55c == '\0')) && ((char)local_558 == '\0')) &&
         (((char)local_538 == '\0' && ((char)local_554 == '\0')))) {
        pcVar18 = local_530;
        if ((((local_530[0x28a] == '\0') && (*(char *)(lVar14 + 0x36d) != '\0')) &&
            (*(char *)(lVar14 + 0x35c) == '\0')) && (*(char *)(lVar14 + 0x6abf) == '\0')) {
          cVar6 = FUN_10054302c(lVar14,0,0,0);
          if (cVar6 != '\0') {
            *(undefined1 *)(lVar14 + 0x6ac0) = 1;
            FUN_100430bbe(lVar14,1);
            pcVar18 = (char *)FUN_1004313cd(lVar14,1);
            local_554 = 0;
            local_538 = 0;
            local_558 = 0;
            local_55c = 0;
LAB_1004344b7:
            local_531 = '\x01';
            local_548 = 0;
            local_570 = 0;
            pcVar18 = (char *)CONCAT71((int7)((ulong)pcVar18 >> 8),1);
            local_53c = (uint)pcVar18;
            goto LAB_1004338da;
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar15 = DAT_1008c75b8;
          pcVar18 = (char *)_os_log_type_enabled(DAT_1008c75b8,1);
          if ((char)pcVar18 != '\0') {
            local_528 = '\0';
            uStack_527 = 0;
            pcVar18 = (char *)__os_log_impl(0x100000000,uVar15,1,
                                            "sync> did not switch home music library",&local_528,2);
          }
        }
        local_570 = 0;
LAB_100433878:
        local_548 = 0;
        local_554 = 0;
        local_538 = 0;
        local_558 = 0;
        local_55c = 0;
        local_53c = 0;
      }
      else if ((*(char *)(lVar14 + 0x6abf) == '\0') &&
              ((local_530[0x28a] != '\0' || (pcVar18 = local_530, *(char *)(lVar14 + 0x36d) != '\0')
               ))) {
        cVar6 = FUN_10054302c(lVar14,0,0,0);
        if (cVar6 == '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar15 = DAT_1008c75b8;
          pcVar18 = (char *)_os_log_type_enabled(DAT_1008c75b8,1);
          local_570 = 8;
          if ((char)pcVar18 != '\0') {
            local_528 = '\0';
            uStack_527 = 0;
            pcVar18 = (char *)__os_log_impl(0x100000000,uVar15,1,
                                            "sync> did not switch home music library",&local_528,2);
          }
          goto LAB_100433878;
        }
        *(undefined1 *)(lVar14 + 0x6ac0) = 1;
        FUN_100430bbe(lVar14,1);
        if (local_530[0x28a] == '\0') {
          if (*(char *)(lVar14 + 0x36d) == '\0') {
            pcVar18 = (char *)CONCAT71((int7)((ulong)local_530 >> 8),1);
            local_53c = (uint)pcVar18;
            goto LAB_1004338c4;
          }
          FUN_1004313cd(lVar14,1);
          local_531 = '\x01';
          pcVar18 = local_530;
          if (local_530[0x28a] == '\0') goto LAB_1004344b7;
        }
        local_53c = (uint)CONCAT71((int7)((ulong)local_530 >> 8),1);
        pcVar18 = (char *)0x18e0;
        local_548 = 0x18e0;
        local_570 = 0;
      }
      else {
LAB_1004338c4:
        local_570 = 0;
        local_548 = 0;
      }
LAB_1004338da:
      if (bVar29) {
        local_574 = (undefined4)CONCAT71((int7)((ulong)pcVar18 >> 8),1);
        if ((*(char *)(lVar14 + 0x14dc6) == '\0') &&
           (iVar10 = FUN_1002c0e84(*(undefined8 *)(local_530 + 0x858)), iVar10 != 0)) {
          local_550 = *(ulong *)(lVar14 + 0x30);
          local_580 = *(long **)(local_530 + 0x858);
          uVar11 = FUN_1002c0e84();
          if (uVar11 == 0) {
            uVar28 = 0;
          }
          else {
            uVar16 = 0;
            uVar28 = 0;
            do {
              lVar17 = FUN_100300729(local_550,*(undefined8 *)(*local_580 + uVar16 * 8));
              if (lVar17 == 0) {
                uVar15 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar15,0x10);
                if (cVar6 != '\0') {
                  local_528 = '\x02';
                  uStack_527 = 2;
                  uStack_526 = 0x822;
                  uStack_524._0_4_ = 0x7a0a90;
                  uStack_524._4_4_ = 1;
                  local_51c = 0x822;
                  local_51a = 0x7b581f;
                  uStack_516 = 1;
                  uStack_514 = 0;
                  __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_528,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                cVar6 = FUN_10044ad85(lVar17,0);
                uVar28 = (uVar28 + 1) - (uint)(cVar6 == '\0');
              }
              uVar16 = uVar16 + 1;
            } while (uVar11 != uVar16);
          }
          uVar11 = FUN_1002c0e84(*(undefined8 *)(local_530 + 0x858));
          if ((uVar28 < uVar11) &&
             (local_574 = FUN_1005447e9(lVar14,*(undefined8 *)(local_530 + 0x858),lVar14 + 0x14dc6),
             *(char *)(lVar14 + 0x14dc6) != '\0')) {
            local_570 = 8;
          }
        }
      }
      else {
        local_574 = 0;
      }
      cVar6 = local_530[0x28a];
      if (*(char *)(lVar14 + 0x6abf) == '\0') {
        if ((cVar6 == '\0') && (*(char *)(lVar14 + 0x36d) == '\0')) {
          cVar6 = '\0';
          goto LAB_100433a8a;
        }
      }
      else {
LAB_100433a8a:
        *(undefined1 *)(lVar14 + 0x14cd8) = 1;
        *(char *)(lVar14 + 0x14cda) = cVar6;
        FUN_10043044c(lVar14,cVar6);
        local_570 = 8;
        if ((*(char *)(lVar14 + 0x14cda) == '\0') && (local_4fe != '\0')) {
          *(undefined1 *)(lVar14 + 0x14cf7) = 0;
        }
      }
      if ((char)local_560 == '\0') {
        *(undefined1 *)(lVar14 + 0x14cd8) = 1;
        *(char *)(lVar14 + 0x14cd9) = local_530[0x289];
        *(char *)(lVar14 + 0x14d7e) = local_530[0x32e];
        if (local_530[0x29f] == '\0') {
          bVar29 = false;
        }
        else {
          cVar6 = FUN_100266a70(*(undefined8 *)(lVar14 + 0x66d8));
          bVar29 = cVar6 != '\0';
        }
        *(bool *)(lVar14 + 0x14cef) = bVar29;
        *(char *)(lVar14 + 0x14cee) = local_530[0x29e];
        *(char *)(lVar14 + 0x14cf2) = local_530[0x2a2];
        *(char *)(lVar14 + 0x14dc9) = local_530[0x379];
        *(char *)(lVar14 + 0x14dd5) = local_530[0x385];
        *(char *)(lVar14 + 0x14de5) = local_530[0x395];
        *(char *)(lVar14 + 0x14deb) = local_530[0x39b];
        FUN_1001c631b(local_530 + 0x386,lVar14 + 0x14dd6,8);
        if ((*(char *)(lVar14 + 0x14cda) != '\0') && (*(char *)(lVar14 + 0x6abf) != '\0')) {
          uVar11 = local_53c;
          if (*(char *)(lVar14 + 0x14cf2) != local_4e6) {
            lVar17 = FUN_1002796f8(1,0);
            if ((lVar17 != 0) && (*(char *)(lVar17 + 0xad) != '\0')) {
              local_548 = local_548 | 0x20;
            }
            lVar17 = FUN_1002796f8(2,0);
            if ((lVar17 != 0) && (*(char *)(lVar17 + 0xad) != '\0')) {
              local_548 = local_548 | 0xc0;
            }
            uVar11 = 1;
            if (*(char *)(lVar14 + 0x35c) == '\0') {
              uVar11 = local_53c & 0xff;
            }
          }
          local_53c = uVar11;
          if ((*(char *)(lVar14 + 0x347) != '\0') && (*(char *)(lVar14 + 0x14deb) != local_3ed)) {
            local_548 = local_548 | 0xc0;
          }
        }
        local_550 = local_570 | 8;
        if (((*(char *)(lVar14 + 0x35b) != '\0') && (*(char *)(lVar14 + 0x38b) != '\0')) &&
           ((*(char *)(lVar14 + 0x14dc9) != local_40f ||
            ((*(char *)(lVar14 + 0x14dd5) != local_403 || (*(char *)(lVar14 + 0x14de5) != local_3f3)
             ))))) {
          local_550 = local_570 | 10;
        }
        if ((*(char *)(lVar14 + 0x14cda) != '\0') && (*(char *)(lVar14 + 0x14cef) != local_4e9)) {
          FUN_1004308df(lVar14,0);
          FUN_10043086b(lVar14);
        }
        pcVar18 = local_530;
        if ((*(char *)(lVar14 + 0x3a1) == '\0') || (*(char *)(lVar14 + 0x151e2) == local_530[0xd68])
           ) {
          local_580 = (long *)((ulong)local_580 & 0xffffffff00000000);
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar15 = DAT_1008c75b8;
          cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar6 != '\0') {
            pcVar25 = "enabling";
            if (pcVar18[0xd68] == '\0') {
              pcVar25 = "disabling";
            }
            uVar19 = *(undefined8 *)(lVar14 + 0x152c8);
            local_528 = '\x02';
            uStack_527 = 2;
            uStack_526 = 0x822;
            uStack_524._0_4_ = SUB84(pcVar25,0);
            uStack_524._4_4_ = (undefined4)((ulong)pcVar25 >> 0x20);
            local_51c = 0x842;
            local_51a = (uint)uVar19;
            uStack_516 = (undefined2)((ulong)uVar19 >> 0x20);
            uStack_514 = (undefined2)((ulong)uVar19 >> 0x30);
            __os_log_impl(0x100000000,uVar15,1,"sync> %{public}s wifi syncing for device %{public}@"
                          ,&local_528,0x16);
          }
          cVar6 = pcVar18[0xd68];
          *(char *)(lVar14 + 0x151e2) = cVar6;
          *(undefined1 *)(lVar14 + 0x151e3) = 0;
          *(bool *)(lVar14 + 0x151e4) = cVar6 == '\0';
          if (cVar6 == '\0') {
            uVar11 = FUN_1005c6125(*(undefined8 *)(lVar14 + 0x7168));
            if (uVar11 == 0xffffff80) {
LAB_100434302:
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar15 = DAT_1008c75b8;
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 3;
                uStack_526 = 0x842;
                uStack_524._0_4_ = (undefined4)*(undefined8 *)(lVar14 + 0x152c8);
                uStack_524._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x152c8) >> 0x20);
                local_51c = 0x400;
                uStack_516 = 0x400;
                uStack_514 = (undefined2)uVar11;
                uStack_512 = (undefined2)(uVar11 >> 0x10);
                local_51a = uVar11;
                __os_log_impl(0x100000000,uVar15,0x10,
                              "MobileDeviceRemoveWiFiWakeupToken failed for device %{public}@ (%d / 0x%08X)"
                              ,&local_528,0x18);
              }
            }
            else if (uVar11 != 0) {
              uVar15 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar15,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 2;
                uStack_526 = 0x822;
                uStack_524._0_4_ = 0x7a0a90;
                uStack_524._4_4_ = 1;
                local_51c = 0x400;
                local_51a = uVar11;
                __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_528,
                                    0x12);
              }
              goto LAB_100434302;
            }
          }
          else {
            uVar19 = FUN_1004e1208();
            uVar15 = *(undefined8 *)(lVar14 + 0x7168);
            uVar20 = FUN_10055af90(*(undefined8 *)(lVar14 + 0x66d8));
            uVar11 = FUN_1005c5b18(uVar15,uVar20);
            if (uVar11 == 0xffffff80) {
LAB_100433f84:
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar15 = DAT_1008c75b8;
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 3;
                uStack_526 = 0x842;
                uStack_524._0_4_ = (undefined4)*(undefined8 *)(lVar14 + 0x152c8);
                uStack_524._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x152c8) >> 0x20);
                local_51c = 0x400;
                uStack_516 = 0x400;
                uStack_514 = (undefined2)uVar11;
                uStack_512 = (undefined2)(uVar11 >> 0x10);
                local_51a = uVar11;
                __os_log_impl(0x100000000,uVar15,0x10,
                              "MobileDeviceSaveWiFiWakeupToken failed for device %{public}@ (%d / 0x%08X)"
                              ,&local_528,0x18);
              }
            }
            else if (uVar11 != 0) {
              uVar15 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar15,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 2;
                uStack_526 = 0x822;
                uStack_524._0_4_ = 0x7a0a90;
                uStack_524._4_4_ = 1;
                local_51c = 0x400;
                local_51a = uVar11;
                __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_528,
                                    0x12);
              }
              goto LAB_100433f84;
            }
            uVar11 = FUN_1005c4f10(*(undefined8 *)(lVar14 + 0x7168),1,uVar19);
            if (uVar11 == 0xffffff80) {
LAB_10043403c:
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar15 = DAT_1008c75b8;
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 3;
                uStack_526 = 0x842;
                uStack_524._0_4_ = (undefined4)*(undefined8 *)(lVar14 + 0x152c8);
                uStack_524._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x152c8) >> 0x20);
                local_51c = 0x400;
                uStack_516 = 0x400;
                uStack_514 = (undefined2)uVar11;
                uStack_512 = (undefined2)(uVar11 >> 0x10);
                local_51a = uVar11;
                __os_log_impl(0x100000000,uVar15,0x10,
                              "MobileDeviceSetWiFiSyncingEnabled failed for device %{public}@ (%d / 0x%08X)"
                              ,&local_528,0x18);
              }
            }
            else if (uVar11 != 0) {
              uVar15 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar15,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 2;
                uStack_526 = 0x822;
                uStack_524._0_4_ = 0x7a0a90;
                uStack_524._4_4_ = 1;
                local_51c = 0x400;
                local_51a = uVar11;
                __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_528,
                                    0x12);
              }
              goto LAB_10043403c;
            }
            FUN_10036c63c();
            FUN_10017060f(uVar19);
          }
          uVar15 = FUN_100331f55();
          local_580 = (long *)CONCAT44(local_580._4_4_,(int)CONCAT71((int7)((ulong)uVar15 >> 8),1));
        }
        pcVar18 = local_530;
        if ((*(char *)(lVar14 + 0x3a3) != '\0') && (*(char *)(lVar14 + 0x151e5) != local_530[0xd69])
           ) {
          uVar15 = FUN_100169452(DAT_1008c4d90,local_530[0xd69] != '\0');
          FUN_10016bec9(&local_528,*(undefined8 *)(lVar14 + 0x152c8));
          iVar10 = _AMSEnableCloudBackup
                             (CONCAT44((undefined4)uStack_524,
                                       CONCAT22(uStack_526,CONCAT11(uStack_527,local_528))),uVar15,
                              &local_588);
          FUN_10016d588(&local_528);
          FUN_10017060f(uVar15);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar15 = DAT_1008c75b8;
          if (iVar10 == 0) {
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
            pcVar18 = local_530;
            if (cVar6 != '\0') {
              pcVar25 = "enabled";
              if (local_530[0xd69] == '\0') {
                pcVar25 = "disabled";
              }
              local_528 = '\x02';
              uStack_527 = 2;
              uStack_526 = 0x842;
              uStack_524._0_4_ = (undefined4)*(undefined8 *)(lVar14 + 0x152c8);
              uStack_524._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x152c8) >> 0x20);
              local_51c = 0x822;
              local_51a = (uint)pcVar25;
              uStack_516 = (undefined2)((ulong)pcVar25 >> 0x20);
              uStack_514 = 0;
              __os_log_impl(0x100000000,uVar15,1,
                            "AMSEnableCloudBackup succeeded for device %{public}@, cloud backup is %{public}s"
                            ,&local_528,0x16);
            }
            *(char *)(lVar14 + 0x151e5) = pcVar18[0xd69];
          }
          else {
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            pcVar18 = local_530;
            if (cVar6 != '\0') {
              local_528 = '\x02';
              uStack_527 = 2;
              uStack_526 = 0x842;
              uStack_524._0_4_ = (undefined4)*(undefined8 *)(lVar14 + 0x152c8);
              uStack_524._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x152c8) >> 0x20);
              local_51c = 0x400;
              local_51a = local_588;
              __os_log_impl(0x100000000,uVar15,0x10,
                            "AMSEnableCloudBackup failed for device %{public}@ (%d)",&local_528,0x12
                           );
            }
            if (pcVar18[0xd69] != '\0') {
              if (local_588 == 0xffffffd9) {
                uVar15 = FUN_100416f20(*(undefined4 *)(lVar14 + 0x66b0),0x10cc02a5);
                FUN_1001b7eb0(local_5b8,uVar15);
                FUN_1004fdbd0(local_5a8,lVar14);
                FUN_1001bbec4(&local_528,local_5b8,local_5a8);
                pcVar18 = local_530;
                FUN_1004fda52(local_598,*(undefined4 *)(lVar14 + 0x28));
                FUN_1004508b1(&local_528,local_598);
              }
              else {
                uVar15 = FUN_100416f20(*(undefined4 *)(lVar14 + 0x66b0),0x10cc02a6);
                FUN_1001b7eb0(local_5b8,uVar15);
                FUN_1004fdbd0(local_5a8,lVar14);
                FUN_1001bbec4(&local_528,local_5b8,local_5a8);
                pcVar18 = local_530;
                uVar15 = FUN_100416f20(*(undefined4 *)(lVar14 + 0x66b0),0x10cc02a7);
                FUN_1001b7eb0(local_598,uVar15);
                FUN_1004fda52(local_5d8,*(undefined4 *)(lVar14 + 0x28));
                FUN_100450ae1(&local_528,local_598,local_5d8);
                FUN_1001b7a50(local_5d8);
              }
              FUN_1001b7a50(local_598);
              FUN_1001b7a50(&local_528);
              FUN_1001b7a50(local_5a8);
              FUN_1001b7a50(local_5b8);
            }
          }
        }
      }
      else {
        local_580 = (long *)((ulong)local_580 & 0xffffffff00000000);
        local_550 = local_570;
        pcVar18 = local_530;
      }
      uVar16 = local_550;
      if ((char)local_53c != '\0') {
        if (*(char *)(lVar14 + 0x353) != '\0') {
          cVar6 = pcVar18[0x2b0];
          *(char *)(lVar14 + 0x14d00) = cVar6;
          if (cVar6 != local_4d8) {
            if (cVar6 == '\0') {
              local_548 = local_548 + 0x10000;
            }
            else {
              local_548 = local_548 + 0x4000;
            }
          }
        }
        if (*(char *)(lVar14 + 0x390) != '\0') {
          *(char *)(lVar14 + 0x14d18) = pcVar18[0x2c8];
          *(undefined2 *)(lVar14 + 0x14df6) = *(undefined2 *)(pcVar18 + 0x3a6);
        }
        if (*(char *)(lVar14 + 0x388) != '\0') {
          bVar24 = pcVar18[0x3a8];
          *(byte *)(lVar14 + 0x14df8) = bVar24;
          lVar17 = *(long *)(lVar14 + 0x30);
          if (lVar17 != 0) {
            *(byte *)(lVar17 + 0x2d1a) = *(byte *)(lVar17 + 0x2d1a) & 0xbf | (bVar24 & 1) << 6;
          }
        }
        if (*(char *)(lVar14 + 0x366) != '\0') {
          *(char *)(lVar14 + 0x14d48) = pcVar18[0x2f8];
        }
        if (*(char *)(lVar14 + 0x367) != '\0') {
          bVar24 = *(byte *)(lVar14 + 0x42d);
          if (*(byte *)(lVar14 + 0x42d) < (byte)*(undefined4 *)(pcVar18 + 0x304)) {
            bVar24 = (byte)*(undefined4 *)(pcVar18 + 0x304);
          }
          *(byte *)(lVar14 + 0x14d54) = bVar24;
          *(char *)(lVar14 + 0x14d55) = pcVar18[0x305];
          *(char *)(lVar14 + 0x14d56) = pcVar18[0x306];
          FUN_1001c631b(pcVar18 + 0x308,lVar14 + 0x14d58,0x10);
          pcVar18 = local_530;
        }
        if (*(char *)(lVar14 + 0x368) != '\0') {
          *(char *)(lVar14 + 0x14df5) = pcVar18[0x3a5];
        }
        if (((*(char *)(lVar14 + 0x35c) != '\0') && (*(char *)(lVar14 + 0x14cef) != '\0')) &&
           (local_4e9 == '\0')) {
          FUN_1002ac1ee(*(undefined8 *)(lVar14 + 0x30));
          pcVar18 = local_530;
        }
        uVar16 = local_550 | 8;
        if ((*(char *)(lVar14 + 0x35b) != '\0') &&
           ((((*(char *)(lVar14 + 0x366) != '\0' && (*(char *)(lVar14 + 0x14d48) != local_490)) ||
             ((*(char *)(lVar14 + 0x367) != '\0' &&
              ((*(char *)(lVar14 + 0x14d55) != local_483 ||
               (*(char *)(lVar14 + 0x14d54) != local_484)))))) ||
            ((*(char *)(lVar14 + 0x368) != '\0' && (*(char *)(lVar14 + 0x14df5) != local_3e3)))))) {
          uVar16 = local_550 | 10;
        }
        if (*(char *)(lVar14 + 0x6abf) != '\0') {
          *(undefined1 *)(lVar14 + 0x14cd8) = 1;
          *(char *)(lVar14 + 0x14d6c) = pcVar18[0x31c];
          *(char *)(lVar14 + 0x14cdb) = pcVar18[0x28b];
          *(char *)(lVar14 + 0x14d6d) = pcVar18[0x31d];
          *(char *)(lVar14 + 0x14d6e) = pcVar18[0x31e];
          *(char *)(lVar14 + 0x14ddf) = pcVar18[0x38f];
          *(char *)(lVar14 + 0x14df4) = pcVar18[0x3a4];
          *(char *)(lVar14 + 0x14de4) = pcVar18[0x394];
          *(char *)(lVar14 + 0x14de8) = pcVar18[0x398];
          FUN_10042ffc4(lVar14);
          lVar17 = *(long *)(local_530 + 0x7c0);
          if (lVar17 != 0) {
            uVar15 = *(undefined8 *)(lVar14 + 0x152f0);
            cVar6 = FUN_1002c12ed(lVar17,uVar15);
            if (cVar6 != '\0') {
              FUN_1002c0ca0(lVar17,uVar15);
              uVar16 = uVar16 | 0x400;
            }
          }
          lVar17 = *(long *)(local_530 + 0x7c8);
          if (lVar17 != 0) {
            uVar15 = *(undefined8 *)(lVar14 + 0x152f8);
            cVar6 = FUN_1002c12ed(lVar17,uVar15);
            if (cVar6 != '\0') {
              FUN_1002c0ca0(lVar17,uVar15);
              uVar16 = uVar16 | 0x400;
            }
          }
          lVar17 = *(long *)(local_530 + 2000);
          if (lVar17 != 0) {
            uVar15 = *(undefined8 *)(lVar14 + 0x15300);
            cVar6 = FUN_1002c12ed(lVar17,uVar15);
            if (cVar6 != '\0') {
              FUN_1002c0ca0(lVar17,uVar15);
              uVar16 = uVar16 | 0x800;
            }
          }
          lVar17 = *(long *)(local_530 + 0x7d8);
          if (lVar17 != 0) {
            uVar15 = *(undefined8 *)(lVar14 + 0x15308);
            cVar6 = FUN_1002c12ed(lVar17,uVar15);
            if (cVar6 != '\0') {
              FUN_1002c0ca0(lVar17,uVar15);
              uVar16 = uVar16 | 0x1000;
            }
          }
          if ((*(long *)(local_530 + 0x7e0) != 0) &&
             (cVar6 = FUN_1002c17e8(*(long *)(local_530 + 0x7e0),*(undefined8 *)(lVar14 + 0x15310)),
             cVar6 != '\0')) {
            FUN_1002c14ac(*(undefined8 *)(local_530 + 0x7e0),*(undefined8 *)(lVar14 + 0x15310));
            uVar16 = uVar16 | 0x2000;
          }
          if (*(char *)(lVar14 + 0x14cda) != '\0') {
            if (((((*(char *)(lVar14 + 0x14d6c) == local_46c) &&
                  (*(char *)(lVar14 + 0x14cdb) == local_4fd)) &&
                 ((*(char *)(lVar14 + 0x14cdb) != '\x02' || ((uVar16 & 0x3c00) == 0)))) &&
                ((((*(char *)(lVar14 + 0x14d18) == local_4c0 &&
                   (*(short *)(lVar14 + 0x14df6) == local_3e2)) &&
                  (*(char *)(lVar14 + 0x14d48) == local_490)) &&
                 ((*(char *)(lVar14 + 0x14d6d) == local_46b &&
                  (*(char *)(lVar14 + 0x14d6e) == local_46a)))))) &&
               ((*(char *)(lVar14 + 0x14ddf) == local_3f9 &&
                ((((*(char *)(lVar14 + 0x14df4) == local_3e4 &&
                   ((*(char *)(lVar14 + 0x14df4) != '\x02' || ((uVar16 & 0x400) == 0)))) &&
                  (*(char *)(lVar14 + 0x14de4) == local_3f4)) &&
                 ((*(char *)(lVar14 + 0x14de8) == local_3f0 &&
                  (*(char *)(lVar14 + 0x14df8) == local_3e0)))))))) {
              if ((*(char *)(lVar14 + 0x367) != '\0') &&
                 ((*(char *)(lVar14 + 0x14d55) != local_483 ||
                  (*(char *)(lVar14 + 0x14d54) != local_484)))) {
                local_548 = local_548 | 0x20;
              }
              if ((*(char *)(lVar14 + 0x368) != '\0') && (*(char *)(lVar14 + 0x14df5) != local_3e3))
              {
                local_548 = local_548 | 0x20;
              }
            }
            else {
              local_548 = local_548 | 0x20;
            }
          }
          pcVar18 = local_530;
          uVar16 = uVar16 | 8;
        }
      }
      local_550 = uVar16;
      if (((char)local_55c != '\0') && (*(char *)(lVar14 + 0x6abf) != '\0')) {
        *(undefined1 *)(lVar14 + 0x14cd8) = 1;
        *(char *)(lVar14 + 0x14d68) = pcVar18[0x318];
        *(char *)(lVar14 + 0x14d69) = pcVar18[0x319];
        *(char *)(lVar14 + 0x14d6a) = pcVar18[0x31a];
        *(char *)(lVar14 + 0x14de9) = pcVar18[0x399];
        FUN_1004300a8(lVar14);
        lVar17 = *(long *)(local_530 + 0x7e8);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15330);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x100000;
          }
        }
        lVar17 = *(long *)(local_530 + 0x7f0);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15338);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x200000;
          }
        }
        if ((*(char *)(lVar14 + 0x14cda) != '\0') &&
           ((((*(char *)(lVar14 + 0x14d68) != local_470 ||
              (*(char *)(lVar14 + 0x14d69) != local_46f)) ||
             (*(char *)(lVar14 + 0x14d6a) != local_46e)) ||
            ((*(char *)(lVar14 + 0x14de9) != local_3ef || ((local_550 & 0x300000) != 0)))))) {
          local_548 = local_548 | 0x40;
        }
        local_550 = local_550 | 8;
        pcVar18 = local_530;
      }
      if (((char)local_558 != '\0') && (*(char *)(lVar14 + 0x6abf) != '\0')) {
        *(undefined1 *)(lVar14 + 0x14cd8) = 1;
        uVar11 = *(uint *)(pcVar18 + 0x328);
        *(uint *)(lVar14 + 0x14d78) = uVar11;
        *(char *)(lVar14 + 0x14dea) = pcVar18[0x39a];
        FUN_100430196(lVar14,uVar11 & 0xff,uVar11 >> 8 & 0xff);
        if ((*(long *)(local_530 + 0x7f8) != 0) &&
           (cVar6 = FUN_1002c17e8(*(long *)(local_530 + 0x7f8),*(undefined8 *)(lVar14 + 0x15340)),
           cVar6 != '\0')) {
          FUN_1002c14ac(*(undefined8 *)(local_530 + 0x7f8),*(undefined8 *)(lVar14 + 0x15340));
          local_550 = local_550 + 0x400000;
        }
        lVar17 = *(long *)(local_530 + 0x800);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15348);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x800000;
          }
        }
        lVar17 = *(long *)(local_530 + 0x808);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15350);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x1000000;
          }
        }
        lVar17 = *(long *)(local_530 + 0x810);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15358);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x2000000;
          }
        }
        if ((*(char *)(lVar14 + 0x14cda) != '\0') &&
           ((((*(char *)(lVar14 + 0x14d78) != local_460 ||
              (*(char *)(lVar14 + 0x14d79) != local_45f)) ||
             (*(char *)(lVar14 + 0x14d7a) != local_45e)) ||
            (((*(char *)(lVar14 + 0x14d7b) != local_45d ||
              (*(char *)(lVar14 + 0x14dea) != local_3ee)) || ((local_550 & 0x3c00000) != 0)))))) {
          local_548 = local_548 | 0x80;
        }
        local_550 = local_550 | 8;
        pcVar18 = local_530;
      }
      cVar6 = pcVar18[0x2da];
      if (cVar6 == '\0') {
        if ((*(char *)(lVar14 + 0x6ac2) != '\0') && (local_531 != '\0')) {
          cVar6 = '\0';
          goto LAB_100434e1c;
        }
      }
      else {
        if (*(char *)(lVar14 + 0x6ac2) == '\0') {
          FUN_1004313cd(lVar14,1);
          cVar6 = local_530[0x2da];
          pcVar18 = local_530;
          if (cVar6 == '\0') {
            cVar6 = '\0';
            goto LAB_100434dba;
          }
          local_548 = local_548 | 0x100;
        }
        else {
LAB_100434dba:
          if (local_531 == '\0') goto LAB_100434f93;
        }
        if (*(char *)(lVar14 + 0x6ac2) != '\0') {
LAB_100434e1c:
          *(char *)(lVar14 + 0x14d2a) = cVar6;
          *(char *)(lVar14 + 0x14d29) = pcVar18[0x2d9];
          *(char *)(lVar14 + 0x14d6b) = pcVar18[0x31b];
          *(char *)(lVar14 + 0x14d2b) = pcVar18[0x2db];
          FUN_10043097c(lVar14,cVar6);
          lVar17 = *(long *)(local_530 + 0x818);
          if (lVar17 != 0) {
            uVar15 = *(undefined8 *)(lVar14 + 0x15318);
            cVar6 = FUN_1002c12ed(lVar17,uVar15);
            if (cVar6 != '\0') {
              FUN_1002c0ca0(lVar17,uVar15);
              local_550 = local_550 | 0x4000;
            }
          }
          lVar17 = *(long *)(local_530 + 0x820);
          if (lVar17 != 0) {
            uVar15 = *(undefined8 *)(lVar14 + 0x15320);
            cVar6 = FUN_1002c12ed(lVar17,uVar15);
            if (cVar6 != '\0') {
              FUN_1002c0ca0(lVar17,uVar15);
              local_550 = local_550 | 0x8000;
            }
          }
          lVar17 = *(long *)(local_530 + 0x828);
          if (lVar17 != 0) {
            uVar15 = *(undefined8 *)(lVar14 + 0x15328);
            cVar6 = FUN_1002c12ed(lVar17,uVar15);
            if (cVar6 != '\0') {
              FUN_1002c0ca0(lVar17,uVar15);
              local_550 = local_550 | 0x10000;
            }
          }
          if ((((*(char *)(lVar14 + 0x14d2a) != local_4ae) ||
               (*(char *)(lVar14 + 0x14d29) != local_4af)) ||
              (*(char *)(lVar14 + 0x14d6b) != local_46d)) ||
             ((*(char *)(lVar14 + 0x14d2b) != local_4ad || ((local_550 & 0x1c000) != 0)))) {
            uVar16 = 0x200000100;
            if (local_530[0xd33] == '\0') {
              uVar16 = 0x100;
            }
            if (local_4ae == '\0') {
              uVar16 = 0x100;
            }
            local_548 = local_548 | uVar16;
          }
          local_550 = local_550 | 8;
          pcVar18 = local_530;
        }
      }
LAB_100434f93:
      if (((char)local_538 != '\0') && (*(char *)(lVar14 + 0x6abf) != '\0')) {
        *(undefined1 *)(lVar14 + 0x14cd8) = 1;
        *(char *)(lVar14 + 0x14dec) = pcVar18[0x39c];
        *(char *)(lVar14 + 0x14ded) = pcVar18[0x39d];
        FUN_100430284(lVar14);
        lVar17 = *(long *)(local_530 + 0x830);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15360);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x8000000;
          }
        }
        lVar17 = *(long *)(local_530 + 0x838);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15368);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x10000000;
          }
        }
        if ((*(char *)(lVar14 + 0x14cda) != '\0') &&
           (((*(char *)(lVar14 + 0x14dec) != local_3ec || (*(char *)(lVar14 + 0x14ded) != local_3eb)
             ) || ((local_550 & 0x18000000) != 0)))) {
          local_548 = local_548 | 0x800;
        }
        local_550 = local_550 | 8;
        pcVar18 = local_530;
      }
      if (((char)local_554 != '\0') && (*(char *)(lVar14 + 0x6abf) != '\0')) {
        *(undefined1 *)(lVar14 + 0x14cd8) = 1;
        *(char *)(lVar14 + 0x14dee) = pcVar18[0x39e];
        *(char *)(lVar14 + 0x14def) = pcVar18[0x39f];
        FUN_100430368(lVar14);
        if (*(char *)(lVar14 + 0x14dee) != '\0') {
          uVar15 = FUN_1004e0c3f(lVar14,1);
          FUN_1002c0ab5(uVar15,0xc00000,*(undefined8 *)(lVar14 + 0x15378));
        }
        lVar17 = *(long *)(local_530 + 0x840);
        if (lVar17 != 0) {
          uVar15 = *(undefined8 *)(lVar14 + 0x15370);
          cVar6 = FUN_1002c12ed(lVar17,uVar15);
          if (cVar6 != '\0') {
            FUN_1002c0ca0(lVar17,uVar15);
            local_550 = local_550 + 0x20000000;
          }
        }
        if ((*(char *)(lVar14 + 0x14cda) != '\0') &&
           (((*(char *)(lVar14 + 0x14dee) != local_3ea || (*(char *)(lVar14 + 0x14def) != local_3e9)
             ) || ((local_550 & 0x20000000) != 0)))) {
          local_548 = local_548 | 0x1000;
        }
        local_550 = local_550 | 8;
        pcVar18 = local_530;
      }
      if ((char)local_574 != '\0') {
        FUN_1002c0ca0(*(undefined8 *)(pcVar18 + 0x848),*(undefined8 *)(lVar14 + 0x15380));
        iVar10 = FUN_1002c0e84(*(undefined8 *)(lVar14 + 0x15380));
        uVar16 = local_548 | 0x80000000;
        if (iVar10 == 0) {
          uVar16 = local_548;
        }
        FUN_1002c0ca0(*(undefined8 *)(local_530 + 0x850),*(undefined8 *)(lVar14 + 0x15388));
        iVar10 = FUN_1002c0e84(*(undefined8 *)(lVar14 + 0x15388));
        uVar27 = uVar16 | 0x100000000;
        if (iVar10 == 0) {
          uVar27 = uVar16;
        }
        FUN_1002c0ca0(*(undefined8 *)(local_530 + 0x858),*(undefined8 *)(lVar14 + 0x15390));
        iVar10 = FUN_1002c0e84(*(undefined8 *)(lVar14 + 0x15390));
        pcVar18 = local_530;
        local_548 = uVar27 | 0x800000000;
        if (iVar10 == 0) {
          local_548 = uVar27;
        }
      }
      uVar13 = local_564;
      if ((*(char *)(lVar14 + 0x33c) == '\0') ||
         ((*(char *)(lVar14 + 0x6ac1) == '\0' && (pcVar18[0x2b4] == '\0')))) {
LAB_100435702:
        bVar29 = true;
        if (((*(char *)(lVar14 + 0x359) != '\0') && (lVar17 = FUN_1004e8236(lVar14), lVar17 != 0))
           && (cVar6 = FUN_1002eb55a(lVar17), cVar6 != '\0')) {
          if (*(long *)(lVar14 + 0x14d80) == 0) {
            FUN_100431686(lVar14);
          }
          else if (*(char *)(lVar14 + 0x6ac3) == '\0') {
            local_528 = FUN_1002ebca4(lVar17);
            cVar6 = FUN_100543ad0(lVar14,local_528);
            if (cVar6 != '\0') {
              FUN_100431686(lVar14);
              FUN_1002ebc56(lVar17,local_528 != '\0');
            }
          }
          else {
            FUN_1004f09bc(lVar14);
          }
          if (*(char *)(lVar14 + 0x6ac3) != '\0') {
            auVar31._0_8_ = FUN_1002eb0c8(lVar17,1);
            auVar31._8_8_ = extraout_XMM0_Qb;
            lVar26 = *(long *)(lVar17 + 0x20);
            if (((((lVar26 != 0) && (*(char *)(lVar26 + 0x48) != '\0')) ||
                 ((lVar26 = *(long *)(lVar17 + 0x28), lVar26 != 0 &&
                  (*(char *)(lVar26 + 0x48) != '\0')))) ||
                ((lVar26 = *(long *)(lVar17 + 0x30), lVar26 != 0 &&
                 (*(char *)(lVar26 + 0x48) != '\0')))) ||
               ((lVar26 = *(long *)(lVar17 + 0x38), lVar26 != 0 &&
                (*(char *)(lVar26 + 0x48) == '\x01')))) {
              local_548 = local_548 | 0x800000;
            }
            local_550 = local_550 | 0x2000000008;
            auVar34 = pmovzxbd(auVar31,*(undefined4 *)(local_530 + 0xd35));
            auVar33._0_4_ = -(uint)(auVar34._0_4_ == 0);
            auVar33._4_4_ = -(uint)(auVar34._4_4_ == 0);
            auVar33._8_4_ = -(uint)(auVar34._8_4_ == 0);
            auVar33._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == auVar34._12_4_);
            uVar11 = movmskps((int)lVar26,auVar33);
            uVar16 = local_548 | 0x1000000000;
            if ((uVar11 & 1) != 0) {
              uVar16 = local_548;
            }
            uVar27 = uVar16 | 0x2000000000;
            if ((uVar11 & 2) != 0) {
              uVar27 = uVar16;
            }
            uVar16 = uVar27 | 0x4000000000;
            if ((uVar11 & 4) != 0) {
              uVar16 = uVar27;
            }
            local_548 = uVar16 | 0x8000000000;
            if ((uVar11 & 8) != 0) {
              local_548 = uVar16;
            }
            bVar29 = false;
          }
        }
        if ((*(char *)(lVar14 + 0x38b) != '\0') &&
           ((((*(char *)(lVar14 + 0x14dc9) != local_40f ||
              (*(char *)(lVar14 + 0x14dd5) != local_403)) ||
             (*(char *)(lVar14 + 0x14de5) != local_3f3)) ||
            (cVar6 = FUN_1001c5630(lVar14 + 0x14dd6,local_402,8), cVar6 == '\0')))) {
          local_548 = local_548 | 0x40000000000;
        }
        if ((*(char *)(lVar14 + 0x399) == '\0') || (*(int *)(lVar14 + 0x66b0) != 0x69506f64)) {
LAB_10043593b:
          if (local_550 != 0) goto LAB_100435982;
LAB_1004359cd:
          local_564 = uVar13;
          if (!bVar29) {
            FUN_1002c46fa(lVar14);
          }
          if (*(char *)(lVar14 + 0x151e2) != '\0') {
            local_550 = FUN_1004e1208();
            uVar15 = FUN_1003330eb(lVar14);
            uVar19 = FUN_100333253(lVar14);
            uVar11 = FUN_1005c5914(*(undefined8 *)(lVar14 + 0x7168),local_550,uVar15,uVar19);
            if (uVar11 == 0xffffff80) {
LAB_100435a5c:
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar20 = DAT_1008c75b8;
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 3;
                uStack_526 = 0x842;
                uStack_524._0_4_ = (undefined4)*(undefined8 *)(lVar14 + 0x152c8);
                uStack_524._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x152c8) >> 0x20);
                local_51c = 0x400;
                uStack_516 = 0x400;
                uStack_514 = (undefined2)uVar11;
                uStack_512 = (undefined2)(uVar11 >> 0x10);
                local_51a = uVar11;
                __os_log_impl(0x100000000,uVar20,0x10,
                              "MobileDeviceSetWiFiSyncingLibraryInfo failed for device %{public}@ (%d / 0x%08X)"
                              ,&local_528,0x18);
              }
            }
            else if (uVar11 != 0) {
              uVar20 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar20,0x10);
              if (cVar6 != '\0') {
                local_528 = '\x02';
                uStack_527 = 2;
                uStack_526 = 0x822;
                uStack_524._0_4_ = 0x7a0a90;
                uStack_524._4_4_ = 1;
                local_51c = 0x400;
                local_51a = uVar11;
                __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: err == (%d)",&local_528,
                                    0x12);
              }
              goto LAB_100435a5c;
            }
            FUN_10017060f(local_550);
            FUN_10017060f(uVar15);
            FUN_10017060f(uVar19);
          }
          if (local_548 == 0) {
            if ((char)local_580 != '\0') {
              FUN_10033295f(lVar14);
            }
          }
          else {
            uVar16 = local_548;
            if ((local_548 & 0x9800019e0) != 0) {
              uVar27 = local_548 | 0x10000000;
              if (*(char *)(lVar14 + 0x6ac4) == '\0') {
                uVar27 = local_548;
              }
              uVar16 = uVar27 | 0x20000000;
              if (*(char *)(lVar14 + 0x6ac6) == '\0') {
                uVar16 = uVar27;
              }
            }
            if ((((((uint)uVar16 >> 0xd & 1) == 0 && (uVar16 & 0x18e0) != 0) &&
                 (*(char *)(lVar14 + 0x33c) != '\0')) && (*(char *)(lVar14 + 0x14d04) != '\0')) &&
               (*(char *)(lVar14 + 0x6ac1) != '\0')) {
              uVar16 = uVar16 | 0x2000;
            }
            if ((uVar16 & 0x19e0) == 0 && (uVar16 & 0x40000082000) != 0) {
              if ((*(char *)(lVar14 + 0x6abf) != '\0') && (local_530[0x28a] != '\0')) {
                if (*(char *)(lVar14 + 0x33b) != '\0') {
                  uVar27 = uVar16 | 0x20;
                  if (*(char *)(lVar14 + 0x14d6c) == '\0') {
                    uVar27 = uVar16;
                  }
                  uVar16 = uVar27 | 0x800;
                  if (*(char *)(lVar14 + 0x14dec) == '\0') {
                    uVar16 = uVar27;
                  }
                }
                if ((*(char *)(lVar14 + 0x34e) != '\0') && (*(char *)(lVar14 + 0x14d68) != '\0')) {
                  uVar16 = uVar16 | 0x40;
                }
                if ((*(char *)(lVar14 + 0x34f) != '\0') && (*(char *)(lVar14 + 0x14d78) != '\0')) {
                  uVar16 = uVar16 | 0x80;
                }
                if ((*(char *)(lVar14 + 0x39c) != '\0') && (*(char *)(lVar14 + 0x14dee) != '\0')) {
                  uVar16 = uVar16 | 0x1000;
                }
              }
              if ((*(char *)(lVar14 + 0x6ac2) != '\0') &&
                 (((*(char *)(lVar14 + 0x33b) != '\0' || (*(char *)(lVar14 + 0x346) != '\0')) &&
                  (*(char *)(lVar14 + 0x14d2a) != '\0')))) {
                uVar16 = uVar16 | 0x100;
              }
            }
            if (((uVar16 & 0x9e0) != 0) && (*(char *)(lVar14 + 0x38b) != '\0')) {
              uVar16 = uVar16 | 0x40000000000;
            }
            uVar11 = FUN_1004e7f5c(lVar14);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar15 = DAT_1008c75b8;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,2);
            if (cVar6 != '\0') {
              local_528 = '\0';
              uStack_527 = 0;
              __os_log_impl(0x100000000,uVar15,2,"SetIPodPrefs() - calling SynchronizeIPod()",
                            &local_528,2);
            }
            bVar29 = local_5c0 != (undefined1 *)0x0;
            FUN_100603fea(lVar14,uVar16 | uVar11 & 0x5000000 | 3);
            if (bVar29) {
              *local_5c0 = 1;
            }
          }
          FUN_10023318f(lVar14,"");
          uVar27 = 0;
          goto LAB_100435e2e;
        }
        if (*(char *)(lVar14 + 0x16648) == local_530[0xd57]) {
          cVar6 = local_530[0xd58];
          if ((*(char *)(lVar14 + 0x16649) == local_530[0xd58]) &&
             (cVar6 = *(char *)(lVar14 + 0x16649), *(char *)(lVar14 + 0x1664a) == local_530[0xd59]))
          goto LAB_10043593b;
        }
        else {
          cVar6 = local_530[0xd58];
        }
        *(char *)(lVar14 + 0x16648) = local_530[0xd57];
        *(char *)(lVar14 + 0x16649) = cVar6;
        *(char *)(lVar14 + 0x1664a) = local_530[0xd59];
        *(undefined1 *)(lVar14 + 0x1664b) = 1;
        local_550 = local_550 | 0x200000000;
LAB_100435982:
        if ((char)uVar13 != '\0') {
LAB_10043598b:
          uVar11 = FUN_1004ef324(lVar14,local_550,0);
          uVar27 = (ulong)uVar11;
          if (uVar11 != 0xffffff80) {
            if (uVar11 == 0) {
              uVar15 = FUN_1001c156e();
              uVar15 = FUN_1001c6987(uVar15,0x69707072,*(undefined4 *)(lVar14 + 0x28),0,0);
              uVar13 = (undefined4)CONCAT71((int7)((ulong)uVar15 >> 8),1);
              goto LAB_1004359cd;
            }
            uVar15 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar15,0x10);
            if (cVar6 != '\0') {
              local_528 = '\x02';
              uStack_527 = 2;
              uStack_526 = 0x822;
              uStack_524._0_4_ = 0x7a0a90;
              uStack_524._4_4_ = 1;
              local_51c = 0x400;
              local_51a = uVar11;
              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_528,0x12)
              ;
            }
          }
          goto LAB_100435e37;
        }
        uVar11 = FUN_1004dccf5(lVar14,"");
        uVar27 = (ulong)uVar11;
        if (uVar11 != 0xffffff80) {
          if (uVar11 == 0) goto LAB_10043598b;
          uVar15 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') goto LAB_100433a51;
        }
      }
      else {
        pcVar18 = pcVar18 + 0x860;
        cVar6 = FUN_10022b36a(*(undefined8 *)(lVar14 + 0x151a0),pcVar18,1);
        puVar1 = (undefined8 *)(lVar14 + 0x151a0);
        cVar7 = FUN_10022b36a(*puVar1,pcVar18,2);
        uVar8 = FUN_10022b36a(*puVar1,pcVar18,3);
        local_53c = CONCAT31(local_53c._1_3_,uVar8);
        uVar12 = FUN_10022b36a(*puVar1,pcVar18,4);
        if ((((cVar6 == '\0' && cVar7 == '\0') && (char)local_53c == '\0') && (char)uVar12 == '\0')
           && (*(char *)(lVar14 + 0x6ac1) != '\0')) {
          uVar13 = local_564;
          if ((char)local_578 != '\0') {
            local_538 = 0;
            bVar29 = false;
LAB_100435503:
            local_564 = uVar13;
            if ((*(long *)(lVar14 + 0x14d08) != 0) || (uVar13 = local_564, local_530[0x2b4] != '\0')
               ) {
              FUN_1004315a1(lVar14,0);
              uVar13 = local_564;
            }
            goto LAB_100435591;
          }
          goto LAB_100435702;
        }
        if (((local_4d3 == '\x02') && (local_530[0x2b5] == '\x02')) &&
           (cVar9 = FUN_10017cbd0(*(long *)(lVar14 + 0x151a0) + 0x88), cVar9 != '\0')) {
          uVar15 = FUN_10017f77e(*(long *)(lVar14 + 0x151a0) + 0x88,local_530 + 0x8e8);
          local_538 = (undefined4)CONCAT71((int7)((ulong)uVar15 >> 8),(char)uVar15 == '\0');
        }
        else {
          local_538 = 0;
        }
        FUN_100432caa(*(undefined8 *)(lVar14 + 0x151a0),pcVar18);
        uVar13 = local_564;
        if ((char)local_584 == '\0') {
LAB_10043544b:
          if (cVar6 == '\0') {
            bVar29 = false;
          }
          else {
            local_550 = local_550 | 0x40;
            bVar29 = local_530[0x2b5] == '\x06';
          }
          bVar3 = bVar29;
          if (cVar7 != '\0') {
            local_550 = local_550 | 0x80;
            bVar3 = true;
            if (local_530[0x2b5] != '\x03') {
              bVar3 = bVar29;
            }
          }
          bVar2 = bVar3;
          if ((char)local_53c != '\0') {
            local_550 = local_550 | 0x100;
            bVar2 = true;
            if (local_530[0x2b5] != '\x04') {
              bVar2 = bVar3;
            }
          }
          bVar29 = bVar2;
          if ((char)uVar12 != '\0') {
            local_550 = local_550 | 0x200;
            bVar29 = true;
            if (local_530[0x2b5] != '\x02') {
              bVar29 = bVar2;
            }
          }
          if (*(char *)(lVar14 + 0x6ac1) != '\0') goto LAB_100435503;
          if (local_530[0x2b4] == '\0') {
            uVar15 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar15,0x10);
            if (cVar6 != '\0') {
              local_528 = '\x02';
              uStack_527 = 2;
              uStack_526 = 0x822;
              uStack_524._0_4_ = 0x7a0a90;
              uStack_524._4_4_ = 1;
              local_51c = 0x822;
              local_51a = 0x7ce4be;
              uStack_516 = 1;
              uStack_514 = 0;
              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_528,0x16
                                 );
            }
            FUN_1001782e9(0,0);
          }
          cVar6 = FUN_1005437da(lVar14,1,0);
          if (cVar6 == '\0') goto LAB_100435702;
          FUN_1004315a1(lVar14,0);
          local_548 = local_548 | 0xa000;
LAB_100435591:
          *(undefined1 *)(lVar14 + 0x14cd8) = 1;
          uVar11 = *(uint *)(local_530 + 0x2b4);
          *(uint *)(lVar14 + 0x14d04) = uVar11;
          cVar6 = local_530[0x374];
          *(char *)(lVar14 + 0x14dc4) = cVar6;
          *(char *)(lVar14 + 0x14de6) = local_530[0x396];
          *(undefined4 *)(lVar14 + 0x14e00) = *(undefined4 *)(local_530 + 0x3b0);
          FUN_100430a60(lVar14,uVar11 & 0xff,uVar11 >> 8 & 0xff,uVar11 >> 0x10 & 0xff,cVar6,
                        (char)local_538);
          if (*(char *)(lVar14 + 0x14d04) == '\0') {
            if ((local_4d4 != '\0') && (local_530[0xd34] != '\0')) {
              local_548 = local_548 | 0x8000;
            }
          }
          else {
            uVar16 = local_548 | 0x2000;
            if (local_4d4 != '\0') {
              uVar16 = local_548;
            }
            uVar27 = uVar16 | 0xa000;
            if (local_4d3 == *(char *)(lVar14 + 0x14d05)) {
              uVar27 = uVar16;
            }
            bVar24 = *(byte *)(lVar14 + 0x14dc4) ^ local_414 |
                     *(byte *)(lVar14 + 0x14d07) ^ local_4d1 |
                     *(byte *)(lVar14 + 0x14d06) ^ local_4d2;
            uVar22 = uVar27 | 0x2000;
            uVar15 = *(undefined8 *)(lVar14 + 0x14e00);
            auVar32[0] = -((char)uVar15 == (char)local_3d8);
            auVar32[1] = -((char)((ulong)uVar15 >> 8) == (char)(local_3d8 >> 8));
            auVar32[2] = -((char)((ulong)uVar15 >> 0x10) == (char)(local_3d8 >> 0x10));
            auVar32[3] = -((char)((ulong)uVar15 >> 0x18) == (char)(local_3d8 >> 0x18));
            auVar32[4] = -((char)((ulong)uVar15 >> 0x20) == '\0');
            auVar32[5] = -((char)((ulong)uVar15 >> 0x28) == '\0');
            auVar32[6] = -((char)((ulong)uVar15 >> 0x30) == '\0');
            auVar32[7] = -((char)((ulong)uVar15 >> 0x38) == '\0');
            auVar32[8] = 0xff;
            auVar32[9] = 0xff;
            auVar32[10] = 0xff;
            auVar32[0xb] = 0xff;
            auVar32[0xc] = 0xff;
            auVar32[0xd] = 0xff;
            auVar32[0xe] = 0xff;
            auVar32[0xf] = 0xff;
            auVar34 = pmovsxbd(ZEXT416(local_3d8),auVar32);
            if (*(char *)(lVar14 + 0x14de6) != local_3f2 || bVar24 != 0) {
              uVar27 = uVar22;
            }
            iVar10 = movmskps((int)CONCAT71((int7)(uVar16 >> 8),bVar24),auVar34);
            if (iVar10 != 0xf) {
              uVar27 = uVar22;
            }
            if (bVar29) {
              uVar27 = uVar22;
            }
            local_548 = uVar27 | 0x8000;
            if (((uint)uVar27 >> 0xd & 1) == 0) {
              local_548 = uVar27;
            }
            if ((char)local_538 == '\0') {
              local_548 = uVar27;
            }
          }
          local_550 = local_550 | 8;
          goto LAB_100435702;
        }
        uVar11 = FUN_1004dccf5(lVar14,"");
        uVar27 = (ulong)uVar11;
        if (uVar11 != 0xffffff80) {
          uVar13 = (int)CONCAT71((uint7)(uint3)((uint)uVar12 >> 8),1);
          if (uVar11 == 0) goto LAB_10043544b;
          uVar15 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') {
            local_528 = '\x02';
            uStack_527 = 2;
            uStack_526 = 0x822;
            uStack_524._0_4_ = 0x7a0a90;
            uStack_524._4_4_ = 1;
            local_51c = 0x400;
            local_51a = uVar11;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_528,0x12);
          }
        }
LAB_100435e2e:
        if ((char)local_564 != '\0') {
LAB_100435e37:
          FUN_1004dd69c(lVar14,"");
        }
      }
LAB_100435e46:
      FUN_1004e1e68(lVar14);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar15 = DAT_1008c75b8;
      cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar6 != '\0') {
        dVar30 = (double)FUN_1001ebd46();
        uStack_524 = (dVar30 - local_5c8) * _DAT_100708b48;
        local_528 = '\0';
        uStack_527 = 1;
        uStack_526 = 0x800;
        __os_log_impl(0x100000000,uVar15,1,"perf> SetIPodPrefs() took %.2f ms",&local_528,0xc);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar15 = DAT_1008c75b8;
      cVar6 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar6 != '\0') {
        local_528 = '\0';
        uStack_527 = 0;
        __os_log_impl(0x100000000,uVar15,2,"SetIPodPrefs() - end",&local_528,2);
      }
      goto LAB_100435f12;
    }
    uVar15 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar15,0x10);
    if (cVar6 != '\0') {
      local_528 = '\x02';
      uStack_527 = 2;
      uStack_526 = 0x822;
      uStack_524._0_4_ = 0x7a0a90;
      uStack_524._4_4_ = 1;
      local_51c = 0x822;
      local_51a = 0x7ade6a;
      uStack_516 = 1;
      uStack_514 = 0;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_528,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar27 = 0xffffffce;
LAB_100435f12:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar27;
}

