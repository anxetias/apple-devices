// name: FUN_10045b864
// address: 10045b864

undefined1 * FUN_10045b864(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  bool bVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  byte bVar23;
  size_t sVar24;
  undefined1 *unaff_RBX;
  undefined1 *puVar25;
  ulong uVar26;
  ulong uVar27;
  void *pvVar28;
  undefined1 *puVar29;
  ulong *puVar30;
  undefined8 *puVar31;
  undefined1 auVar32 [16];
  long local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  uint local_c4;
  undefined4 local_c0;
  int local_bc;
  long local_b8;
  ulong local_b0;
  int local_a8;
  int local_a4;
  ulong local_a0;
  short local_92;
  ulong local_90;
  ushort local_82;
  undefined8 local_80;
  byte local_77;
  byte local_76;
  byte local_75;
  char local_74;
  byte local_73;
  ushort local_72;
  uint local_70 [3];
  byte local_61;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d8 = param_3;
  local_b8 = param_2;
  local_60 = param_1;
  uVar14 = FUN_10017cfbe(*param_1,&local_e0);
  puVar29 = (undefined1 *)(ulong)uVar14;
  if (uVar14 != 0xffffff80) {
    if (uVar14 == 0) {
      if (local_b8 < 1) {
        puVar29 = (undefined1 *)0x0;
      }
      else {
        local_c4 = (int)local_d8 - 1;
        puVar1 = local_60 + 5;
        do {
          uVar14 = FUN_10045b3c2(*local_60,local_70);
          puVar29 = (undefined1 *)(ulong)uVar14;
          if (uVar14 != 0) {
            if (uVar14 != 0xffffff80) {
              uVar16 = FUN_1001cc310();
              cVar13 = _os_log_type_enabled(uVar16,0x10);
              if (cVar13 != '\0') {
                local_4a = (undefined2)uVar14;
                uStack_48 = (undefined2)(uVar14 >> 0x10);
                goto LAB_10045d30a;
              }
            }
            break;
          }
          uVar14 = FUN_10045b3c2(*local_60,&local_c8);
          puVar29 = (undefined1 *)(ulong)uVar14;
          if (uVar14 != 0) {
            if (uVar14 != 0xffffff80) {
              uVar16 = FUN_1001cc310();
              cVar13 = _os_log_type_enabled(uVar16,0x10);
              if (cVar13 != '\0') {
                local_4a = (undefined2)uVar14;
                uStack_48 = (undefined2)(uVar14 >> 0x10);
                goto LAB_10045d30a;
              }
            }
            break;
          }
          uVar19 = (ulong)local_70[0];
          if ((ulong)local_70[0] == 1) {
            uVar14 = FUN_10045b480(*local_60,&local_b0);
            puVar29 = (undefined1 *)(ulong)uVar14;
            uVar19 = local_b0;
            if (uVar14 != 0) {
              if (uVar14 != 0xffffff80) {
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_4a = (undefined2)uVar14;
                  uStack_48 = (undefined2)(uVar14 >> 0x10);
                  goto LAB_10045d30a;
                }
              }
              break;
            }
          }
          local_b0 = uVar19;
          uVar19 = local_b0;
          if (local_c4 < 2) {
            if ((int)local_d8 == 1) {
              if (local_c8 == 0x63647363) {
                uVar14 = FUN_10045b308(*local_60);
                puVar29 = (undefined1 *)(ulong)uVar14;
                if (uVar14 != 0) {
                  if (uVar14 == 0xffffff80) goto LAB_10045d4af;
                  uVar16 = FUN_1001cc310();
                  cVar13 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar13 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x400;
                    local_4a = (undefined2)uVar14;
                    uStack_48 = (undefined2)(uVar14 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                  if (uVar14 == 0) goto LAB_10045b9c7;
LAB_10045d570:
                  uVar16 = FUN_1001cc310();
                  cVar13 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar13 != '\0') {
                    local_4a = SUB82(puVar29,0);
                    uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                    goto LAB_10045d30a;
                  }
                  break;
                }
LAB_10045b9c7:
                uVar14 = FUN_10045b308(*local_60,&local_80);
                puVar29 = (undefined1 *)(ulong)uVar14;
                if (uVar14 != 0) {
                  if (uVar14 == 0xffffff80) goto LAB_10045d4af;
                  uVar16 = FUN_1001cc310();
                  cVar13 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar13 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x400;
                    local_4a = (undefined2)uVar14;
                    uStack_48 = (undefined2)(uVar14 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                  if (uVar14 != 0) goto LAB_10045d570;
                }
                if ((ushort)local_80 != 0) {
                  unaff_RBX = (undefined1 *)0x0;
                  do {
                    uVar14 = FUN_10045b308(*local_60,&local_90);
                    puVar29 = (undefined1 *)(ulong)uVar14;
                    if (uVar14 != 0) {
                      if (uVar14 == 0xffffff80) goto LAB_10045d4af;
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = 0x7a0a90;
                        uStack_50 = 1;
                        local_4c = 0x400;
                        local_4a = (undefined2)uVar14;
                        uStack_48 = (undefined2)(uVar14 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                      if (uVar14 != 0) goto LAB_10045d570;
                    }
                    uVar19 = (ulong)(ushort)local_70[0];
                    uVar27 = local_90 & 0xffff;
                    puVar30 = (ulong *)local_60[3];
                    if (puVar30 < (ulong *)local_60[4]) {
                      *puVar30 = uVar27 << 0x20 | uVar19;
                      puVar30 = puVar30 + 1;
                    }
                    else {
                      lVar21 = (long)puVar30 - local_60[2] >> 3;
                      uVar20 = lVar21 + 1;
                      if (0x1fffffffffffffff < uVar20) {
                        FUN_100466080();
LAB_10045d623:
                    /* WARNING: Does not return */
                        pcVar6 = (code *)invalidInstructionException();
                        (*pcVar6)();
                      }
                      uVar17 = (long)local_60[4] - local_60[2];
                      uVar26 = (long)uVar17 >> 2;
                      if (uVar26 <= uVar20) {
                        uVar26 = uVar20;
                      }
                      if (0x7ffffffffffffff7 < uVar17) {
                        uVar26 = 0x1fffffffffffffff;
                      }
                      if (uVar26 == 0) {
                        auVar32 = ZEXT816(0);
                      }
                      else {
                        auVar32 = FUN_1003f99a0();
                      }
                      puVar31 = local_60;
                      lVar18 = auVar32._0_8_;
                      puVar2 = (ulong *)(lVar18 + lVar21 * 8);
                      local_a0 = lVar18 + auVar32._8_8_ * 8;
                      *puVar2 = uVar27 << 0x20 | uVar19;
                      puVar30 = (ulong *)(lVar18 + lVar21 * 8 + 8);
                      sVar24 = local_60[3] - (long)local_60[2];
                      pvVar28 = (void *)((long)puVar2 - sVar24);
                      _memcpy(pvVar28,(void *)local_60[2],sVar24);
                      pvVar4 = (void *)puVar31[2];
                      puVar31[2] = pvVar28;
                      puVar31[3] = puVar30;
                      puVar31[4] = local_a0;
                      if (pvVar4 != (void *)0x0) {
                        operator_delete(pvVar4);
                      }
                    }
                    local_60[3] = puVar30;
                    uVar14 = (int)unaff_RBX + 1;
                    unaff_RBX = (undefined1 *)(ulong)uVar14;
                  } while ((ushort)uVar14 < (ushort)local_80);
                }
              }
            }
            else if (local_c8 == 0x63647363) {
              uVar14 = FUN_10045b3c2(*local_60);
              puVar29 = (undefined1 *)(ulong)uVar14;
              if (uVar14 != 0) {
                if (uVar14 == 0xffffff80) goto LAB_10045d4af;
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x400;
                  local_4a = (undefined2)uVar14;
                  uStack_48 = (undefined2)(uVar14 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                if (uVar14 == 0) goto LAB_10045bf59;
LAB_10045d5c1:
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_4a = SUB82(puVar29,0);
                  uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                  goto LAB_10045d30a;
                }
                break;
              }
LAB_10045bf59:
              uVar14 = FUN_10045b308(*local_60,&local_90);
              puVar29 = (undefined1 *)(ulong)uVar14;
              if (uVar14 != 0) {
                if (uVar14 == 0xffffff80) goto LAB_10045d4af;
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x400;
                  local_4a = (undefined2)uVar14;
                  uStack_48 = (undefined2)(uVar14 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                if (uVar14 != 0) goto LAB_10045d5c1;
              }
              if ((ushort)local_90 != 0) {
                unaff_RBX = (undefined1 *)0x0;
                do {
                  uVar14 = FUN_10045b3c2(*local_60,&local_80);
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if (uVar14 != 0) {
                    if (uVar14 == 0xffffff80) goto LAB_10045d4af;
                    uVar16 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar13 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = 0x7a0a90;
                      uStack_50 = 1;
                      local_4c = 0x400;
                      local_4a = (undefined2)uVar14;
                      uStack_48 = (undefined2)(uVar14 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                          &local_58,0x12);
                    }
                    if (uVar14 != 0) goto LAB_10045d5c1;
                  }
                  uVar14 = local_70[0];
                  uVar8 = (int)local_80;
                  puVar31 = (undefined8 *)local_60[3];
                  if (puVar31 < (undefined8 *)local_60[4]) {
                    *puVar31 = CONCAT44((int)local_80,local_70[0]);
                    puVar31 = puVar31 + 1;
                  }
                  else {
                    lVar21 = (long)puVar31 - local_60[2] >> 3;
                    uVar19 = lVar21 + 1;
                    if (0x1fffffffffffffff < uVar19) {
                      FUN_100466080();
                      goto LAB_10045d623;
                    }
                    uVar20 = (long)local_60[4] - local_60[2];
                    uVar27 = (long)uVar20 >> 2;
                    if (uVar27 <= uVar19) {
                      uVar27 = uVar19;
                    }
                    if (0x7ffffffffffffff7 < uVar20) {
                      uVar27 = 0x1fffffffffffffff;
                    }
                    if (uVar27 == 0) {
                      auVar32 = ZEXT816(0);
                    }
                    else {
                      auVar32 = FUN_1003f99a0();
                    }
                    puVar12 = local_60;
                    lVar18 = auVar32._0_8_;
                    puVar3 = (undefined8 *)(lVar18 + lVar21 * 8);
                    local_a0 = lVar18 + auVar32._8_8_ * 8;
                    *puVar3 = CONCAT44(uVar8,uVar14);
                    puVar31 = (undefined8 *)(lVar18 + lVar21 * 8 + 8);
                    sVar24 = local_60[3] - (long)local_60[2];
                    pvVar28 = (void *)((long)puVar3 - sVar24);
                    _memcpy(pvVar28,(void *)local_60[2],sVar24);
                    pvVar4 = (void *)puVar12[2];
                    puVar12[2] = pvVar28;
                    puVar12[3] = puVar31;
                    puVar12[4] = local_a0;
                    if (pvVar4 != (void *)0x0) {
                      operator_delete(pvVar4);
                    }
                  }
                  local_60[3] = puVar31;
                  uVar14 = (int)unaff_RBX + 1;
                  unaff_RBX = (undefined1 *)(ulong)uVar14;
                } while ((ushort)uVar14 < (ushort)local_90);
              }
            }
          }
          else {
            if (local_c8 < 0x69726566) {
              if (local_c8 != 0x66747970) {
                if (local_c8 != 0x68646c72) {
                  if (local_c8 != 0x696c6f63) goto LAB_10045cdcc;
                  uVar14 = FUN_10045b7ae(*local_60,&local_77);
                  bVar9 = local_77;
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if (uVar14 == 0xffffff80) goto LAB_10045cdc3;
                  if (uVar14 != 0) {
                    uVar16 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar13 != '\0') {
                      local_4a = (undefined2)uVar14;
                      uStack_48 = (undefined2)(uVar14 >> 0x10);
                      goto LAB_10045cbae;
                    }
                    goto LAB_10045c4cf;
                  }
                  unaff_RBX = (undefined1 *)CONCAT71((int7)((ulong)unaff_RBX >> 8),local_77);
                  if (2 < local_77) {
                    uVar16 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar13 != '\0') {
                      pcVar22 = "version <= 2";
                      goto LAB_10045cd0e;
                    }
                    goto LAB_10045c76e;
                  }
                  uVar14 = FUN_10045b258(*local_60,&local_76);
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if (uVar14 != 0xffffff80) {
                    if (uVar14 == 0) {
                      uVar14 = FUN_10045b258(*local_60,&local_75);
                      bVar11 = local_75;
                      bVar10 = local_76;
                      puVar29 = (undefined1 *)(ulong)uVar14;
                      if (uVar14 != 0xffffff80) {
                        if (uVar14 != 0) {
                          uVar16 = FUN_1001cc310();
                          cVar13 = _os_log_type_enabled(uVar16,0x10);
                          if (cVar13 != '\0') {
                            local_4a = (undefined2)uVar14;
                            uStack_48 = (undefined2)(uVar14 >> 0x10);
                            goto LAB_10045cbae;
                          }
                          goto LAB_10045c4cf;
                        }
                        bVar7 = local_76 >> 4;
                        if (((local_76 < 0x10) || (bVar7 == 4)) || (bVar7 == 8)) {
                          local_a0 = CONCAT71(local_a0._1_7_,local_76) & 0xffffffffffffff0f;
                          if ((local_76 & 0xf) == 8 || (local_76 & 0xb) == 0) {
                            bVar23 = local_75 >> 4;
                            if (((local_75 < 0x10) || (bVar23 == 4)) || (bVar23 == 8)) {
                              local_a8 = (int)unaff_RBX + -1;
                              local_73 = bVar23;
                              if ((1 < (byte)local_a8) ||
                                 ((local_75 & 0xf) == 8 || (local_75 & 0xb) == 0)) {
                                unaff_RBX = (undefined1 *)0x0;
                                local_61 = local_75 & 0xf;
                                uVar14 = FUN_10045b53e(local_60,(bVar9 == 2) * '\x02' + '\x02',
                                                       &local_d0);
                                puVar29 = (undefined1 *)(ulong)uVar14;
                                if (uVar14 != 0xffffff80) {
                                  if (uVar14 != 0) {
                                    uVar16 = FUN_1001cc310();
                                    cVar13 = _os_log_type_enabled(uVar16,0x10);
                                    if (cVar13 != '\0') {
                                      local_4a = (undefined2)uVar14;
                                      uStack_48 = (undefined2)(uVar14 >> 0x10);
                                      goto LAB_10045cbae;
                                    }
                                    goto LAB_10045c4cf;
                                  }
                                  local_bc = local_d0;
                                  if (local_d0 == 0) {
                                    puVar29 = (undefined1 *)0x0;
                                  }
                                  else {
                                    puVar25 = (undefined1 *)(ulong)(byte)((bVar9 == 2) * '\x02' + 2)
                                    ;
                                    local_74 = local_61 != 0 && (byte)local_a8 < 2;
                                    local_a4 = 0;
                                    unaff_RBX = puVar25;
                                    do {
                                      local_72 = 0;
                                      uVar14 = FUN_10045b53e(local_60,puVar25,&local_cc);
                                      puVar29 = (undefined1 *)(ulong)uVar14;
                                      if (uVar14 != 0) {
                                        if (uVar14 == 0xffffff80) goto LAB_10045c4cf;
                                        uVar16 = FUN_1001cc310();
                                        cVar13 = _os_log_type_enabled(uVar16,0x10);
                                        if (cVar13 == '\0') goto LAB_10045c4cf;
                                        local_4a = (undefined2)uVar14;
                                        uStack_48 = (undefined2)(uVar14 >> 0x10);
                                        goto LAB_10045cbae;
                                      }
                                      if ((byte)local_a8 < 2) {
                                        uVar14 = FUN_10045b308(*local_60,&local_72);
                                        puVar29 = (undefined1 *)(ulong)uVar14;
                                        if (uVar14 != 0) {
                                          if (uVar14 == 0xffffff80) goto LAB_10045c4cf;
                                          uVar16 = FUN_1001cc310();
                                          cVar13 = _os_log_type_enabled(uVar16,0x10);
                                          if (cVar13 == '\0') goto LAB_10045c4cf;
                                          local_4a = (undefined2)uVar14;
                                          uStack_48 = (undefined2)(uVar14 >> 0x10);
                                          goto LAB_10045cbae;
                                        }
                                        local_72 = local_72 & 0xf;
                                      }
                                      uVar14 = FUN_10045b308(*local_60,&local_92);
                                      puVar29 = (undefined1 *)(ulong)uVar14;
                                      if (uVar14 != 0) {
                                        if (uVar14 == 0xffffff80) goto LAB_10045c4cf;
                                        uVar16 = FUN_1001cc310();
                                        cVar13 = _os_log_type_enabled(uVar16,0x10);
                                        if (cVar13 == '\0') goto LAB_10045c4cf;
                                        local_4a = (undefined2)uVar14;
                                        uStack_48 = (undefined2)(uVar14 >> 0x10);
                                        goto LAB_10045cbae;
                                      }
                                      if (0xf < bVar11) {
                                        uVar14 = FUN_10045b676(local_60,local_73,local_70);
                                        puVar29 = (undefined1 *)(ulong)uVar14;
                                        if (uVar14 != 0) {
                                          if (uVar14 == 0xffffff80) goto LAB_10045c4cf;
                                          uVar16 = FUN_1001cc310();
                                          cVar13 = _os_log_type_enabled(uVar16,0x10);
                                          if (cVar13 == '\0') goto LAB_10045c4cf;
                                          local_4a = (undefined2)uVar14;
                                          uStack_48 = (undefined2)(uVar14 >> 0x10);
                                          goto LAB_10045cbae;
                                        }
                                      }
                                      uVar14 = FUN_10045b308(*local_60,&local_82);
                                      puVar29 = (undefined1 *)(ulong)uVar14;
                                      if (uVar14 != 0) {
                                        if (uVar14 == 0xffffff80) goto LAB_10045c4cf;
                                        uVar16 = FUN_1001cc310();
                                        cVar13 = _os_log_type_enabled(uVar16,0x10);
                                        if (cVar13 == '\0') goto LAB_10045c4cf;
                                        local_4a = (undefined2)uVar14;
                                        uStack_48 = (undefined2)(uVar14 >> 0x10);
                                        goto LAB_10045cbae;
                                      }
                                      if (local_82 != 0) {
                                        local_c0 = local_cc;
                                        unaff_RBX = (undefined1 *)0x0;
                                        do {
                                          local_80 = 0;
                                          local_90 = 0;
                                          if (local_74 != '\0') {
                                            uVar19 = FUN_10045b676(local_60,local_61,local_70);
                                            puVar29 = (undefined1 *)(uVar19 & 0xffffffff);
                                            if ((int)uVar19 != 0) {
                                              if ((int)uVar19 == -0x80) goto LAB_10045c4cf;
                                              uVar16 = FUN_1001cc310();
                                              cVar13 = _os_log_type_enabled(uVar16,0x10);
                                              if (cVar13 == '\0') goto LAB_10045c4cf;
                                              local_4a = (undefined2)uVar19;
                                              uStack_48 = (undefined2)(uVar19 >> 0x10);
                                              goto LAB_10045cbae;
                                            }
                                          }
                                          if (0xf < bVar10) {
                                            uVar19 = FUN_10045b676(local_60,bVar7,&local_80);
                                            puVar29 = (undefined1 *)(uVar19 & 0xffffffff);
                                            if ((int)uVar19 != 0) {
                                              if ((int)uVar19 == -0x80) goto LAB_10045c4cf;
                                              uVar16 = FUN_1001cc310();
                                              cVar13 = _os_log_type_enabled(uVar16,0x10);
                                              if (cVar13 == '\0') goto LAB_10045c4cf;
                                              local_4a = (undefined2)uVar19;
                                              uStack_48 = (undefined2)(uVar19 >> 0x10);
                                              goto LAB_10045cbae;
                                            }
                                          }
                                          cVar13 = '\0';
                                          if ((char)local_a0 != '\0') {
                                            uVar19 = FUN_10045b676(local_60,local_a0 & 0xff,
                                                                   &local_90);
                                            puVar29 = (undefined1 *)(uVar19 & 0xffffffff);
                                            cVar13 = (char)local_a0;
                                            if ((int)uVar19 != 0) {
                                              if ((int)uVar19 == -0x80) goto LAB_10045c4cf;
                                              uVar16 = FUN_1001cc310();
                                              cVar13 = _os_log_type_enabled(uVar16,0x10);
                                              if (cVar13 == '\0') goto LAB_10045c4cf;
                                              local_4a = (undefined2)uVar19;
                                              uStack_48 = (undefined2)(uVar19 >> 0x10);
                                              goto LAB_10045cbae;
                                            }
                                          }
                                          if ((cVar13 != '\0') &&
                                             (((0xf < bVar10 && (local_72 == 0)) && (local_92 == 0))
                                             )) {
                                            local_58 = local_c0;
                                            uStack_50 = (undefined4)local_80;
                                            local_4c = (undefined2)((ulong)local_80 >> 0x20);
                                            local_4a = (undefined2)((ulong)local_80 >> 0x30);
                                            uStack_48 = (undefined2)local_90;
                                            uStack_46 = (undefined4)(local_90 >> 0x10);
                                            uStack_42 = (undefined2)(local_90 >> 0x30);
                                            FUN_100465fe6(puVar1,local_c0,&local_58);
                                          }
                                          uVar14 = (int)unaff_RBX + 1;
                                          unaff_RBX = (undefined1 *)(ulong)uVar14;
                                        } while ((ushort)uVar14 < local_82);
                                      }
                                      local_a4 = local_a4 + 1;
                                      puVar29 = (undefined1 *)0x0;
                                    } while (local_a4 != local_bc);
                                  }
                                }
                                goto LAB_10045cdc3;
                              }
                              uVar16 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar16,0x10);
                              if (cVar13 != '\0') {
                                pcVar22 = "indexSize == 0 || indexSize == 4 || indexSize == 8";
                                goto LAB_10045cd0e;
                              }
                            }
                            else {
                              uVar16 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar16,0x10);
                              if (cVar13 != '\0') {
                                pcVar22 = 
                                "baseOffsetSize == 0 || baseOffsetSize == 4 || baseOffsetSize == 8";
                                goto LAB_10045cd0e;
                              }
                            }
                          }
                          else {
                            uVar16 = FUN_1001cc310();
                            cVar13 = _os_log_type_enabled(uVar16,0x10);
                            if (cVar13 != '\0') {
                              pcVar22 = "lengthSize == 0 || lengthSize == 4 || lengthSize == 8";
                              goto LAB_10045cd0e;
                            }
                          }
                        }
                        else {
                          uVar16 = FUN_1001cc310();
                          cVar13 = _os_log_type_enabled(uVar16,0x10);
                          if (cVar13 != '\0') {
                            pcVar22 = "offsetSize == 0 || offsetSize == 4 || offsetSize == 8";
LAB_10045cd0e:
                            uStack_50 = 1;
                            local_54 = 0x7a0a90;
                            local_4c = 0x822;
                            local_58 = 0x8220202;
                            local_4a = SUB82(pcVar22,0);
                            uStack_48 = (undefined2)((ulong)pcVar22 >> 0x10);
                            uStack_46 = (undefined4)((ulong)pcVar22 >> 0x20);
                            __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",
                                                &local_58,0x16);
                          }
                        }
LAB_10045c76e:
                        FUN_1001782e9(0,0);
                        puVar29 = &DAT_ffffff30;
                        goto LAB_10045c77d;
                      }
                    }
                    else {
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_4a = (undefined2)uVar14;
                        uStack_48 = (undefined2)(uVar14 >> 0x10);
LAB_10045cbae:
                        uStack_50 = 1;
                        local_54 = 0x7a0a90;
                        local_4c = 0x400;
                        local_58 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
LAB_10045c4cf:
                      if (((int)puVar29 != -0x80) && ((int)puVar29 != 0)) {
LAB_10045c77d:
                        uVar16 = FUN_1001cc310();
                        cVar13 = _os_log_type_enabled(uVar16,0x10);
                        if (cVar13 != '\0') {
                          local_4a = SUB82(puVar29,0);
                          uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                          goto LAB_10045ce68;
                        }
                      }
                    }
                  }
                  goto LAB_10045cdc3;
                }
                uVar14 = FUN_10045b7ae(*local_60,&local_90);
                puVar29 = (undefined1 *)(ulong)uVar14;
                if (uVar14 == 0) {
                  uVar14 = FUN_10045b3c2(*local_60,local_70);
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if (uVar14 == 0) {
                    uVar14 = FUN_10045b3c2(*local_60,&local_80);
                    puVar29 = (undefined1 *)(ulong)uVar14;
                    if (uVar14 == 0) {
                      puVar29 = &DAT_ffffff30;
                      if ((int)local_80 == 0x70696374) goto LAB_10045cdcc;
                      goto LAB_10045c67d;
                    }
                    if (uVar14 != 0xffffff80) {
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_4a = (undefined2)uVar14;
                        uStack_48 = (undefined2)(uVar14 >> 0x10);
                        goto LAB_10045c661;
                      }
                      goto LAB_10045c670;
                    }
                  }
                  else if (uVar14 != 0xffffff80) {
                    uVar16 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar13 != '\0') {
                      local_4a = (undefined2)uVar14;
                      uStack_48 = (undefined2)(uVar14 >> 0x10);
                      goto LAB_10045c661;
                    }
                    goto LAB_10045c670;
                  }
                }
                else if (uVar14 != 0xffffff80) {
                  uVar16 = FUN_1001cc310();
                  cVar13 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar13 != '\0') {
                    local_4a = (undefined2)uVar14;
                    uStack_48 = (undefined2)(uVar14 >> 0x10);
LAB_10045c661:
                    local_4c = 0x400;
                    uStack_50 = 1;
                    local_54 = 0x7a0a90;
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
LAB_10045c670:
                  if ((int)puVar29 == 0) goto LAB_10045cdcc;
LAB_10045c67d:
                  uVar16 = FUN_1001cc310();
                  cVar13 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar13 == '\0') goto LAB_10045cdc3;
                  local_4a = SUB82(puVar29,0);
                  uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                  goto LAB_10045ce68;
                }
LAB_10045d4af:
                puVar29 = (undefined1 *)0xffffff80;
                break;
              }
              if ((long)local_b0 < 0x10) {
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = 0x900;
                  uStack_48 = 0x7d;
                  uStack_46 = 1;
                  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                unaff_RBX = (undefined1 *)0xffffffd9;
                puVar29 = unaff_RBX;
LAB_10045cda6:
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_4a = SUB82(puVar29,0);
                  uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                  goto LAB_10045ce68;
                }
              }
              else {
                uVar14 = FUN_10045b3c2(*local_60);
                puVar29 = (undefined1 *)(ulong)uVar14;
                if (uVar14 != 0xffffff80) {
                  if (uVar14 != 0) {
                    uVar16 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar13 != '\0') {
                      local_4a = (undefined2)uVar14;
                      uStack_48 = (undefined2)(uVar14 >> 0x10);
LAB_10045c915:
                      uStack_50 = 1;
                      local_54 = 0x7a0a90;
                      local_4c = 0x400;
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                          &local_58,0x12);
                    }
LAB_10045cd9d:
                    if ((int)puVar29 == 0) goto LAB_10045cdcc;
                    goto LAB_10045cda6;
                  }
                  uVar14 = FUN_10045b3c2(*local_60,&local_80);
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if (uVar14 != 0xffffff80) {
                    if (uVar14 != 0) {
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_4a = (undefined2)uVar14;
                        uStack_48 = (undefined2)(uVar14 >> 0x10);
                        goto LAB_10045c915;
                      }
                      goto LAB_10045cd9d;
                    }
                    puVar29 = (undefined1 *)0x0;
                    if (local_70[0] != 0x68656963) {
                      unaff_RBX = &DAT_ffffff30;
                      puVar29 = unaff_RBX;
                      if (uVar19 != 0x10) {
                        lVar21 = uVar19 - 0xc;
                        do {
                          uVar14 = FUN_10045b3c2(*local_60,local_70);
                          puVar29 = (undefined1 *)(ulong)uVar14;
                          if (uVar14 != 0) {
                            if (uVar14 == 0xffffff80) goto LAB_10045cdc3;
                            uVar16 = FUN_1001cc310();
                            cVar13 = _os_log_type_enabled(uVar16,0x10);
                            if (cVar13 == '\0') goto LAB_10045cd9d;
                            local_4a = (undefined2)uVar14;
                            uStack_48 = (undefined2)(uVar14 >> 0x10);
                            goto LAB_10045c915;
                          }
                          if (local_70[0] == 0x68656963) goto LAB_10045cdc3;
                          lVar21 = lVar21 + -4;
                          puVar29 = unaff_RBX;
                        } while (4 < lVar21);
                      }
                      goto LAB_10045cda6;
                    }
                  }
                }
              }
            }
            else {
              if (local_c8 != 0x69726566) {
                if (local_c8 == 0x6d657461) {
                  uVar14 = FUN_10045b7ae(*local_60,local_70);
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if (uVar14 != 0xffffff80) {
                    if (uVar14 == 0) {
                      if ((long)uVar19 < 0xd) goto LAB_10045cdc3;
                      uVar14 = FUN_10045b864(local_60,uVar19 - 0xc,0);
                      puVar29 = (undefined1 *)(ulong)uVar14;
                    }
                    else {
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = 0x7a0a90;
                        uStack_50 = 1;
                        local_4c = 0x400;
                        local_4a = (undefined2)uVar14;
                        uStack_48 = (undefined2)(uVar14 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                    if (((int)puVar29 != -0x80) && ((int)puVar29 != 0)) {
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_4a = SUB82(puVar29,0);
                        uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                        goto LAB_10045ce68;
                      }
                    }
                  }
                }
                else {
                  if (local_c8 != 0x7069746d) goto LAB_10045cdcc;
                  uVar14 = FUN_10045b7ae(*local_60,&local_90);
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if (uVar14 != 0xffffff80) {
                    if (uVar14 == 0) {
                      if ((char)local_90 == '\0') {
                        uVar14 = FUN_10045b308(*local_60,&local_80);
                        puVar29 = (undefined1 *)(ulong)uVar14;
                        if (uVar14 != 0xffffff80) {
                          if (uVar14 == 0) {
                            uVar14 = (uint)(ushort)local_80;
                            goto LAB_10045c847;
                          }
                          uVar16 = FUN_1001cc310();
                          cVar13 = _os_log_type_enabled(uVar16,0x10);
                          if (cVar13 != '\0') {
                            local_4a = (undefined2)uVar14;
                            uStack_48 = (undefined2)(uVar14 >> 0x10);
                            goto LAB_10045cbf4;
                          }
                          goto LAB_10045c508;
                        }
                      }
                      else {
                        uVar15 = FUN_10045b3c2(*local_60,local_70);
                        puVar29 = (undefined1 *)(ulong)uVar15;
                        if (uVar15 != 0xffffff80) {
                          uVar14 = local_70[0];
                          if (uVar15 != 0) {
                            uVar16 = FUN_1001cc310();
                            cVar13 = _os_log_type_enabled(uVar16,0x10);
                            if (cVar13 != '\0') {
                              local_4a = (undefined2)uVar15;
                              uStack_48 = (undefined2)(uVar15 >> 0x10);
                              goto LAB_10045cbf4;
                            }
                            goto LAB_10045c508;
                          }
LAB_10045c847:
                          *(uint *)(local_60 + 1) = uVar14;
                          puVar29 = (undefined1 *)0x0;
                        }
                      }
                    }
                    else {
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_4a = (undefined2)uVar14;
                        uStack_48 = (undefined2)(uVar14 >> 0x10);
LAB_10045cbf4:
                        local_4c = 0x400;
                        uStack_50 = 1;
                        local_54 = 0x7a0a90;
                        local_58 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
LAB_10045c508:
                      if ((int)puVar29 == 0) goto LAB_10045cdcc;
                      uVar16 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar13 != '\0') {
                        local_4a = SUB82(puVar29,0);
                        uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                        goto LAB_10045ce68;
                      }
                    }
                  }
                }
                goto LAB_10045cdc3;
              }
              uVar14 = FUN_10045b7ae(*local_60,local_70);
              puVar29 = (undefined1 *)(ulong)uVar14;
              if (uVar14 == 0xffffff80) goto LAB_10045cdc3;
              if (uVar14 == 0) {
                if ((byte)local_70[0] < 2) {
                  if ((long)uVar19 < 0xd) goto LAB_10045cdc3;
                  uVar14 = FUN_10045b864(local_60,uVar19 - 0xc,2 - (uint)((byte)local_70[0] == 0));
                  puVar29 = (undefined1 *)(ulong)uVar14;
                  if ((uVar14 != 0xffffff80) && (uVar14 != 0)) {
                    uVar16 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar13 != '\0') {
                      local_4a = (undefined2)uVar14;
                      uStack_48 = (undefined2)(uVar14 >> 0x10);
                      goto LAB_10045cb68;
                    }
                  }
                  goto LAB_10045c496;
                }
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = 0x913;
                  uStack_48 = 0x7d;
                  uStack_46 = 1;
                  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                puVar29 = &DAT_ffffff30;
              }
              else {
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_4a = (undefined2)uVar14;
                  uStack_48 = (undefined2)(uVar14 >> 0x10);
LAB_10045cb68:
                  local_4c = 0x400;
                  uStack_50 = 1;
                  local_54 = 0x7a0a90;
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
LAB_10045c496:
                if (((int)puVar29 == -0x80) || ((int)puVar29 == 0)) goto LAB_10045cdc3;
              }
              uVar16 = FUN_1001cc310();
              cVar13 = _os_log_type_enabled(uVar16,0x10);
              if (cVar13 != '\0') {
                local_4a = SUB82(puVar29,0);
                uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
LAB_10045ce68:
                local_4c = 0x400;
                uStack_50 = 1;
                local_54 = 0x7a0a90;
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
            }
LAB_10045cdc3:
            if ((int)puVar29 != 0) {
              if ((int)puVar29 != -0x80) {
                uVar16 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar16,0x10);
                if (cVar13 != '\0') {
                  local_4a = SUB82(puVar29,0);
                  uStack_48 = (undefined2)((ulong)puVar29 >> 0x10);
                  goto LAB_10045d30a;
                }
              }
              break;
            }
          }
LAB_10045cdcc:
          uVar14 = FUN_10017d068(*local_60,local_b0 + local_e0);
          puVar29 = (undefined1 *)(ulong)uVar14;
          if (uVar14 != 0) {
            if (uVar14 != 0xffffff80) {
              uVar16 = FUN_1001cc310();
              cVar13 = _os_log_type_enabled(uVar16,0x10);
              if (cVar13 != '\0') {
                local_4a = (undefined2)uVar14;
                uStack_48 = (undefined2)(uVar14 >> 0x10);
                goto LAB_10045d30a;
              }
            }
            break;
          }
          uVar14 = FUN_10017cfbe(*local_60,&local_e0);
          puVar29 = (undefined1 *)(ulong)uVar14;
          if (uVar14 != 0) {
            if (uVar14 != 0xffffff80) {
              uVar16 = FUN_1001cc310();
              cVar13 = _os_log_type_enabled(uVar16,0x10);
              if (cVar13 != '\0') {
                local_4a = (undefined2)uVar14;
                uStack_48 = (undefined2)(uVar14 >> 0x10);
                goto LAB_10045d30a;
              }
            }
            break;
          }
          puVar29 = (undefined1 *)0x0;
          lVar21 = local_b8 - local_b0;
          bVar5 = (long)local_b0 <= local_b8;
          local_b8 = lVar21;
        } while (lVar21 != 0 && bVar5);
      }
    }
    else {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_4a = (undefined2)uVar14;
        uStack_48 = (undefined2)(uVar14 >> 0x10);
LAB_10045d30a:
        uStack_50 = 1;
        local_54 = 0x7a0a90;
        local_4c = 0x400;
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar29;
}

