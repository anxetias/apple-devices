// name: FUN_10038bf26
// address: 10038bf26

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10038bf26(long param_1,byte param_2,ulong param_3)

{
  ushort *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  char *pcVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong local_2d8;
  uint local_2d0;
  ushort local_2cc;
  int local_278;
  undefined4 uStack_274;
  ulong *local_270;
  int local_268;
  int iStack_264;
  uint local_260 [2];
  ulong *local_258;
  int local_250 [2];
  int local_248;
  int iStack_244;
  ulong local_240;
  long local_238;
  ulong *local_230;
  undefined8 *local_228;
  ulong *local_220;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  int iStack_204;
  uint local_1fc;
  undefined1 local_1e8;
  ulong local_1e4;
  undefined1 local_1dc [16];
  ushort local_1cc;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined2 local_17c;
  int local_17a;
  undefined8 local_168;
  undefined4 uStack_160;
  ushort local_15c;
  ushort uStack_15a;
  ushort uStack_158;
  ushort uStack_156;
  undefined2 uStack_154;
  undefined4 local_138;
  undefined4 uStack_134;
  uint local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  ushort local_124;
  ushort uStack_122;
  undefined2 local_11c;
  undefined1 local_11a;
  undefined4 local_119;
  undefined1 local_115;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  uint local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined2 local_8c;
  char *local_8a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar10 = FUN_100495380();
  if (cVar10 == '\0') {
    uVar17 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar17,0x10);
    if (cVar10 != '\0') {
      pcVar18 = "ITImageLibraryIsValid(imageLibrary)";
LAB_10038cf0b:
      local_12c._0_2_ = 0x822;
      local_130 = 1;
      uStack_134 = 0x7a0a90;
      local_138 = 0x8220202;
      local_12c._2_2_ = (ushort)pcVar18;
      uStack_128._0_2_ = (ushort)((ulong)pcVar18 >> 0x10);
      uStack_128._2_2_ = (ushort)((ulong)pcVar18 >> 0x20);
      local_124 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_138,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      FUN_100388024(param_1,&local_270);
      puVar20 = local_270;
      if (local_270 == (ulong *)0x0) {
        uVar17 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar17,0x10);
        if (cVar10 != '\0') {
          local_138 = 0x8220202;
          uStack_134 = 0x7a0a90;
          local_130 = 1;
          local_12c._0_2_ = 0x822;
          local_12c._2_2_ = 0x1d5e;
          uStack_128._0_2_ = 0x7a;
          uStack_128._2_2_ = 1;
          local_124 = 0;
          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_138,0x16);
        }
        FUN_1001782e9(0,0);
        iVar11 = -0x6c;
        goto LAB_10038e5f7;
      }
      *local_270 = param_3;
      *(byte *)((long)local_270 + 0x15) = param_2 & 1;
      *(char *)(local_270 + 0x1007) = ((param_2 & 2) == 0) + '\x01';
      if ((param_2 & 4) != 0) {
        *(undefined1 *)((long)local_270 + 0x17) = 1;
      }
      if ((param_2 & 8) != 0) {
        *(undefined1 *)(local_270 + 3) = 1;
      }
      if ((param_2 & 0x10) != 0) {
        *(undefined1 *)((long)local_270 + 0x19) = 1;
      }
      FUN_100495bdc(param_1);
      FUN_1001c62d9(&local_218,0x84);
      local_218 = 0x846466686d;
      uStack_20c = 0;
      uStack_208 = 6;
      local_1cc = *(ushort *)(param_1 + 0x13c8);
      local_1e8 = 1;
      local_1fc = *(uint *)(param_1 + 0x44);
      local_1e4 = *(ulong *)(param_1 + 0x13c0);
      local_1dc = *(undefined1 (*) [16])(param_1 + 0x1448);
      local_138 = 0x84;
      uStack_134 = 0;
      iVar11 = FUN_100160894(*puVar20,&local_138,&local_218);
      if (iVar11 != -0x80) {
        if (iVar11 == 0) {
          uVar19 = puVar20[4];
          FUN_1001c62d9(&local_138,0x60);
          local_138 = 0x6473686d;
          uStack_134 = 0x60;
          local_12c._0_2_ = 1;
          iVar11 = FUN_100160255(*puVar20,&local_268);
          local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
          if (iVar11 == -0x80) goto LAB_10038e5d6;
          if (iVar11 == 0) {
            local_98 = 0x60;
            uStack_94 = 0;
            iVar11 = FUN_100160894(*puVar20,&local_98,&local_138);
            local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
            if (iVar11 == -0x80) goto LAB_10038e5d6;
            if (iVar11 == 0) {
              FUN_1001c62d9(&local_2d8,0x5c);
              local_2d8 = 0x5c696c686d;
              iVar11 = FUN_100160255(*puVar20,&local_240);
              local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
              if (iVar11 == -0x80) goto LAB_10038e5d6;
              if (iVar11 == 0) {
                local_98 = 0x5c;
                uStack_94 = 0;
                iVar11 = FUN_100160894(*puVar20,&local_98,&local_2d8);
                local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
                if (iVar11 == -0x80) goto LAB_10038e5d6;
                if (iVar11 == 0) {
                  lVar13 = FUN_100496019(uVar19);
                  while (lVar13 != 0) {
                    if ((char)puVar20[3] == '\0') {
LAB_10038c1ab:
                      local_220 = (ulong *)puVar20[4];
                      local_260[0] = local_260[0] & 0xffffff00;
                      puVar16 = (undefined8 *)puVar20[1];
                      local_188 = puVar16 + 0x13;
                      FUN_1001c62d9(puVar16,0x98);
                      *puVar16 = 0x986969686d;
                      *(undefined4 *)(puVar16 + 2) = *(undefined4 *)(lVar13 + 0x18);
                      *(undefined4 *)((long)puVar16 + 0x24) = *(undefined4 *)(lVar13 + 0x54);
                      *(undefined8 *)((long)puVar16 + 0x14) = *(undefined8 *)(lVar13 + 0x20);
                      *(undefined4 *)(puVar16 + 5) = *(undefined4 *)(lVar13 + 0x58);
                      *(undefined4 *)(puVar16 + 7) = *(undefined4 *)(lVar13 + 0x1c);
                      *(undefined4 *)((long)puVar16 + 0x3c) = *(undefined4 *)(lVar13 + 0xac);
                      *(undefined4 *)((long)puVar16 + 0x2c) = *(undefined4 *)(lVar13 + 0x8c);
                      *(undefined4 *)((long)puVar16 + 0x5c) = *(undefined4 *)(lVar13 + 0x90);
                      *(undefined1 *)(puVar16 + 4) = *(undefined1 *)(lVar13 + 0x81);
                      *(undefined1 *)((long)puVar16 + 0x22) = *(undefined1 *)(lVar13 + 0xd5);
                      *(undefined4 *)(puVar16 + 6) = *(undefined4 *)(lVar13 + 0x94);
                      *(undefined1 *)((long)puVar16 + 0x21) = *(undefined1 *)(lVar13 + 0xb0);
                      *(undefined4 *)((long)puVar16 + 0x34) = *(undefined4 *)(lVar13 + 0xa4);
                      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(lVar13 + 0x98);
                      *(undefined4 *)((long)puVar16 + 0x44) = *(undefined4 *)(lVar13 + 0xb4);
                      uVar17 = *(undefined8 *)(lVar13 + 0xc0);
                      puVar16[9] = *(undefined8 *)(lVar13 + 0xb8);
                      puVar16[10] = uVar17;
                      *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(lVar13 + 0x5c);
                      uVar17 = *(undefined8 *)(lVar13 + 0x48);
                      puVar16[0xc] = *(undefined8 *)(lVar13 + 0x40);
                      puVar16[0xd] = uVar17;
                      local_228 = puVar16;
                      iVar11 = FUN_1003908e2(puVar20,local_220 + 0xe,*(undefined4 *)(lVar13 + 0x88),
                                             1,1,1,&local_188,local_260);
                      if (iVar11 == 0) {
                        if ((char)local_260[0] != '\0') {
                          *(int *)((long)local_228 + 0xc) = *(int *)((long)local_228 + 0xc) + 1;
                        }
                        puVar21 = local_188;
                        local_238 = lVar13;
                        for (puVar16 = *(undefined8 **)(lVar13 + 0x68); puVar16 != (undefined8 *)0x0
                            ; puVar16 = (undefined8 *)*puVar16) {
                          if (((char)puVar20[3] == '\0') || (*(byte *)((long)puVar16 + 0x53) < 2)) {
                            if (*(char *)((long)puVar20 + 0x19) != '\0') {
                              cVar10 = FUN_10049a3c8(puVar16);
                              if (cVar10 != '\0') goto LAB_10038c732;
                            }
                            if (*(int *)(puVar16 + 2) != 9) {
                              local_230 = puVar21 + 3;
                              FUN_1001c62d9(puVar21,0x18);
                              *puVar21 = 0x18646f686d;
                              *(ushort *)((long)puVar21 + 0xc) =
                                   (ushort)(*(uint *)(puVar16 + 2) < 900) * 3 + 2;
                              local_168 = (ulong *)((long)puVar21 + 100);
                              FUN_1001c62d9(local_230,0x4c);
                              puVar21[3] = 0x4c696e686d;
                              *(undefined4 *)(puVar21 + 5) = *(undefined4 *)(puVar16 + 2);
                              *(undefined4 *)((long)puVar21 + 0x3c) =
                                   *(undefined4 *)((long)puVar16 + 0x14);
                              *(undefined8 *)((long)puVar21 + 0x2c) = puVar16[7];
                              *(undefined4 *)(puVar21 + 8) = *(undefined4 *)(puVar16 + 8);
                              *(undefined1 *)((long)puVar21 + 0x44) =
                                   *(undefined1 *)((long)puVar16 + 0x52);
                              *(undefined2 *)(puVar21 + 9) = *(undefined2 *)((long)puVar16 + 0x47c);
                              auVar27._0_4_ = (int)(double)puVar16[4];
                              auVar27._4_4_ = (int)(double)puVar16[3];
                              auVar27._12_4_ = (int)((double)puVar16[5] + (double)puVar16[3]);
                              auVar27._8_4_ = (int)((double)puVar16[6] + (double)puVar16[4]);
                              auVar27 = packssdw(auVar27,auVar27);
                              *(long *)((long)puVar21 + 0x34) = auVar27._0_8_;
                              puVar15 = (ulong *)FUN_100499456(puVar16);
                              if (puVar15 == (ulong *)0x0) {
                                uVar17 = FUN_1001cc310();
                                cVar10 = _os_log_type_enabled(uVar17,0x10);
                                if (cVar10 != '\0') {
                                  local_98 = 0x8220202;
                                  uStack_94 = 0x7a0a90;
                                  local_90 = 1;
                                  local_8c = 0x822;
                                  local_8a = "stringCache != nullptr";
                                  __os_log_error_impl(0x100000000,uVar17,0x10,
                                                      "%{public}s: (%{public}s)",&local_98,0x16);
                                }
                                FUN_1001782e9(0,0);
                                iVar11 = -0x32;
LAB_10038cb74:
                                uVar17 = FUN_1001cc310();
                                cVar10 = _os_log_type_enabled(uVar17,0x10);
                                lVar13 = local_238;
                                if (cVar10 == '\0') goto LAB_10038cbe4;
                                local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                                goto LAB_10038cbcb;
                              }
                              local_258 = puVar15;
                              local_220 = puVar21;
                              iVar11 = FUN_1003908e2(puVar20,puVar15,
                                                     *(undefined4 *)((long)puVar16 + 0x44),3,2,
                                                     (char)puVar20[0x1007],&local_168,local_250);
                              if (iVar11 == 0) {
                                if ((char)local_250[0] != '\0') {
                                  *(int *)((long)local_220 + 0x24) =
                                       *(int *)((long)local_220 + 0x24) + 1;
                                }
                                iVar11 = FUN_1003908e2(puVar20,local_258,
                                                       *(undefined4 *)(puVar16 + 0x8f),4,1,1,
                                                       &local_168,local_250);
                                if (iVar11 != 0) {
                                  if (iVar11 != -0x80) {
                                    local_230 = (ulong *)FUN_1001cc310();
                                    cVar10 = _os_log_type_enabled(local_230,0x10);
                                    if (cVar10 != '\0') {
                                      local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                                      goto LAB_10038c77d;
                                    }
                                    goto LAB_10038c5f3;
                                  }
                                  goto LAB_10038e5d6;
                                }
                                if ((char)local_250[0] != '\0') {
                                  *(int *)((long)local_220 + 0x24) =
                                       *(int *)((long)local_220 + 0x24) + 1;
                                }
                                local_258 = local_168;
                                uVar12 = (int)local_168 - (int)local_220;
                                *(uint *)(local_220 + 1) = uVar12;
                                if ((uVar12 & 3) != 0) {
                                  uVar17 = FUN_1001cc310();
                                  cVar10 = _os_log_type_enabled(uVar17,0x10);
                                  if (cVar10 != '\0') {
                                    local_98 = 0x8220202;
                                    uStack_94 = 0x7a0a90;
                                    local_90 = 1;
                                    local_8c = 0x822;
                                    local_8a = "(dbObject->dataSize & 0x3) == 0";
                                    __os_log_error_impl(0x100000000,uVar17,0x10,
                                                        "%{public}s: (%{public}s)",&local_98,0x16);
                                  }
                                  FUN_1001782e9(0,0);
                                }
                                uVar12 = (int)local_258 - (int)local_230;
                                *(uint *)(local_220 + 4) = uVar12;
                                if ((uVar12 & 3) != 0) {
                                  uVar17 = FUN_1001cc310();
                                  cVar10 = _os_log_type_enabled(uVar17,0x10);
                                  if (cVar10 != '\0') {
                                    local_98 = 0x8220202;
                                    uStack_94 = 0x7a0a90;
                                    local_90 = 1;
                                    local_8c = 0x822;
                                    local_8a = "(dbImageInstance->dataSize & 0x3) == 0";
                                    __os_log_error_impl(0x100000000,uVar17,0x10,
                                                        "%{public}s: (%{public}s)",&local_98,0x16);
                                  }
                                  FUN_1001782e9(0,0);
                                }
                                auVar27 = _DAT_100718a70;
                                puVar21 = local_258;
                                if (*(char *)((long)puVar20 + 0x15) != '\0') {
                                  auVar22._8_8_ = 0;
                                  auVar22._0_8_ = *local_220;
                                  auVar22 = pshufb(auVar22,_DAT_100718a70);
                                  *local_220 = auVar22._0_8_;
                                  uVar12 = (uint)local_220[1];
                                  *(uint *)(local_220 + 1) =
                                       uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 |
                                       (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
                                  puVar1 = (ushort *)((long)local_220 + 0xc);
                                  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
                                  auVar22 = pshufb(*(undefined1 (*) [16])(local_220 + 3),auVar27);
                                  *(undefined1 (*) [16])(local_220 + 3) = auVar22;
                                  auVar23._8_8_ = 0;
                                  auVar23._0_8_ = local_220[5];
                                  auVar22 = pshufb(auVar23,auVar27);
                                  local_220[5] = auVar22._0_8_;
                                  uVar12 = (uint)local_220[6];
                                  *(uint *)(local_220 + 6) =
                                       uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 |
                                       (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
                                  auVar24._8_8_ = 0;
                                  auVar24._0_8_ = *(ulong *)((long)local_220 + 0x34);
                                  auVar22 = pshufb(auVar24,_DAT_10070c150);
                                  auVar34._8_8_ = 0;
                                  auVar34._0_8_ = *(ulong *)((long)local_220 + 0x3c);
                                  auVar27 = pshufb(auVar34,auVar27);
                                  *(long *)((long)local_220 + 0x34) = auVar22._0_8_;
                                  *(long *)((long)local_220 + 0x3c) = auVar27._0_8_;
                                  local_220 = local_220 + 9;
                                  *(ushort *)local_220 =
                                       (short)*local_220 << 8 | (ushort)*local_220 >> 8;
                                  puVar21 = local_258;
                                }
                              }
                              else {
                                if (iVar11 == -0x80) goto LAB_10038e5d6;
                                local_230 = (ulong *)FUN_1001cc310();
                                cVar10 = _os_log_type_enabled(local_230,0x10);
                                if (cVar10 != '\0') {
                                  local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
LAB_10038c77d:
                                  local_8c = 0x400;
                                  local_90 = 1;
                                  uStack_94 = 0x7a0a90;
                                  local_98 = 0x8220202;
                                  __os_log_error_impl(0x100000000,local_230,0x10,
                                                      "%{public}s: err == (%d)",&local_98,0x12);
                                }
LAB_10038c5f3:
                                puVar21 = local_220;
                                if (iVar11 != 0) goto LAB_10038cb74;
                              }
                              local_220 = puVar21;
                              *(int *)((long)local_228 + 0xc) = *(int *)((long)local_228 + 0xc) + 1;
                              puVar21 = local_220;
                            }
                          }
LAB_10038c732:
                        }
                        local_188._0_4_ = (int)puVar21;
                        local_188._4_4_ = (undefined4)((ulong)puVar21 >> 0x20);
                        FUN_1001c62d9(puVar21,0x18);
                        *puVar21 = 0x18646f686d;
                        *(undefined2 *)((long)puVar21 + 0xc) = 6;
                        FUN_1001c62d9(puVar21 + 3,0x60);
                        puVar21[3] = 0x606661686d;
                        *(undefined4 *)(puVar21 + 4) = 0x3c;
                        *(uint *)((long)puVar21 + 0x24) = (uint)*(ushort *)(local_238 + 0x72);
                        puVar15 = puVar21 + 0xf;
                        local_220 = puVar21;
                        for (puVar16 = *(undefined8 **)(local_238 + 0x78);
                            puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
                          FUN_1001c62d9(puVar15,0x3c);
                          *(undefined4 *)puVar15 = 0x6661696d;
                          *(undefined4 *)((long)puVar15 + 4) = *(undefined4 *)(puVar16 + 1);
                          *(undefined2 *)(puVar15 + 1) = *(undefined2 *)((long)puVar16 + 0xc);
                          uVar17 = puVar16[4];
                          *(undefined8 *)((long)puVar15 + 0xc) = puVar16[3];
                          *(undefined8 *)((long)puVar15 + 0x14) = uVar17;
                          if (*(char *)((long)puVar20 + 0x15) != '\0') {
                            FUN_100390880(puVar15);
                          }
                          puVar15 = (ulong *)((long)puVar15 + 0x3c);
                        }
                        uVar12 = (int)puVar15 - (int)local_220;
                        *(uint *)(local_220 + 1) = uVar12;
                        if ((uVar12 & 3) != 0) {
                          uVar17 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar10 != '\0') {
                            local_98 = 0x8220202;
                            uStack_94 = 0x7a0a90;
                            local_90 = 1;
                            local_8c = 0x822;
                            local_8a = "(dbObject->dataSize & 0x3) == 0";
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                                &local_98,0x16);
                          }
                          FUN_1001782e9(0,0);
                        }
                        auVar27 = _DAT_100718a70;
                        if (*(char *)((long)puVar20 + 0x15) != '\0') {
                          auVar25._8_8_ = 0;
                          auVar25._0_8_ = *local_220;
                          auVar22 = pshufb(auVar25,_DAT_100718a70);
                          *local_220 = auVar22._0_8_;
                          uVar12 = (uint)local_220[1];
                          *(uint *)(local_220 + 1) =
                               uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                               uVar12 << 0x18;
                          puVar1 = (ushort *)((long)local_220 + 0xc);
                          *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
                          auVar27 = pshufb(*(undefined1 (*) [16])(local_220 + 3),auVar27);
                          *(undefined1 (*) [16])(local_220 + 3) = auVar27;
                        }
                        *(int *)((long)local_228 + 0xc) = *(int *)((long)local_228 + 0xc) + 1;
                        uVar12 = (int)puVar15 - (int)puVar20[1];
                        *(uint *)(local_228 + 1) = uVar12;
                        if ((uint)puVar20[2] < uVar12) {
                          uVar17 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar10 != '\0') {
                            local_98 = 0x8220202;
                            uStack_94 = 0x7a0a90;
                            local_90 = 1;
                            local_8c = 0x822;
                            local_8a = "dbImageInfo->dataSize <= context->recordBufferSize";
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                                &local_98,0x16);
                          }
                          FUN_1001782e9(0,0);
                          uVar12 = *(uint *)(local_228 + 1);
                        }
                        if ((uVar12 & 3) != 0) {
                          uVar17 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar10 != '\0') {
                            local_98 = 0x8220202;
                            uStack_94 = 0x7a0a90;
                            local_90 = 1;
                            local_8c = 0x822;
                            local_8a = "(dbImageInfo->dataSize & 0x3) == 0";
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                                &local_98,0x16);
                          }
                          FUN_1001782e9(0,0);
                          uVar12 = *(uint *)(local_228 + 1);
                        }
                        if (*(char *)((long)puVar20 + 0x15) != '\0') {
                          FUN_10038b5e8(local_228);
                        }
                        iVar11 = FUN_100160255(*puVar20,&local_248);
                        if (iVar11 != 0) {
                          if (iVar11 != -0x80) {
                            uVar17 = FUN_1001cc310();
                            cVar10 = _os_log_type_enabled(uVar17,0x10);
                            lVar13 = local_238;
                            if (cVar10 != '\0') {
                              local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
LAB_10038cbcb:
                              local_8c = 0x400;
                              local_90 = 1;
                              uStack_94 = 0x7a0a90;
                              local_98 = 0x8220202;
                              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                  &local_98,0x12);
                              lVar13 = local_238;
                            }
                            goto LAB_10038cbe4;
                          }
                          goto LAB_10038e5d6;
                        }
                        if (iStack_244 == 0) {
                          *(int *)(local_238 + 0x50) = local_248;
                          uStack_94 = 0;
                          local_98 = uVar12;
                          iVar11 = FUN_100160894(*puVar20,&local_98,puVar20[1]);
                          lVar13 = local_238;
                          local_188 = (ulong *)CONCAT44(local_188._4_4_,(int)local_188);
                          if ((iVar11 != -0x80) &&
                             (local_188 = (ulong *)CONCAT44(local_188._4_4_,(int)local_188),
                             iVar11 != 0)) {
                            uVar17 = FUN_1001cc310();
                            cVar10 = _os_log_type_enabled(uVar17,0x10);
                            lVar13 = local_238;
                            if (cVar10 != '\0') {
                              local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                              goto LAB_10038cbcb;
                            }
                          }
                          goto LAB_10038cbe4;
                        }
                        uVar17 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar10 != '\0') {
                          local_98 = 0x8220202;
                          uStack_94 = 0x7a0a90;
                          local_90 = 1;
                          local_8c = 0x822;
                          local_8a = "dbFileOffset <= 0xFFFFFFFFULL";
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_98,0x16);
                        }
                        FUN_1001782e9(0,0);
                        iVar11 = -0x28;
                      }
                      else {
                        if (iVar11 == -0x80) goto LAB_10038e5d6;
                        local_220 = (ulong *)FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(local_220,0x10);
                        if (cVar10 != '\0') {
                          local_98 = 0x8220202;
                          uStack_94 = 0x7a0a90;
                          local_90 = 1;
                          local_8c = 0x400;
                          local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                          __os_log_error_impl(0x100000000,local_220,0x10,"%{public}s: err == (%d)",
                                              &local_98,0x12);
                        }
LAB_10038cbe4:
                        if (iVar11 == 0) {
                          local_2d0 = local_2d0 + 1;
                          goto LAB_10038cbf9;
                        }
                        if (iVar11 == -0x80) goto LAB_10038e5d6;
                      }
                      uVar17 = FUN_1001cc310();
                      cVar10 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar10 == '\0') goto LAB_10038d089;
                      local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                      goto LAB_10038d076;
                    }
                    plVar14 = *(long **)(lVar13 + 0x68);
                    if (plVar14 != (long *)0x0) {
                      bVar3 = false;
                      do {
                        if (*(byte *)((long)plVar14 + 0x53) < 2) {
                          bVar3 = true;
                        }
                        plVar14 = (long *)*plVar14;
                      } while (plVar14 != (long *)0x0);
                      if (bVar3) goto LAB_10038c1ab;
                    }
LAB_10038cbf9:
                    lVar13 = FUN_1004960d0(lVar13);
                  }
                  iVar11 = FUN_100160255(*puVar20,&local_278);
                  if (iVar11 == -0x80) goto LAB_10038e5d6;
                  if (iVar11 == 0) {
                    local_130 = local_278 - local_268;
                    if ((local_130 & 3) != 0) {
                      uVar17 = FUN_1001cc310();
                      cVar10 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar10 != '\0') {
                        local_98 = 0x8220202;
                        uStack_94 = 0x7a0a90;
                        local_90 = 1;
                        local_8c = 0x822;
                        local_8a = "(sectionHeader.sectionSize & 0x3) == 0";
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                            &local_98,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    if (*(char *)((long)puVar20 + 0x15) != '\0') {
                      auVar26._4_4_ = uStack_134;
                      auVar26._0_4_ = local_138;
                      auVar26._8_8_ = 0;
                      auVar27 = pshufb(auVar26,_DAT_10070e4b0);
                      local_138 = auVar27._0_4_;
                      uStack_134 = auVar27._4_4_;
                      local_130 = local_130 >> 0x18 | (local_130 & 0xff0000) >> 8 |
                                  (local_130 & 0xff00) << 8 | local_130 << 0x18;
                      local_12c._0_2_ = (ushort)local_12c << 8 | (ushort)local_12c >> 8;
                    }
                    iVar11 = FUN_10038ed63(puVar20,local_268,&local_138,0x60);
                    if (iVar11 == -0x80) goto LAB_10038e5d6;
                    if (iVar11 == 0) {
                      if (*(char *)((long)puVar20 + 0x15) != '\0') {
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = local_2d8;
                        auVar27 = pshufb(auVar28,_DAT_10070e4b0);
                        local_2d8 = auVar27._0_8_;
                        local_2d0 = local_2d0 >> 0x18 | (local_2d0 & 0xff0000) >> 8 |
                                    (local_2d0 & 0xff00) << 8 | local_2d0 << 0x18;
                      }
                      iVar11 = FUN_10038ed63(puVar20,local_240 & 0xffffffff,&local_2d8,0x5c);
                      if ((iVar11 != -0x80) && (iVar11 != 0)) {
                        uVar17 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar10 != '\0') {
                          local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                          goto LAB_10038d076;
                        }
                      }
                    }
                    else {
                      uVar17 = FUN_1001cc310();
                      cVar10 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar10 != '\0') {
                        local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
LAB_10038d076:
                        local_90 = 1;
                        uStack_94 = 0x7a0a90;
                        local_8c = 0x400;
                        local_98 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_98,0x12);
                      }
                    }
                  }
                  else {
                    uVar17 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar10 != '\0') {
                      local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                      goto LAB_10038d076;
                    }
                  }
                }
                else {
                  uVar17 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar10 != '\0') {
                    local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                    goto LAB_10038d076;
                  }
                }
              }
              else {
                uVar17 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar17,0x10);
                if (cVar10 != '\0') {
                  local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                  goto LAB_10038d076;
                }
              }
            }
            else {
              uVar17 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar17,0x10);
              if (cVar10 != '\0') {
                local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
                goto LAB_10038d076;
              }
            }
          }
          else {
            uVar17 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar17,0x10);
            if (cVar10 != '\0') {
              local_8a = (char *)CONCAT44(local_8a._4_4_,iVar11);
              goto LAB_10038d076;
            }
          }
LAB_10038d089:
          puVar20 = local_270;
          if (iVar11 != -0x80) {
            if (iVar11 == 0) {
              iStack_204 = iStack_204 + 1;
              FUN_1001c62d9(&local_2d8,0x60);
              local_2d8 = 0x606473686d;
              local_2cc = 2;
              iVar11 = FUN_100160255(*puVar20,&local_278);
              if (iVar11 == -0x80) goto LAB_10038e5d6;
              if (iVar11 == 0) {
                local_138 = 0x60;
                uStack_134 = 0;
                iVar11 = FUN_100160894(*puVar20,&local_138,&local_2d8);
                if (iVar11 == -0x80) goto LAB_10038e5d6;
                if (iVar11 == 0) {
                  FUN_1001c62d9(&local_98,0x5c);
                  local_98 = 0x616c686d;
                  uStack_94 = 0x5c;
                  iVar11 = FUN_100160255(*puVar20,local_260);
                  if (iVar11 == -0x80) goto LAB_10038e5d6;
                  if (iVar11 == 0) {
                    local_138 = 0x5c;
                    uStack_134 = 0;
                    iVar11 = FUN_100160894(*puVar20,&local_138,&local_98);
                    if (iVar11 == -0x80) goto LAB_10038e5d6;
                    if (iVar11 == 0) {
                      puVar16 = (undefined8 *)FUN_100496392();
                      if (puVar16 != (undefined8 *)0x0) {
                        bVar3 = true;
                        local_220 = puVar20;
                        do {
                          if ((char)puVar20[3] == '\0') {
                            if (!bVar3) goto LAB_10038d2c4;
LAB_10038d229:
                            local_230 = (ulong *)puVar20[4];
                            local_228 = puVar16;
                            iVar11 = FUN_100160255(*puVar20,&local_248);
                            if (iVar11 == 0) {
                              if (iStack_244 == 0) {
                                FUN_1001c62d9(&local_138,0x94);
                                puVar16 = local_228;
                                local_138 = 0x6162686d;
                                uStack_134 = 0x94;
                                local_124 = (ushort)*(undefined4 *)(local_228 + 3);
                                uStack_122 = (ushort)((uint)*(undefined4 *)(local_228 + 3) >> 0x10);
                                local_fc = local_228[4];
                                local_dc = local_228[5];
                                local_11a = *(undefined1 *)((long)local_228 + 0x11);
                                local_11c = *(undefined2 *)((long)local_228 + 0x12);
                                auVar27 = pshufb(ZEXT416(*(uint *)((long)local_228 + 0x6c)),
                                                 _DAT_100740400);
                                local_119 = auVar27._0_4_;
                                local_115 = *(undefined1 *)(local_228 + 0xe);
                                local_114 = *(undefined8 *)((long)local_228 + 0x74);
                                local_f4 = *(undefined4 *)((long)local_228 + 0xbc);
                                local_10c = local_228[0x10];
                                uStack_104 = local_228[0x11];
                                local_e8 = local_228[0x12];
                                local_e0 = *(undefined2 *)(local_228 + 0x15);
                                local_168._0_4_ = 0x94;
                                local_168._4_4_ = 0;
                                iVar11 = FUN_100160894(*local_220,&local_168,&local_138);
                                puVar20 = local_220;
                                if (iVar11 != 0) {
                                  local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
                                  if (iVar11 != -0x80) {
                                    local_230 = (ulong *)FUN_1001cc310();
                                    cVar10 = _os_log_type_enabled(local_230,0x10);
                                    if (cVar10 != '\0') {
                                      uStack_15a = (ushort)iVar11;
                                      uStack_158 = (ushort)((uint)iVar11 >> 0x10);
                                      goto LAB_10038d70c;
                                    }
                                    goto LAB_10038da82;
                                  }
                                  goto LAB_10038e5d6;
                                }
                                local_240 = local_220[1];
                                iVar11 = FUN_1003908e2(local_220,local_230 + 0xe,
                                                       *(undefined4 *)(puVar16 + 0xd),1,1,1,
                                                       &local_240,&local_168);
                                if ((iVar11 == 0) && ((char)local_168 != '\0')) {
                                  local_12c = local_12c + 1;
LAB_10038d4f4:
                                  iVar11 = FUN_1003908e2(local_220,local_230 + 0x18,
                                                         *(undefined4 *)((long)local_228 + 0x7c),2,1
                                                         ,1,&local_240,&local_168);
                                  puVar20 = local_220;
                                  if ((iVar11 == 0) && ((char)local_168 != '\0')) {
                                    local_12c = local_12c + 1;
LAB_10038d5b7:
                                    if ((*(char *)((long)local_220 + 0x17) != '\0') &&
                                       (local_228[0x16] != 0)) {
                                      iVar11 = (int)local_240 - (int)local_220[1];
                                      local_230 = (ulong *)FUN_100170ef7();
                                      if ((uint)(iVar11 + (int)local_230) <= (uint)puVar20[2]) {
                                        uVar17 = FUN_100170f3b(local_228[0x16]);
                                        iVar11 = FUN_100390974(local_220,uVar17,local_230,100,1,1,
                                                               &local_240);
                                        if (iVar11 != 0) {
                                          local_168 = (ulong *)CONCAT44(local_168._4_4_,
                                                                        (int)local_168);
                                          if (iVar11 != -0x80) {
                                            uVar17 = FUN_1001cc310();
                                            cVar10 = _os_log_type_enabled(uVar17,0x10);
                                            if (cVar10 != '\0') {
                                              uStack_15a = (ushort)iVar11;
                                              uStack_158 = (ushort)((uint)iVar11 >> 0x10);
                                              goto LAB_10038da3f;
                                            }
                                            goto LAB_10038da74;
                                          }
                                          goto LAB_10038e5d6;
                                        }
                                        local_12c = local_12c + 1;
                                      }
                                    }
                                    iVar11 = (int)local_240 - (int)local_220[1];
                                    if (iVar11 != 0) {
                                      local_168._4_4_ = 0;
                                      local_168._0_4_ = iVar11;
                                      iVar11 = FUN_100160894(*local_220,&local_168);
                                      if (iVar11 != 0) {
                                        local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168
                                                                     );
                                        if (iVar11 != -0x80) {
                                          uVar17 = FUN_1001cc310();
                                          cVar10 = _os_log_type_enabled(uVar17,0x10);
                                          if (cVar10 != '\0') {
                                            uStack_15a = (ushort)iVar11;
                                            uStack_158 = (ushort)((uint)iVar11 >> 0x10);
                                            goto LAB_10038da3f;
                                          }
                                          goto LAB_10038da74;
                                        }
                                        goto LAB_10038e5d6;
                                      }
                                    }
                                    uVar12 = *(uint *)(local_228 + 10);
                                    if (uVar12 != 0) {
                                      uVar19 = 0;
                                      puVar16 = local_228;
                                      do {
                                        lVar13 = *(long *)(puVar16[0xb] + uVar19 * 0x10);
                                        if (lVar13 != 0) {
                                          if ((char)local_220[3] == '\0') {
LAB_10038d833:
                                            FUN_1001c62d9(&local_168,0x28);
                                            uVar9 = local_15c;
                                            local_168._0_4_ = 0x6169686d;
                                            local_168._4_4_ = 0x28;
                                            uStack_160 = 0x28;
                                            iVar11 = *(int *)(lVar13 + 0x18);
                                            uStack_128 = uStack_128 + 1;
                                            uStack_158 = (ushort)iVar11;
                                            uStack_156 = (ushort)((uint)iVar11 >> 0x10);
                                            if (*(char *)((long)local_220 + 0x15) != '\0') {
                                              local_168._0_4_ = 0x6d686961;
                                              local_168._4_4_ = 0x28000000;
                                              uStack_160 = 0x28000000;
                                              iVar2 = CONCAT22(uStack_15a,local_15c);
                                              local_15c = uStack_15a >> 8 | uStack_15a << 8;
                                              uStack_15a = uVar9 >> 8 |
                                                           (ushort)((uint)(iVar2 << 0x18) >> 0x10);
                                              uVar9 = (ushort)((uint)iVar11 >> 8);
                                              uStack_158 = (ushort)(byte)((uint)iVar11 >> 0x18) |
                                                           uVar9 & 0xff00;
                                              uStack_156 = uVar9 & 0xff |
                                                           (ushort)((uint)(iVar11 << 0x18) >> 0x10);
                                            }
                                            local_188._0_4_ = 0x28;
                                            local_188._4_4_ = 0;
                                            iVar11 = FUN_100160894(*local_220,&local_188,&local_168)
                                            ;
                                            if (iVar11 != 0) {
                                              if (iVar11 == -0x80) goto LAB_10038da74;
                                              uVar17 = FUN_1001cc310();
                                              cVar10 = _os_log_type_enabled(uVar17,0x10);
                                              if (cVar10 == '\0') goto LAB_10038da74;
                                              local_188 = (ulong *)0x7a0a9008220202;
                                              uStack_180 = 1;
                                              local_17c = 0x400;
                                              puVar16 = &local_188;
                                              local_17a = iVar11;
                                              goto LAB_10038da46;
                                            }
                                            uVar12 = *(uint *)(local_228 + 10);
                                            puVar16 = local_228;
                                          }
                                          else {
                                            plVar14 = *(long **)(lVar13 + 0x68);
                                            if (plVar14 != (long *)0x0) {
                                              bVar3 = false;
                                              do {
                                                if (*(byte *)((long)plVar14 + 0x53) < 2) {
                                                  bVar3 = true;
                                                }
                                                plVar14 = (long *)*plVar14;
                                              } while (plVar14 != (long *)0x0);
                                              if (bVar3) goto LAB_10038d833;
                                            }
                                          }
                                        }
                                        uVar19 = uVar19 + 1;
                                      } while (uVar19 < uVar12);
                                    }
                                    iVar11 = FUN_100160255(*local_220,&local_268);
                                    iVar2 = local_248;
                                    if (iVar11 == 0) {
                                      if (iStack_264 != 0) {
                                        uVar17 = FUN_1001cc310();
                                        cVar10 = _os_log_type_enabled(uVar17,0x10);
                                        if (cVar10 != '\0') {
                                          pcVar18 = "albumEndOffset <= 0xFFFFFFFFULL";
                                          goto LAB_10038eae0;
                                        }
                                        goto LAB_10038e908;
                                      }
                                      local_130 = local_268 - local_248;
                                      if (*(char *)((long)local_220 + 0x15) != '\0') {
                                        FUN_10038fa64(&local_138);
                                      }
                                      iVar11 = FUN_10038ed63(local_220,iVar2,&local_138,0x94);
                                      if ((iVar11 != -0x80) && (iVar11 != 0)) {
                                        uVar17 = FUN_1001cc310();
                                        cVar10 = _os_log_type_enabled(uVar17,0x10);
                                        if (cVar10 != '\0') {
                                          uStack_15a = (ushort)iVar11;
                                          uStack_158 = (ushort)((uint)iVar11 >> 0x10);
                                          goto LAB_10038da3f;
                                        }
                                      }
                                    }
                                    else {
                                      local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
                                      if (iVar11 == -0x80) goto LAB_10038e5d6;
                                      uVar17 = FUN_1001cc310();
                                      cVar10 = _os_log_type_enabled(uVar17,0x10);
                                      if (cVar10 != '\0') {
                                        uStack_15a = (ushort)iVar11;
                                        uStack_158 = (ushort)((uint)iVar11 >> 0x10);
                                        goto LAB_10038da3f;
                                      }
                                    }
                                  }
                                  else {
                                    if (iVar11 == 0) goto LAB_10038d5b7;
                                    local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
                                    if (iVar11 == -0x80) goto LAB_10038e5d6;
                                    uVar17 = FUN_1001cc310();
                                    cVar10 = _os_log_type_enabled(uVar17,0x10);
                                    if (cVar10 != '\0') {
                                      uStack_15a = (ushort)iVar11;
                                      uStack_158 = (ushort)((uint)iVar11 >> 0x10);
                                      goto LAB_10038da3f;
                                    }
                                  }
                                }
                                else {
                                  if (iVar11 == 0) goto LAB_10038d4f4;
                                  local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
                                  if (iVar11 == -0x80) goto LAB_10038e5d6;
                                  uVar17 = FUN_1001cc310(local_220);
                                  cVar10 = _os_log_type_enabled(uVar17,0x10);
                                  if (cVar10 == '\0') goto LAB_10038da74;
                                  uStack_15a = (ushort)iVar11;
                                  uStack_158 = (ushort)((uint)iVar11 >> 0x10);
LAB_10038da3f:
                                  local_15c = 0x400;
                                  uStack_160 = 1;
                                  local_168._4_4_ = 0x7a0a90;
                                  local_168._0_4_ = 0x8220202;
                                  puVar16 = &local_168;
LAB_10038da46:
                                  __os_log_error_impl(0x100000000,uVar17,0x10,
                                                      "%{public}s: err == (%d)",puVar16,0x12);
                                }
LAB_10038da74:
                                puVar20 = local_220;
                                goto LAB_10038da82;
                              }
                              uVar17 = FUN_1001cc310();
                              cVar10 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar10 != '\0') {
                                pcVar18 = "albumStartOffset <= 0xFFFFFFFFULL";
LAB_10038eae0:
                                uStack_160 = 1;
                                local_168._4_4_ = 0x7a0a90;
                                local_15c = 0x822;
                                local_168._0_4_ = 0x8220202;
                                uStack_15a = (ushort)pcVar18;
                                uStack_158 = (ushort)((ulong)pcVar18 >> 0x10);
                                uStack_156 = (ushort)((ulong)pcVar18 >> 0x20);
                                uStack_154 = 0;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: (%{public}s)",&local_168,0x16);
                              }
LAB_10038e908:
                              FUN_1001782e9(0,0);
                              iVar11 = -0x28;
LAB_10038e917:
                              uVar17 = FUN_1001cc310();
                              cVar10 = _os_log_type_enabled(uVar17,0x10);
                              puVar20 = local_220;
                              if (cVar10 != '\0') {
                                local_138 = 0x8220202;
                                uStack_134 = 0x7a0a90;
                                local_130 = 1;
                                local_12c._0_2_ = 0x400;
                                local_12c._2_2_ = (ushort)iVar11;
                                uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_138,0x12);
                                puVar20 = local_220;
                              }
                              goto LAB_10038decb;
                            }
                            if (iVar11 == -0x80) goto LAB_10038e5d6;
                            local_230 = (ulong *)FUN_1001cc310();
                            cVar10 = _os_log_type_enabled(local_230,0x10);
                            if (cVar10 != '\0') {
                              uStack_15a = (ushort)iVar11;
                              uStack_158 = (ushort)((uint)iVar11 >> 0x10);
LAB_10038d70c:
                              local_15c = 0x400;
                              uStack_160 = 1;
                              local_168._4_4_ = 0x7a0a90;
                              local_168._0_4_ = 0x8220202;
                              __os_log_error_impl(0x100000000,local_230,0x10,
                                                  "%{public}s: err == (%d)",&local_168,0x12);
                            }
LAB_10038da82:
                            if (iVar11 != 0) {
                              if (iVar11 != -0x80) goto LAB_10038e917;
                              goto LAB_10038e5d6;
                            }
                            local_90 = local_90 + 1;
                            bVar3 = true;
                          }
                          else {
                            if ((ulong)*(uint *)(puVar16 + 10) != 0) {
                              uVar19 = 0;
                              do {
                                lVar13 = *(long *)(puVar16[0xb] + uVar19 * 0x10);
                                if ((lVar13 != 0) &&
                                   (plVar14 = *(long **)(lVar13 + 0x68), plVar14 != (long *)0x0)) {
                                  bVar3 = false;
                                  do {
                                    if (*(byte *)((long)plVar14 + 0x53) < 2) {
                                      bVar3 = true;
                                    }
                                    plVar14 = (long *)*plVar14;
                                  } while (plVar14 != (long *)0x0);
                                  if (bVar3) goto LAB_10038d229;
                                }
                                uVar19 = uVar19 + 1;
                              } while (uVar19 != *(uint *)(puVar16 + 10));
                            }
LAB_10038d2c4:
                            bVar3 = false;
                          }
                          puVar16 = (undefined8 *)FUN_100496449();
                        } while (puVar16 != (undefined8 *)0x0);
                      }
                      iVar11 = FUN_100160255(*puVar20,local_250);
                      if (iVar11 == -0x80) goto LAB_10038e5d6;
                      if (iVar11 == 0) {
                        local_2d0 = local_250[0] - local_278;
                        if (*(char *)((long)puVar20 + 0x15) != '\0') {
                          auVar29._8_8_ = 0;
                          auVar29._0_8_ = local_2d8;
                          auVar27 = pshufb(auVar29,_DAT_10070e4b0);
                          local_2d8 = auVar27._0_8_;
                          local_2d0 = local_2d0 >> 0x18 | (local_2d0 & 0xff0000) >> 8 |
                                      (local_2d0 & 0xff00) << 8 | local_2d0 * 0x1000000;
                          local_2cc = local_2cc << 8 | local_2cc >> 8;
                        }
                        iVar11 = FUN_10038ed63(puVar20,CONCAT44(uStack_274,local_278),&local_2d8,
                                               0x60);
                        if (iVar11 == -0x80) goto LAB_10038e5d6;
                        if (iVar11 == 0) {
                          if (*(char *)((long)puVar20 + 0x15) != '\0') {
                            auVar30._4_4_ = uStack_94;
                            auVar30._0_4_ = local_98;
                            auVar30._8_8_ = 0;
                            auVar27 = pshufb(auVar30,_DAT_10070e4b0);
                            local_98 = auVar27._0_4_;
                            uStack_94 = auVar27._4_4_;
                            local_90 = local_90 >> 0x18 | (local_90 & 0xff0000) >> 8 |
                                       (local_90 & 0xff00) << 8 | local_90 << 0x18;
                          }
                          iVar11 = FUN_10038ed63(puVar20,local_260[0],&local_98,0x5c);
                          if ((iVar11 != -0x80) && (iVar11 != 0)) {
                            uVar17 = FUN_1001cc310();
                            cVar10 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar10 != '\0') {
                              local_12c._2_2_ = (ushort)iVar11;
                              uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                              goto LAB_10038deb8;
                            }
                          }
                        }
                        else {
                          uVar17 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar10 != '\0') {
                            local_12c._2_2_ = (ushort)iVar11;
                            uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
LAB_10038deb8:
                            local_130 = 1;
                            uStack_134 = 0x7a0a90;
                            local_12c._0_2_ = 0x400;
                            local_138 = 0x8220202;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                &local_138,0x12);
                          }
                        }
                      }
                      else {
                        uVar17 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar10 != '\0') {
                          local_12c._2_2_ = (ushort)iVar11;
                          uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                          goto LAB_10038deb8;
                        }
                      }
                    }
                    else {
                      uVar17 = FUN_1001cc310();
                      cVar10 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar10 != '\0') {
                        local_12c._2_2_ = (ushort)iVar11;
                        uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                        goto LAB_10038deb8;
                      }
                    }
                  }
                  else {
                    uVar17 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar10 != '\0') {
                      local_12c._2_2_ = (ushort)iVar11;
                      uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                      goto LAB_10038deb8;
                    }
                  }
                }
                else {
                  uVar17 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar10 != '\0') {
                    local_12c._2_2_ = (ushort)iVar11;
                    uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                    goto LAB_10038deb8;
                  }
                }
              }
              else {
                uVar17 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar17,0x10);
                if (cVar10 != '\0') {
                  local_12c._2_2_ = (ushort)iVar11;
                  uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                  goto LAB_10038deb8;
                }
              }
LAB_10038decb:
              if (iVar11 != -0x80) {
                if (iVar11 == 0) {
                  iStack_204 = iStack_204 + 1;
                  uVar19 = puVar20[4];
                  FUN_1001c62d9(&local_2d8,0x60);
                  local_2d8 = 0x606473686d;
                  local_2cc = 3;
                  iVar11 = FUN_100160255(*puVar20,&local_188);
                  if (iVar11 == -0x80) {
LAB_10038e5d6:
                    iVar11 = -0x80;
                  }
                  else {
                    if (iVar11 == 0) {
                      local_138 = 0x60;
                      uStack_134 = 0;
                      iVar11 = FUN_100160894(*puVar20,&local_138,&local_2d8);
                      if (iVar11 == -0x80) goto LAB_10038e5d6;
                      if (iVar11 == 0) {
                        FUN_1001c62d9(&local_98,0x5c);
                        local_98 = 0x666c686d;
                        uStack_94 = 0x5c;
                        local_90 = *(uint *)(uVar19 + 0x30);
                        if (*(char *)((long)puVar20 + 0x15) != '\0') {
                          local_98 = 0x6d686c66;
                          uStack_94 = 0x5c000000;
                          local_90 = local_90 >> 0x18 | (local_90 & 0xff0000) >> 8 |
                                     (local_90 & 0xff00) << 8 | local_90 << 0x18;
                        }
                        local_138 = 0x5c;
                        uStack_134 = 0;
                        iVar11 = FUN_100160894(*puVar20,&local_138,&local_98);
                        if (iVar11 == -0x80) goto LAB_10038e5d6;
                        if (iVar11 == 0) {
                          lVar13 = FUN_100495ce0(uVar19);
                          while (lVar13 != 0) {
                            FUN_1001c62d9(&local_138,0x7c);
                            iVar8 = local_12c;
                            uVar9 = (ushort)local_12c;
                            local_138 = 0x6669686d;
                            uStack_134 = 0x7c;
                            local_130 = 0x7c;
                            iVar11 = *(int *)(lVar13 + 0x10);
                            uStack_128._0_2_ = (ushort)iVar11;
                            uStack_128._2_2_ = (ushort)((uint)iVar11 >> 0x10);
                            iVar2 = *(int *)(lVar13 + 0x14);
                            local_124 = (ushort)iVar2;
                            uStack_122 = (ushort)((uint)iVar2 >> 0x10);
                            if (*(char *)((long)puVar20 + 0x15) != '\0') {
                              local_138 = 0x6d686966;
                              uStack_134 = 0x7c000000;
                              local_130 = 0x7c000000;
                              local_12c._0_2_ = local_12c._2_2_ >> 8 | local_12c._2_2_ << 8;
                              local_12c._2_2_ = uVar9 >> 8 | (ushort)((uint)(iVar8 << 0x18) >> 0x10)
                              ;
                              uVar9 = (ushort)((uint)iVar11 >> 8);
                              uStack_128._0_2_ =
                                   (ushort)(byte)((uint)iVar11 >> 0x18) | uVar9 & 0xff00;
                              uStack_128._2_2_ =
                                   uVar9 & 0xff | (ushort)((uint)(iVar11 << 0x18) >> 0x10);
                              uVar9 = (ushort)((uint)iVar2 >> 8);
                              local_124 = (ushort)(byte)((uint)iVar2 >> 0x18) | uVar9 & 0xff00;
                              uStack_122 = uVar9 & 0xff | (ushort)((uint)(iVar2 << 0x18) >> 0x10);
                            }
                            local_168._0_4_ = 0x7c;
                            local_168._4_4_ = 0;
                            iVar11 = FUN_100160894(*puVar20,&local_168,&local_138);
                            uVar6 = uStack_158;
                            uVar5 = uStack_15a;
                            uStack_15a = (ushort)iVar11;
                            uVar9 = uStack_15a;
                            uStack_158 = (ushort)((uint)iVar11 >> 0x10);
                            uVar7 = uStack_158;
                            uStack_15a = uVar5;
                            uStack_158 = uVar6;
                            if ((iVar11 != -0x80) && (iVar11 != 0)) {
                              local_228 = (undefined8 *)FUN_1001cc310();
                              cVar10 = _os_log_type_enabled(local_228,0x10);
                              if (cVar10 != '\0') {
                                local_168._0_4_ = 0x8220202;
                                local_168._4_4_ = 0x7a0a90;
                                uStack_160 = 1;
                                local_15c = 0x400;
                                uStack_15a = uVar9;
                                uStack_158 = uVar7;
                                __os_log_error_impl(0x100000000,local_228,0x10,
                                                    "%{public}s: err == (%d)",&local_168,0x12);
                              }
                            }
                            if (iVar11 != 0) {
                              local_168 = (ulong *)CONCAT44(local_168._4_4_,(int)local_168);
                              if (iVar11 == -0x80) goto LAB_10038e5d6;
                              uVar17 = FUN_1001cc310();
                              cVar10 = _os_log_type_enabled(uVar17,0x10);
                              iVar2 = CONCAT22(uStack_128._2_2_,(ushort)uStack_128);
                              uStack_128._0_2_ = uVar7;
                              if (cVar10 == '\0') goto LAB_10038e66e;
                              goto LAB_10038e3cb;
                            }
                            lVar13 = FUN_100495d97(lVar13);
                          }
                          iVar11 = FUN_100160255(*puVar20,&local_248);
                          if (iVar11 == -0x80) goto LAB_10038e5d6;
                          if (iVar11 == 0) {
                            local_2d0 = local_248 - (int)local_188;
                            if (*(char *)((long)puVar20 + 0x15) != '\0') {
                              auVar31._8_8_ = 0;
                              auVar31._0_8_ = local_2d8;
                              auVar27 = pshufb(auVar31,_DAT_10070e4b0);
                              local_2d8 = auVar27._0_8_;
                              local_2d0 = local_2d0 >> 0x18 | (local_2d0 & 0xff0000) >> 8 |
                                          (local_2d0 & 0xff00) << 8 | local_2d0 * 0x1000000;
                              local_2cc = local_2cc << 8 | local_2cc >> 8;
                            }
                            iVar11 = FUN_10038ed63(puVar20,local_188,&local_2d8,0x60);
                            iVar2 = uStack_128;
                            if ((iVar11 != -0x80) && (iVar11 != 0)) {
                              uVar17 = FUN_1001cc310();
                              cVar10 = _os_log_type_enabled(uVar17,0x10);
                              iVar2 = uStack_128;
                              if (cVar10 != '\0') {
                                local_12c._2_2_ = (ushort)iVar11;
                                uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                                uVar9 = local_12c._2_2_;
                                goto LAB_10038e3cb;
                              }
                            }
                          }
                          else {
                            uVar17 = FUN_1001cc310();
                            cVar10 = _os_log_type_enabled(uVar17,0x10);
                            iVar2 = uStack_128;
                            if (cVar10 != '\0') {
                              local_12c._2_2_ = (ushort)iVar11;
                              uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                              uVar9 = local_12c._2_2_;
LAB_10038e3cb:
                              local_12c._2_2_ = uVar9;
                              local_130 = 1;
                              uStack_134 = 0x7a0a90;
                              local_12c._0_2_ = 0x400;
                              local_138 = 0x8220202;
                              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                  &local_138,0x12);
                              iVar2 = CONCAT22(uStack_128._2_2_,(ushort)uStack_128);
                            }
                          }
                        }
                        else {
                          uVar17 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar17,0x10);
                          iVar2 = uStack_128;
                          if (cVar10 != '\0') {
                            local_12c._2_2_ = (ushort)iVar11;
                            uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                            uVar9 = local_12c._2_2_;
                            goto LAB_10038e3cb;
                          }
                        }
                      }
                      else {
                        uVar17 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar17,0x10);
                        iVar2 = uStack_128;
                        if (cVar10 != '\0') {
                          local_12c._2_2_ = (ushort)iVar11;
                          uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                          uVar9 = local_12c._2_2_;
                          goto LAB_10038e3cb;
                        }
                      }
                    }
                    else {
                      uVar17 = FUN_1001cc310();
                      cVar10 = _os_log_type_enabled(uVar17,0x10);
                      iVar2 = uStack_128;
                      if (cVar10 != '\0') {
                        local_12c._2_2_ = (ushort)iVar11;
                        uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                        uVar9 = local_12c._2_2_;
                        goto LAB_10038e3cb;
                      }
                    }
LAB_10038e66e:
                    uStack_128 = iVar2;
                    if (iVar11 != -0x80) {
                      if (iVar11 == 0) {
                        iStack_204 = iStack_204 + 1;
                        iVar11 = FUN_100160c3f(param_3,&local_2d8);
                        if (iVar11 != -0x80) {
                          if (iVar11 == 0) {
                            uStack_210 = (undefined4)local_2d8;
                            if ((local_2d8 & 3) != 0) {
                              uVar17 = FUN_1001cc310();
                              cVar10 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar10 != '\0') {
                                local_138 = 0x8220202;
                                uStack_134 = 0x7a0a90;
                                local_130 = 1;
                                local_12c._0_2_ = 0x822;
                                local_12c._2_2_ = 0x6f71;
                                uStack_128._0_2_ = 0x7c;
                                uStack_128._2_2_ = 1;
                                local_124 = 0;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: (%{public}s)",&local_138,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            puVar20 = local_270;
                            if (*(char *)((long)local_270 + 0x15) != '\0') {
                              auVar4._8_4_ = uStack_210;
                              auVar4._0_8_ = local_218;
                              auVar4._12_4_ = uStack_20c;
                              auVar27 = pshufb(auVar4,_DAT_100718a70);
                              local_218 = auVar27._0_8_;
                              uStack_210 = auVar27._8_4_;
                              uStack_20c = auVar27._12_4_;
                              auVar32._4_4_ = iStack_204;
                              auVar32._0_4_ = uStack_208;
                              auVar32._8_8_ = 0;
                              auVar27 = pshufb(auVar32,_DAT_100718a70);
                              uStack_208 = auVar27._0_4_;
                              iStack_204 = auVar27._4_4_;
                              local_1fc = local_1fc >> 0x18 | (local_1fc & 0xff0000) >> 8 |
                                          (local_1fc & 0xff00) << 8 | local_1fc << 0x18;
                              auVar33._8_8_ = 0;
                              auVar33._0_8_ = local_1e4;
                              auVar27 = pshufb(auVar33,_DAT_100718a70);
                              local_1e4 = auVar27._0_8_;
                              local_1dc = pshufb(local_1dc,_DAT_100711fe0);
                              local_1cc = local_1cc << 8 | local_1cc >> 8;
                            }
                            FUN_10038eb50(&local_218);
                            iVar11 = FUN_10038ed63(puVar20,0,&local_218,0x84);
                            if ((iVar11 != -0x80) && (iVar11 != 0)) {
                              uVar17 = FUN_1001cc310();
                              cVar10 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar10 != '\0') {
                                local_12c._2_2_ = (ushort)iVar11;
                                uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                                goto LAB_10038ce78;
                              }
                            }
                          }
                          else {
                            uVar17 = FUN_1001cc310();
                            cVar10 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar10 != '\0') {
                              local_12c._2_2_ = (ushort)iVar11;
                              uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
LAB_10038ce78:
                              local_130 = 1;
                              uStack_134 = 0x7a0a90;
                              local_12c._0_2_ = 0x400;
                              local_138 = 0x8220202;
                              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                  &local_138,0x12);
                            }
                          }
                        }
                      }
                      else {
                        uVar17 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar10 != '\0') {
                          local_12c._2_2_ = (ushort)iVar11;
                          uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                          goto LAB_10038ce78;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar17 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar10 != '\0') {
                    local_12c._2_2_ = (ushort)iVar11;
                    uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                    goto LAB_10038ce78;
                  }
                }
              }
            }
            else {
              uVar17 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar17,0x10);
              if (cVar10 != '\0') {
                local_12c._2_2_ = (ushort)iVar11;
                uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
                goto LAB_10038ce78;
              }
            }
          }
        }
        else {
          uVar17 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar17,0x10);
          if (cVar10 != '\0') {
            local_12c._2_2_ = (ushort)iVar11;
            uStack_128._0_2_ = (ushort)((uint)iVar11 >> 0x10);
            goto LAB_10038ce78;
          }
        }
      }
      *local_270 = 0;
      FUN_10038a886();
      FUN_100495e46(param_1);
      goto LAB_10038e5f7;
    }
    uVar17 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar17,0x10);
    if (cVar10 != '\0') {
      pcVar18 = "buffer != nullptr";
      goto LAB_10038cf0b;
    }
  }
  FUN_1001782e9(0,0);
  iVar11 = -0x32;
LAB_10038e5f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

