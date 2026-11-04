// name: FUN_100389398
// address: 100389398

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100389398(long param_1)

{
  long lVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint local_1c4;
  undefined8 local_1c0;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  uint local_148;
  char local_144;
  uint local_13c;
  undefined8 local_138;
  long local_130;
  uint local_128;
  int iStack_124;
  int iStack_120;
  ushort uStack_11c;
  undefined1 uStack_11a;
  byte bStack_119;
  ushort uStack_118;
  ushort uStack_116;
  undefined2 uStack_114;
  uint local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  ushort local_dc;
  undefined1 local_da;
  uint local_d9;
  undefined1 local_d5;
  ulong local_d4;
  undefined1 local_cc [16];
  ulong local_bc;
  uint local_b4;
  ulong local_b0;
  ulong local_a8;
  ushort local_a0;
  ulong local_9c;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x20);
  iVar4 = FUN_10038815d(param_1,&local_1c4,0x5c);
  if (iVar4 == -0x80) goto LAB_100389c95;
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x15) != '\0') {
      local_1c4 = local_1c4 >> 0x18 | (local_1c4 & 0xff0000) >> 8 | (local_1c4 & 0xff00) << 8 |
                  local_1c4 << 0x18;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_1c0;
      auVar11 = pshufb(auVar11,_DAT_10070e4b0);
      local_1c0 = auVar11._0_8_;
    }
    if (local_1c4 != 0x616c686d) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        puVar9 = &local_f8;
        local_f8 = 0x8220202;
        iStack_f4 = 0x7a0a90;
        uStack_f0 = 1;
        uStack_ec = 0x822;
        pcVar6 = "header.magic == kITImageDBAlbumListHeaderMagic";
LAB_100389ce5:
        *(char **)((long)puVar9 + 0xe) = pcVar6;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",puVar9,0x16);
      }
LAB_100389c31:
      FUN_1001782e9(0,0);
      iVar4 = -0xd0;
      goto LAB_100389c95;
    }
    iVar4 = FUN_100388225(param_1,(int)local_1c0 + -0x5c);
    if (iVar4 == -0x80) goto LAB_100389c95;
    if (iVar4 == 0) {
      if (local_1c0._4_4_ == 0) {
        iVar4 = 0;
      }
      else {
        local_168 = lVar1 + 0xc0;
        local_160 = lVar1 + 0x70;
        uVar10 = 0;
        while( true ) {
          local_13c = uVar10;
          iVar4 = FUN_10038815d(param_1,&local_f8,0x94);
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                puVar9 = &local_128;
                local_128 = 0x8220202;
                iStack_124 = 0x7a0a90;
                iStack_120 = 1;
                uStack_11c = 0x400;
                uStack_11a = (undefined1)iVar4;
                bStack_119 = (byte)((uint)iVar4 >> 8);
                uStack_118 = (ushort)((uint)iVar4 >> 0x10);
                goto LAB_100389bfc;
              }
            }
            goto LAB_100389c95;
          }
          if (*(char *)(param_1 + 0x15) != '\0') {
            auVar12._4_4_ = iStack_f4;
            auVar12._0_4_ = local_f8;
            auVar12._12_2_ = uStack_ec;
            auVar12._8_4_ = uStack_f0;
            auVar12._14_2_ = uStack_ea;
            auVar11 = pshufb(auVar12,_DAT_100718a70);
            local_f8 = auVar11._0_4_;
            iStack_f4 = auVar11._4_4_;
            uStack_f0 = auVar11._8_4_;
            uStack_ec = auVar11._12_2_;
            uStack_ea = auVar11._14_2_;
            auVar16._2_2_ = uStack_e6;
            auVar16._0_2_ = uStack_e8;
            auVar16._4_4_ = uStack_e4;
            auVar16._8_8_ = 0;
            auVar11 = pshufb(auVar16,_DAT_100718a70);
            uStack_e8 = auVar11._0_2_;
            uStack_e6 = auVar11._2_2_;
            uStack_e4 = auVar11._4_4_;
            local_dc = local_dc << 8 | local_dc >> 8;
            local_cc = pshufb(local_cc,_DAT_100711fe0);
            auVar17._8_8_ = 0;
            auVar17._0_8_ = local_d4;
            auVar11 = pshufb(auVar17,_DAT_100718a70);
            local_d4 = auVar11._0_8_;
            local_bc = local_bc >> 0x38 | (local_bc & 0xff000000000000) >> 0x28 |
                       (local_bc & 0xff0000000000) >> 0x18 | (local_bc & 0xff00000000) >> 8 |
                       (local_bc & 0xff000000) << 8 | (local_bc & 0xff0000) << 0x18 |
                       (local_bc & 0xff00) << 0x28 | local_bc << 0x38;
            local_9c = local_9c >> 0x38 | (local_9c & 0xff000000000000) >> 0x28 |
                       (local_9c & 0xff0000000000) >> 0x18 | (local_9c & 0xff00000000) >> 8 |
                       (local_9c & 0xff000000) << 8 | (local_9c & 0xff0000) << 0x18 |
                       (local_9c & 0xff00) << 0x28 | local_9c << 0x38;
            local_b4 = local_b4 >> 0x18 | (local_b4 & 0xff0000) >> 8 | (local_b4 & 0xff00) << 8 |
                       local_b4 << 0x18;
            local_b0 = local_b0 >> 0x38 | (local_b0 & 0xff000000000000) >> 0x28 |
                       (local_b0 & 0xff0000000000) >> 0x18 | (local_b0 & 0xff00000000) >> 8 |
                       (local_b0 & 0xff000000) << 8 | (local_b0 & 0xff0000) << 0x18 |
                       (local_b0 & 0xff00) << 0x28 | local_b0 << 0x38;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_a8;
            auVar11 = pshufb(auVar15,_DAT_100718a70);
            local_a8 = auVar11._0_8_;
            local_a0 = local_a0 << 8 | local_a0 >> 8;
          }
          if (local_f8 != 0x6162686d) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 == '\0') goto LAB_100389c31;
            puVar9 = &local_128;
            local_128 = 0x8220202;
            iStack_124 = 0x7a0a90;
            iStack_120 = 1;
            uStack_11c = 0x822;
            pcVar6 = "dbAlbum.magic == kITImageDBAlbumHeaderMagic";
            goto LAB_100389ce5;
          }
          iVar4 = FUN_100388225(param_1,iStack_f4 + -0x94);
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                puVar9 = &local_128;
                local_128 = 0x8220202;
                iStack_124 = 0x7a0a90;
                iStack_120 = 1;
                uStack_11c = 0x400;
                uStack_11a = (undefined1)iVar4;
                bStack_119 = (byte)((uint)iVar4 >> 8);
                uStack_118 = (ushort)((uint)iVar4 >> 0x10);
                goto LAB_100389bfc;
              }
            }
            goto LAB_100389c95;
          }
          lVar5 = FUN_10049a4a2(lVar1,uStack_e4,0);
          if (lVar5 == 0) break;
          *(ulong *)(lVar5 + 0x20) = local_bc;
          *(ulong *)(lVar5 + 0x28) = local_9c;
          *(undefined1 *)(lVar5 + 0x11) = local_da;
          *(ushort *)(lVar5 + 0x12) = local_dc;
          auVar11 = pshufb(ZEXT416(local_d9),_DAT_100745d60);
          *(int *)(lVar5 + 0x6c) = auVar11._0_4_;
          *(undefined1 *)(lVar5 + 0x70) = local_d5;
          *(ulong *)(lVar5 + 0x74) = local_d4;
          *(uint *)(lVar5 + 0xbc) = local_b4;
          *(undefined8 *)(lVar5 + 0x80) = local_cc._0_8_;
          *(undefined8 *)(lVar5 + 0x88) = local_cc._8_8_;
          *(ulong *)(lVar5 + 0x90) = local_a8;
          *(ushort *)(lVar5 + 0xa8) = local_a0;
          local_130 = lVar5;
          if (CONCAT22(uStack_ea,uStack_ec) != 0) {
            local_158 = lVar5 + 0x7c;
            local_150 = lVar5 + 0x68;
            uVar10 = 0;
            do {
              iVar4 = FUN_10038815d(param_1,&local_128,0x18);
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_100389c95;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c95;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100389bfc;
              }
              if (*(char *)(param_1 + 0x15) != '\0') {
                local_128 = local_128 >> 0x18 | (local_128 & 0xff0000) >> 8 |
                            (local_128 & 0xff00) << 8 | local_128 << 0x18;
                auVar13._4_4_ = iStack_120;
                auVar13._0_4_ = iStack_124;
                auVar13._8_8_ = 0;
                auVar11 = pshufb(auVar13,_DAT_10070e4b0);
                iStack_124 = auVar11._0_4_;
                iStack_120 = auVar11._4_4_;
                uStack_11c = uStack_11c << 8 | uStack_11c >> 8;
              }
              if (local_128 != 0x646f686d) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c31;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                pcVar6 = "dbObject.magic == kITImageDBObjectHeaderMagic";
                goto LAB_100389ce5;
              }
              iVar4 = FUN_100388225(param_1,iStack_124 + -0x18);
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_100389c95;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c95;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100389bfc;
              }
              if (uStack_11c == 100) {
                *(undefined8 *)(local_130 + 0xb0) = 0;
                local_138 = *(undefined8 *)(param_1 + 8);
                iVar4 = FUN_10038815d(param_1,&local_148,0xc);
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    if (*(char *)(param_1 + 0x15) != '\0') {
                      local_148 = local_148 >> 0x18 | (local_148 & 0xff0000) >> 8 |
                                  (local_148 & 0xff00) << 8 | local_148 << 0x18;
                    }
                    iVar4 = FUN_10038815d(param_1,local_138,local_148);
                    if (iVar4 != -0x80) {
                      if (iVar4 == 0) {
                        if (local_144 != '\x01') {
                          uVar7 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar3 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x822;
                            local_4a = "dbString.textEncoding == kITImageDBTextEncoding_UTF8";
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                                &local_58,0x16);
                          }
                          iVar4 = 0;
                          FUN_1001782e9(0,0);
                          if (local_144 != '\x01') goto LAB_100389887;
                        }
                        iVar4 = 0;
                        lVar5 = FUN_100170dc5(0,local_138,local_148);
                        *(long *)(local_130 + 0xb0) = lVar5;
                        if (lVar5 == 0) {
                          uVar7 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar7,0x10);
                          if (cVar3 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x822;
                            local_4a = "*outData != nullptr";
                            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                                &local_58,0x16);
                          }
                          FUN_1001782e9(0,0);
                          iVar4 = -0x6c;
                        }
                      }
                      else {
                        local_138 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(local_138,0x10);
                        if (cVar3 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                          uVar7 = local_138;
                          goto LAB_100389960;
                        }
                      }
                    }
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100389960:
                      local_4c = 0x400;
                      local_54 = "Assertion failure";
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                }
              }
              else {
                if (uStack_11c == 2) {
                  uVar7 = 2;
                  lVar5 = local_168;
                  lVar8 = local_158;
                }
                else {
                  if (uStack_11c != 1) {
                    iVar4 = FUN_100388225(param_1,iStack_120 - ((uint)bStack_119 + iStack_124));
                    goto LAB_100389887;
                  }
                  uVar7 = 1;
                  lVar5 = local_160;
                  lVar8 = local_150;
                }
                iVar4 = FUN_10038faf2(param_1,1,uVar7,lVar5,lVar8);
              }
LAB_100389887:
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_100389c95;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c95;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100389bfc;
              }
              iVar4 = FUN_100388225(param_1,bStack_119);
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_100389c95;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c95;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100389bfc;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < CONCAT22(uStack_ea,uStack_ec));
          }
          lVar5 = FUN_1001c6429((ulong)CONCAT22(uStack_e6,uStack_e8) << 4);
          *(long *)(local_130 + 0x58) = lVar5;
          if (lVar5 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              pcVar6 = "album->imageList != nullptr";
              goto LAB_10038a14a;
            }
            goto LAB_10038a10f;
          }
          if (CONCAT22(uStack_e6,uStack_e8) != 0) {
            uVar10 = 0;
            do {
              iVar4 = FUN_10038815d(param_1,&local_128,0x28);
              uVar2 = uStack_118;
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_100389c95;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c95;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100389bfc;
              }
              if (*(char *)(param_1 + 0x15) != '\0') {
                auVar14._4_4_ = iStack_124;
                auVar14._0_4_ = local_128;
                auVar14._12_2_ = uStack_11c;
                auVar14._8_4_ = iStack_120;
                auVar14[0xe] = uStack_11a;
                auVar14[0xf] = bStack_119;
                auVar11 = pshufb(auVar14,_DAT_100718a70);
                local_128 = auVar11._0_4_;
                iStack_124 = auVar11._4_4_;
                iStack_120 = auVar11._8_4_;
                uStack_11c = auVar11._12_2_;
                uStack_11a = auVar11[0xe];
                bStack_119 = auVar11[0xf];
                iVar4 = CONCAT22(uStack_116,uStack_118);
                uStack_118 = uStack_116 >> 8 | uStack_116 << 8;
                uStack_116 = uVar2 >> 8 | (ushort)((uint)(iVar4 << 0x18) >> 0x10);
              }
              if (local_128 != 0x6169686d) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c31;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                pcVar6 = "dbAlbumItem.magic == kITImageDBAlbumItemHeaderMagic";
                goto LAB_100389ce5;
              }
              iVar4 = FUN_100388225(param_1,iStack_124 + -0x28);
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_100389c95;
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 == '\0') goto LAB_100389c95;
                puVar9 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_100389bfc;
              }
              lVar5 = FUN_1004983e2(lVar1,CONCAT22(uStack_116,uStack_118));
              if ((lVar5 != 0) &&
                 (iVar4 = FUN_10049b80b(local_130,*(undefined4 *)(local_130 + 0x50),lVar5),
                 iVar4 != -0x80)) {
                if (iVar4 == 0) {
                  *(int *)(local_130 + 0x50) = *(int *)(local_130 + 0x50) + 1;
                  if (*(char *)(param_1 + 0x16) == '\0') {
                    *(short *)(lVar5 + 0x60) = *(short *)(lVar5 + 0x60) + 1;
                  }
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < CONCAT22(uStack_e6,uStack_e8));
          }
          uVar10 = local_13c + 1;
          iVar4 = 0;
          if (local_1c0._4_4_ <= uVar10) goto LAB_100389c95;
        }
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          pcVar6 = "album != nullptr";
LAB_10038a14a:
          uStack_11c = 0x822;
          iStack_120 = 1;
          iStack_124 = 0x7a0a90;
          local_128 = 0x8220202;
          uStack_11a = SUB81(pcVar6,0);
          bStack_119 = (byte)((ulong)pcVar6 >> 8);
          uStack_118 = (ushort)((ulong)pcVar6 >> 0x10);
          uStack_116 = (ushort)((ulong)pcVar6 >> 0x20);
          uStack_114 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_128,0x16);
        }
LAB_10038a10f:
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
      }
      goto LAB_100389c95;
    }
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 == '\0') goto LAB_100389c95;
    puVar9 = &local_f8;
    local_f8 = 0x8220202;
    iStack_f4 = 0x7a0a90;
    uStack_f0 = 1;
    uStack_ec = 0x400;
    uStack_ea = (undefined2)iVar4;
    uStack_e8 = (undefined2)((uint)iVar4 >> 0x10);
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 == '\0') goto LAB_100389c95;
    puVar9 = &local_f8;
    local_f8 = 0x8220202;
    iStack_f4 = 0x7a0a90;
    uStack_f0 = 1;
    uStack_ec = 0x400;
    uStack_ea = (undefined2)iVar4;
    uStack_e8 = (undefined2)((uint)iVar4 >> 0x10);
  }
LAB_100389bfc:
  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar9,0x12);
LAB_100389c95:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

