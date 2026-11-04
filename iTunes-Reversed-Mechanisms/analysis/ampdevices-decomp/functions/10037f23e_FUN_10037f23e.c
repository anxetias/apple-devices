// name: FUN_10037f23e
// address: 10037f23e

long * FUN_10037f23e(long *param_1,int *param_2,long param_3,undefined4 param_4,undefined4 param_5,
                    byte *param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  undefined4 uVar21;
  ulong uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  long *plVar28;
  byte *pbVar29;
  long lVar30;
  size_t sVar31;
  void *pvVar32;
  long *plVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  long local_1f0;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  byte *local_1a8;
  long *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 *local_190;
  undefined8 *local_188;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  uint local_16c;
  long local_168;
  byte local_15e;
  byte local_15d;
  uint local_15c;
  undefined8 *local_158;
  uint local_14c;
  long local_148;
  byte local_13a;
  byte local_139;
  undefined8 local_138;
  undefined4 local_130;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1a0 = param_1;
  local_198 = param_5;
  local_194 = param_4;
  if (param_2 == (int *)0x0) {
LAB_10037f2fb:
    uVar13 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      local_138._0_4_ = 0x8220202;
      local_138._4_4_ = 0x7a0a90;
      local_130 = 1;
      uStack_12c = 0x822;
      uStack_12a = 0xd1f6;
      uStack_128 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_2 != 0x706c7374) {
      uVar13 = FUN_1001cc310();
      cVar9 = _os_log_type_enabled(uVar13,0x10);
      if (cVar9 != '\0') {
        local_138._0_4_ = 0x8220202;
        local_138._4_4_ = 0x7ab58c;
        local_130 = 1;
        uStack_12c = 0x822;
        uStack_12a = 0x2d50;
        uStack_128 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,0x16);
      }
      cVar9 = FUN_1001782e9(0,1);
      if (cVar9 == '\0') goto LAB_10037f2fb;
    }
    lVar30 = *(long *)(param_2 + 0xf0);
    puVar14 = (undefined8 *)FUN_1004909fc(lVar30 + 8);
    if (puVar14 != (undefined8 *)0x0) {
      if (param_3 == 0) {
        local_15c = 0;
        uVar27 = 0;
      }
      else {
        local_15c = *(uint *)(param_3 + 0x40);
        uVar27 = (ulong)local_15c;
      }
      if (param_6 == (byte *)0x0) {
        local_16c = 0;
      }
      else {
        local_16c = (uint)CONCAT71((int7)(uVar27 >> 8),*param_6 >> 1) & 0xffffff01;
        local_198 = 0;
      }
      uVar25 = *(uint *)(puVar14[0xf] + 0x18);
      uVar24 = 0;
      local_1a8 = param_6;
      local_190 = puVar14;
      if (uVar25 == 0) {
        local_14c = 0;
      }
      else {
        local_14c = (uint)CONCAT71((int7)((ulong)puVar14[0xf] >> 8),1);
        do {
          lVar15 = FUN_10037ddf6(lVar30,0x79,0,uVar24);
          if (lVar15 == 0) {
            uVar13 = FUN_1001cc310();
            cVar9 = _os_log_type_enabled(uVar13,0x10);
            if (cVar9 != '\0') {
              local_138._0_4_ = 0x8220202;
              local_138._4_4_ = 0x7a0a90;
              local_130 = 1;
              uStack_12c = 0x822;
              uStack_12a = 0xfbaa;
              uStack_128 = 0x1007b;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,0x16)
              ;
            }
            lVar15 = FUN_1001782e9(0,0);
          }
          else if (*(long *)(lVar15 + 8) == 0) {
            uVar13 = FUN_1001cc310();
            cVar9 = _os_log_type_enabled(uVar13,0x10);
            if (cVar9 != '\0') {
              local_138._0_4_ = 0x8220202;
              local_138._4_4_ = 0x7a0a90;
              local_130 = 1;
              uStack_12c = 0x822;
              uStack_12a = 0x581f;
              uStack_128 = 0x1007b;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,0x16)
              ;
            }
            lVar15 = FUN_1001782e9(0,0);
          }
          else {
            lVar15 = *(long *)(*(long *)(lVar15 + 8) + 0x70);
            if ((*(int *)(lVar15 + 0x14) != 0) && (*(int *)(lVar15 + 0x18) != 0)) break;
          }
          uVar24 = uVar24 + 1;
          local_14c = (uint)CONCAT71((int7)((ulong)lVar15 >> 8),uVar24 < uVar25);
        } while (uVar24 != uVar25);
      }
      local_13a = (byte)local_16c | (byte)local_14c;
      uVar21 = 0x79;
      if ((local_13a & 1) != 0) {
        uVar21 = 6;
      }
      if (local_1a8 != (byte *)0x0) {
        uVar21 = 6;
      }
      uVar23 = 0x2711;
      if ((char)local_194 == '\0') {
        uVar23 = uVar21;
      }
      FUN_10037d27a(&local_138,lVar30,uVar23,0,0);
      pbVar29 = local_1a8;
      lVar30 = CONCAT44(local_138._4_4_,(undefined4)local_138);
      plVar7 = (long *)CONCAT26(uStack_12a,CONCAT24(uStack_12c,local_130));
      local_148 = lVar30;
      if (lVar30 == 0) {
        uVar13 = FUN_1001cc310();
        cVar9 = _os_log_type_enabled(uVar13,0x10);
        if (cVar9 != '\0') {
          local_138._0_4_ = 0x8220202;
          local_138._4_4_ = 0x7a0a90;
          local_130 = 1;
          uStack_12c = 0x822;
          uStack_12a = 0x6a86;
          uStack_128 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,0x16);
        }
        FUN_1001782e9(0,0);
        *local_1a0 = 0;
        local_1a0[1] = 0;
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar33 = plVar7 + 1;
          lVar30 = *plVar33;
          *plVar33 = *plVar33 + -1;
          UNLOCK();
          if (lVar30 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
        goto LAB_10037f356;
      }
      if (uVar25 == 0) {
        *local_1a0 = lVar30;
        local_1a0[1] = (long)plVar7;
        goto LAB_10037f356;
      }
      bVar34 = (char)local_194 != '\0' || (char)local_16c != '\0';
      if ((local_1a8 != (byte *)0x0) || (bVar34 || (local_14c & 1) != 0)) {
        local_1c0 = 0;
        local_17c = 0;
        local_1b8 = 0;
        local_178 = 0;
        uVar13 = 0;
        uVar16 = 0;
        local_139 = bVar34 | (byte)local_14c;
        local_188 = (undefined8 *)
                    FUN_1001c6429(((ulong)(*(long *)(lVar30 + 0x18) - *(long *)(lVar30 + 0x10)) >> 3
                                  & 0xffffffff) * 0x1c);
        if (local_188 == (undefined8 *)0x0) {
          uVar18 = FUN_1001cc310();
          cVar9 = _os_log_type_enabled(uVar18,0x10);
          if (cVar9 != '\0') {
            local_138._0_4_ = 0x8220202;
            local_138._4_4_ = 0x7a0a90;
            local_130 = 1;
            uStack_12c = 0x822;
            uStack_12a = 0x6a9c;
            uStack_128 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: err == (%d)",&local_138,0x16,
                                uVar13,uVar16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          FUN_10037b356(&local_138,local_148);
          local_168 = CONCAT44(local_138._4_4_,(undefined4)local_138);
          plVar33 = (long *)CONCAT26(uStack_12a,CONCAT24(uStack_12c,local_130));
          if (local_168 == 0) {
            uVar13 = FUN_1001cc310();
            cVar9 = _os_log_type_enabled(uVar13,0x10);
            if (cVar9 != '\0') {
              local_138._0_4_ = 0x8220202;
              local_138._4_4_ = 0x7a0a90;
              local_130 = 1;
              uStack_12c = 0x822;
              uStack_12a = 0x6ab3;
              uStack_128 = 0x1007c;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_1001dccc7(local_190[1] + 0x1c60);
            if ((local_13a & 1) != 0) {
              FUN_1001dccc7(local_190[1] + 0x1d00);
              FUN_1001dccc7(local_190[1] + 0x1d50);
            }
            local_158 = local_188;
            if ((int)((ulong)(*(long *)(local_168 + 0x18) - *(long *)(local_168 + 0x10)) >> 3) != 0)
            {
              local_15e = ((byte)local_14c | (char)local_16c != '\0') & (char)local_194 == '\0';
              local_15d = (char)local_16c != '\0' & (byte)local_14c;
              uVar25 = 0;
              lVar15 = 0;
              do {
                lVar17 = FUN_10037b3b0(local_168,uVar25);
                if (lVar17 != 0) {
                  lVar3 = *(long *)(lVar17 + 8);
                  if (uVar25 == 0) {
                    if ((local_139 & 1) != 0) {
                      if (lVar3 == 0) {
                        lVar15 = 0;
                      }
                      else {
                        lVar15 = *(long *)(lVar3 + 0x28);
                      }
                      if ((char)local_16c != '\0') {
                        FUN_100478ba2(lVar3,&local_1c0,&local_17c);
                      }
                      if ((local_14c & 1) != 0) {
                        FUN_10047906c(lVar3,&local_1b8,&local_178);
                      }
                    }
                  }
                  else {
                    bVar34 = true;
                    local_1f0 = lVar15;
                    if ((local_139 & 1) != 0) {
                      if (lVar3 == 0) {
                        local_1f0 = 0;
                      }
                      else {
                        local_1f0 = *(long *)(lVar3 + 0x28);
                      }
                      bVar34 = local_1f0 != lVar15;
                    }
                    if (local_15e != 0) {
                      local_138._0_4_ = 0;
                      local_138._4_4_ = 0;
                      local_174 = 0;
                      local_1b0 = 0;
                      local_170 = 0;
                      FUN_10047906c(lVar3,&local_138,&local_174);
                      FUN_100478ba2(lVar3,&local_1b0,&local_170);
                      if (bVar34) {
                        local_1b8 = CONCAT44(local_138._4_4_,(undefined4)local_138);
                        local_178 = local_174;
                        local_1c0 = local_1b0;
                        local_17c = local_170;
LAB_10037faef:
                        bVar34 = true;
                      }
                      else {
                        if (local_15d == 0) {
                          if ((local_14c & 1) == 0) {
                            if ((local_1c0 == 0 || local_170 == 0) ||
                               (cVar9 = FUN_1002dd5e5(local_1b0), cVar9 == '\0'))
                            goto LAB_10037fadb;
                          }
                          else if (((local_1b8 == 0 || local_174 == 0) ||
                                   (*(int *)(*(long *)(lVar3 + 0x70) + 0x18) == 0)) ||
                                  (cVar9 = FUN_1002dd5e5(CONCAT44(local_138._4_4_,
                                                                  (undefined4)local_138)),
                                  cVar9 == '\0')) {
                            local_1b8 = CONCAT44(local_138._4_4_,(undefined4)local_138);
                            local_178 = local_174;
                            goto LAB_10037faef;
                          }
                        }
                        else if (((local_1b8 == 0 || local_174 == 0) ||
                                 ((*(int *)(*(long *)(lVar3 + 0x70) + 0x18) == 0 ||
                                  (cVar9 = FUN_1002dd5e5(CONCAT44(local_138._4_4_,
                                                                  (undefined4)local_138)),
                                  cVar9 == '\0')))) &&
                                ((local_1c0 == 0 || local_170 == 0 ||
                                 (cVar9 = FUN_1002dd5e5(local_1b0), cVar9 == '\0')))) {
                          local_1b8 = CONCAT44(local_138._4_4_,(undefined4)local_138);
                          local_178 = local_174;
LAB_10037fadb:
                          local_1c0 = local_1b0;
                          local_17c = local_170;
                          goto LAB_10037faef;
                        }
                        bVar34 = false;
                      }
                    }
                    pbVar29 = local_1a8;
                    if (bVar34) {
                      *(uint *)((long)local_158 + 4) = uVar25 - 1;
                      if ((local_1a8 != (byte *)0x0) && (*(int *)(local_1a8 + 4) != 0)) {
                        lVar15 = FUN_10037b3b0(local_168);
                        if (lVar15 == 0) {
                          uVar13 = FUN_1001cc310();
                          cVar9 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar9 != '\0') {
                            local_138._0_4_ = 0x8220202;
                            local_138._4_4_ = 0x7a0a90;
                            local_130 = 1;
                            uStack_12c = 0x822;
                            uStack_12a = 0x6ac9;
                            uStack_128 = 0x1007c;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                                &local_138,0x16);
                          }
                          FUN_1001782e9(0,0);
                        }
                        else {
                          uVar24 = *(uint *)(pbVar29 + 4);
                          bVar34 = (uVar24 & 1) != 0;
                          if (bVar34) {
                            *(undefined4 *)(local_158 + 1) =
                                 *(undefined4 *)(*(long *)(lVar15 + 8) + 0xf0);
                            uVar24 = *(uint *)(pbVar29 + 4);
                          }
                          uVar27 = (ulong)bVar34;
                          if ((uVar24 & 2) != 0) {
                            *(undefined4 *)((long)local_158 + uVar27 * 4 + 8) =
                                 *(undefined4 *)(*(long *)(lVar15 + 8) + 0xdc);
                            uVar27 = (ulong)(bVar34 + 1);
                            uVar24 = *(uint *)(pbVar29 + 4);
                          }
                          if ((uVar24 & 4) != 0) {
                            *(undefined4 *)((long)local_158 + uVar27 * 4 + 8) =
                                 *(undefined4 *)(*(long *)(lVar15 + 8) + 0xe4);
                          }
                        }
                      }
                      *(uint *)((long)local_158 + 0x1c) = uVar25;
                      local_158 = (undefined8 *)((long)local_158 + 0x1c);
                      lVar15 = local_1f0;
                    }
                  }
                  if (*(uint *)(lVar17 + 0x40) == local_15c) {
                    *(undefined1 *)(local_158 + 3) = 1;
                  }
                }
                uVar25 = uVar25 + 1;
              } while (uVar25 < (uint)((ulong)(*(long *)(local_168 + 0x18) -
                                              *(long *)(local_168 + 0x10)) >> 3));
            }
            FUN_1001dcd18(local_190[1] + 0x1c60);
            if ((local_13a & 1) != 0) {
              FUN_1001dcd18(local_190[1] + 0x1d00);
              FUN_1001dcd18(local_190[1] + 0x1d50);
            }
            *(int *)((long)local_158 + 4) =
                 (int)((ulong)(*(long *)(local_168 + 0x18) - *(long *)(local_168 + 0x10)) >> 3) + -1
            ;
            if (pbVar29 == (byte *)0x0) {
              uVar27 = ((long)local_158 - (long)local_188 >> 2) * 0x6db6db6db6db6db7;
              uVar25 = (int)uVar27 + 1;
              if (1 < uVar25) {
LAB_10037ffaa:
                uVar22 = uVar27 & 0xffffffff;
                puVar14 = (undefined8 *)((long)local_188 + uVar22 * 0x1c);
                uVar24 = (int)uVar27 + 1;
                do {
                  uVar22 = uVar22 - 1;
                  iVar10 = FUN_1001ebcfb();
                  iVar11 = FUN_1001ebdc3();
                  uVar13 = *puVar14;
                  uVar16 = *(undefined8 *)((long)puVar14 + 0x14);
                  uStack_208 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
                  uStack_210 = (undefined4)puVar14[1];
                  local_20c = (undefined4)((ulong)puVar14[1] >> 0x20);
                  lVar15 = (long)(int)((uint)(iVar11 + iVar10) % uVar24) * 0x1c;
                  uVar18 = *(undefined8 *)((long)local_188 + lVar15);
                  uVar5 = ((undefined8 *)((long)local_188 + lVar15))[1];
                  puVar2 = (undefined8 *)((long)local_188 + lVar15 + 0xc);
                  uVar6 = puVar2[1];
                  *(undefined8 *)((long)puVar14 + 0xc) = *puVar2;
                  *(undefined8 *)((long)puVar14 + 0x14) = uVar6;
                  *puVar14 = uVar18;
                  puVar14[1] = uVar5;
                  puVar2 = (undefined8 *)((long)local_188 + lVar15 + 0xc);
                  *puVar2 = CONCAT44(uStack_208,local_20c);
                  puVar2[1] = uVar16;
                  uStack_218 = (undefined4)uVar13;
                  uStack_214 = (undefined4)((ulong)uVar13 >> 0x20);
                  puVar1 = (undefined4 *)((long)local_188 + lVar15);
                  *puVar1 = uStack_218;
                  puVar1[1] = uStack_214;
                  puVar1[2] = uStack_210;
                  puVar1[3] = local_20c;
                  puVar14 = (undefined8 *)((long)puVar14 + -0x1c);
                  uVar24 = uVar24 - 1;
                } while ((int)uVar22 != 0);
              }
            }
            else {
              if (*(int *)(pbVar29 + 4) != 0) {
                lVar15 = FUN_10037b3b0(local_168);
                if ((lVar15 == 0) || (lVar17 = *(long *)(lVar15 + 8), lVar17 == 0)) {
                  uVar13 = FUN_1001cc310();
                  cVar9 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar9 != '\0') {
                    local_138._0_4_ = 0x8220202;
                    local_138._4_4_ = 0x7a0a90;
                    local_130 = 1;
                    uStack_12c = 0x822;
                    uStack_12a = 0x6ade;
                    uStack_128 = 0x1007c;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  if ((lVar15 == 0) || (lVar17 = *(long *)(lVar15 + 8), lVar17 == 0))
                  goto LAB_10037fdef;
                }
                uVar25 = *(uint *)(pbVar29 + 4);
                bVar34 = (uVar25 & 1) != 0;
                if (bVar34) {
                  *(undefined4 *)(local_158 + 1) = *(undefined4 *)(lVar17 + 0xf0);
                  uVar25 = *(uint *)(pbVar29 + 4);
                }
                uVar27 = (ulong)bVar34;
                if ((uVar25 & 2) != 0) {
                  *(undefined4 *)((long)local_158 + uVar27 * 4 + 8) = *(undefined4 *)(lVar17 + 0xdc)
                  ;
                  uVar27 = (ulong)(bVar34 + 1);
                  uVar25 = *(uint *)(pbVar29 + 4);
                }
                if ((uVar25 & 4) != 0) {
                  *(undefined4 *)((long)local_158 + uVar27 * 4 + 8) = *(undefined4 *)(lVar17 + 0xe4)
                  ;
                }
              }
LAB_10037fdef:
              uVar27 = ((long)local_158 - (long)local_188 >> 2) * 0x6db6db6db6db6db7;
              uVar25 = (int)uVar27 + 1;
              if (1 < uVar25) {
                uVar24 = *(uint *)(pbVar29 + 4);
                if (uVar24 == 0) goto LAB_10037ffaa;
                bVar34 = (uVar24 & 1) != 0;
                if (bVar34) {
                  local_138._0_4_ = (undefined4)*(undefined8 *)(pbVar29 + 8);
                  local_138._4_4_ = (undefined4)((ulong)*(undefined8 *)(pbVar29 + 8) >> 0x20);
                }
                uVar27 = (ulong)bVar34;
                if ((uVar24 & 2) != 0) {
                  (&local_138)[uVar27] = *(undefined8 *)(pbVar29 + 0x10);
                  uVar27 = (ulong)(bVar34 + 1);
                }
                if ((uVar24 & 4) != 0) {
                  (&local_138)[uVar27] = *(undefined8 *)(pbVar29 + 0x18);
                  uVar27 = (ulong)((int)uVar27 + 1);
                }
                FUN_10049118a(local_188,uVar25,&local_138,uVar27,0);
              }
            }
            local_190 = (undefined8 *)(ulong)uVar25;
            if ((local_15c != 0) && (uVar25 != 0)) {
              lVar15 = 0;
              do {
                if (*(char *)((long)local_188 + lVar15 + 0x18) != '\0') {
                  uVar13 = *(undefined8 *)((long)local_188 + lVar15);
                  uVar16 = ((undefined8 *)((long)local_188 + lVar15))[1];
                  puVar14 = (undefined8 *)((long)local_188 + lVar15 + 0xc);
                  uVar18 = puVar14[1];
                  uStack_208 = (undefined4)((ulong)*puVar14 >> 0x20);
                  uStack_210 = (undefined4)uVar16;
                  local_20c = (undefined4)((ulong)uVar16 >> 0x20);
                  uVar16 = *local_188;
                  uVar5 = local_188[1];
                  uVar6 = *(undefined8 *)((long)local_188 + 0x14);
                  puVar14 = (undefined8 *)((long)local_188 + lVar15 + 0xc);
                  *puVar14 = *(undefined8 *)((long)local_188 + 0xc);
                  puVar14[1] = uVar6;
                  *(undefined8 *)((long)local_188 + lVar15) = uVar16;
                  ((undefined8 *)((long)local_188 + lVar15))[1] = uVar5;
                  *(ulong *)((long)local_188 + 0xc) = CONCAT44(uStack_208,local_20c);
                  *(undefined8 *)((long)local_188 + 0x14) = uVar18;
                  uStack_218 = (undefined4)uVar13;
                  uStack_214 = (undefined4)((ulong)uVar13 >> 0x20);
                  *(undefined4 *)local_188 = uStack_218;
                  *(undefined4 *)((long)local_188 + 4) = uStack_214;
                  *(undefined4 *)(local_188 + 1) = uStack_210;
                  *(undefined4 *)((long)local_188 + 0xc) = local_20c;
                  break;
                }
                lVar15 = lVar15 + 0x1c;
              } while ((long)local_190 * 0x1c != lVar15);
            }
            if (uVar25 != 0) {
              puVar14 = (undefined8 *)0x0;
              iVar10 = 0;
              do {
                uVar25 = *(uint *)((long)local_188 + (long)puVar14 * 0x1c);
                uVar24 = *(uint *)((long)local_188 + (long)puVar14 * 0x1c + 4);
                lVar15 = local_168;
                uVar8 = uVar24;
                local_158 = puVar14;
                local_15c = uVar24;
                if (((char)local_198 != '\0') &&
                   (1 < (int)((uVar24 - uVar25) + 1) && (uVar25 <= uVar24 && uVar24 - uVar25 != 0)))
                {
                  local_1a8 = (byte *)(ulong)(1 - uVar25);
                  do {
                    iVar11 = FUN_1001ebcfb();
                    iVar12 = FUN_1001ebdc3();
                    uVar27 = (ulong)(uint)(iVar12 + iVar11) % (ulong)((int)local_1a8 + uVar24);
                    uVar13 = FUN_10037b3b0(local_168,uVar27);
                    uVar16 = FUN_10037b3b0(local_168,uVar24);
                    FUN_10037b472(local_168,uVar27,uVar16);
                    FUN_10037b472(local_168,uVar24,uVar13);
                    uVar24 = uVar24 - 1;
                    lVar15 = local_168;
                    uVar8 = local_15c;
                  } while (uVar25 < uVar24);
                }
                for (; uVar24 = local_15c, lVar17 = local_168, local_168 = lVar15,
                    uVar25 <= local_15c; uVar25 = uVar25 + 1) {
                  local_15c = uVar8;
                  uVar13 = FUN_10037b3b0(lVar17,uVar25);
                  FUN_10037b472(local_148,iVar10,uVar13);
                  iVar10 = iVar10 + 1;
                  lVar15 = local_168;
                  uVar8 = local_15c;
                  local_15c = uVar24;
                  local_168 = lVar17;
                }
                puVar14 = (undefined8 *)((long)local_158 + 1);
                local_15c = uVar8;
              } while (puVar14 != local_190);
            }
          }
          FUN_1001c64c1(local_188);
          if (plVar33 != (long *)0x0) {
            LOCK();
            plVar26 = plVar33 + 1;
            lVar15 = *plVar26;
            *plVar26 = *plVar26 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      else {
        uVar25 = (uint)((ulong)(*(long *)(lVar30 + 0x18) - *(long *)(lVar30 + 0x10)) >> 3);
        while (uVar24 = uVar25 - 1, lVar30 = local_148, uVar24 != 0) {
          iVar10 = FUN_1001ebcfb();
          iVar11 = FUN_1001ebdc3();
          uVar27 = (ulong)(uint)(iVar11 + iVar10) % (ulong)uVar25;
          uVar13 = FUN_10037b3b0(local_148,uVar27);
          uVar16 = FUN_10037b3b0(local_148,uVar24);
          FUN_10037b472(local_148,uVar27,uVar16);
          FUN_10037b472(local_148,uVar24,uVar13);
          uVar25 = uVar24;
        }
      }
      local_148 = lVar30;
      if (((param_3 != 0) &&
          ((char)local_198 != '\0' ||
           (((char)local_194 == '\0' && (char)local_16c == '\0') & ((byte)local_14c ^ 1)) != 0)) &&
         (iVar10 = (int)((ulong)(*(long *)(local_148 + 0x18) - *(long *)(local_148 + 0x10)) >> 3),
         iVar10 != 0)) {
        puVar14 = (undefined8 *)(local_148 + 0x10);
        uVar27 = 0;
        lVar30 = 0;
        do {
          lVar15 = FUN_10037b3b0(local_148,uVar27 & 0xffffffff);
          if (lVar15 == param_3) {
            if ((uint)uVar27 != 0) {
              plVar33 = *(long **)(local_148 + 0x10);
              uVar22 = *(long *)(local_148 + 0x18) - (long)plVar33;
              if ((uint)uVar27 < (uint)(uVar22 >> 3)) {
                local_168 = plVar33[uVar27];
                local_138._0_4_ = (undefined4)local_168;
                local_138._4_4_ = (undefined4)((ulong)local_168 >> 0x20);
                sVar31 = (lVar30 + uVar22) - 8;
                plVar26 = plVar33;
                if ((long)plVar33 + (8 - lVar30) != *(long *)(local_148 + 0x18)) {
                  _memmove(plVar33 + uVar27,plVar33 + uVar27 + 1,sVar31);
                  plVar26 = (long *)*puVar14;
                }
                lVar15 = local_148;
                plVar33 = (long *)((long)plVar33 + (sVar31 - lVar30));
                *(long **)(local_148 + 0x18) = plVar33;
                if (plVar33 < *(long **)(local_148 + 0x20)) {
                  if (plVar33 == plVar26) {
                    *plVar33 = local_168;
                    *(long **)(local_148 + 0x18) = plVar33 + 1;
                  }
                  else {
                    plVar20 = plVar33;
                    if (plVar33 + -1 < plVar33) {
                      plVar20 = plVar33 + 1;
                      *plVar33 = plVar33[-1];
                    }
                    *(long **)(local_148 + 0x18) = plVar20;
                    if (plVar33 != plVar26 + 1) {
                      sVar31 = (long)plVar33 - (long)(plVar26 + 1);
                      _memmove((void *)((long)plVar33 - sVar31),plVar26,sVar31);
                      plVar20 = *(long **)(lVar15 + 0x18);
                    }
                    *plVar26 = (&local_138)[&local_138 < plVar20 && plVar26 <= &local_138];
                  }
                }
                else {
                  uVar27 = ((long)plVar33 - (long)plVar26 >> 3) + 1;
                  if (uVar27 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_100382d90(puVar14);
                  }
                  uVar19 = (long)*(long **)(local_148 + 0x20) - (long)plVar26;
                  uVar22 = (long)uVar19 >> 2;
                  if (uVar22 <= uVar27) {
                    uVar22 = uVar27;
                  }
                  if (0x7ffffffffffffff7 < uVar19) {
                    uVar22 = 0x1fffffffffffffff;
                  }
                  if (uVar22 == 0) {
                    plVar33 = (long *)0x0;
LAB_1003805a9:
                    plVar20 = operator_new(8);
                    plVar28 = plVar20 + 1;
                    if (plVar33 != (long *)0x0) {
                      operator_delete(plVar33);
                    }
                  }
                  else {
                    auVar35 = FUN_100249b6c(local_148 + 0x20);
                    plVar20 = auVar35._0_8_;
                    plVar33 = plVar20;
                    if (auVar35._8_8_ == 0) goto LAB_1003805a9;
                    plVar28 = plVar20 + auVar35._8_8_;
                  }
                  lVar15 = local_148;
                  *plVar20 = local_168;
                  _memcpy(plVar20 + 1,plVar26,*(long *)(local_148 + 0x18) - (long)plVar26);
                  lVar30 = *(long *)(lVar15 + 0x18);
                  *(long **)(lVar15 + 0x18) = plVar26;
                  sVar31 = (long)plVar26 - (long)*(void **)(lVar15 + 0x10);
                  pvVar32 = (void *)((long)plVar20 - sVar31);
                  _memcpy(pvVar32,*(void **)(lVar15 + 0x10),sVar31);
                  pvVar4 = *(void **)(lVar15 + 0x10);
                  *(void **)(lVar15 + 0x10) = pvVar32;
                  *(long *)(lVar15 + 0x18) = (long)plVar20 + (lVar30 - (long)plVar26) + 8;
                  *(long **)(lVar15 + 0x20) = plVar28;
                  if (pvVar4 != (void *)0x0) {
                    operator_delete(pvVar4);
                  }
                }
              }
              else {
                uVar13 = FUN_1001cc310();
                cVar9 = _os_log_type_enabled(uVar13,0x10);
                if (cVar9 != '\0') {
                  local_138._0_4_ = 0x8220202;
                  local_138._4_4_ = 0x7a0a90;
                  local_130 = 1;
                  uStack_12c = 0x822;
                  uStack_12a = 0x69dc;
                  uStack_128 = 0x1007c;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
            }
            break;
          }
          lVar30 = lVar30 + -8;
          uVar27 = uVar27 + 1;
        } while (iVar10 != (int)uVar27);
      }
      *local_1a0 = local_148;
      local_1a0[1] = (long)plVar7;
      goto LAB_10037f356;
    }
    uVar13 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      local_138._0_4_ = 0x8220202;
      local_138._4_4_ = 0x7a0a90;
      local_130 = 1;
      uStack_12c = 0x822;
      uStack_12a = 0x8d24;
      uStack_128 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_138,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *local_1a0 = 0;
  local_1a0[1] = 0;
LAB_10037f356:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_1a0;
}

