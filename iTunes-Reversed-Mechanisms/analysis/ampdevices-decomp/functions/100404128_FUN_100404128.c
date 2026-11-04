// name: FUN_100404128
// address: 100404128

void FUN_100404128(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  uint uVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined4 local_14e0 [2];
  long local_14d8;
  undefined1 *local_14d0;
  undefined8 *local_14c8;
  short *local_14c0;
  char local_14b0;
  long local_14a8;
  long local_14a0;
  long *local_1498;
  undefined8 *local_1490;
  long *local_1488;
  long local_1480;
  undefined8 *local_1478;
  long local_1470;
  long *local_1468;
  short *local_1460;
  int local_1454;
  undefined4 local_1450;
  byte local_144c;
  undefined1 local_1448 [4];
  int local_1444;
  undefined4 local_141c;
  undefined4 uStack_1418;
  undefined4 uStack_1414;
  undefined4 uStack_1410;
  undefined4 local_140c;
  undefined4 uStack_1408;
  undefined4 uStack_1404;
  undefined4 uStack_1400;
  undefined4 uStack_13fc;
  undefined4 uStack_13f8;
  undefined4 uStack_13f4;
  undefined1 local_13e8 [1080];
  undefined1 local_fb0 [512];
  short local_db0;
  int local_dac;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined2 local_77c;
  undefined2 uStack_77a;
  undefined2 uStack_778;
  undefined4 uStack_776;
  undefined2 uStack_772;
  undefined4 local_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined1 local_328 [46];
  undefined1 local_2fa [512];
  undefined1 local_fa [34];
  char local_d8 [64];
  undefined1 local_98 [64];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100404140;
  lVar11 = FUN_100108310();
  lVar11 = -lVar11;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar15 = *param_1;
  uVar9 = *(undefined4 *)(lVar15 + 0x2c50);
  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404171;
  FUN_10015b1df(lVar15 + 0x2c20,uVar9,&local_1450);
  if ((local_144c & 1) != 0) {
    lVar15 = *param_1;
    uVar18 = *(uint *)(lVar15 + 0x2c54);
    if (uVar18 <= *(uint *)(lVar15 + 0x2c28)) {
      local_1488 = param_1 + 4;
      local_1468 = param_1 + 5;
      local_1498 = param_1 + 1;
      do {
        if ((ulong)*(uint *)(param_1 + 6) <= (ulong)param_1[3]) break;
        *(undefined8 *)((long)&local_38 + lVar11) = 0x1004041ee;
        FUN_10015b1df(lVar15 + 0x2c20,uVar18,&local_1450);
        if ((local_144c & 1) != 0) {
          if (*local_1488 == 0) {
            *(undefined8 *)((long)&local_38 + lVar11) = 0x1004044af;
            iVar10 = FUN_1001ed0ff(local_1488,3,"");
            if (iVar10 != -0x80) {
              if (iVar10 == 0) goto LAB_10040420c;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1004044c9;
              uVar14 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1004044d9;
              cVar7 = _os_log_type_enabled(uVar14,0x10);
              if (cVar7 != '\0') {
                local_788 = 0x8220202;
                uStack_784 = 0x7a0a90;
                uStack_780 = 1;
                local_77c = 0x400;
                uStack_77a = (undefined2)iVar10;
                uStack_778 = (undefined2)((uint)iVar10 >> 0x10);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100404531;
                __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_788,
                                    0x12);
              }
            }
          }
          else {
LAB_10040420c:
            *(undefined8 *)((long)&local_38 + lVar11) = 0x10040421d;
            puVar12 = operator_new(0xb90,(nothrow_t *)PTR_nothrow_10082c970);
            if (puVar12 == (undefined8 *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10040453b;
              uVar14 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10040454b;
              cVar7 = _os_log_type_enabled(uVar14,0x10);
              if (cVar7 != '\0') {
                local_788 = 0x8220202;
                uStack_784 = 0x7a0a90;
                uStack_780 = 1;
                local_77c = 0x822;
                uStack_77a = 0xe7fa;
                uStack_778 = 0x7b;
                uStack_776 = 1;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100404a6a;
                __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_788,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10040455c;
              FUN_1001782e9(0,0);
              iVar10 = -0x6c;
            }
            else {
              puVar12[6] = 0;
              *puVar12 = 0;
              puVar12[8] = 0;
              puVar12[9] = 0;
              puVar12[10] = 0;
              puVar19 = puVar12 + 0x11;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10040424d;
              FUN_1001b7a44(puVar19);
              puVar12[0x15c] = 0;
              local_1490 = puVar12 + 0x166;
              puVar12[0x16f] = 0x100000000;
              *(undefined1 *)((long)puVar12 + 0xadc) = 0;
              *(undefined4 *)(puVar12 + 0x15b) = 0;
              puVar12[0x166] = 0;
              puVar12[0x167] = 0;
              puVar12[0x168] = 0;
              *(undefined1 *)(puVar12 + 0x170) = 0;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1004042a3;
              uVar9 = FUN_1001b19b0();
              *(undefined4 *)((long)puVar12 + 0xb84) = uVar9;
              puVar12[0x171] = 0;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1004042c6;
              FUN_1001c62d9(puVar12 + 0xb,0x2c);
              local_1478 = puVar12 + 0x13;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1004042de;
              FUN_1001c62d9(local_1478,0x420);
              local_1460 = (short *)(puVar12 + 0x97);
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1004042f6;
              FUN_1001c62d9(local_1460,0x200);
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100404307;
              FUN_1001c62d9(puVar12 + 0xd7,0x420);
              puVar2 = puVar12 + 0x15e;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10040431b;
              FUN_1001c62d9(puVar2,0x40);
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10040432c;
              FUN_1001c62d9(puVar12 + 0x169,0x30);
              local_14a8 = *local_1488;
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100404349;
              local_1480 = FUN_10030252b(&local_141c);
              if (local_1480 == 0) {
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10040456c;
                uVar14 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10040457c;
                cVar7 = _os_log_type_enabled(uVar14,0x10);
                if (cVar7 != '\0') {
                  pcVar16 = "trackInstance != nullptr";
LAB_100404ae2:
                  local_4c = 0x822;
                  uStack_50 = 1;
                  local_54 = 0x7a0a90;
                  local_58 = 0x8220202;
                  local_4a = SUB82(pcVar16,0);
                  uStack_48 = (undefined2)((ulong)pcVar16 >> 0x10);
                  uStack_46 = (undefined4)((ulong)pcVar16 >> 0x20);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404b0b;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
LAB_1004045c1:
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004045ca;
                FUN_1001782e9(0,0);
                iVar10 = -0x2b;
LAB_1004045d0:
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004045d5;
                uVar14 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004045e5;
                cVar7 = _os_log_type_enabled(uVar14,0x10);
                if (cVar7 != '\0') {
                  uStack_77a = (undefined2)iVar10;
                  uStack_778 = (undefined2)((uint)iVar10 >> 0x10);
LAB_1004049fc:
                  uStack_780 = 1;
                  uStack_784 = 0x7a0a90;
                  local_77c = 0x400;
                  local_788 = 0x8220202;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404a0e;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_788,
                                      0x12);
                }
LAB_1004045ed:
                if (iVar10 != 0) {
LAB_1004045f6:
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1004045fe;
                  FUN_10040301e(puVar12);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404606;
                  operator_delete(puVar12);
                  goto LAB_100404dac;
                }
              }
              else {
                lVar15 = *(long *)(local_1480 + 8);
                if (lVar15 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1004045a9;
                  uVar14 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1004045b9;
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 != '\0') {
                    pcVar16 = "trackInfo != nullptr";
                    goto LAB_100404ae2;
                  }
                  goto LAB_1004045c1;
                }
                local_1470 = *(long *)(lVar15 + 0x10);
                *(undefined4 *)((long)puVar12 + 0x74) = uStack_1400;
                *(undefined4 *)(puVar12 + 0xf) = uStack_13fc;
                *(undefined4 *)((long)puVar12 + 0x7c) = uStack_13f8;
                *(undefined4 *)(puVar12 + 0x10) = uStack_13f4;
                *(undefined4 *)(puVar12 + 0xd) = local_140c;
                *(undefined4 *)((long)puVar12 + 0x6c) = uStack_1408;
                *(undefined4 *)(puVar12 + 0xe) = uStack_1404;
                *(undefined4 *)((long)puVar12 + 0x74) = uStack_1400;
                *(undefined4 *)(puVar12 + 0xb) = local_141c;
                *(undefined4 *)((long)puVar12 + 0x5c) = uStack_1418;
                *(undefined4 *)(puVar12 + 0xc) = uStack_1414;
                *(undefined4 *)((long)puVar12 + 100) = uStack_1410;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004043a8;
                local_14a0 = lVar15;
                FUN_100476ac1(&local_58);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004043b7;
                FUN_1001b80b2(puVar19,&local_58);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004043bf;
                FUN_1001b7a50(&local_58);
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404fa9;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar14 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004043e1;
                cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar7 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1004043ed;
                  uVar13 = FUN_1001b83ae(puVar19);
                  local_58 = 0x8220102;
                  local_54 = (undefined4)uVar13;
                  uStack_50 = (undefined4)((ulong)uVar13 >> 0x20);
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10040441d;
                  __os_log_impl(0x100000000,uVar14,1,
                                "perf> beginning transcode of track \"%{public}s\"",&local_58,0xc);
                }
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100404422;
                uVar14 = FUN_1001ebd46();
                puVar12[0x171] = uVar14;
                *(short *)(puVar12 + 0x15b) = local_db0;
                if (local_db0 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404444;
                  uVar14 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404454;
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x822;
                    local_4a = 0xc02e;
                    uStack_48 = 0x7c;
                    uStack_46 = 1;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404b58;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404465;
                  FUN_1001782e9(0,0);
                  *(undefined2 *)(puVar12 + 0x15b) = 0x80;
                }
                if (*(int *)(local_1470 + 0x84) == 0x646f5069) {
                  bVar20 = (*(byte *)(local_1470 + 0x2d1a) & 8) == 0;
                }
                else {
                  bVar20 = false;
                }
                *(bool *)((long)puVar12 + 0xadb) = bVar20;
                if (local_1444 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404629;
                  lVar15 = FUN_10030252b(local_1448);
                  if (lVar15 != 0) {
                    *(undefined4 *)(puVar12 + 0x169) = *(undefined4 *)(lVar15 + 100);
                    *(undefined4 *)((long)puVar12 + 0xb4c) = *(undefined4 *)(lVar15 + 0x50);
                    puVar12[0x16a] = *(undefined8 *)(lVar15 + 0xe0);
                    *(undefined4 *)(puVar12 + 0x16b) = *(undefined4 *)(lVar15 + 0xe8);
                    uVar9 = *(undefined4 *)(lVar15 + 0xd4);
                    uVar5 = *(undefined4 *)(lVar15 + 0xd8);
                    uVar6 = *(undefined4 *)(lVar15 + 0xdc);
                    *(undefined4 *)(puVar12 + 0x16c) = *(undefined4 *)(lVar15 + 0xd0);
                    *(undefined4 *)((long)puVar12 + 0xb64) = uVar9;
                    *(undefined4 *)(puVar12 + 0x16d) = uVar5;
                    *(undefined4 *)((long)puVar12 + 0xb6c) = uVar6;
                  }
                }
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100404688;
                FUN_1001dfb1f("AAC Encoder",local_98,0x3f);
                puVar19 = &DAT_1008c75b0;
                do {
                  puVar19 = (undefined8 *)*puVar19;
                  if (puVar19 == (undefined8 *)0x0) {
                    local_1454 = -0x32;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404918;
                    uVar14 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404928;
                    cVar7 = _os_log_type_enabled(uVar14,0x10);
                    if (cVar7 == '\0') goto LAB_100404d33;
                    local_4a = 0xffce;
                    uStack_48 = 0xffff;
                    goto LAB_100404d24;
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1004046ad;
                  cVar7 = FUN_1001df6e9(local_98,puVar19 + 7,0);
                } while (cVar7 == '\0');
                puVar12[0x15c] = puVar19;
                uVar3 = *(ushort *)(puVar12 + 0x15b);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004046dd;
                _snprintf(local_d8,0x40,"Transcode %u",(ulong)uVar3);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1004046ed;
                FUN_1001dfb1f(local_d8,puVar2,0x3f);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100404705;
                iVar10 = FUN_1003b942c(local_98,puVar2,0,local_2fa);
                local_1454 = iVar10;
                if (iVar10 == -0x80) {
LAB_100404cce:
                  iVar10 = -0x80;
                  goto LAB_1004045f6;
                }
                if (iVar10 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404733;
                  FUN_1001e4f4b(local_fa,local_328);
                  uVar14 = puVar12[0x15c];
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404749;
                  iVar10 = FUN_1003b8d07(uVar14,puVar12 + 0x15d);
                  local_1454 = iVar10;
                  if (iVar10 == -0x80) goto LAB_100404cce;
                  if (iVar10 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404775;
                    FUN_1001c62d9(&local_788,0x460);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10040478d;
                    _memcpy((void *)((long)&uStack_760 + 4),local_13e8,0x420);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1004047a5;
                    uVar8 = FUN_100242008(0x46494c45,&local_788,&local_1454);
                    iVar10 = local_1454;
                    if (local_1454 == -0x80) goto LAB_100404cce;
                    if (local_1454 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x1004047e1;
                      FUN_100241f22(&local_58,uVar8,0x46494c45,&local_788,0,&local_1454);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x1004047f1;
                      FUN_100217418(local_1490,&local_58);
                      plVar17 = (long *)CONCAT26(local_4a,CONCAT24(local_4c,uStack_50));
                      if (plVar17 != (long *)0x0) {
                        LOCK();
                        plVar1 = plVar17 + 1;
                        lVar15 = *plVar1;
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (lVar15 == 0) {
                          pcVar4 = *(code **)(*plVar17 + 0x10);
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100404815;
                          (*pcVar4)(plVar17);
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x10040481d;
                          std::__shared_weak_count::__release_weak();
                        }
                      }
                      iVar10 = local_1454;
                      if (local_1454 == -0x80) goto LAB_100404cce;
                      if (local_1454 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100404851;
                        iVar10 = FUN_100317a87(local_1470,local_1480,local_1478);
                        local_1454 = iVar10;
                        if (iVar10 == -0x80) goto LAB_100404cce;
                        if (iVar10 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x10040487f;
                          FUN_1001e1c39(local_fb0,local_1460);
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100404890;
                          FUN_1001c62d9(local_14e0,0x38);
                          local_14e0[0] = local_1450;
                          local_14d8 = local_1480;
                          local_14d0 = local_13e8;
                          local_14c8 = local_1478;
                          local_14c0 = local_1460;
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x1004048ec;
                          FUN_1002fc1ae(local_1470,0x74646266,local_14e0);
                          if (*local_1460 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100404c68;
                            FUN_100476928(local_14a0,local_1460);
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100404c74;
                            FUN_10017e3e5(local_1460);
                          }
                          else {
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100404904;
                            FUN_1001e3e43(local_1460,0);
                          }
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100404c91;
                          iVar10 = FUN_10053600d(local_1478,local_1460,local_328);
                          local_1454 = iVar10;
                          if (iVar10 == -0x80) goto LAB_100404cce;
                          if (iVar10 == 0) {
                            *(bool *)((long)puVar12 + 0xadc) = local_14b0 != '\0';
                            puVar12[8] = FUN_100403088;
                            puVar12[0x168] = local_14a8;
                          }
                          else {
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100404cde;
                            uVar14 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100404cee;
                            cVar7 = _os_log_type_enabled(uVar14,0x10);
                            if (cVar7 != '\0') {
                              local_4a = (undefined2)iVar10;
                              uStack_48 = (undefined2)((uint)iVar10 >> 0x10);
                              goto LAB_100404d24;
                            }
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100404c0a;
                          uVar14 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100404c1a;
                          cVar7 = _os_log_type_enabled(uVar14,0x10);
                          if (cVar7 != '\0') {
                            local_4a = (undefined2)iVar10;
                            uStack_48 = (undefined2)((uint)iVar10 >> 0x10);
                            goto LAB_100404d24;
                          }
                        }
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100404bb6;
                        uVar14 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100404bc6;
                        cVar7 = _os_log_type_enabled(uVar14,0x10);
                        if (cVar7 != '\0') {
                          local_4a = (undefined2)iVar10;
                          uStack_48 = (undefined2)((uint)iVar10 >> 0x10);
                          goto LAB_100404d24;
                        }
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100404b62;
                      uVar14 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100404b72;
                      cVar7 = _os_log_type_enabled(uVar14,0x10);
                      if (cVar7 != '\0') {
                        local_4a = (undefined2)iVar10;
                        uStack_48 = (undefined2)((uint)iVar10 >> 0x10);
                        goto LAB_100404d24;
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404a74;
                    uVar14 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404a84;
                    cVar7 = _os_log_type_enabled(uVar14,0x10);
                    if (cVar7 != '\0') {
                      local_4a = (undefined2)iVar10;
                      uStack_48 = (undefined2)((uint)iVar10 >> 0x10);
                      goto LAB_100404d24;
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10040496f;
                  uVar14 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x10040497f;
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 != '\0') {
                    local_4a = (undefined2)iVar10;
                    uStack_48 = (undefined2)((uint)iVar10 >> 0x10);
LAB_100404d24:
                    local_4c = 0x400;
                    uStack_50 = 1;
                    local_54 = 0x7a0a90;
                    local_58 = 0x8220202;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404d33;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
LAB_100404d33:
                iVar10 = local_1454;
                if (local_1454 == -0x80) goto LAB_1004045f6;
                if (local_1454 != 0) goto LAB_1004045d0;
                lVar15 = *local_1468;
                if (lVar15 == 0) {
                  if (DAT_1008c75c0 != -1) {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404fc1;
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar14 = DAT_1008c75b8;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404e1b;
                  cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar7 != '\0') {
                    uStack_784 = (undefined4)param_1[6];
                    local_788 = 0x4000100;
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100404e5a;
                    __os_log_impl(0x100000000,uVar14,1,"perf> using %u thread(s) for transcoding",
                                  &local_788,8);
                  }
                  uStack_780 = (undefined4)param_1[6];
                  local_788 = 0xfffffffe;
                  uStack_784 = 0;
                  local_77c = 10;
                  uStack_77a = 0;
                  uStack_778 = 0x1b00;
                  uStack_776 = 0x1007a;
                  uStack_772 = 0;
                  local_770 = 0;
                  local_758 = 0;
                  uStack_750 = 0;
                  local_768 = 0;
                  uStack_760 = 0;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404eb6;
                  iVar10 = FUN_1001ec886(&local_788,local_1468);
                  if (iVar10 == -0x80) goto LAB_1004045f6;
                  if (iVar10 == 0) {
                    lVar15 = *local_1468;
                    goto LAB_100404d60;
                  }
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404f3b;
                  uVar14 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404f4b;
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 != '\0') {
                    uStack_77a = (undefined2)iVar10;
                    uStack_778 = (undefined2)((uint)iVar10 >> 0x10);
                    goto LAB_1004049fc;
                  }
                  goto LAB_1004045ed;
                }
LAB_100404d60:
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100404d68;
                iVar10 = FUN_1001ebfee(lVar15,puVar12);
                if (iVar10 == -0x80) goto LAB_1004045f6;
                if (iVar10 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404edb;
                  uVar14 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100404eeb;
                  cVar7 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar7 == '\0') goto LAB_1004045ed;
                  uStack_77a = (undefined2)iVar10;
                  uStack_778 = (undefined2)((uint)iVar10 >> 0x10);
                  goto LAB_1004049fc;
                }
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100404d87;
                plVar17 = operator_new(0x18);
                plVar17[2] = (long)puVar12;
                plVar17[1] = (long)local_1498;
                lVar15 = param_1[1];
                *plVar17 = lVar15;
                *(long **)(lVar15 + 8) = plVar17;
                param_1[1] = (long)plVar17;
                param_1[3] = param_1[3] + 1;
              }
              iVar10 = 0;
            }
          }
LAB_100404dac:
          local_dac = iVar10 + (uint)(iVar10 == 0);
          lVar15 = *param_1;
          uVar9 = *(undefined4 *)(lVar15 + 0x2c54);
          *(undefined8 *)((long)&local_38 + lVar11) = 0x100404dd7;
          FUN_10015b29f(lVar15 + 0x2c20,uVar9,&local_1450);
        }
        lVar15 = *param_1;
        uVar18 = *(int *)(lVar15 + 0x2c54) + 1;
        *(uint *)(lVar15 + 0x2c54) = uVar18;
      } while (uVar18 <= *(uint *)(lVar15 + 0x2c28));
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar11) = &UNK_100404fcb;
    ___stack_chk_fail();
  }
  return;
}

