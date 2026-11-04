// name: FUN_10042c676
// address: 10042c676

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10042c676(undefined8 *param_1,ulong param_2,long param_3,long *param_4,undefined4 param_5,
                  undefined8 param_6,char param_7,char param_8)

{
  uint uVar1;
  bool bVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  size_t sVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined8 local_338;
  long *local_330;
  undefined8 local_328;
  long *local_320;
  long *local_318;
  long *local_310;
  undefined8 local_308;
  long *plStack_300;
  uint local_2f0;
  undefined4 uStack_2ec;
  long *local_2e8;
  ushort local_2de;
  undefined4 local_2dc;
  ulong local_2d8;
  ulong local_2d0;
  long local_2c8;
  undefined8 *local_2c0;
  undefined4 local_2b8;
  char local_297 [30];
  char local_279 [30];
  char local_25b [4];
  char local_257 [28];
  short local_23b;
  undefined1 local_239;
  uint local_238;
  undefined2 uStack_234;
  ushort uStack_232;
  ushort uStack_230;
  char local_138 [4];
  undefined4 uStack_134;
  ushort uStack_130;
  undefined2 uStack_12e;
  undefined2 uStack_12c;
  undefined2 uStack_12a;
  undefined2 uStack_128;
  undefined4 uStack_126;
  undefined2 uStack_122;
  byte local_11d;
  byte local_11b;
  int local_11a;
  ulong local_f0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_2d8 = 0;
  uStack_130 = 0;
  uStack_12e = 0;
  uStack_12c = 0;
  uStack_12a = 0;
  uStack_128 = 0;
  uStack_126 = 0;
  uStack_122 = 0;
  local_2e8 = param_4;
  local_2d0 = param_2;
  local_2c8 = param_3;
  local_2c0 = param_1;
  (**(code **)(*(long *)*param_1 + 0x100))();
  iVar6 = (**(code **)(*(long *)*local_2c0 + 0xf0))((long *)*local_2c0,local_2d0);
  if (iVar6 == 0) {
    local_308 = *local_2c0;
    plStack_300 = (long *)local_2c0[1];
    if (local_2c0[1] != 0) {
      LOCK();
      plVar18 = (long *)(local_2c0[1] + 8);
      *plVar18 = *plVar18 + 1;
      UNLOCK();
    }
    iVar6 = FUN_10042db01(&local_308,local_138,0,0);
    if (plStack_300 != (long *)0x0) {
      LOCK();
      plVar18 = plStack_300 + 1;
      lVar22 = *plVar18;
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plStack_300 + 0x10))(plStack_300);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (iVar6 != 0) goto LAB_10042c770;
    if ((local_11d < 5) && (local_11d != 0)) {
      if (local_11d == 1) {
        local_2d8 = local_f0;
        goto LAB_10042d36b;
      }
      iVar6 = 0x14;
      if ((local_11b & 0x10) == 0) {
        iVar6 = 10;
      }
      uVar12 = (ulong)(uint)(iVar6 + local_11a);
      uVar19 = local_f0;
    }
    else {
LAB_10042d36b:
      uVar12 = 0;
      uVar19 = local_2d0;
    }
    FUN_100426c81(local_138);
  }
  else {
LAB_10042c770:
    uVar12 = 0;
    uVar19 = local_2d0;
  }
  plVar18 = (long *)CONCAT26(uStack_122,CONCAT42(uStack_126,uStack_128));
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar21 = plVar18 + 1;
    lVar22 = *plVar21;
    *plVar21 = *plVar21 + -1;
    UNLOCK();
    if (lVar22 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar8 = (uint)uVar12;
  if (*(byte *)(local_2c8 + 0xb) < 2) {
    if (uVar8 != 0) {
      local_2d8 = local_2d8 - uVar12;
      uVar20 = 0;
      uVar12 = uVar19 + uVar12;
      uVar9 = uVar19;
      goto LAB_10042c96e;
    }
    uVar20 = 0;
LAB_10042c97e:
    uVar8 = (**(code **)(*(long *)*local_2c0 + 0x108))((long *)*local_2c0,local_2d8);
    if (uVar8 == 0xffffff80) goto LAB_10042d726;
    if (uVar8 == 0) {
      bVar4 = *(byte *)(local_2c8 + 0xb);
      uVar8 = (uint)bVar4;
      if (bVar4 == 0) goto LAB_10042d726;
      if (bVar4 == 1) {
        plVar18 = (long *)*local_2c0;
        local_310 = (long *)local_2c0[1];
        if (local_310 != (long *)0x0) {
          LOCK();
          local_310[1] = local_310[1] + 1;
          UNLOCK();
        }
        cVar5 = *(char *)(local_2c8 + 0xc);
        local_318 = plVar18;
        local_2e8 = local_310;
        FUN_1001c6395(&local_2b8,0x80,0x20);
        local_2b8 = CONCAT13(local_2b8._3_1_,0x474154);
        local_239 = 0xff;
        if (cVar5 == '\x01') {
          local_23b = 0;
        }
        plVar21 = *(long **)(local_2c8 + 0x28);
        if (plVar21 != (long *)0x0) {
          local_2c0 = (undefined8 *)CONCAT71(local_2c0._1_7_,cVar5);
          lVar22 = local_2c8 + 4;
          uVar19 = (ulong)(cVar5 != '\x01') * 2 + 0x1c;
          do {
            iVar6 = (int)plVar21[1];
            if (iVar6 < 0x54495432) {
              if (iVar6 < 0x54414c20) {
                if (iVar6 < 0x434f4d20) {
                  if ((iVar6 == 0x434d3100) || (iVar6 == 0x434d3120)) {
                    FUN_10042c616(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc),
                                  local_138);
                    sVar10 = _strlen(local_138);
                    if (uVar19 < sVar10) {
                      sVar10 = uVar19;
                    }
                    pcVar17 = local_257;
                    goto LAB_10042ce50;
                  }
                  if (iVar6 == 0x434f4d00) goto LAB_10042cc3f;
                }
                else if ((iVar6 == 0x434f4d20) || (iVar6 == 0x434f4d4d)) {
LAB_10042cc3f:
                  cVar5 = FUN_100427ed5((long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc));
                  if (cVar5 != '\0') {
                    local_238 = 0;
                    FUN_100428138(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc),
                                  local_138,0xff,&local_238);
                    local_138[local_238] = '\0';
                    FUN_1001e7dee(local_138);
                    sVar10 = _strlen(local_138);
                    if (uVar19 < sVar10) {
                      sVar10 = uVar19;
                    }
                    FUN_1001c631b(local_138,local_257,sVar10);
                  }
                }
                else if (iVar6 == 0x54414c00) goto LAB_10042cb6a;
              }
              else if (iVar6 < 0x54434f20) {
                if ((iVar6 == 0x54414c20) || (iVar6 == 0x54414c42)) {
LAB_10042cb6a:
                  FUN_10042c616(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc),
                                local_138);
                  sVar10 = _strlen(local_138);
                  if (0x1d < sVar10) {
                    sVar10 = 0x1e;
                  }
                  pcVar17 = local_279;
                  goto LAB_10042ce50;
                }
                if (iVar6 == 0x54434f00) goto LAB_10042ccbc;
              }
              else if ((iVar6 == 0x54434f20) || (iVar6 == 0x54434f4e)) {
LAB_10042ccbc:
                FUN_10042c616(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc),
                              local_138);
                local_238 = local_238 & 0xffffff00;
                sVar10 = _strlen(local_138);
                if ((local_138[1] != '\0' && (sVar10 & 0xfe) != 0) && local_138[0] == '(') {
                  iVar6 = 0;
                  pcVar17 = local_138 + 2;
                  cVar5 = local_138[1];
                  do {
                    if ((byte)(cVar5 - 0x30U) < 10) {
                      *(char *)((long)&local_238 + (long)iVar6) = cVar5;
                      iVar6 = iVar6 + 1;
                    }
                    else if (cVar5 == ')') break;
                    cVar5 = *pcVar17;
                    pcVar17 = pcVar17 + 1;
                  } while (cVar5 != '\0');
                  *(undefined1 *)((long)&local_238 + (long)iVar6) = 0;
                  if (0 < iVar6) {
                    local_239 = FUN_1001e3338(&local_238);
                  }
                }
              }
              else if (iVar6 == 0x54445243) goto LAB_10042cdbc;
            }
            else {
              if (0x54524aff < iVar6) {
                if (iVar6 < 0x54543220) {
                  if ((iVar6 == 0x54524b00) || (iVar6 == 0x54524b20)) {
LAB_10042cd5b:
                    if ((char)local_2c0 == '\x01') {
                      FUN_10042c616(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc)
                                    ,local_138);
                      if (local_138[0] != '\0') {
                        pcVar17 = local_138;
                        cVar5 = local_138[0];
                        do {
                          pcVar17 = pcVar17 + 1;
                          if ((byte)(cVar5 - 0x3aU) < 0xf6) {
                            pcVar17[-1] = '\0';
                            break;
                          }
                          cVar5 = *pcVar17;
                        } while (cVar5 != '\0');
                      }
                      bVar4 = FUN_1001e3338(local_138);
                      local_23b = (ushort)bVar4 << 8;
                    }
                  }
                  else if (iVar6 == 0x54543200) goto LAB_10042cc0b;
                }
                else if (iVar6 < 0x54594520) {
                  if (iVar6 == 0x54543220) {
LAB_10042cc0b:
                    FUN_10042c616(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc),
                                  local_138);
                    sVar10 = _strlen(local_138);
                    if (0x1d < sVar10) {
                      sVar10 = 0x1e;
                    }
                    pcVar17 = (char *)((long)&local_2b8 + 3);
                    goto LAB_10042ce50;
                  }
                  if (iVar6 == 0x54594500) goto LAB_10042cdbc;
                }
                else if ((iVar6 == 0x54594520) || (iVar6 == 0x54594552)) {
LAB_10042cdbc:
                  FUN_10042c616(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc),
                                local_138);
                  sVar10 = _strlen(local_138);
                  if (3 < sVar10) {
                    sVar10 = 4;
                  }
                  pcVar17 = local_25b;
                  goto LAB_10042ce50;
                }
                goto LAB_10042ce5b;
              }
              if (iVar6 < 0x54504531) {
                if (iVar6 == 0x54495432) goto LAB_10042cc0b;
                if (iVar6 == 0x54503100) goto LAB_10042ce18;
                if (iVar6 != 0x54503120) goto LAB_10042ce5b;
              }
              else if (iVar6 != 0x54504531) {
                if (iVar6 != 0x54504532) {
                  if (iVar6 == 0x5452434b) goto LAB_10042cd5b;
                  goto LAB_10042ce5b;
                }
LAB_10042ce18:
                if (local_297[0] != ' ') goto LAB_10042ce5b;
              }
              FUN_10042c616(lVar22,(long)plVar21 + 0x12,*(undefined4 *)((long)plVar21 + 0xc),
                            local_138);
              sVar10 = _strlen(local_138);
              if (0x1d < sVar10) {
                sVar10 = 0x1e;
              }
              pcVar17 = local_297;
LAB_10042ce50:
              FUN_1001c631b(local_138,pcVar17,sVar10);
            }
LAB_10042ce5b:
            plVar21 = (long *)*plVar21;
            plVar18 = local_318;
          } while (plVar21 != (long *)0x0);
        }
        uVar8 = (**(code **)(*plVar18 + 0x100))(plVar18,&local_238);
        if (uVar8 != 0xffffff80) {
          if (uVar8 == 0) {
            uVar8 = (**(code **)(*plVar18 + 0x98))
                              (plVar18,CONCAT26(uStack_232,CONCAT24(uStack_234,local_238)),
                               &local_2b8,0x80,1,&local_2f0);
            if (uVar8 != 0xffffff80) {
              if (uVar8 == 0) {
                uVar8 = 0;
                if (CONCAT44(uStack_2ec,local_2f0) != 0x80) {
                  uVar11 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar5 != '\0') {
                    builtin_strncpy(local_138,"\x02\x02\"\b",4);
                    uStack_134 = 0x7a0a90;
                    uStack_130 = 1;
                    uStack_12e = 0;
                    uStack_12c = 0x822;
                    uStack_12a = 0xe0f8;
                    uStack_128 = 0x7c;
                    uStack_126 = 1;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138
                                        ,0x16);
                  }
                  uVar8 = 0xffffffdc;
                  FUN_1001782e9(0,0);
                }
              }
              else {
                uVar11 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar11,0x10);
                if (cVar5 != '\0') {
                  uStack_12a = (undefined2)uVar8;
                  uStack_128 = (undefined2)(uVar8 >> 0x10);
                  goto LAB_10042d4c8;
                }
              }
            }
          }
          else {
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11,0x10);
            if (cVar5 != '\0') {
              uStack_12a = (undefined2)uVar8;
              uStack_128 = (undefined2)(uVar8 >> 0x10);
LAB_10042d4c8:
              uStack_12c = 0x400;
              uStack_12e = 0;
              uStack_130 = 1;
              uStack_134 = 0x7a0a90;
              builtin_strncpy(local_138,"\x02\x02\"\b",4);
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_138,0x12);
            }
          }
        }
      }
      else {
        local_2e8 = (long *)local_2c0[1];
        plVar18 = (long *)*local_2c0;
        uVar11 = local_2c0[1];
        if (local_2e8 != (long *)0x0) {
          LOCK();
          local_2e8[1] = local_2e8[1] + 1;
          UNLOCK();
          bVar4 = *(byte *)(local_2c8 + 0xb);
        }
        uStack_230 = *(ushort *)(local_2c8 + 0x10);
        uVar14 = *(undefined8 *)(local_2c8 + 8);
        local_238 = (uint)uVar14;
        uStack_234 = (undefined2)((ulong)uVar14 >> 0x20);
        uStack_232 = (ushort)((ulong)uVar14 >> 0x30);
        uVar20 = uVar20 + CONCAT22(uStack_230,uStack_232);
        uVar19 = (ulong)(*(int *)(local_2c8 + 0x24) + uVar20 + 10);
        local_2c0 = (undefined8 *)FUN_100170ea9(0,uVar19);
        if (local_2c0 == (undefined8 *)0x0) {
          uVar14 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar14,0x10);
          if (cVar5 != '\0') {
            builtin_strncpy(local_138,"\x02\x02\"\b",4);
            uStack_134 = 0x7a0a90;
            uStack_130 = 1;
            uStack_12e = 0;
            uStack_12c = 0x822;
            uStack_12a = 0xe118;
            uStack_128 = 0x7c;
            uStack_126 = 1;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",local_138,0x16,
                                plVar18,uVar11);
          }
          FUN_1001782e9(0,0);
        }
        else {
          FUN_10017103d(local_2c0,uVar19);
          uVar12 = FUN_100170ef7(local_2c0);
          if (uVar12 == uVar19) {
            lVar22 = FUN_100170f7f(local_2c0);
            lVar13 = FUN_100170ef7(local_2c0);
            iVar6 = (uVar20 & 0x7f) + (uVar20 & 0x3f80) * 2 + (uVar20 & 0x1fc000) * 4 +
                    (uVar20 & 0xfe00000) * 8;
            uVar3 = (ushort)((uint)iVar6 >> 8);
            uStack_232 = (ushort)(byte)((uint)iVar6 >> 0x18) | uVar3 & 0xff00;
            uStack_230 = uVar3 & 0xff | (ushort)((uVar20 & 0x7f) * 0x1000000 >> 0x10);
            FUN_1001c631b(&local_238,lVar22,10);
            uVar19 = lVar22 + 10;
            plVar21 = *(long **)(local_2c8 + 0x28);
            if (plVar21 != (long *)0x0) {
              uVar12 = lVar22 + lVar13;
              do {
                uVar8 = *(uint *)(plVar21 + 1);
                local_2b8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18;
                FUN_1001c631b(&local_2b8,uVar19,*(undefined4 *)(local_2c8 + 0x14));
                uVar19 = uVar19 + *(uint *)(local_2c8 + 0x14);
                if (uVar12 < uVar19) {
                  uVar11 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar5 != '\0') {
                    builtin_strncpy(local_138,"\x02\x02\"\b",4);
                    uStack_134 = 0x7a0a90;
                    uStack_130 = 1;
                    uStack_12e = 0;
                    uStack_12c = 0x822;
                    uStack_12a = 0xe16d;
                    uStack_128 = 0x7c;
                    uStack_126 = 1;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
LAB_10042d57e:
                  bVar2 = false;
                  goto LAB_10042d581;
                }
                uVar8 = *(uint *)((long)plVar21 + 0xc);
                if (bVar4 == 4) {
                  uVar8 = (uVar8 & 0x7f) + (uVar8 & 0x3f80) * 2 + (uVar8 & 0x1fc000) * 4 +
                          (uVar8 & 0xfe00000) * 8;
                }
                local_2f0 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                            uVar8 << 0x18;
                FUN_1001c631b((long)&local_2f0 + (ulong)(4 - *(int *)(local_2c8 + 0x18)),uVar19);
                uVar19 = uVar19 + *(uint *)(local_2c8 + 0x18);
                if (uVar12 < uVar19) {
                  uVar11 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar5 != '\0') {
                    builtin_strncpy(local_138,"\x02\x02\"\b",4);
                    uStack_134 = 0x7a0a90;
                    uStack_130 = 1;
                    uStack_12e = 0;
                    uStack_12c = 0x822;
                    uStack_12a = 0xe16d;
                    uStack_128 = 0x7c;
                    uStack_126 = 1;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_10042d57e;
                }
                if (*(int *)(local_2c8 + 0x1c) != 0) {
                  local_2de = *(ushort *)(plVar21 + 2) << 8 | *(ushort *)(plVar21 + 2) >> 8;
                  FUN_1001c631b(&local_2de,uVar19);
                  uVar19 = uVar19 + *(uint *)(local_2c8 + 0x1c);
                  if (uVar12 < uVar19) {
                    uVar11 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar5 != '\0') {
                      builtin_strncpy(local_138,"\x02\x02\"\b",4);
                      uStack_134 = 0x7a0a90;
                      uStack_130 = 1;
                      uStack_12e = 0;
                      uStack_12c = 0x822;
                      uStack_12a = 0xe16d;
                      uStack_128 = 0x7c;
                      uStack_126 = 1;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                          local_138,0x16);
                    }
                    FUN_1001782e9(0,0);
                    goto LAB_10042d57e;
                  }
                }
                FUN_1001c631b((long)plVar21 + 0x12,uVar19,(long)*(int *)((long)plVar21 + 0xc));
                uVar19 = uVar19 + (long)*(int *)((long)plVar21 + 0xc);
                if (uVar12 < uVar19) {
                  uVar11 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar5 != '\0') {
                    builtin_strncpy(local_138,"\x02\x02\"\b",4);
                    uStack_134 = 0x7a0a90;
                    uStack_130 = 1;
                    uStack_12e = 0;
                    uStack_12c = 0x822;
                    uStack_12a = 0xe16d;
                    uStack_128 = 0x7c;
                    uStack_126 = 1;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_10042d57e;
                }
                plVar21 = (long *)*plVar21;
              } while (plVar21 != (long *)0x0);
            }
            bVar2 = true;
LAB_10042d581:
            if (*(int *)(local_2c8 + 0x24) != 0) {
              local_138[3] = (char)(local_238 >> 0x18);
              uStack_134 = (undefined4)(CONCAT26(uStack_232,CONCAT24(uStack_234,local_238)) >> 0x20)
              ;
              uStack_130 = uStack_230;
              local_138[0] = '3';
              local_138[1] = 'D';
              local_138[2] = 0x49;
              FUN_1001c631b(local_138,uVar19);
            }
            if (bVar2) {
              uVar11 = FUN_100170f3b(local_2c0);
              uVar14 = FUN_100170ef7(local_2c0);
              uVar8 = (**(code **)(*plVar18 + 0x98))(plVar18,local_2d0,uVar11,uVar14,1,&local_238);
              if ((uVar8 != 0xffffff80) && (uVar8 != 0)) {
                uVar11 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar11,0x10);
                if (cVar5 != '\0') {
                  builtin_strncpy(local_138,"\x02\x02\"\b",4);
                  uStack_134 = 0x7a0a90;
                  uStack_130 = 1;
                  uStack_12e = 0;
                  uStack_12c = 0x400;
                  uStack_12a = (undefined2)uVar8;
                  uStack_128 = (undefined2)(uVar8 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_138,
                                      0x12);
                }
              }
              lVar22 = CONCAT26(uStack_232,CONCAT24(uStack_234,local_238));
              lVar13 = FUN_100170ef7(local_2c0);
              if ((lVar22 != lVar13) || (CONCAT26(uStack_232,CONCAT24(uStack_234,local_238)) == 0))
              {
                uVar11 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar11,0x10);
                if (cVar5 != '\0') {
                  builtin_strncpy(local_138,"\x02\x02\"\b",4);
                  uStack_134 = 0x7a0a90;
                  uStack_130 = 1;
                  uStack_12e = 0;
                  uStack_12c = 0x822;
                  uStack_12a = 0xe17f;
                  uStack_128 = 0x7c;
                  uStack_126 = 1;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                if (uVar8 == 0) {
                  uVar8 = 0xffffffdc;
                }
              }
              FUN_10017060f(local_2c0);
              goto LAB_10042d6d3;
            }
          }
          else {
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11,0x10);
            if (cVar5 != '\0') {
              builtin_strncpy(local_138,"\x02\x02\"\b",4);
              uStack_134 = 0x7a0a90;
              uStack_130 = 1;
              uStack_12e = 0;
              uStack_12c = 0x822;
              uStack_12a = 0xe12b;
              uStack_128 = 0x7c;
              uStack_126 = 1;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          FUN_10017060f(local_2c0);
        }
        uVar11 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar11,0x10);
        if (cVar5 != '\0') {
          builtin_strncpy(local_138,"\x02\x02\"\b",4);
          uStack_134 = 0x7a0a90;
          uStack_130 = 1;
          uStack_12e = 0;
          uStack_12c = 0x822;
          uStack_12a = 0xe118;
          uStack_128 = 0x7c;
          uStack_126 = 1;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138,0x16);
        }
        uVar8 = 0xffffff94;
        FUN_1001782e9(0,0);
      }
LAB_10042d6d3:
      if (local_2e8 != (long *)0x0) {
        LOCK();
        plVar18 = local_2e8 + 1;
        lVar22 = *plVar18;
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (lVar22 == 0) {
          (**(code **)(*local_2e8 + 0x10))(local_2e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((uVar8 == 0xffffff80) || (uVar8 == 0)) goto LAB_10042d726;
      uVar11 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar11,0x10);
      if (cVar5 == '\0') goto LAB_10042d726;
      uStack_12a = (undefined2)uVar8;
      uStack_128 = (undefined2)(uVar8 >> 0x10);
    }
    else {
      uVar11 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar11,0x10);
      if (cVar5 == '\0') goto LAB_10042d726;
      uStack_12a = (undefined2)uVar8;
      uStack_128 = (undefined2)(uVar8 >> 0x10);
    }
  }
  else {
    uVar15 = *(uint *)(local_2c8 + 0xe);
    uVar1 = uVar15 + 10;
    if ((*(byte *)(local_2c8 + 0xd) & 0x10) != 0) {
      uVar1 = uVar15 + 0x14;
    }
    local_2dc = param_5;
    if (2 < (byte)(*(byte *)(local_2c8 + 0xb) - 2)) {
      uVar11 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar11,0x10);
      if (cVar5 != '\0') {
        builtin_strncpy(local_138,"\x02\x02\"\b",4);
        uStack_134 = 0x7a0a90;
        uStack_130 = 1;
        uStack_12e = 0;
        uStack_12c = 0x822;
        uStack_12a = 0xe1b0;
        uStack_128 = 0x7c;
        uStack_126 = 1;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_138,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (uVar8 == 0) {
      uVar20 = ((uVar15 & 1) == 0 || (char)local_2dc == '\0') ^ 0x2801;
      uVar9 = uVar19 + (uVar1 + uVar20);
      local_2d8 = local_2d8 + (uVar1 + uVar20);
    }
    else {
      uVar20 = uVar8 - uVar1;
      if (uVar8 < uVar1) {
        uVar20 = (uVar15 ^ uVar8) & 1 | 0x2800;
        if ((char)local_2dc == '\0') {
          uVar20 = 0x2800;
        }
        uVar15 = uVar1 + uVar20;
        uVar9 = (ulong)(uVar15 - uVar8);
LAB_10042c91a:
        local_2d8 = local_2d8 + uVar9;
        uVar9 = uVar15 + uVar19;
        uVar19 = uVar12 + uVar19;
      }
      else {
        if (param_8 != '\0') {
          auVar23._8_4_ = (int)(local_2d8 >> 0x20);
          auVar23._0_8_ = local_2d8;
          auVar23._12_4_ = DAT_10070d3c0._4_4_;
          uVar7 = (uint)(long)((((double)CONCAT44((undefined4)DAT_10070d3c0,(int)local_2d8) -
                                _DAT_10070d3d0) + (auVar23._8_8_ - _UNK_10070d3d8)) * _DAT_100749530
                              );
          uVar16 = 0x2800;
          if (0x2800 < uVar7) {
            uVar16 = uVar7;
          }
          if (uVar16 < uVar20) {
            uVar20 = (uVar15 + uVar16 ^ uVar8) & 1;
            if ((char)local_2dc == '\0') {
              uVar20 = 0;
            }
            uVar20 = uVar20 + uVar16;
            uVar15 = uVar20 + uVar1;
            uVar9 = -(ulong)(uVar8 - uVar15);
            goto LAB_10042c91a;
          }
        }
        uVar9 = 0;
        uVar19 = 0;
      }
    }
    uVar12 = uVar19;
    if (local_2e8 != (long *)0x0) {
      *(uint *)local_2e8 = uVar1 + uVar20;
    }
LAB_10042c96e:
    if (uVar12 == uVar9) goto LAB_10042c97e;
    local_238 = 0;
    if (param_7 != '\0') {
      uVar8 = 0xffffffd1;
      goto LAB_10042d726;
    }
    uVar11 = *local_2c0;
    if (uVar9 < uVar12) {
      local_330 = (long *)local_2c0[1];
      if (local_330 != (long *)0x0) {
        LOCK();
        local_330[1] = local_330[1] + 1;
        UNLOCK();
      }
      local_338 = uVar11;
      uVar8 = FUN_1005307e3(&local_338,uVar9,(int)uVar12 - (int)uVar9,0,&local_238);
      plVar18 = local_330;
    }
    else {
      local_320 = (long *)local_2c0[1];
      if (local_320 != (long *)0x0) {
        LOCK();
        local_320[1] = local_320[1] + 1;
        UNLOCK();
      }
      local_328 = uVar11;
      uVar8 = FUN_10052ff58(&local_328,uVar12,0,(int)uVar9 - (int)uVar12,0,&local_238);
      plVar18 = local_320;
    }
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar21 = plVar18 + 1;
      lVar22 = *plVar21;
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (lVar22 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((uVar8 == 0xffffff80) || (uVar8 == 0)) {
      if (uVar8 != 0) goto LAB_10042d726;
      goto LAB_10042c97e;
    }
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 == '\0') goto LAB_10042d726;
    uStack_12a = (undefined2)uVar8;
    uStack_128 = (undefined2)(uVar8 >> 0x10);
  }
  uStack_12e = 0;
  uStack_130 = 1;
  uStack_134 = 0x7a0a90;
  builtin_strncpy(local_138,"\x02\x02\"\b",4);
  uStack_12c = 0x400;
  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_138,0x12);
LAB_10042d726:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

