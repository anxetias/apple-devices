// name: FUN_10060c116
// address: 10060c116

/* WARNING: Removing unreachable block (ram,0x00010060c7c1) */
/* WARNING: Removing unreachable block (ram,0x00010060c7d3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10060c116(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 *****pppppuVar3;
  code *pcVar4;
  double dVar5;
  byte bVar6;
  ushort *puVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  short sVar12;
  char cVar13;
  char cVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  short sVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  int *piVar23;
  undefined8 uVar24;
  uint *puVar25;
  long *plVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  uint *puVar31;
  uint *puVar32;
  long lVar33;
  long lVar34;
  undefined8 ******ppppppuVar35;
  int iVar36;
  undefined7 uVar39;
  long *plVar37;
  char *pcVar38;
  long *plVar40;
  undefined8 ******ppppppuVar41;
  undefined8 ******ppppppuVar42;
  undefined8 *puVar43;
  uint *puVar44;
  uint *puVar45;
  size_t sVar46;
  int *piVar47;
  undefined8 *puVar48;
  long lVar49;
  int *piVar50;
  bool bVar51;
  undefined1 auVar52 [16];
  undefined8 in_stack_fffffffffffffd98;
  uint **ppuVar53;
  undefined8 in_stack_fffffffffffffda0;
  undefined4 uVar54;
  undefined8 *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  long local_200;
  long local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  long *local_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  undefined8 local_198;
  uint *local_190;
  undefined8 *****local_188;
  undefined8 *****local_180;
  long lStack_178;
  int iStack_16c;
  long local_168;
  int *local_160;
  int *local_158;
  long local_150;
  uint *local_148;
  uint *puStack_140;
  uint *local_138;
  undefined8 *local_130;
  uint *local_128;
  undefined4 local_11c;
  uint *local_118;
  uint *local_110;
  uint *local_108;
  long local_100;
  byte local_f2;
  byte local_f1;
  long local_f0;
  undefined4 local_e4;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  uint *local_c0;
  int *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  uint *local_98;
  undefined8 local_90;
  uint local_88;
  undefined1 uStack_84;
  undefined2 uStack_83;
  char cStack_81;
  undefined4 local_80;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  ushort local_68;
  undefined2 uStack_66;
  undefined8 uStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  short sStack_54;
  undefined2 uStack_52;
  uint *local_50;
  undefined2 local_48;
  int iStack_46;
  undefined2 uStack_42;
  undefined2 uStack_40;
  long local_38;
  
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffd98 >> 0x20);
  uVar54 = (undefined4)((ulong)in_stack_fffffffffffffda0 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar27 = *(long *)(param_1 + 0x10);
  lVar49 = *(long *)(param_1 + 0x18);
  local_d8 = *(long *)(param_1 + 0x20);
  local_a0 = param_1;
  piVar23 = (int *)FUN_10048604a(lVar49);
  local_e0 = lVar49;
  local_1a0 = FUN_10048bbac(lVar49,10,0);
  lVar49 = *(long *)(lVar27 + 0x30);
  local_158 = (int *)FUN_10048604a(lVar49);
  local_f0 = lVar49;
  local_d0 = FUN_10048bbac(lVar49,0xb,0);
  local_138 = (uint *)0x0;
  local_148 = (uint *)0x0;
  puStack_140 = (uint *)0x0;
  local_220 = &local_218;
  local_218 = 0;
  uStack_210 = 0;
  local_188 = &local_180;
  local_180 = (undefined8 ******)0x0;
  lStack_178 = 0;
  local_168 = 0;
  local_1d8 = &local_1d0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  if (*(char *)(lVar27 + 0x3a2) == '\0') {
    local_198 = 0;
  }
  else {
    local_198 = CONCAT71((int7)((ulong)local_1d8 >> 8),(*(byte *)(lVar27 + 0x166e0) & 0xc) != 0);
  }
  if (*(char *)(local_d8 + 0xd30) == '\0') {
    local_c8 = (uint *)((ulong)local_c8._4_4_ << 0x20);
  }
  else {
    param_4 = CONCAT71((int7)((ulong)param_4 >> 8),*(char *)(local_d8 + 0x28a) != '\0');
    local_c8 = (uint *)CONCAT44(local_c8._4_4_,(int)param_4);
  }
  uVar39 = (undefined7)((ulong)param_4 >> 8);
  if ((*(char *)(local_d8 + 0xd31) == '\0') || (*(char *)(local_d8 + 0x2da) == '\0')) {
    bVar51 = *(char *)(lVar27 + 0x14d2a) == '\0';
    uVar24 = CONCAT71(uVar39,bVar51);
    if (bVar51 && (byte)local_c8 == '\0') {
      uVar28 = CONCAT71(uVar39,*(undefined1 *)(local_a0 + 0x3c)) & 0xffffffffffffff02;
      uVar24 = CONCAT71((int7)(uVar28 >> 8),(byte)uVar28 >> 1);
    }
    local_e4 = 0;
    local_11c = (undefined4)uVar24;
  }
  else {
    local_e4 = (undefined4)CONCAT71((int7)((ulong)local_d8 >> 8),1);
    local_11c = 0;
    uVar24 = CONCAT71(uVar39,1);
  }
  local_c0 = *(uint **)(local_a0 + 0x38);
  local_150 = 0;
  local_1f0 = &local_1e8;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1b8 = &local_1b0;
  local_1b0 = 0;
  lStack_1a8 = 0;
  local_f2 = (byte)uVar24;
  if (*(char *)(local_a0 + 0x4dc) == '\0') {
    local_100 = 0;
  }
  else {
    local_100 = *(long *)(lVar27 + 0x16640);
  }
  local_160 = piVar23;
  local_208 = (double)FUN_1001ebd46();
  if (local_e0 == 0) {
LAB_10060c666:
    uVar24 = FUN_1001cc310();
    cVar13 = _os_log_type_enabled(uVar24,0x10);
    if (cVar13 != '\0') {
      pcVar38 = "TrackDataIsValid(sourceTrackData)";
LAB_10060c77e:
      uStack_5c = 0x822;
      uStack_64._4_4_ = 1;
      uStack_64._0_4_ = 0x7a0a90;
      uStack_66 = 0x822;
      local_68 = 0x202;
      uStack_5a = SUB82(pcVar38,0);
      uStack_58 = (undefined2)((ulong)pcVar38 >> 0x10);
      uStack_56 = (undefined2)((ulong)pcVar38 >> 0x20);
      sStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
  }
  else {
    if (*(int *)(local_e0 + 0x80) != 0x74646174) {
      uVar24 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar24,0x10);
      if (cVar13 != '\0') {
        local_68 = 0x202;
        uStack_66 = 0x822;
        uStack_64._0_4_ = 0x7ab58c;
        uStack_64._4_4_ = 1;
        uStack_5c = 0x822;
        uStack_5a = 0xec03;
        uStack_58 = 0x7a;
        uStack_56 = 1;
        sStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar13 = FUN_1001782e9(0,1);
      if (cVar13 == '\0') goto LAB_10060c666;
    }
    if (local_f0 == 0) {
LAB_10060c6af:
      uVar24 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar24,0x10);
      if (cVar13 != '\0') {
        pcVar38 = "TrackDataIsValid(destTrackData)";
        goto LAB_10060c77e;
      }
    }
    else {
      if (*(int *)(local_f0 + 0x80) != 0x74646174) {
        uVar24 = FUN_1001cc310();
        cVar13 = _os_log_type_enabled(uVar24,0x10);
        if (cVar13 != '\0') {
          local_68 = 0x202;
          uStack_66 = 0x822;
          uStack_64._0_4_ = 0x7ab58c;
          uStack_64._4_4_ = 1;
          uStack_5c = 0x822;
          uStack_5a = 0xec03;
          uStack_58 = 0x7a;
          uStack_56 = 1;
          sStack_54 = 0;
          __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        cVar13 = FUN_1001782e9(0,1);
        if (cVar13 == '\0') goto LAB_10060c6af;
      }
      if (local_160 == (int *)0x0) {
LAB_10060c6f8:
        uVar24 = FUN_1001cc310();
        cVar13 = _os_log_type_enabled(uVar24,0x10);
        if (cVar13 != '\0') {
          pcVar38 = "PlaylistIsValid(sourcePrimaryPlaylist)";
          goto LAB_10060c77e;
        }
      }
      else {
        if (*local_160 != 0x706c7374) {
          uVar24 = FUN_1001cc310();
          cVar13 = _os_log_type_enabled(uVar24,0x10);
          if (cVar13 != '\0') {
            local_68 = 0x202;
            uStack_66 = 0x822;
            uStack_64._0_4_ = 0x7ab58c;
            uStack_64._4_4_ = 1;
            uStack_5c = 0x822;
            uStack_5a = 0x2d50;
            uStack_58 = 0x7b;
            uStack_56 = 1;
            sStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          cVar13 = FUN_1001782e9(0,1);
          if (cVar13 == '\0') goto LAB_10060c6f8;
        }
        if (local_158 != (int *)0x0) {
          if (*local_158 != 0x706c7374) {
            uVar24 = FUN_1001cc310();
            cVar13 = _os_log_type_enabled(uVar24,0x10);
            if (cVar13 != '\0') {
              local_68 = 0x202;
              uStack_66 = 0x822;
              uStack_64._0_4_ = 0x7ab58c;
              uStack_64._4_4_ = 1;
              uStack_5c = 0x822;
              uStack_5a = 0x2d50;
              uStack_58 = 0x7b;
              uStack_56 = 1;
              sStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            cVar13 = FUN_1001782e9(0,1);
            if (cVar13 == '\0') goto LAB_10060c73e;
          }
          FUN_100602d40(local_a0,0x7472616b,0);
          FUN_100313e0b(local_f0);
          if (local_100 != 0) {
            FUN_1005a44e2(local_100);
          }
          FUN_10058453f(local_e0,0,0);
          *(undefined4 *)(lVar27 + 0x1539c) = *(undefined4 *)(lVar27 + 0x15398);
          uVar30 = CONCAT44(uVar22,(uint)*(byte *)(local_d8 + 0x39b));
          local_a8 = lVar27;
          uVar24 = FUN_1002bedfb(local_e0,*(undefined1 *)(local_d8 + 0x319),
                                 (int)*(char *)(local_d8 + 0x31a),*(undefined1 *)(lVar27 + 0x347),
                                 *(undefined1 *)(lVar27 + 0x348),*(undefined2 *)(lVar27 + 0x34a),
                                 uVar30,CONCAT44(uVar54,(uint)*(byte *)(local_d8 + 0x2a2)),
                                 lVar27 + 0x72c,lVar27 + 0x458);
          *(undefined8 *)(local_a0 + 0x3c0) = uVar24;
          ppuVar53 = (uint **)CONCAT44((int)((ulong)uVar30 >> 0x20),
                                       (uint)*(ushort *)(local_a8 + 0x34a));
          uVar24 = FUN_1002bf5b5(local_e0,*(undefined1 *)(local_d8 + 0x329),
                                 (int)*(char *)(local_d8 + 0x32a),*(undefined1 *)(local_d8 + 0x32b),
                                 *(undefined1 *)(local_a8 + 0x347),*(undefined1 *)(local_a8 + 0x348)
                                 ,ppuVar53,*(undefined1 *)(local_d8 + 0x39b),
                                 *(undefined1 *)(local_d8 + 0x2a2),lVar27 + 0x72c,lVar27 + 0x458);
          *(undefined8 *)(local_a0 + 0x3c8) = uVar24;
          if (*(int *)(local_e0 + 0x9c) == 0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            puVar25 = DAT_1008c75b8;
            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
            iVar36 = 0x458;
            if (cVar13 != '\0') {
              local_68 = 0;
              __os_log_impl(0x100000000,puVar25,1,"sync> not syncing because library is empty",
                            &local_68,2);
            }
            local_90 = (int *)0x0;
          }
          else {
            local_b8 = *(int **)(local_a0 + 0x18);
            lVar27 = *(long *)(local_a0 + 0x20);
            if (*(char *)(lVar27 + 0x31c) != '\0') {
              if (*(char *)(lVar27 + 0x28b) == '\x01') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  local_68 = 0;
                  __os_log_impl(0x100000000,puVar25,1,"sync> syncing all music tracks",&local_68,2);
                }
              }
              else {
                uVar24 = *(undefined8 *)(lVar27 + 0x7c0);
                FUN_1001b7b04(&local_88,"music tracks");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed65;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = SUB82(&local_68,0);
                uVar17 = local_48;
                iStack_46 = (int)((ulong)&local_68 >> 0x10);
                iVar36 = iStack_46;
                uStack_42 = (undefined2)((ulong)&local_68 >> 0x30);
                uVar9 = uStack_42;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060ca34:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060ca34;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x7c8);
                FUN_1001b7b04(&local_88,"music playlists");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed9a;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060caa1:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060caa1;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 2000);
                FUN_1001b7b04(&local_88,"music artists");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61edcf;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060cb0e:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060cb0e;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x7d8);
                FUN_1001b7b04(&local_88,"music albums");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ee4b;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060cb7b:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060cb7b;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x7e0);
                FUN_1001b7b04(&local_68,"music genres");
                FUN_10061eec7(uVar24,&local_68);
                FUN_1001b7a50(&local_68);
              }
            }
            if (*(char *)(lVar27 + 0x318) != '\0') {
              if (*(char *)(lVar27 + 0x319) == '\x01') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  local_68 = 0;
                  __os_log_impl(0x100000000,puVar25,1,"sync> syncing all movie tracks",&local_68,2);
                }
              }
              else {
                uVar24 = *(undefined8 *)(lVar27 + 0x7e8);
                FUN_1001b7b04(&local_88,"movie tracks");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed65;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = SUB82(&local_68,0);
                uVar17 = local_48;
                iStack_46 = (int)((ulong)&local_68 >> 0x10);
                iVar36 = iStack_46;
                uStack_42 = (undefined2)((ulong)&local_68 >> 0x30);
                uVar9 = uStack_42;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060cc96:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060cc96;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x7f0);
                FUN_1001b7b04(&local_88,"movie playlists");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed9a;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060cd03:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060cd03;
                }
                FUN_1001b7a50(&local_88);
              }
            }
            if (*(char *)(lVar27 + 0x328) != '\0') {
              if (*(char *)(lVar27 + 0x329) == '\x01') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  local_68 = 0;
                  __os_log_impl(0x100000000,puVar25,1,"sync> syncing all TV show tracks",&local_68,2
                               );
                }
              }
              else {
                uVar24 = *(undefined8 *)(lVar27 + 0x7f8);
                FUN_1001b7b04(&local_68,"TV shows");
                FUN_10061eec7(uVar24,&local_68);
                FUN_1001b7a50(&local_68);
                uVar24 = *(undefined8 *)(lVar27 + 0x800);
                FUN_1001b7b04(&local_88,"TV show tracks");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed65;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = SUB82(&local_68,0);
                uVar17 = local_48;
                iStack_46 = (int)((ulong)&local_68 >> 0x10);
                iVar36 = iStack_46;
                uStack_42 = (undefined2)((ulong)&local_68 >> 0x30);
                uVar9 = uStack_42;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060ce1e:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060ce1e;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x808);
                FUN_1001b7b04(&local_88,"TV show albums");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ee4b;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060ce8b:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060ce8b;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x810);
                FUN_1001b7b04(&local_88,"TV show playlists");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed9a;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060cef8:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060cef8;
                }
                FUN_1001b7a50(&local_88);
              }
            }
            if (*(char *)(lVar27 + 0x2da) != '\0') {
              if (*(char *)(lVar27 + 0x2d9) == '\x01') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  local_68 = 0;
                  __os_log_impl(0x100000000,puVar25,1,"sync> syncing all podcast tracks",&local_68,2
                               );
                }
              }
              else {
                uVar24 = *(undefined8 *)(lVar27 + 0x818);
                FUN_1001b7b04(&local_88,"podcast channels");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61f0a6;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = SUB82(&local_68,0);
                uVar17 = local_48;
                iStack_46 = (int)((ulong)&local_68 >> 0x10);
                iVar36 = iStack_46;
                uStack_42 = (undefined2)((ulong)&local_68 >> 0x30);
                uVar9 = uStack_42;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060cfe4:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060cfe4;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x820);
                FUN_1001b7b04(&local_88,"podcast tracks");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed65;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060d051:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060d051;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x828);
                FUN_1001b7b04(&local_88,"podcast playlists");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed9a;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060d0be:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060d0be;
                }
                FUN_1001b7a50(&local_88);
              }
            }
            if (*(char *)(lVar27 + 0x39c) != '\0') {
              if (*(char *)(lVar27 + 0x39d) == '\x01') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  local_68 = 0;
                  __os_log_impl(0x100000000,puVar25,1,"sync> syncing all audiobook tracks",&local_68
                                ,2);
                }
              }
              else {
                uVar24 = *(undefined8 *)(lVar27 + 0x830);
                FUN_1001b7b04(&local_88,"audiobook tracks");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed65;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = SUB82(&local_68,0);
                uVar17 = local_48;
                iStack_46 = (int)((ulong)&local_68 >> 0x10);
                iVar36 = iStack_46;
                uStack_42 = (undefined2)((ulong)&local_68 >> 0x30);
                uVar9 = uStack_42;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060d1a9:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060d1a9;
                }
                FUN_1001b7a50(&local_88);
                uVar24 = *(undefined8 *)(lVar27 + 0x838);
                FUN_1001b7b04(&local_88,"audiobook playlists");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed9a;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = uVar17;
                iStack_46 = iVar36;
                uStack_42 = uVar9;
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar49 = 0x20;
LAB_10060d216:
                  (**(code **)(*(long *)puVar7 + lVar49))();
                }
                else {
                  lVar49 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060d216;
                }
                FUN_1001b7a50(&local_88);
              }
            }
            if (*(char *)(lVar27 + 0x39e) != '\0') {
              if (*(char *)(lVar27 + 0x39f) == '\x01') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  local_68 = 0;
                  __os_log_impl(0x100000000,puVar25,1,"sync> syncing all book tracks",&local_68,2);
                }
              }
              else {
                uVar24 = *(undefined8 *)(lVar27 + 0x840);
                FUN_1001b7b04(&local_88,"book tracks");
                local_68 = 0xe10;
                uStack_66 = 0x87;
                uStack_64._0_4_ = 1;
                uStack_64._4_4_ = 0x61ed65;
                uStack_5c = 1;
                uStack_5a = 0;
                local_48 = SUB82(&local_68,0);
                iStack_46 = (int)((ulong)&local_68 >> 0x10);
                uStack_42 = (undefined2)((ulong)&local_68 >> 0x30);
                FUN_10061eb39(uVar24,&local_88,&local_68,local_b8);
                puVar7 = (ushort *)CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                if (puVar7 == &local_68) {
                  lVar27 = 0x20;
LAB_10060d2fe:
                  (**(code **)(*(long *)puVar7 + lVar27))();
                }
                else {
                  lVar27 = 0x28;
                  if (puVar7 != (ushort *)0x0) goto LAB_10060d2fe;
                }
                FUN_1001b7a50(&local_88);
              }
            }
            FUN_10031c15f(local_e0);
            puVar25 = (uint *)FUN_100315ede(local_e0);
            local_b0 = (uint *)(CONCAT44(local_b0._4_4_,(int)local_c0) & 0xffffffff00000001 | 0x52);
            local_90 = (int *)((ulong)local_90._4_4_ << 0x20);
            for (; puVar25 != (uint *)0x0; puVar25 = (uint *)FUN_100316031(puVar25)) {
              if (((((puVar25[0xa6] & 2) == 0) ||
                   (*(char *)(*(long *)(local_a0 + 0x10) + 0x372) == '\0')) &&
                  (((short)puVar25[4] != 0x20 ||
                   (*(char *)(*(long *)(local_a0 + 0x10) + 0x394) == '\0')))) &&
                 (uVar19 = FUN_10061d1d6(local_a0,puVar25,1), local_98 = puVar25, uVar19 != 0)) {
                if (*(char *)(local_a0 + 0x4e0) != '\0') {
                  if ((uVar19 & 0xfe182321) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing music from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 & 0x402) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing movies from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 & 0x40) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing TV shows from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 & 4) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing podcasts from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 >> 0x15 & 1) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing iTunes U from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 & 0x1004000) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing tones from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 >> 0x10 & 1) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing booklets from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 & 0xc00000) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing books from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((uVar19 & 8) != 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing audiobooks from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                  if ((short)uVar19 < 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar31 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                    if (cVar13 != '\0') {
                      FUN_100486d8f(&local_88,puVar25);
                      uVar24 = FUN_1001b83ae(&local_88);
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7b2f9b;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = (undefined2)uVar24;
                      uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                      uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                      sStack_54 = (short)((ulong)uVar24 >> 0x30);
                      __os_log_impl(0x100000000,puVar31,2,
                                    "%{public}s> syncing rentals from playlist \"%{public}s\"");
                      FUN_1001b7a50(&local_88);
                      puVar25 = local_98;
                    }
                  }
                }
                plVar26 = (long *)FUN_100485529(puVar25);
                local_b8 = (int *)CONCAT44(local_b8._4_4_,uVar19);
                if (plVar26 != (long *)0x0) {
                  local_118 = (uint *)((ulong)local_118 & 0xffffffff00000000);
                  do {
                    lVar27 = FUN_100242590(plVar26);
                    if (lVar27 == 0) {
                      uVar24 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar24,0x10);
                      if (cVar13 != '\0') {
                        local_68 = 0x202;
                        uStack_66 = 0x822;
                        uStack_64._0_4_ = 0x7a0a90;
                        uStack_64._4_4_ = 1;
                        uStack_5c = 0x822;
                        uStack_5a = 0x581f;
                        uStack_58 = 0x7b;
                        uStack_56 = 1;
                        sStack_54 = 0;
                        __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)");
                      }
                      FUN_1001782e9(0,0);
                    }
                    else {
                      cVar13 = FUN_1002bd328(lVar27);
                      if (cVar13 != '\0') {
                        uVar19 = FUN_1004744bf(lVar27,0);
                        if (((uVar19 & (uint)local_b8) != 0) &&
                           ((short)local_b8 < 0 || -1 < (short)uVar19)) {
                          if ((short)uVar19 < 0) {
                            cVar13 = FUN_1002bd28d(plVar26[1]);
                            if (cVar13 == '\0') {
                              uVar24 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar24);
                              if (cVar13 != '\0') {
                                local_68 = 0x202;
                                uStack_66 = 0x822;
                                uStack_64._0_4_ = 0x7a0a90;
                                uStack_64._4_4_ = 1;
                                uStack_5c = 0x822;
                                uStack_5a = 0x51d7;
                                uStack_58 = 0x7f;
                                uStack_56 = 1;
                                sStack_54 = 0;
                                __os_log_error_impl(0x100000000,uVar24,0x10,
                                                    "%{public}s: (%{public}s)");
                              }
                              FUN_1001782e9(0);
                            }
                            if ((*(byte *)(local_a0 + 0x3b) & 0x80) == 0) goto LAB_10060dadb;
                            lVar49 = *(long *)(local_a0 + 0x10);
                            if (*(char *)(lVar49 + 0x37a) == '\0') {
LAB_10060db52:
                              if ((*(char *)(lVar49 + 0x37b) == '\0') ||
                                 (cVar13 = FUN_1002bd2f4(plVar26[1]), cVar13 == '\0'))
                              goto LAB_10060dadb;
                            }
                            else {
                              cVar13 = FUN_1002bd2bd(plVar26[1]);
                              if (cVar13 == '\0') {
                                lVar49 = *(long *)(local_a0 + 0x10);
                                goto LAB_10060db52;
                              }
                            }
                            cVar13 = FUN_1002be216(*(undefined8 *)
                                                    (*(long *)(local_a0 + 0x20) + 0x848));
LAB_10060e1c3:
                            if (cVar13 == '\0') goto LAB_10060dadb;
                          }
                          else {
                            if ((uVar19 >> 0x10 & 1) != 0) {
                              local_88 = local_88 & 0xffffff00;
                              lVar49 = *(long *)(local_a0 + 0x20);
                              uVar20 = FUN_1004744bf(plVar26[1],0);
                              if ((uVar20 >> 0x10 & 1) == 0) {
                                uVar24 = FUN_1001cc310();
                                cVar13 = _os_log_type_enabled(uVar24);
                                if (cVar13 != '\0') {
                                  local_68 = 0x202;
                                  uStack_66 = 0x822;
                                  uStack_64._0_4_ = 0x7a0a90;
                                  uStack_64._4_4_ = 1;
                                  uStack_5c = 0x822;
                                  uStack_5a = 0x5203;
                                  uStack_58 = 0x7f;
                                  uStack_56 = 1;
                                  sStack_54 = 0;
                                  __os_log_error_impl(0x100000000,uVar24,0x10,
                                                      "%{public}s: (%{public}s)");
                                }
                                FUN_1001782e9(0);
                              }
                              if (*(char *)(*(long *)(local_a0 + 0x10) + 0x39b) != '\0') {
                                uVar20 = FUN_1004744bf(plVar26[1],0);
                                if ((~uVar20 & 0x10002) == 0) {
                                  if (*(char *)(lVar49 + 0x399) != '\0') {
                                    cVar14 = FUN_1002be216(*(undefined8 *)(lVar49 + 0x7f0));
                                    cVar13 = '\x01';
                                    if (cVar14 != '\0') goto LAB_10060e1c3;
                                  }
                                  lVar29 = FUN_100317952(plVar26[1]);
                                  if (lVar29 == 0) {
                                    cVar13 = FUN_1002be216(*(undefined8 *)(lVar49 + 0x7e8));
                                    goto LAB_10060e1c3;
                                  }
                                }
                                else {
                                  uVar20 = FUN_1004744bf(plVar26[1],0);
                                  if ((~uVar20 & 0x10040) == 0) {
                                    if (*(char *)(lVar49 + 0x39a) != '\0') {
                                      if ((plVar26[1] != 0) &&
                                         (lVar29 = *(long *)(plVar26[1] + 0x28), lVar29 != 0)) {
                                        local_68 = 0xec0;
                                        uStack_66 = 0x87;
                                        uStack_64._0_4_ = 1;
                                        uStack_64._4_4_ = (undefined4)local_a0;
                                        uStack_5c = (undefined2)((ulong)local_a0 >> 0x20);
                                        uStack_5a = (undefined2)((ulong)local_a0 >> 0x30);
                                        uStack_58 = SUB82(plVar26,0);
                                        uStack_56 = (undefined2)((ulong)plVar26 >> 0x10);
                                        sStack_54 = (short)((ulong)plVar26 >> 0x20);
                                        uStack_52 = (undefined2)((ulong)plVar26 >> 0x30);
                                        local_50 = &local_88;
                                        local_48 = SUB82(&local_68,0);
                                        iStack_46 = (int)((ulong)&local_68 >> 0x10);
                                        uStack_42 = (undefined2)((ulong)&local_68 >> 0x30);
                                        FUN_1003a0178(lVar29,1,&local_68);
                                        puVar7 = (ushort *)
                                                 CONCAT26(uStack_42,CONCAT42(iStack_46,local_48));
                                        if (puVar7 == &local_68) {
                                          lVar29 = 0x20;
                                        }
                                        else {
                                          lVar29 = 0x28;
                                          if (puVar7 == (ushort *)0x0) goto LAB_10060e033;
                                        }
                                        (**(code **)(*(long *)puVar7 + lVar29))();
                                      }
LAB_10060e033:
                                      cVar13 = (char)local_88;
                                      if ((char)local_88 == '\0') {
                                        cVar13 = FUN_1002be216(*(undefined8 *)(lVar49 + 0x810));
                                      }
                                      goto LAB_10060e1c3;
                                    }
                                  }
                                  else {
                                    uVar20 = FUN_1004744bf(plVar26[1],0);
                                    if (((~uVar20 & 0x10001) == 0) &&
                                       (*(char *)(lVar49 + 0x398) != '\0')) {
                                      cVar13 = FUN_10061f891(*(undefined8 *)(local_a0 + 0x20));
                                      goto LAB_10060e1c3;
                                    }
                                  }
                                }
                              }
                              cVar13 = '\0';
                              goto LAB_10060e1c3;
                            }
                            if ((uVar19 & 0x200004) != 0) {
                              lVar49 = *(long *)(local_a0 + 0x20);
                              if (((*(char *)(lVar49 + 0x2da) != '\0') &&
                                  (*(char *)(lVar49 + 0xd31) != '\0')) &&
                                 ((*(char *)(lVar49 + 0x2a2) == '\0' ||
                                  (cVar13 = FUN_1003a7f56(plVar26), cVar13 == '\0')))) {
                                cVar13 = FUN_100474d03(plVar26[1]);
                                if (cVar13 == '\0') {
                                  cVar13 = *(char *)(lVar49 + 0x3b);
                                }
                                else {
                                  if (*(char *)(*(long *)(local_a0 + 0x10) + 0x346) == '\0')
                                  goto LAB_10060e1a8;
                                  cVar13 = *(char *)(lVar49 + 0x3c);
                                }
                                if (cVar13 == '\0') {
                                  if (*(short *)(*plVar26 + 0x10) == 10) {
                                    if ((*(byte *)(lVar49 + 0x2d9) == 1) ||
                                       ((((*(byte *)(lVar49 + 0x2d9) & 2) != 0 &&
                                         (lVar29 = FUN_1002ba359(plVar26), lVar29 != 0)) &&
                                        (cVar13 = FUN_1002be216(*(undefined8 *)(lVar49 + 0x818),
                                                                lVar29), cVar13 != '\0')))) {
                                      cVar13 = *(char *)(lVar49 + 0x2db);
                                      if (*(char *)(lVar49 + 0x31b) == 0) {
                                        if (cVar13 == '\x04') {
                                          cVar13 = *(int *)(plVar26[1] + 0x144) == 0;
                                        }
                                        else {
                                          if (cVar13 != '\x03') goto LAB_10060e1cb;
                                          cVar13 = (*(byte *)(plVar26[1] + 0xc5) & 0x20) == 0;
                                        }
                                      }
                                      else {
                                        bVar15 = (cVar13 == '\x04') * '\b' + 1;
                                        if (cVar13 == '\x03') {
                                          bVar15 = 5;
                                        }
                                        bVar6 = bVar15 + 2;
                                        if (*(char *)(*(long *)(local_a0 + 0x20) + 0x2a2) == '\0') {
                                          bVar6 = bVar15;
                                        }
                                        bVar15 = bVar6 | 0x10;
                                        if (*(char *)(*(long *)(local_a0 + 0x10) + 0x346) == '\0') {
                                          bVar15 = bVar6;
                                        }
                                        cVar13 = FUN_1002bae56(plVar26,(int)*(char *)(lVar49 + 0x31b
                                                                                     ),bVar15);
                                      }
                                      if (cVar13 != '\0') goto LAB_10060e1cb;
                                    }
                                    puVar48 = (undefined8 *)(lVar49 + 0x820);
                                  }
                                  else {
                                    puVar48 = (undefined8 *)(lVar49 + 0x828);
                                  }
                                  cVar13 = FUN_1002be216(*puVar48);
                                  if (cVar13 != '\0') goto LAB_10060e1cb;
                                }
                              }
LAB_10060e1a8:
                              if ((uVar19 & 0xc00000) == 0) goto LAB_10060dadb;
                              cVar13 = FUN_10061f1cd(local_a0);
                              goto LAB_10060e1c3;
                            }
                            if ((uVar19 & 0x402) == 0) {
                              if ((uVar19 & 0x40) == 0) {
                                if ((uVar19 & 0xc00000) == 0) {
                                  if ((uVar19 & 8) == 0) {
                                    if ((uVar19 >> 0x14 & 1) == 0) {
                                      cVar13 = FUN_10061f891(*(undefined8 *)(local_a0 + 0x20));
                                    }
                                    else {
                                      cVar13 = FUN_10061f74d(local_a0);
                                    }
                                  }
                                  else {
                                    cVar13 = FUN_10061f695(local_a0);
                                  }
                                }
                                else {
                                  cVar13 = FUN_10061f1cd(local_a0);
                                }
                              }
                              else {
                                cVar13 = FUN_10061f473(local_a0);
                              }
                              goto LAB_10060e1c3;
                            }
                            lVar49 = *(long *)(local_a0 + 0x20);
                            uVar28 = FUN_1004744bf(plVar26[1],0);
                            if ((uVar28 & 0x402) == 0 || (uVar28 & 0x218004) != 0) {
                              uVar24 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar24);
                              if (cVar13 != '\0') {
                                local_68 = 0x202;
                                uStack_66 = 0x822;
                                uStack_64._0_4_ = 0x7a0a90;
                                uStack_64._4_4_ = 1;
                                uStack_5c = 0x822;
                                uStack_5a = 0x5230;
                                uStack_58 = 0x7f;
                                uStack_56 = 1;
                                sStack_54 = 0;
                                __os_log_error_impl(0x100000000,uVar24,0x10,
                                                    "%{public}s: (%{public}s)");
                              }
                              FUN_1001782e9(0);
                            }
                            if (((*(char *)(lVar49 + 0x318) == '\0') ||
                                (*(char *)(lVar49 + 0xd30) == '\0')) ||
                               ((*(char *)(lVar49 + 0x38) != '\0' ||
                                ((*(char *)(lVar49 + 0x2a2) != '\0' &&
                                 (cVar13 = FUN_1003a7f56(plVar26), cVar13 != '\0'))))))
                            goto LAB_10060dadb;
                            bVar15 = *(byte *)(lVar49 + 0x319) & 0xf;
                            if (bVar15 != 1) {
                              if (bVar15 == 3) {
                                plVar37 = (long *)**(undefined8 **)(local_a0 + 0x3c0);
                                plVar40 = (long *)(*(undefined8 **)(local_a0 + 0x3c0))[1];
                                if (plVar37 == plVar40) {
LAB_10060e14f:
                                  if (plVar37 != plVar40) goto LAB_10060e1cb;
                                }
                                else {
                                  do {
                                    if (*plVar37 == plVar26[1]) goto LAB_10060e14f;
                                    plVar37 = plVar37 + 1;
                                  } while (plVar37 != plVar40);
                                }
                              }
                              else if ((bVar15 == 4) && (*(int *)(plVar26[1] + 0x144) == 0)) {
                                if (*(char *)(lVar49 + 0x31a) == '\0') goto LAB_10060e1cb;
                                plVar37 = (long *)**(long **)(local_a0 + 0x3c0);
                                plVar40 = (long *)(*(long **)(local_a0 + 0x3c0))[1];
                                if (plVar37 == plVar40) goto LAB_10060e14f;
                                do {
                                  if (*plVar37 == plVar26[1]) goto LAB_10060e14f;
                                  plVar37 = plVar37 + 1;
                                } while (plVar37 != plVar40);
                              }
                              cVar13 = FUN_1002be216(*(undefined8 *)(lVar49 + 0x7e8));
                              if (cVar13 == '\0') {
                                cVar13 = FUN_1002be216(*(undefined8 *)(lVar49 + 0x7f0));
                                goto LAB_10060e1c3;
                              }
                            }
                          }
LAB_10060e1cb:
                          if (*(char *)(local_a0 + 0x4e0) != '\0') {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            local_128 = DAT_1008c75b8;
                            cVar13 = _os_log_type_enabled();
                            if (cVar13 != '\0') {
                              uVar24 = FUN_100606010(lVar27);
                              FUN_100476ac1(&local_88,lVar27);
                              puVar25 = (uint *)FUN_1001b83ae(&local_88);
                              FUN_100486d8f(&local_110,local_98);
                              uVar30 = FUN_1001b83ae(&local_110);
                              local_68 = 0x402;
                              uStack_66 = 0x822;
                              uStack_64._0_4_ = 0x7b2f9b;
                              uStack_64._4_4_ = 1;
                              uStack_5c = 0x822;
                              uStack_5a = (undefined2)uVar24;
                              uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                              uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                              sStack_54 = (short)((ulong)uVar24 >> 0x30);
                              uStack_52 = 0x822;
                              local_48 = 0x822;
                              iStack_46 = (int)uVar30;
                              uStack_42 = (undefined2)((ulong)uVar30 >> 0x20);
                              uStack_40 = (undefined2)((ulong)uVar30 >> 0x30);
                              local_50 = puVar25;
                              __os_log_impl(0x100000000,local_128,2,
                                            "%{public}s> syncing %{public}s track \"%{public}s\" from playlist \"%{public}s\""
                                           );
                              FUN_1001b7a50(&local_110);
                              FUN_1001b7a50(&local_88);
                            }
                          }
                          *(uint *)(lVar27 + 0xc) = *(uint *)(lVar27 + 0xc) & 0x7fffffff | uVar19;
                          iVar36 = (int)local_118 + 1;
                          local_118 = (uint *)CONCAT44(local_118._4_4_,iVar36);
                          if ((short)local_98[4] == 0x20 && iVar36 == 0x32) break;
                        }
                      }
                    }
LAB_10060dadb:
                    plVar26 = (long *)plVar26[3];
                  } while (plVar26 != (long *)0x0);
                }
                uVar19 = (uint)local_90 & 0xff;
                if ((short)local_98[4] != 10) {
                  uVar19 = 1;
                }
                local_90 = (int *)CONCAT44(local_90._4_4_,uVar19);
                puVar25 = local_98;
              }
            }
            if (DAT_1008c7808 == '\0') {
              FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
              DAT_1008c7808 = '\x01';
            }
            _DAT_1008c77d8 = _DAT_1008c77f8;
            uRam00000001008c77e0 = uRam00000001008c7800;
            _DAT_1008c77c8 = _DAT_1008c77e8;
            uRam00000001008c77cc = uRam00000001008c77ec;
            uRam00000001008c77d0 = uRam00000001008c77f0;
            uRam00000001008c77d4 = uRam00000001008c77f4;
            FUN_1002c1a05(local_e0,&DAT_1008c77c8,&local_220);
            if ((((char)local_90 == '\0' & (byte)local_c8) == 1) &&
               (((((*(char *)(local_d8 + 0x31c) != '\0' && (*(char *)(local_d8 + 0x28b) == '\x02'))
                  && (iVar36 = FUN_1002c0e84(*(undefined8 *)(local_d8 + 0x7c8)), iVar36 != 0)) ||
                 (((*(char *)(local_d8 + 0x318) != '\0' && (*(char *)(local_d8 + 0x319) == '\x10'))
                  && (iVar36 = FUN_1002c0e84(*(undefined8 *)(local_d8 + 0x7f0)), iVar36 != 0)))) ||
                (((*(char *)(local_d8 + 0x328) != '\0' && (*(char *)(local_d8 + 0x329) == '\x04'))
                 && (iVar36 = FUN_1002c0e84(*(undefined8 *)(local_d8 + 0x810)), iVar36 != 0)))))) {
              *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0x16) = 1;
            }
            if ((((char)local_e4 != '\0') &&
                (cVar13 = FUN_10061ce1f(local_a0,local_1a0), cVar13 != '\0')) &&
               (iVar36 = FUN_1002c0e84(*(undefined8 *)(local_d8 + 0x818)), iVar36 != 0)) {
              *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0x17) = 1;
            }
            lVar27 = FUN_1002f930c(local_e0);
            uVar19 = 0;
            if (lVar27 != 0) {
              uVar19 = 0;
              do {
                iVar36 = *(int *)(lVar27 + 0xc);
                lVar27 = FUN_1002f9451(lVar27);
                uVar19 = (uVar19 + 1) - (uint)(iVar36 == 0);
              } while (lVar27 != 0);
            }
            puVar31 = puStack_140;
            puVar25 = local_148;
            if ((ulong)(((long)local_138 - (long)local_148 >> 4) * 0x6db6db6db6db6db7) <
                (ulong)uVar19) {
              auVar52 = FUN_10061fb1e();
              puVar45 = auVar52._0_8_;
              sVar46 = (long)puVar31 - (long)puVar25;
              puVar31 = (uint *)((long)puVar45 + sVar46);
              _memcpy(puVar45,puVar25,sVar46);
              puVar25 = local_148;
              bVar51 = local_148 != (uint *)0x0;
              local_148 = puVar45;
              puStack_140 = puVar31;
              local_138 = puVar45 + auVar52._8_8_ * 0x1c;
              if (bVar51) {
                operator_delete(puVar25);
              }
            }
            if ((char)local_e4 != '\0') {
              FUN_10061ceaa(local_1a0,&local_148);
            }
            local_f1 = (int)local_c0 < 0 | (byte)local_c8;
            if (local_f1 == 1) {
              FUN_10061ceaa(local_160,&local_148);
            }
            FUN_10031c15f(local_e0);
            if (*(int *)(local_e0 + 0x98) == 0) {
              local_90 = (int *)0x0;
              piVar23 = (int *)0x0;
            }
            else {
              auVar52 = FUN_100395acc();
              local_90 = auVar52._0_8_;
              piVar23 = local_90 + auVar52._8_8_ * 3;
            }
            piVar50 = local_90;
            lVar27 = FUN_100315ede(local_e0);
            local_b8 = piVar50;
            while (lVar27 != 0) {
              piVar47 = local_b8;
              piVar50 = local_90;
              if (((*(byte *)(lVar27 + 0x240) & 4) == 0) &&
                 (iVar36 = FUN_10061d1d6(local_a0,lVar27,0), piVar47 = local_b8, piVar50 = local_90,
                 iVar36 != 0)) {
                iVar21 = *(int *)(lVar27 + 0x58);
                if (local_b8 < piVar23) {
                  *local_b8 = iVar21;
                  local_b8[1] = 0;
                  local_b8[2] = iVar36;
                  piVar47 = local_b8 + 3;
                }
                else {
                  local_b8 = (int *)((long)local_b8 - (long)local_90);
                  lVar49 = (long)local_b8 >> 2;
                  uVar28 = lVar49 * -0x5555555555555555 + 1;
                  if (0x1555555555555555 < uVar28) {
                    FUN_10061fb4e();
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                  lVar29 = (long)piVar23 - (long)local_90 >> 2;
                  uVar2 = lVar29 * 0x5555555555555556;
                  if (uVar28 < uVar2) {
                    uVar28 = uVar2;
                  }
                  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar29 * -0x5555555555555555)) {
                    uVar28 = 0x1555555555555555;
                  }
                  if (uVar28 == 0) {
                    auVar52 = ZEXT816(0);
                  }
                  else {
                    auVar52 = FUN_100395acc();
                  }
                  piVar8 = local_90;
                  lVar29 = auVar52._0_8_;
                  piVar50 = (int *)(lVar29 + lVar49 * 4);
                  piVar23 = (int *)(lVar29 + auVar52._8_8_ * 0xc);
                  *piVar50 = iVar21;
                  piVar50[1] = 0;
                  piVar50[2] = iVar36;
                  piVar47 = (int *)(lVar29 + lVar49 * 4 + 0xc);
                  piVar50 = (int *)((long)piVar50 - (long)local_b8);
                  _memcpy(piVar50,local_90,(size_t)local_b8);
                  if (piVar8 != (int *)0x0) {
                    operator_delete(piVar8);
                  }
                }
              }
              local_90 = piVar50;
              lVar27 = FUN_100316031(lVar27);
              local_b8 = piVar47;
            }
            if (*(char *)(local_a8 + 0x379) != '\0') {
              for (lVar27 = FUN_1002f930c(local_f0); lVar27 != 0; lVar27 = FUN_1002f9451(lVar27)) {
                cVar13 = FUN_1002bd28d(lVar27);
                if ((cVar13 != '\0') &&
                   (lVar49 = *(long *)(*(long *)(lVar27 + 0x58) + 0x10),
                   cVar13 = FUN_10031e4ab(*(undefined8 *)(lVar49 + 8),*(undefined8 *)(lVar49 + 0x28)
                                          ,1), cVar13 == '\0')) {
                  uVar24 = FUN_1001cc310();
                  cVar13 = _os_log_type_enabled(uVar24,0x10);
                  if (cVar13 != '\0') {
                    local_68 = 0x202;
                    uStack_66 = 0x822;
                    uStack_64._0_4_ = 0x7a0a90;
                    uStack_64._4_4_ = 1;
                    uStack_5c = 0x822;
                    uStack_5a = 0x4e96;
                    uStack_58 = 0x7f;
                    uStack_56 = 1;
                    sStack_54 = 0;
                    __os_log_error_impl(0x100000000,uVar24,0x10);
                  }
                  FUN_1001782e9(0,0);
                }
              }
            }
            FUN_1002a41f4(&local_1f0,local_1e8);
            local_1f0 = &local_1e8;
            local_1e8 = 0;
            uStack_1e0 = 0;
            FUN_1002a41f4(&local_1b8,local_1b0);
            local_1b8 = &local_1b0;
            local_1b0 = 0;
            lStack_1a8 = 0;
            puVar25 = local_148;
            if (local_148 != puStack_140) {
              local_200 = local_a0 + 0x58;
              local_1f8 = local_a0 + 0x70;
              local_1c0 = 0;
              puVar31 = local_148;
              puVar25 = puStack_140;
              do {
                local_c0 = puVar31;
                if ((char)puVar31[0x1a] != '\0') {
                  *(undefined1 *)((long)puVar31 + 0x6b) = 0;
                  lVar27 = FUN_100490af0();
                  if (lVar27 == 0) {
                    puVar25 = (uint *)0x0;
LAB_10060ed69:
                    if (*(char *)((long)local_c0 + 0x6b) == '\0') {
                      *(undefined1 *)(local_c0 + 0x1a) = 0;
                    }
                    if (puVar25 != (uint *)0x0) goto LAB_10060ed8a;
                  }
                  else {
                    puVar48 = (undefined8 *)FUN_100242590(lVar27);
                    ppuVar53 = *(uint ***)(local_a8 + 0x30);
                    puVar31 = (uint *)FUN_1002bd7f7(puVar48,*(undefined1 *)(local_a8 + 0x347),
                                                    *(undefined1 *)(local_a8 + 0x348),
                                                    *(undefined2 *)(local_a8 + 0x34a),
                                                    *(undefined1 *)(local_a8 + 0x14deb),
                                                    -(*(float *)(local_a8 + 0x66a4) == DAT_100700b50
                                                     ) & 1,ppuVar53);
                    puVar25 = (uint *)puVar48[0xb];
                    if (puVar25 == (uint *)0x0) {
                      bVar51 = false;
                      puVar25 = (uint *)0x0;
                      puVar45 = (uint *)0x0;
LAB_10060ed41:
                      FUN_10057bfae(*(undefined8 *)(local_a0 + 0x28),puVar25,puVar45);
LAB_10060ed54:
                      puVar25 = (uint *)0x0;
LAB_10060ed56:
                      if (!bVar51) goto LAB_10060ed69;
                    }
                    else {
                      local_128 = (uint *)0x0;
                      bVar51 = false;
                      local_190 = (uint *)0x0;
                      local_118 = (uint *)0x0;
                      local_98 = (uint *)0x0;
                      local_130 = puVar48;
                      do {
                        puVar45 = local_190;
                        if (puVar25[0xf] == 0x46494c45) {
                          iVar36 = FUN_1002b0559(puVar25,(ulong)local_b0 & 0xffffffff);
                          if ((iVar36 == 0) ||
                             (((iVar36 == -0x2b && (puVar25 == puVar31)) &&
                              (*(char *)((long)puVar25 + 0x45) == '\n')))) {
                            if (local_118 == (uint *)0x0) {
                              local_118 = puVar25;
                            }
                            local_98 = (uint *)FUN_1004eb707(local_a8,puVar25,local_200,local_1f8,0)
                            ;
                            if ((int)local_98 != 0) {
                              if ((int)local_98 == 3) {
                                *(undefined1 *)((long)local_c0 + 0x6a) = 1;
                              }
                              else {
                                if ((int)local_98 != 1) {
                                  if (DAT_1008c75c0 != -1) {
                                    _dispatch_once(&DAT_1008c75c0,
                                                   &PTR___NSConcreteGlobalBlock_100857068);
                                  }
                                  puVar44 = DAT_1008c75b8;
                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                  puVar45 = local_190;
                                  if (cVar13 != '\0') {
                                    FUN_100476ac1(&local_88,*(long *)(puVar25 + 2));
                                    uVar24 = FUN_1001b83ae(&local_88);
                                    uVar30 = FUN_10035f712(local_98);
                                    local_68 = 0x202;
                                    uStack_66 = 0x822;
                                    uStack_64._0_4_ = (undefined4)uVar24;
                                    uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                    uStack_5c = 0x822;
                                    uStack_5a = (undefined2)uVar30;
                                    uStack_58 = (undefined2)((ulong)uVar30 >> 0x10);
                                    uStack_56 = (undefined2)((ulong)uVar30 >> 0x20);
                                    sStack_54 = (short)((ulong)uVar30 >> 0x30);
                                    __os_log_impl(0x100000000,puVar44,1,
                                                  "sync> cannot accept \"%{public}s\" (%{public}s)",
                                                  &local_68,0x16);
                                    FUN_1001b7a50(&local_88);
                                    puVar48 = local_130;
                                    puVar45 = local_190;
                                  }
                                  goto LAB_10060ec22;
                                }
                                *(undefined1 *)((long)local_c0 + 0x69) = 1;
                              }
                            }
                            if (local_128 == (uint *)0x0) {
                              local_128 = puVar25;
                            }
                            bVar51 = false;
                            puVar45 = local_190;
                            if (puVar31 == puVar25) goto LAB_10060ed0c;
                          }
                          else {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            puVar44 = DAT_1008c75b8;
                            local_b0 = (uint *)((ulong)local_b0 & 0xffffffffffffffee);
                            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                            bVar51 = true;
                            puVar48 = local_130;
                            puVar45 = puVar25;
                            if (cVar13 != '\0') {
                              FUN_100476ac1(&local_88,*(long *)(puVar25 + 2));
                              uVar24 = FUN_1001b83ae(&local_88);
                              local_68 = 0x202;
                              uStack_66 = 0x822;
                              uStack_64._0_4_ = (undefined4)uVar24;
                              uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                              uStack_5c = 0x400;
                              uStack_5a = (undefined2)iVar36;
                              uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                              __os_log_impl(0x100000000,puVar44,1,
                                            "sync> could not find \"%{public}s\" (%d)",&local_68,
                                            0x12);
                              FUN_1001b7a50(&local_88);
                              bVar51 = true;
                              puVar48 = local_130;
                            }
                          }
                        }
LAB_10060ec22:
                        local_190 = puVar45;
                        puVar25 = *(uint **)puVar25;
                      } while (puVar25 != (uint *)0x0);
                      puVar25 = local_128;
                      if (local_128 != (uint *)0x0) {
LAB_10060ed0c:
                        uVar19 = (int)local_1c0 + 1;
                        local_1c0 = (ulong)uVar19;
                        if (*(uint *)(local_a8 + 0x410) != 0 && *(uint *)(local_a8 + 0x410) < uVar19
                           ) goto LAB_10060ed56;
                        goto LAB_10060ed8a;
                      }
                      puVar25 = local_118;
                      if (local_118 == (uint *)0x0) {
                        puVar25 = (uint *)puVar48[0xb];
                      }
                      if ((int)local_98 == 0x13) {
                        lVar27 = *(long *)(puVar25 + 4);
                        if (*(ulong *)(lVar27 + 8) < 2) {
                          uVar24 = FUN_1001cc310();
                          cVar13 = _os_log_type_enabled(uVar24,0x10);
                          if (cVar13 != '\0') {
                            local_68 = 0x202;
                            uStack_66 = 0x822;
                            uStack_64._0_4_ = 0x7a0a90;
                            uStack_64._4_4_ = 1;
                            uStack_5c = 0x822;
                            uStack_5a = 0x4f52;
                            uStack_58 = 0x7f;
                            uStack_56 = 1;
                            sStack_54 = 0;
                            __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",
                                                &local_68,0x16);
                          }
                          FUN_1001782e9(0,0);
                          lVar27 = *(long *)(puVar25 + 4);
                        }
                        if (*(long *)(lVar27 + 0x10) != 0) {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          puVar45 = DAT_1008c75b8;
                          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar13 != '\0') {
                            FUN_100476ac1(&local_88,*(long *)(puVar25 + 2));
                            uVar30 = FUN_1001b83ae(&local_88);
                            uVar24 = *(undefined8 *)(*(long *)(puVar25 + 4) + 8);
                            local_50 = *(uint **)(*(long *)(puVar25 + 4) + 0x10);
                            local_68 = 0x302;
                            uStack_66 = 0x822;
                            uStack_64._0_4_ = (undefined4)uVar30;
                            uStack_64._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
                            uStack_5c = 0x800;
                            uStack_5a = (undefined2)uVar24;
                            uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                            uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                            sStack_54 = (short)((ulong)uVar24 >> 0x30);
                            uStack_52 = 0x800;
                            __os_log_impl(0x100000000,puVar45,1,
                                          "sync> missing key for \"%{public}s\" (account %llu, key %llu)"
                                          ,&local_68,0x20);
                            FUN_1001b7a50(&local_88);
                          }
                        }
                        if (*(long *)(*(long *)(puVar25 + 4) + 0x18) != 0) {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          puVar45 = DAT_1008c75b8;
                          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar13 != '\0') {
                            FUN_100476ac1(&local_88,*(long *)(puVar25 + 2));
                            uVar30 = FUN_1001b83ae(&local_88);
                            uVar24 = *(undefined8 *)(*(long *)(puVar25 + 4) + 8);
                            local_50 = *(uint **)(*(long *)(puVar25 + 4) + 0x18);
                            local_68 = 0x302;
                            uStack_66 = 0x822;
                            uStack_64._0_4_ = (undefined4)uVar30;
                            uStack_64._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
                            uStack_5c = 0x800;
                            uStack_5a = (undefined2)uVar24;
                            uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                            uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                            sStack_54 = (short)((ulong)uVar24 >> 0x30);
                            uStack_52 = 0x800;
                            __os_log_impl(0x100000000,puVar45,1,
                                          "sync> missing key for \"%{public}s\" (account %llu, key %llu)"
                                          ,&local_68,0x20);
                            FUN_1001b7a50(&local_88);
                          }
                        }
                        FUN_1002b7e7c(&local_1b8,*(long *)(puVar25 + 4) + 8);
LAB_10060f0bd:
                        local_c0[0xb] = puVar25[0xc];
                        *(undefined1 *)((long)local_c0 + 0x6b) = 1;
                        goto LAB_10060ed54;
                      }
                      if ((int)local_98 == 0x12) {
                        iVar36 = FUN_1002b1325(puVar25);
                        local_98 = (uint *)0x12;
                        if (((iVar36 != 0x41412020) && (iVar36 != 0x41415820)) &&
                           (lVar27 = FUN_100307b9e(local_f0,*puVar48), lVar27 != 0)) {
                          if (local_150 == 0) {
                            FUN_100594adc(&local_150,0);
                          }
                          FUN_10059571f(local_150,puVar25,0);
                          goto LAB_10060f0bd;
                        }
                      }
                      puVar45 = local_98;
                      if (!bVar51 || local_118 != (uint *)0x0) goto LAB_10060ed41;
                      if (*(char *)((long)local_190 + 0x45) != '\n') {
                        lVar27 = *(long *)(local_a0 + 0x28);
                        *(undefined1 *)(lVar27 + 2) = 1;
                        FUN_10057c238(local_190,5,lVar27 + 0x58);
                      }
                    }
                    puVar25 = puVar31;
                    if (puVar31 == (uint *)0x0) {
                      uVar24 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar24,0x10);
                      if (cVar13 != '\0') {
                        local_68 = 0x202;
                        uStack_66 = 0x822;
                        uStack_64._0_4_ = 0x7a0a90;
                        uStack_64._4_4_ = 1;
                        uStack_5c = 0x822;
                        uStack_5a = 0xaaea;
                        uStack_58 = 0x7e;
                        uStack_56 = 1;
                        sStack_54 = 0;
                        __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",
                                            &local_68,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    else {
LAB_10060ed8a:
                      local_c0[0xb] = puVar25[0xc];
                      uVar28 = *(ulong *)(*(long *)(puVar25 + 4) + 8);
                      local_68 = (ushort)uVar28;
                      uStack_66 = (undefined2)(uVar28 >> 0x10);
                      uStack_64._0_4_ = (undefined4)(uVar28 >> 0x20);
                      if (((1 < uVar28) && (iVar36 = FUN_1002b1325(), iVar36 != 0x41412020)) &&
                         (iVar36 != 0x41415820)) {
                        FUN_1002b7e7c(&local_1f0,&local_68);
                      }
                    }
                  }
                  iVar36 = FUN_1006020dd(local_a0);
                  puVar25 = puStack_140;
                  if (iVar36 != 0) {
                    if (iVar36 == -0x80) goto LAB_1006101e5;
                    uVar24 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar24,0x10);
                    if (cVar13 == '\0') goto LAB_1006101e5;
                    uStack_5a = (undefined2)iVar36;
                    uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                    goto LAB_1006120df;
                  }
                }
                puVar31 = local_c0 + 0x1c;
              } while (puVar31 != puVar25);
            }
            FUN_1002db60e(local_a8,&local_1f0,&local_1b8);
            if (lStack_1a8 != 0) {
              plVar26 = local_1b8;
              if (local_1b8 != &local_1b0) {
                do {
                  iVar36 = FUN_10061c37b(plVar26[4]);
                  if (iVar36 != 0) {
                    if (iVar36 == -0x80) goto LAB_1006101e5;
                    uVar24 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar24,0x10);
                    if (cVar13 == '\0') goto LAB_1006101e5;
                    uStack_5a = (undefined2)iVar36;
                    uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                    goto LAB_1006120df;
                  }
                  plVar37 = (long *)plVar26[1];
                  plVar40 = plVar26;
                  if ((long *)plVar26[1] == (long *)0x0) {
                    do {
                      plVar26 = (long *)plVar40[2];
                      bVar51 = (long *)*plVar26 != plVar40;
                      plVar40 = plVar26;
                    } while (bVar51);
                  }
                  else {
                    do {
                      plVar26 = plVar37;
                      plVar37 = (long *)*plVar26;
                    } while ((long *)*plVar26 != (long *)0x0);
                  }
                } while (plVar26 != &local_1b0);
              }
              if (local_148 != puVar25) {
                puVar31 = (uint *)(local_a0 + 0x58);
                puVar45 = (uint *)(local_a0 + 0x70);
                puVar44 = local_148;
                do {
                  if (((*(char *)((long)puVar44 + 0x6b) != '\0') &&
                      (lVar27 = FUN_100490af0(puVar44), lVar27 != 0)) &&
                     (lVar27 = FUN_10031b4c4(*(undefined8 *)(lVar27 + 8),puVar44[0xb]), lVar27 != 0)
                     ) {
                    iVar36 = FUN_1004eb707(local_a8,lVar27,puVar31,puVar45,0);
                    if (iVar36 < 3) {
                      if (iVar36 == 0) {
                        *(undefined1 *)((long)puVar44 + 0x6b) = 0;
                      }
                      else if (iVar36 == 1) {
                        *(undefined1 *)((long)puVar44 + 0x6b) = 0;
                        *(undefined1 *)((long)puVar44 + 0x69) = 1;
                      }
                    }
                    else if (iVar36 == 3) {
                      *(undefined2 *)((long)puVar44 + 0x6a) = 1;
                    }
                    else if (iVar36 == 0x13) {
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      local_98 = DAT_1008c75b8;
                      cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar13 != '\0') {
                        local_c0 = puVar45;
                        local_b0 = puVar31;
                        FUN_100476ac1(&local_88,*(undefined8 *)(lVar27 + 8));
                        uVar24 = FUN_1001b83ae(&local_88);
                        uVar30 = FUN_10035f712(0x13);
                        local_50 = (uint *)FUN_1002b5390(lVar27);
                        local_68 = 0x302;
                        uStack_66 = 0x822;
                        uStack_64._0_4_ = (undefined4)uVar24;
                        uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                        uStack_5c = 0x822;
                        uStack_5a = (undefined2)uVar30;
                        uStack_58 = (undefined2)((ulong)uVar30 >> 0x10);
                        uStack_56 = (undefined2)((ulong)uVar30 >> 0x20);
                        sStack_54 = (short)((ulong)uVar30 >> 0x30);
                        uStack_52 = 0x800;
                        __os_log_impl(0x100000000,local_98,1,
                                      "sync> still cannot accept \"%{public}s\" (%{public}s) after reauthorizing for account %llu"
                                      ,&local_68,0x20);
                        FUN_1001b7a50(&local_88);
                        puVar31 = local_b0;
                        puVar45 = local_c0;
                      }
                      *(undefined1 *)(puVar44 + 0x1a) = 0;
                      lVar49 = *(long *)(local_a0 + 0x28);
                      *(undefined1 *)(lVar49 + 5) = 1;
                      FUN_10057c238(lVar27,0x12,lVar49 + 0xa0);
                    }
                  }
                  puVar44 = puVar44 + 0x1c;
                } while (puVar44 != puVar25);
              }
            }
            puVar31 = local_148;
            if (local_150 != 0) {
              FUN_100595344();
              puVar31 = local_148;
              local_150 = 0;
              for (puVar45 = local_148; puVar45 != puVar25; puVar45 = puVar45 + 0x1c) {
                if (*(char *)((long)puVar45 + 0x6b) != '\0') {
                  *(undefined1 *)(puVar45 + 0x1a) = 0;
                  lVar27 = FUN_100490af0(puVar45);
                  if ((lVar27 != 0) &&
                     (lVar27 = FUN_10031b4c4(*(undefined8 *)(lVar27 + 8),puVar45[0xb]), lVar27 != 0)
                     ) {
                    lVar49 = *(long *)(local_a0 + 0x28);
                    *(undefined1 *)(lVar49 + 5) = 1;
                    FUN_10057c238(lVar27,0x12,lVar49 + 0xa0);
                  }
                }
              }
            }
            if (puVar31 == puVar25) {
              puVar45 = (uint *)0x0;
              local_130 = (undefined8 *)0x0;
              local_128 = (uint *)0x0;
            }
            else {
              local_128 = (uint *)0x0;
              local_130 = (undefined8 *)0x0;
              puVar45 = (uint *)0x0;
              do {
                if (((char)puVar31[0x1a] != '\0') && (lVar27 = FUN_100490af0(puVar31), lVar27 != 0))
                {
                  lVar27 = FUN_100242590(lVar27);
                  lVar49 = FUN_10031b4c4(lVar27,puVar31[0xb]);
                  if ((lVar49 != 0) &&
                     ((*(char *)(lVar49 + 0x44) == '\x01' && (*(int *)(lVar27 + 0xc) == 0)))) {
                    ppuVar53 = &local_110;
                    local_98 = (uint *)FUN_1004eb21f(local_a8,lVar49,
                                                     *(undefined1 *)(local_d8 + 0x2b0),
                                                     *(undefined1 *)((long)puVar31 + 0x69),
                                                     *(undefined2 *)(local_d8 + 0x3a6),0,ppuVar53,
                                                     &iStack_16c,0);
                    if ((char)puVar31[0x1b] == '\0') {
                      if (((char)local_e4 == '\0') ||
                         (uVar19 = FUN_1004744bf(lVar27,0), (uVar19 & 0x10004) != 4)) {
                        local_128 = (uint *)((long)local_128 + (long)local_98);
                      }
                      else {
                        local_130 = (undefined8 *)((long)local_130 + (long)local_98);
                      }
                    }
                    *(uint **)(puVar31 + 0x18) = local_98;
                    if (local_100 == 0) {
                      if ((iStack_16c == 0) || (*(char *)(local_a8 + 0x3a2) == '\0')) {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        puVar44 = DAT_1008c75b8;
                        cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar13 != '\0') {
                          FUN_100476ac1(&local_88,lVar27);
                          uVar24 = FUN_1001b83ae(&local_88);
                          local_68 = 0x202;
                          uStack_64._0_4_ = (undefined4)uVar24;
                          uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                          uStack_5a = SUB82(local_98,0);
                          uStack_58 = (undefined2)((ulong)local_98 >> 0x10);
                          uStack_56 = (undefined2)((ulong)local_98 >> 0x20);
                          sStack_54 = (short)((ulong)local_98 >> 0x30);
                          pcVar38 = "sync> source track \"%{public}s\", size = %llu";
                          goto LAB_10060f7fe;
                        }
                      }
                      else {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        puVar44 = DAT_1008c75b8;
                        cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar13 != '\0') {
                          FUN_100476ac1(&local_88,lVar27);
                          uVar24 = FUN_1001b83ae(&local_88);
                          local_68 = 0x402;
                          uStack_64._0_4_ = (undefined4)uVar24;
                          uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                          uStack_5a = SUB82(local_98,0);
                          uStack_58 = (undefined2)((ulong)local_98 >> 0x10);
                          uStack_56 = (undefined2)((ulong)local_98 >> 0x20);
                          sStack_54 = (short)((ulong)local_98 >> 0x30);
                          uStack_52 = 0x800;
                          local_50 = local_110;
                          local_48 = 0x400;
                          iStack_46 = iStack_16c;
                          pcVar38 = 
                          "sync> source track \"%{public}s\", size = %llu (file size = %llu, artwork size = %u)"
                          ;
LAB_10060f7fe:
                          uStack_66 = 0x822;
                          uStack_5c = 0x800;
                          __os_log_impl(0x100000000,puVar44,1,pcVar38,&local_68);
                          FUN_1001b7a50(&local_88);
                        }
                      }
                    }
                    else {
                      puVar32 = (uint *)FUN_1005a99fa(local_100,lVar27);
                      puVar44 = puVar32;
                      if ((char)puVar31[0x1b] != '\0') {
                        puVar44 = (uint *)0x0;
                      }
                      *(long *)(puVar31 + 0x18) = *(long *)(puVar31 + 0x18) + (long)puVar32;
                      local_b0 = puVar45;
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      puVar45 = (uint *)((long)puVar44 + (long)local_b0);
                      local_b0 = DAT_1008c75b8;
                      cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar13 != '\0') {
                        FUN_100476ac1(&local_88,lVar27);
                        uVar24 = FUN_1001b83ae(&local_88);
                        local_68 = 0x302;
                        uStack_64._0_4_ = (undefined4)uVar24;
                        uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                        uStack_5a = SUB82(local_98,0);
                        uStack_58 = (undefined2)((ulong)local_98 >> 0x10);
                        uStack_56 = (undefined2)((ulong)local_98 >> 0x20);
                        sStack_54 = (short)((ulong)local_98 >> 0x30);
                        uStack_52 = 0x800;
                        pcVar38 = 
                        "sync> source track \"%{public}s\", size = %llu, speech size = %llu";
                        puVar44 = local_b0;
                        local_50 = puVar32;
                        goto LAB_10060f7fe;
                      }
                    }
                    *(undefined4 *)(lVar27 + 0xc) = 1;
                  }
                }
                puVar31 = puVar31 + 0x1c;
              } while (puVar31 != puVar25);
            }
            local_b0 = puVar45;
            if ((local_100 != 0) && (local_90 != local_b8)) {
              piVar23 = local_90;
              do {
                lVar27 = FUN_10048b3c0(local_e0,*piVar23);
                if (lVar27 == 0) {
                  uVar24 = FUN_1001cc310();
                  cVar13 = _os_log_type_enabled(uVar24,0x10);
                  if (cVar13 != '\0') {
                    local_68 = 0x202;
                    uStack_66 = 0x822;
                    uStack_64._0_4_ = 0x7a0a90;
                    uStack_64._4_4_ = 1;
                    uStack_5c = 0x822;
                    uStack_5a = 0x8c7e;
                    uStack_58 = 0x7b;
                    uStack_56 = 1;
                    sStack_54 = 0;
                    __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",&local_68
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  lVar49 = FUN_1005aa1f2(local_100,lVar27);
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  puVar25 = DAT_1008c75b8;
                  local_b0 = (uint *)((long)local_b0 + lVar49);
                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar13 != '\0') {
                    FUN_100486d8f(&local_88,lVar27);
                    uVar24 = FUN_1001b83ae(&local_88);
                    local_68 = 0x202;
                    uStack_66 = 0x822;
                    uStack_64._0_4_ = (undefined4)uVar24;
                    uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                    uStack_5c = 0x800;
                    uStack_5a = (undefined2)lVar49;
                    uStack_58 = (undefined2)((ulong)lVar49 >> 0x10);
                    uStack_56 = (undefined2)((ulong)lVar49 >> 0x20);
                    sStack_54 = (short)((ulong)lVar49 >> 0x30);
                    __os_log_impl(0x100000000,puVar25,1,
                                  "sync> source playlist \"%{public}s\", speech size = %llu",
                                  &local_68,0x16);
                    FUN_1001b7a50(&local_88);
                  }
                }
                piVar23 = piVar23 + 3;
              } while (piVar23 != local_b8);
            }
            FUN_10061d843(&local_148);
            lVar27 = FUN_1002f930c(local_f0);
            local_98 = (uint *)0x0;
            local_118 = (uint *)0x0;
            local_c0 = (uint *)0x0;
            for (; lVar27 != 0; lVar27 = FUN_1002f9451(lVar27)) {
              lVar49 = *(long *)(lVar27 + 0x58);
              cVar13 = *(char *)(lVar49 + 0x45);
              if (cVar13 == '\x01') {
                uVar24 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar24,0x10);
                if (cVar13 != '\0') {
                  local_68 = 0x202;
                  uStack_66 = 0x822;
                  uStack_64._0_4_ = 0x7a0a90;
                  uStack_64._4_4_ = 1;
                  uStack_5c = 0x822;
                  uStack_5a = 0x4fd0;
                  uStack_58 = 0x7f;
                  uStack_56 = 1;
                  sStack_54 = 0;
                  __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                cVar13 = *(char *)(lVar49 + 0x45);
              }
              if (cVar13 == '\0') {
                ppuVar53 = (uint **)0x0;
                lVar49 = FUN_1004eb21f(local_a8,lVar49,*(undefined1 *)(local_d8 + 0x2b0),0,0,0,0,0,0
                                      );
                uVar19 = FUN_1004744bf(lVar27,0);
                if ((((local_d0 == 0) || ((uVar19 & 0x10004) != 4)) ||
                    (cVar13 = FUN_100485bb5(lVar27,local_d0,0), cVar13 == '\0')) ||
                   (uVar19 = FUN_1004744bf(lVar27,0), (uVar19 >> 0xd & 1) != 0)) {
                  local_c0 = (uint *)((long)local_c0 + lVar49);
                }
                else {
                  local_118 = (uint *)((long)local_118 + lVar49);
                }
                sVar18 = sStack_54;
                uVar10 = uStack_56;
                uVar17 = uStack_58;
                uStack_58 = (undefined2)((ulong)lVar49 >> 0x10);
                uVar9 = uStack_58;
                uStack_56 = (undefined2)((ulong)lVar49 >> 0x20);
                uVar11 = uStack_56;
                sStack_54 = (short)((ulong)lVar49 >> 0x30);
                sVar12 = sStack_54;
                uStack_58 = uVar17;
                uStack_56 = uVar10;
                sStack_54 = sVar18;
                if (local_100 == 0) {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  puVar25 = DAT_1008c75b8;
                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar13 != '\0') {
                    FUN_100476ac1(&local_88,lVar27);
                    uVar24 = FUN_1001b83ae(&local_88);
                    local_68 = 0x202;
                    uStack_64._0_4_ = (undefined4)uVar24;
                    uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                    goto LAB_10060fc24;
                  }
                }
                else {
                  puVar31 = (uint *)FUN_1005aa7e6(local_100,lVar27);
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  puVar25 = DAT_1008c75b8;
                  local_98 = (uint *)((long)local_98 + (long)puVar31);
                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar13 != '\0') {
                    FUN_100476ac1(&local_88,lVar27);
                    uVar24 = FUN_1001b83ae(&local_88);
                    local_68 = 0x302;
                    uStack_64._0_4_ = (undefined4)uVar24;
                    uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                    uStack_52 = 0x800;
                    local_50 = puVar31;
LAB_10060fc24:
                    uStack_66 = 0x822;
                    uStack_5a = (undefined2)lVar49;
                    uStack_5c = 0x800;
                    uStack_58 = uVar9;
                    uStack_56 = uVar11;
                    sStack_54 = sVar12;
                    __os_log_impl(0x100000000,puVar25,1);
                    FUN_1001b7a50(&local_88);
                  }
                }
              }
            }
            if (local_100 != 0) {
              lVar27 = FUN_100315ede(local_f0);
              for (; lVar27 != 0; lVar27 = FUN_100316031(lVar27)) {
                lVar49 = FUN_1005aadae(local_100,lVar27);
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  FUN_100486d8f(&local_88,lVar27);
                  uVar24 = FUN_1001b83ae(&local_88);
                  local_68 = 0x202;
                  uStack_66 = 0x822;
                  uStack_64._0_4_ = (undefined4)uVar24;
                  uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                  uStack_5c = 0x800;
                  uStack_5a = (undefined2)lVar49;
                  uStack_58 = (undefined2)((ulong)lVar49 >> 0x10);
                  uStack_56 = (undefined2)((ulong)lVar49 >> 0x20);
                  sStack_54 = (short)((ulong)lVar49 >> 0x30);
                  __os_log_impl(0x100000000,puVar25,1,
                                "sync> destination playlist \"%{public}s\", speech size = %llu",
                                &local_68,0x16);
                  FUN_1001b7a50(&local_88);
                }
                local_98 = (uint *)((long)local_98 + lVar49);
              }
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            puVar25 = DAT_1008c75b8;
            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar13 != '\0') {
              local_68 = 0x300;
              uStack_66 = 0x800;
              uStack_64._0_4_ = SUB84(local_128,0);
              uStack_64._4_4_ = (undefined4)((ulong)local_128 >> 0x20);
              uStack_5c = 0x800;
              uStack_5a = SUB82(local_130,0);
              uStack_58 = (undefined2)((ulong)local_130 >> 0x10);
              uStack_56 = (undefined2)((ulong)local_130 >> 0x20);
              sStack_54 = (short)((ulong)local_130 >> 0x30);
              uStack_52 = 0x800;
              local_50 = local_b0;
              __os_log_impl(0x100000000,puVar25,1,
                            "sync> required music bytes = %lld, required podcast bytes = %lld, required speech bytes = %lld"
                            ,&local_68,0x20);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
            }
            puVar25 = DAT_1008c75b8;
            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar13 != '\0') {
              local_68 = 0x300;
              uStack_66 = 0x800;
              uStack_64._0_4_ = SUB84(local_c0,0);
              uStack_64._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
              uStack_5c = 0x800;
              uStack_5a = SUB82(local_118,0);
              uStack_58 = (undefined2)((ulong)local_118 >> 0x10);
              uStack_56 = (undefined2)((ulong)local_118 >> 0x20);
              sStack_54 = (short)((ulong)local_118 >> 0x30);
              uStack_52 = 0x800;
              local_50 = local_98;
              __os_log_impl(0x100000000,puVar25,1,
                            "sync> existing music bytes = %lld, existing podcast bytes = %lld, existing speech bytes = %lld"
                            ,&local_68,0x20);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
            }
            puVar25 = DAT_1008c75b8;
            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar13 != '\0') {
              local_68 = 0x100;
              uStack_66 = 0x800;
              uStack_64._0_4_ = (undefined4)*(undefined8 *)(local_a8 + 0x153b0);
              uStack_64._4_4_ = (undefined4)((ulong)*(undefined8 *)(local_a8 + 0x153b0) >> 0x20);
              __os_log_impl(0x100000000,puVar25,1,"sync> reserved disk bytes = %llu",&local_68,0xc);
            }
            lVar27 = (long)local_98 + (long)local_c0;
            local_168 = 0;
            puVar43 = (undefined8 *)((long)local_130 - (long)local_118);
            puVar48 = puVar43;
            if ((char)local_e4 == '\0') {
              puVar43 = local_130;
              puVar48 = (undefined8 *)0x0;
            }
            local_b0 = (uint *)(((long)local_b0 + (long)local_128) - lVar27);
            if (local_f1 == 0) {
              local_b0 = (uint *)0x0;
            }
            iVar36 = FUN_100601cd5(local_a0);
            if (iVar36 != -0x80) {
              if (iVar36 == 0) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                puVar25 = DAT_1008c75b8;
                lVar49 = (long)local_b0 + (long)puVar48;
                puVar31 = (uint *)((long)local_b0 + (long)puVar48 + 0x100000);
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  local_68 = 0x200;
                  uStack_66 = 0x800;
                  uStack_5c = 0x800;
                  uStack_5a = (undefined2)local_168;
                  uStack_58 = (undefined2)((ulong)local_168 >> 0x10);
                  uStack_56 = (undefined2)((ulong)local_168 >> 0x20);
                  sStack_54 = (short)((ulong)local_168 >> 0x30);
                  uStack_64 = puVar31;
                  __os_log_impl(0x100000000,puVar25,1,
                                "sync> required free bytes = %lld, available free bytes = %lld",
                                &local_68,0x16);
                }
                if ((long)puVar31 < local_168 || lVar49 < -0xfffff) {
                  local_b0 = puVar31;
                  lVar27 = FUN_100315ede(local_f0);
                  while (lVar27 != 0) {
                    sVar18 = *(short *)(lVar27 + 0x10);
                    if (sVar18 == 0xb) {
                      if ((char)local_e4 != '\0') {
LAB_10061010f:
                        FUN_10048f96c(lVar27);
LAB_100610117:
                        FUN_1002c33aa(&local_1d8);
                      }
                    }
                    else {
                      if (sVar18 == 0x11) {
                        cVar13 = *(char *)(local_a8 + 0x396);
joined_r0x0001006100b0:
                        if (cVar13 != '\0') goto LAB_100610126;
                      }
                      else if (sVar18 == 0x1e) {
                        cVar13 = *(char *)(local_a8 + 0x391);
                        goto joined_r0x0001006100b0;
                      }
                      if ((*(byte *)(lVar27 + 0x240) & 4) == 0) {
                        uVar17 = FUN_10048c0ca(lVar27);
                        cVar13 = FUN_10048c208(uVar17);
                        if (cVar13 == '\0') {
                          if ((byte)local_c8 == '\0') {
                            if (((char)local_e4 != '\0') && (*(long *)(lVar27 + 0x290) != 0)) {
                              FUN_1004919da(lVar27);
                              if (((CONCAT22(uStack_66,local_68) & 0x200004) != 0) &&
                                 ((CONCAT22(uStack_66,local_68) & 0xffdffffb) == 0))
                              goto LAB_100610165;
                            }
                          }
                          else {
                            if ((char)local_198 == '\0') {
LAB_100610165:
                              if (*(short *)(lVar27 + 0x10) == 0xb) goto LAB_10061010f;
                              goto LAB_100610117;
                            }
                            if ((*(byte *)(lVar27 + 0x298) & 1) == 0) {
                              FUN_1004919da(lVar27);
                              if (((local_68 & 0x21) == 0) && (CONCAT22(uStack_66,local_68) != 0))
                              goto LAB_100610165;
                            }
                          }
                        }
                      }
                    }
LAB_100610126:
                    lVar27 = FUN_100316031(lVar27);
                  }
                  lVar27 = FUN_1002f930c(local_f0);
                  local_98 = (uint *)CONCAT71(local_98._1_7_,local_d0 != 0 & local_f2);
                  while (lVar27 != 0) {
                    if ((*(int *)(lVar27 + 0xc2) < 0) && ((*(byte *)(lVar27 + 0xc6) & 1) == 0)) {
                      lVar49 = *(long *)(lVar27 + 0x58);
                      if (((lVar49 == 0) || (*(long *)(lVar49 + 8) == 0)) ||
                         (*(long *)(*(long *)(lVar49 + 8) + 0x10) == 0)) {
                        uVar24 = FUN_1001cc310();
                        cVar13 = _os_log_type_enabled(uVar24);
                        if (cVar13 != '\0') {
                          local_68 = 0x202;
                          uStack_66 = 0x822;
                          uStack_64._0_4_ = 0x7a0a90;
                          uStack_64._4_4_ = 1;
                          uStack_5c = 0x822;
                          uStack_5a = 0xe5af;
                          uStack_58 = 0x7b;
                          uStack_56 = 1;
                          sStack_54 = 0;
                          __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",
                                              &local_68,0x16);
                        }
                        FUN_1001782e9(0);
                        if (lVar49 == 0) goto LAB_10061056e;
                      }
                      if ((**(byte **)(lVar49 + 0x10) & 0x10) == 0) goto LAB_10061056e;
                      cVar13 = FUN_1004ec140(local_a8);
                      if (cVar13 != '\0') goto LAB_10061056e;
LAB_1006107fa:
                      uVar19 = *(uint *)(lVar27 + 0xc2);
                      uVar20 = 0x100;
LAB_100610805:
                      uVar19 = uVar19 | uVar20;
                    }
                    else {
                      cVar13 = FUN_1002bd28d(lVar27);
                      if (cVar13 == '\0') {
                        uVar28 = FUN_1004744bf(lVar27,0);
                        if ((uVar28 & 0x10000) == 0 && (uVar28 & 0x200004) != 0) {
                          if ((int)*(uint *)(lVar27 + 0xc2) < 0) {
                            uVar19 = *(uint *)(lVar27 + 0xc2) & 0xfffffeff;
                            goto LAB_100610577;
                          }
                          cVar13 = FUN_1003171d7(local_e0);
                          if (cVar13 != '\0') {
                            if ((char)local_98 != '\0') {
                              cVar13 = FUN_100485bb5(lVar27,local_d0,0);
                              if (cVar13 != '\0') {
                                uVar19 = FUN_1004744bf(lVar27,0);
                                uVar19 = (*(uint *)(lVar27 + 0xc2) & 0xfffffeff |
                                         uVar19 >> 5 & 0x100) ^ 0x100;
                                goto LAB_100610577;
                              }
                            }
                            if ((byte)local_c8 != '\0') {
                              if ((char)local_11c == '\0') {
                                lVar49 = *(long *)(lVar27 + 0x180);
                                lVar29 = FUN_100309008(local_e0);
                                if (lVar49 != lVar29) {
                                  lVar49 = *(long *)(lVar27 + 0x180);
                                  lVar29 = FUN_10030806a(local_e0);
                                  if (lVar49 != lVar29) {
                                    uVar19 = FUN_1004744bf(lVar27,0);
                                    if ((uVar19 >> 0xd & 1) == 0) goto LAB_10061056e;
                                  }
                                }
                              }
                              goto LAB_1006107fa;
                            }
                          }
                        }
                        else {
                          if (*(char *)(local_a8 + 0x396) != '\0') {
                            uVar19 = FUN_1004744bf(lVar27,0);
                            if ((uVar19 >> 0x14 & 1) != 0) {
                              uVar20 = 0;
                              if ((byte)local_c8 != '\0') {
                                bVar15 = FUN_10032ea8f(local_a8);
                                uVar20 = (bVar15 & 1) << 8;
                              }
                              uVar19 = *(uint *)(lVar27 + 0xc2) & 0xfffffeff;
                              goto LAB_100610805;
                            }
                          }
                          uVar28 = FUN_1004744bf(lVar27,0);
                          if ((uVar28 & 0x1004000) == 0) {
                            uVar22 = FUN_1004744bf(lVar27,0);
                            cVar13 = FUN_10048019c(uVar22);
                            if (cVar13 != '\0') {
                              cVar13 = FUN_1003171d7(local_e0);
                              if (cVar13 == '\0') goto LAB_10061056e;
                            }
                            if ((byte)local_c8 == '\0') {
                              uVar20 = *(uint *)(lVar27 + 0xc2);
                              uVar19 = 0;
                            }
                            else {
                              if ((char)local_198 == '\0') {
                                uVar20 = *(uint *)(lVar27 + 0xc2);
                              }
                              else {
                                cVar13 = FUN_1004ebf47(local_a8);
                                uVar19 = 0;
                                uVar20 = *(uint *)(lVar27 + 0xc2);
                                if (cVar13 != '\0') goto LAB_10061086e;
                              }
                              uVar19 = 0x100;
                            }
LAB_10061086e:
                            uVar19 = uVar20 & 0xfffffeff | uVar19;
                            goto LAB_100610577;
                          }
                        }
                      }
LAB_10061056e:
                      uVar19 = *(uint *)(lVar27 + 0xc2) & 0xfffffeff;
                    }
LAB_100610577:
                    *(uint *)(lVar27 + 0xc2) = uVar19;
                    if (*(char *)(local_a0 + 0x4e0) != '\0') {
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      puVar25 = DAT_1008c75b8;
                      cVar13 = _os_log_type_enabled(DAT_1008c75b8);
                      if (cVar13 != '\0') {
                        pcVar38 = "";
                        if ((*(uint *)(lVar27 + 0xc2) >> 8 & 1) == 0) {
                          pcVar38 = "not ";
                        }
                        FUN_100476ac1(&local_88,lVar27);
                        uVar24 = FUN_1001b83ae(&local_88);
                        local_68 = 0x202;
                        uStack_66 = 0x822;
                        uStack_64._0_4_ = SUB84(pcVar38,0);
                        uStack_64._4_4_ = (undefined4)((ulong)pcVar38 >> 0x20);
                        uStack_5c = 0x822;
                        uStack_5a = (undefined2)uVar24;
                        uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                        uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                        sStack_54 = (short)((ulong)uVar24 >> 0x30);
                        __os_log_impl(0x100000000,puVar25,2,
                                      "sync> %{public}smarking track \"%{public}s\" for delete",
                                      &local_68,0x16);
                        FUN_1001b7a50(&local_88);
                      }
                    }
                    lVar27 = FUN_1002f9451(lVar27);
                  }
                  local_c8 = (uint *)(local_168 - (long)local_b0);
                  if (local_c8 == (uint *)0x0 || local_168 < (long)local_b0) {
                    uVar24 = FUN_1001cc310();
                    cVar13 = _os_log_type_enabled(uVar24,0x10);
                    if (cVar13 != '\0') {
                      local_68 = 0x202;
                      uStack_66 = 0x822;
                      uStack_64._0_4_ = 0x7a0a90;
                      uStack_64._4_4_ = 1;
                      uStack_5c = 0x822;
                      uStack_5a = 0x501a;
                      uStack_58 = 0x7f;
                      uStack_56 = 1;
                      sStack_54 = 0;
                      __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: (%{public}s)",
                                          &local_68,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  puVar25 = puStack_140;
                  local_98 = local_148;
                  puVar31 = local_98;
                  if (local_148 != puStack_140) {
                    puVar31 = local_148;
                    do {
                      puVar45 = local_c8;
                      if (((char)puVar31[0x1b] != '\0') && ((char)puVar31[0x1a] != '\0')) {
                        lVar27 = FUN_100490af0(puVar31);
                        puVar45 = local_c8;
                        if (lVar27 != 0) {
                          uVar24 = FUN_100242590(lVar27);
                          lVar27 = FUN_10031b4c4(uVar24,puVar31[0xb]);
                          puVar45 = local_c8;
                          if ((lVar27 != 0) && (*(char *)(lVar27 + 0x44) == '\x01')) {
                            local_b0 = *(uint **)(puVar31 + 0x18);
                            if (local_b0 == (uint *)0x0) {
                              uVar30 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar30,0x10);
                              if (cVar13 != '\0') {
                                local_68 = 0x202;
                                uStack_66 = 0x822;
                                uStack_64._0_4_ = 0x7a0a90;
                                uStack_64._4_4_ = 1;
                                uStack_5c = 0x822;
                                uStack_5a = 0x5031;
                                uStack_58 = 0x7f;
                                uStack_56 = 1;
                                sStack_54 = 0;
                                __os_log_error_impl(0x100000000,uVar30,0x10,
                                                    "%{public}s: (%{public}s)",&local_68,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            puVar45 = (uint *)((long)local_c8 - (long)local_b0);
                            if ((long)local_c8 < (long)local_b0) {
                              *(undefined1 *)(puVar31 + 0x1a) = 0;
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              puVar44 = DAT_1008c75b8;
                              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                              puVar45 = local_c8;
                              if (cVar13 != '\0') {
                                FUN_100476ac1(&local_88,uVar24);
                                uVar24 = FUN_1001b83ae(&local_88);
                                local_68 = 0x202;
                                uStack_66 = 0x822;
                                uStack_64._0_4_ = (undefined4)uVar24;
                                uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                uStack_5c = 0x800;
                                uStack_5a = SUB82(local_b0,0);
                                uStack_58 = (undefined2)((ulong)local_b0 >> 0x10);
                                uStack_56 = (undefined2)((ulong)local_b0 >> 0x20);
                                sStack_54 = (short)((ulong)local_b0 >> 0x30);
                                __os_log_impl(0x100000000,puVar44,1,
                                              "sync> skipping optional source track \"%{public}s\", size = %llu"
                                              ,&local_68,0x16);
                                FUN_1001b7a50(&local_88);
                                puVar45 = local_c8;
                              }
                            }
                            else {
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              local_c8 = DAT_1008c75b8;
                              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar13 != '\0') {
                                FUN_100476ac1(&local_88,uVar24);
                                uVar24 = FUN_1001b83ae(&local_88);
                                local_68 = 0x302;
                                uStack_66 = 0x822;
                                uStack_64._0_4_ = (undefined4)uVar24;
                                uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                uStack_5c = 0x800;
                                uStack_5a = SUB82(local_b0,0);
                                uStack_58 = (undefined2)((ulong)local_b0 >> 0x10);
                                uStack_56 = (undefined2)((ulong)local_b0 >> 0x20);
                                sStack_54 = (short)((ulong)local_b0 >> 0x30);
                                uStack_52 = 0x800;
                                local_50 = puVar45;
                                __os_log_impl(0x100000000,local_c8,1,
                                              "sync> keeping optional source track \"%{public}s\", size = %llu, remaining free bytes = %lld"
                                              ,&local_68,0x20);
                                FUN_1001b7a50(&local_88);
                              }
                            }
                          }
                        }
                      }
                      local_c8 = puVar45;
                      puVar31 = puVar31 + 0x1c;
                      puVar45 = local_98;
                    } while (puVar31 != puVar25);
                    do {
                      if ((char)puVar45[0x1a] != '\0') {
                        lVar27 = FUN_100490af0();
                        if (lVar27 == 0) {
                          *(undefined1 *)(puVar45 + 0x1a) = 0;
                        }
                        else {
                          lVar27 = FUN_100242590(lVar27);
                          lVar49 = FUN_10031b4c4(lVar27,puVar45[0xb]);
                          lVar29 = FUN_1006033a6(local_a8,lVar49,
                                                 *(undefined1 *)((long)puVar45 + 0x69));
                          if (lVar29 != 0) {
                            uVar28 = *(ulong *)(*(long *)(lVar49 + 0x10) + 0xa8);
                            uVar2 = *(ulong *)(*(long *)(lVar29 + 0x10) + 0xa8);
                            if (uVar2 < uVar28) {
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              puVar25 = DAT_1008c75b8;
                              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar13 == '\0') goto LAB_10061107c;
                              puVar31 = &local_88;
                              FUN_100476ac1(puVar31,*(undefined8 *)(lVar29 + 8));
                              uVar30 = FUN_1001b83ae(puVar31);
                              uVar24 = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 0xa8);
                              local_50 = *(uint **)(*(long *)(lVar49 + 0x10) + 0xa8);
                              local_68 = 0x302;
                              uStack_66 = 0x822;
                              uStack_64._0_4_ = (undefined4)uVar30;
                              uStack_64._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
                              uStack_5c = 0x800;
                              uStack_5a = (undefined2)uVar24;
                              uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                              uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                              sStack_54 = (short)((ulong)uVar24 >> 0x30);
                              uStack_52 = 0x800;
                              __os_log_impl(0x100000000,puVar25,1,
                                            "sync> replacing track \"%{public}s\" on device since library version is newer (%llu vs. %llu)"
                                            ,&local_68,0x20);
LAB_100611077:
                              FUN_1001b7a50(puVar31);
                            }
                            else {
                              if (uVar28 < uVar2) {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                puVar25 = DAT_1008c75b8;
                                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar13 != '\0') {
                                  FUN_100476ac1(&local_88,*(undefined8 *)(lVar29 + 8));
                                  uVar30 = FUN_1001b83ae(&local_88);
                                  uVar24 = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 0xa8);
                                  local_50 = *(uint **)(*(long *)(lVar49 + 0x10) + 0xa8);
                                  local_68 = 0x302;
                                  uStack_66 = 0x822;
                                  uStack_64._0_4_ = (undefined4)uVar30;
                                  uStack_64._4_4_ = (undefined4)((ulong)uVar30 >> 0x20);
                                  uStack_5c = 0x800;
                                  uStack_5a = (undefined2)uVar24;
                                  uStack_58 = (undefined2)((ulong)uVar24 >> 0x10);
                                  uStack_56 = (undefined2)((ulong)uVar24 >> 0x20);
                                  sStack_54 = (short)((ulong)uVar24 >> 0x30);
                                  uStack_52 = 0x800;
                                  __os_log_impl(0x100000000,puVar25,1,
                                                "sync> keeping track \"%{public}s\" on device since library version is older (%llu vs. %llu)"
                                                ,&local_68,0x20);
                                  FUN_1001b7a50(&local_88);
                                }
                              }
                              local_98 = *(uint **)(lVar29 + 8);
                              if (*(char *)((long)puVar45 + 0x69) == '\0') {
                                if ((*(char *)(local_d8 + 0x2b0) != '\0') &&
                                   (*(char *)(local_a8 + 0x353) != '\0')) {
                                  if ((*(int *)(lVar27 + 0x170) == 0x65) && (local_98[0x5c] == 0x65)
                                     ) {
                                    cVar13 = FUN_1001a85de(lVar27 + 0x160,local_98 + 0x58);
                                    if (cVar13 != '\0') goto LAB_100610f10;
                                  }
                                  iVar36 = FUN_100356a30(local_a8,local_98,lVar27,0);
                                  if ((iVar36 != -0x80) && (iVar36 != 0)) {
                                    uVar24 = FUN_1001cc310();
                                    cVar13 = _os_log_type_enabled(uVar24,0x10);
                                    if (cVar13 != '\0') {
                                      local_68 = 0x202;
                                      uStack_66 = 0x822;
                                      uStack_64._0_4_ = 0x7a0a90;
                                      uStack_64._4_4_ = 1;
                                      uStack_5c = 0x400;
                                      uStack_5a = (undefined2)iVar36;
                                      uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                                      __os_log_error_impl(0x100000000,uVar24,0x10,
                                                          "%{public}s: err == (%d)",&local_68,0x12);
                                    }
                                  }
                                  FUN_1004729c1(local_98,0x25);
                                }
                              }
                              else {
                                sVar18 = FUN_10061d880(local_a0,lVar29);
                                if (*(short *)(lVar29 + 0x54) != sVar18) goto LAB_10061107c;
                                if ((*(char *)(local_a8 + 0x353) != '\0') &&
                                   (*(char *)(local_d8 + 0x2b0) != '\0')) {
                                  iVar36 = FUN_1004f2b0b(local_a8,1);
                                  if (iVar36 != -0x80) {
                                    if (iVar36 != 0) {
                                      local_b0 = (uint *)FUN_1001cc310();
                                      cVar13 = _os_log_type_enabled(local_b0,0x10);
                                      if (cVar13 != '\0') {
                                        local_68 = 0x202;
                                        uStack_66 = 0x822;
                                        uStack_64._0_4_ = 0x7a0a90;
                                        uStack_64._4_4_ = 1;
                                        uStack_5c = 0x400;
                                        uStack_5a = (undefined2)iVar36;
                                        uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                                        __os_log_error_impl(0x100000000,local_b0,0x10,
                                                            "%{public}s: err == (%d)",&local_68,0x12
                                                           );
                                      }
                                      if (iVar36 != 0) goto LAB_100610f10;
                                    }
                                    iVar36 = FUN_1005d1d63(lVar49);
                                    lVar34 = FUN_1003539f0(*(undefined8 *)(local_a8 + 0x66c0),
                                                           local_98);
                                    if (lVar34 == 0) {
                                      iVar21 = 0;
                                    }
                                    else {
                                      iVar21 = *(int *)(lVar34 + 0x94);
                                    }
                                    if (iVar36 != iVar21) {
                                      iVar36 = FUN_100356a30(local_a8,local_98,lVar27,0);
                                      if ((iVar36 != -0x80) && (iVar36 != 0)) {
                                        uVar24 = FUN_1001cc310();
                                        cVar13 = _os_log_type_enabled(uVar24,0x10);
                                        if (cVar13 != '\0') {
                                          local_68 = 0x202;
                                          uStack_66 = 0x822;
                                          uStack_64._0_4_ = 0x7a0a90;
                                          uStack_64._4_4_ = 1;
                                          uStack_5c = 0x400;
                                          uStack_5a = (undefined2)iVar36;
                                          uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                                          __os_log_error_impl(0x100000000,uVar24,0x10,
                                                              "%{public}s: err == (%d)",&local_68,
                                                              0x12);
                                        }
                                      }
                                      FUN_1004729c1(local_98,0x25);
                                    }
                                  }
                                }
                              }
LAB_100610f10:
                              if (*(char *)(lVar49 + 0x45) != '\n') {
                                FUN_1002fe59d(lVar49,lVar29);
                                lVar27 = FUN_1002b44c2(lVar49);
                                if (lVar27 == 0) {
LAB_100610f5f:
                                  if (*(char *)(local_a8 + 0x396) != '\0') {
                                    uVar19 = FUN_1004744bf(local_98,0);
                                    if ((uVar19 >> 0x14 & 1) != 0) goto LAB_100610f83;
                                  }
                                }
                                else {
                                  lVar27 = FUN_1002b44c2(lVar49);
                                  lVar34 = FUN_1002b44c2(lVar29);
                                  if (lVar27 != lVar34) goto LAB_100610f5f;
                                  lVar27 = FUN_1002b71b5(lVar49);
                                  lVar34 = FUN_1002b71b5(lVar29);
                                  if (lVar27 != lVar34) goto LAB_100610f5f;
LAB_100610f83:
                                  FUN_1002fca9a(lVar49,lVar29);
                                }
                              }
                              *(char *)((long)local_98 + 0x12e) = (char)local_98[0x4b];
                              uVar16 = FUN_1004817dc(local_98,0);
                              puVar25 = local_98;
                              *(undefined1 *)((long)local_98 + 0x135) = uVar16;
                              iVar36 = FUN_10047f424(local_98);
                              if (iVar36 != *(int *)(*(long *)(puVar25 + 0x20) + 0x10)) {
                                FUN_100473a90(puVar25);
                                *(int *)(*(long *)(puVar25 + 0x20) + 0x10) = iVar36;
                              }
                              FUN_10031baf6(puVar25,puVar45 + 0xc);
                              *(byte *)((long)puVar25 + 0xc3) =
                                   *(byte *)((long)puVar25 + 0xc3) & 0xfe;
                              if (*(char *)(local_a0 + 0x4e0) != '\0') {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                puVar25 = DAT_1008c75b8;
                                cVar13 = _os_log_type_enabled(DAT_1008c75b8,2);
                                if (cVar13 != '\0') {
                                  puVar31 = (uint *)&local_68;
                                  FUN_100476ac1(puVar31,local_98);
                                  uVar24 = FUN_1001b83ae(puVar31);
                                  local_88 = 0x8220102;
                                  uStack_84 = (undefined1)uVar24;
                                  uStack_83 = (undefined2)((ulong)uVar24 >> 8);
                                  cStack_81 = (char)((ulong)uVar24 >> 0x18);
                                  local_80 = (undefined4)((ulong)uVar24 >> 0x20);
                                  __os_log_impl(0x100000000,puVar25,2,
                                                "sync> unmarking track \"%{public}s\" for delete",
                                                &local_88,0xc);
                                  goto LAB_100611077;
                                }
                              }
                            }
                          }
                        }
LAB_10061107c:
                        iVar36 = FUN_1006020dd(local_a0);
                        puVar25 = puStack_140;
                        if (iVar36 != 0) {
                          if (iVar36 == -0x80) goto LAB_1006101e5;
                          uVar24 = FUN_1001cc310();
                          cVar13 = _os_log_type_enabled(uVar24,0x10);
                          if (cVar13 == '\0') goto LAB_1006101e5;
                          uStack_5a = (undefined2)iVar36;
                          uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                          goto LAB_1006120df;
                        }
                      }
                      puVar45 = puVar45 + 0x1c;
                      puVar31 = puVar25;
                    } while (puVar45 != puVar25);
                  }
                  local_98 = puVar31;
                  if ((*(char *)(local_a0 + 0x4dd) != '\0') && (0 < (long)local_c8)) {
                    lVar27 = FUN_1002f930c(local_f0);
                    local_b0 = (uint *)(local_a0 + 0x58);
                    local_c0 = (uint *)(local_a0 + 0x70);
                    while (lVar27 != 0) {
                      puVar25 = local_c8;
                      if ((*(byte *)(lVar27 + 0xc3) & 1) != 0) {
                        cVar13 = FUN_10061d957(lVar27);
                        puVar25 = local_c8;
                        if (cVar13 != '\0') {
                          lVar49 = *(long *)(lVar27 + 0x58);
                          lVar29 = FUN_100300729(local_e0,*(undefined8 *)(lVar27 + 0x188));
                          uVar22 = (undefined4)((ulong)ppuVar53 >> 0x20);
                          puVar25 = local_c8;
                          if (lVar29 != 0) {
                            lVar29 = FUN_1004e7c10(local_a8,lVar29,0);
                            if (lVar29 == 0) {
                              uVar24 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar24,0x10);
                              if (cVar13 != '\0') {
                                local_68 = 0x202;
                                uStack_66 = 0x822;
                                uStack_64._0_4_ = 0x7a0a90;
                                uStack_64._4_4_ = 1;
                                uStack_5c = 0x822;
                                uStack_5a = 0x4c43;
                                uStack_58 = 0x7f;
                                uStack_56 = 1;
                                sStack_54 = 0;
                                __os_log_error_impl(0x100000000,uVar24,0x10,
                                                    "%{public}s: (%{public}s)",&local_68,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            if (DAT_1008c7808 == '\0') {
                              FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
                              DAT_1008c7808 = '\x01';
                            }
                            _DAT_1008c77d8 = _DAT_1008c77f8;
                            uRam00000001008c77e0 = uRam00000001008c7800;
                            _DAT_1008c77c8 = _DAT_1008c77e8;
                            uRam00000001008c77cc = uRam00000001008c77ec;
                            uRam00000001008c77d0 = uRam00000001008c77f0;
                            uRam00000001008c77d4 = uRam00000001008c77f4;
                            ppuVar53 = (uint **)CONCAT44(uVar22,1);
                            cVar13 = FUN_10030272d(lVar29,lVar49,&DAT_1008c77c8,0,0,
                                                   *(uint *)(lVar49 + 0x48) >> 0x10 & 1,ppuVar53);
                            puVar25 = local_c8;
                            if (cVar13 != '\0') {
                              uVar19 = FUN_1004eb707(local_a8,lVar29,local_b0);
                              puVar25 = local_c8;
                              if (uVar19 < 4) {
                                if (uVar19 == 1) {
                                  sVar18 = FUN_10061d880(local_a0,lVar29);
                                  if ((*(byte *)(lVar49 + 0x4a) & 1) == 0) {
LAB_1006115e4:
                                    if (DAT_1008c75c0 != -1) {
                                      _dispatch_once(&DAT_1008c75c0,
                                                     &PTR___NSConcreteGlobalBlock_100857068);
                                    }
                                    puVar31 = DAT_1008c75b8;
                                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                    puVar25 = local_c8;
                                    if (cVar13 == '\0') goto LAB_100611679;
                                    FUN_100476ac1(&local_88,lVar27);
                                    uVar24 = FUN_1001b83ae(&local_88);
                                    pcVar38 = "disabled";
                                    if (uVar19 == 1) {
                                      pcVar38 = "enabled";
                                    }
                                    local_68 = 0x202;
                                    uStack_64._0_4_ = (undefined4)uVar24;
                                    uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                    uStack_5c = 0x822;
                                    uStack_5a = SUB82(pcVar38,0);
                                    uStack_58 = (undefined2)((ulong)pcVar38 >> 0x10);
                                    uStack_56 = (undefined2)((ulong)pcVar38 >> 0x20);
                                    sStack_54 = 0;
                                    pcVar38 = 
                                    "sync> not keeping autofilled track \"%{public}s\" since transcoding was %{public}s"
                                    ;
                                    uVar24 = 0x16;
                                  }
                                  else {
                                    if (sVar18 == *(short *)(lVar49 + 0x54)) goto LAB_1006114d6;
                                    if (DAT_1008c75c0 != -1) {
                                      _dispatch_once(&DAT_1008c75c0,
                                                     &PTR___NSConcreteGlobalBlock_100857068);
                                    }
                                    puVar31 = DAT_1008c75b8;
                                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                    puVar25 = local_c8;
                                    if (cVar13 == '\0') goto LAB_100611679;
                                    FUN_100476ac1(&local_88,lVar27);
                                    uVar24 = FUN_1001b83ae(&local_88);
                                    uStack_5a = *(undefined2 *)(lVar49 + 0x54);
                                    local_68 = 0x302;
                                    uStack_64._0_4_ = (undefined4)uVar24;
                                    uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                    uStack_5c = 0x400;
                                    uStack_58 = 0;
                                    uStack_56 = 0x400;
                                    uStack_52 = 0;
                                    pcVar38 = 
                                    "sync> not keeping autofilled track \"%{public}s\" since transcoding bit rate was changed from %u kbps to %u kbps"
                                    ;
                                    uVar24 = 0x18;
                                    sStack_54 = sVar18;
                                  }
                                  uStack_66 = 0x822;
                                  __os_log_impl(0x100000000,puVar31,1,pcVar38,&local_68,uVar24);
                                  FUN_1001b7a50(&local_88);
                                  puVar25 = local_c8;
                                }
                                else {
                                  if ((*(byte *)(lVar49 + 0x4a) & 1) != 0) goto LAB_1006115e4;
LAB_1006114d6:
                                  ppuVar53 = (uint **)0x0;
                                  puVar31 = (uint *)FUN_1004eb21f(local_a8,lVar29,
                                                                  *(undefined1 *)(local_d8 + 0x2b0),
                                                                  uVar19 == 1,
                                                                  *(undefined2 *)(local_d8 + 0x3a6),
                                                                  0,0,0,0);
                                  puVar45 = (uint *)((long)local_c8 - (long)puVar31);
                                  puVar25 = local_c8;
                                  if (puVar31 <= local_c8) {
                                    *(byte *)(lVar27 + 0xc3) = *(byte *)(lVar27 + 0xc3) & 0xfe;
                                    if ((*(ushort *)(lVar27 + 0xc6) & 4) == 0) {
                                      *(ushort *)(lVar27 + 0xc6) = *(ushort *)(lVar27 + 0xc6) | 4;
                                      FUN_1004729c1(lVar27,0x83);
                                    }
                                    if (DAT_1008c75c0 != -1) {
                                      _dispatch_once(&DAT_1008c75c0,
                                                     &PTR___NSConcreteGlobalBlock_100857068);
                                    }
                                    puVar44 = DAT_1008c75b8;
                                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                    puVar25 = puVar45;
                                    if (cVar13 != '\0') {
                                      FUN_100476ac1(&local_88,lVar27);
                                      uVar24 = FUN_1001b83ae(&local_88);
                                      local_68 = 0x302;
                                      uStack_66 = 0x822;
                                      uStack_64._0_4_ = (undefined4)uVar24;
                                      uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                      uStack_5c = 0x800;
                                      uStack_5a = SUB82(puVar31,0);
                                      uStack_58 = (undefined2)((ulong)puVar31 >> 0x10);
                                      uStack_56 = (undefined2)((ulong)puVar31 >> 0x20);
                                      sStack_54 = (short)((ulong)puVar31 >> 0x30);
                                      uStack_52 = 0x800;
                                      local_50 = puVar45;
                                      __os_log_impl(0x100000000,puVar44,1,
                                                                                                        
                                                  "sync> keeping autofilled track \"%{public}s\", size = %llu, remaining free bytes = %lld"
                                                  ,&local_68,0x20);
                                      FUN_1001b7a50(&local_88);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LAB_100611679:
                      local_c8 = puVar25;
                      lVar27 = FUN_1002f9451(lVar27);
                    }
                  }
                  iVar36 = FUN_100603b3e(local_a0);
                  if (iVar36 != -0x80) {
                    if (iVar36 == 0) {
                      FUN_1003570a7(local_a8);
                      for (puVar25 = local_148; puVar25 != local_98; puVar25 = puVar25 + 0x1c) {
                        if ((char)puVar25[0x1a] != '\0') {
                          lVar27 = FUN_100490af0(puVar25);
                          if (lVar27 == 0) {
                            *(undefined1 *)(puVar25 + 0x1a) = 0;
                          }
                          else {
                            puVar31 = (uint *)FUN_100242590(lVar27);
                            lVar49 = FUN_10031b4c4(puVar31,puVar25[0xb]);
                            if ((lVar49 == 0) || (*(char *)(lVar49 + 0x44) != '\x01')) {
                              if (puVar25[0xd] != 0) {
                                lVar27 = FUN_100485a0b(local_158,puVar25[0xd],0);
                                if (lVar27 != 0) {
                                  FUN_100490f45(lVar27,puVar25 + 0xc);
                                }
                              }
                            }
                            else {
                              bVar51 = *(char *)((long)puVar25 + 0x69) != '\0';
                              cVar13 = bVar51 + '\b';
                              if (*(char *)((long)puVar25 + 0x6a) == '\0') {
                                cVar13 = bVar51;
                              }
                              lVar27 = FUN_1003a790f(lVar27,lVar49,local_158,0,cVar13);
                              if (lVar27 != 0) {
                                puVar45 = *(uint **)(lVar27 + 8);
                                if (puVar45 == (uint *)0x0) {
                                  uVar24 = FUN_1001cc310();
                                  cVar13 = _os_log_type_enabled(uVar24,0x10);
                                  if (cVar13 != '\0') {
                                    pcVar38 = "destTrackInfo != nullptr";
LAB_100611f92:
                                    uStack_5c = 0x822;
                                    uStack_64._4_4_ = 1;
                                    uStack_64._0_4_ = 0x7a0a90;
                                    uStack_66 = 0x822;
                                    local_68 = 0x202;
                                    uStack_5a = SUB82(pcVar38,0);
                                    uStack_58 = (undefined2)((ulong)pcVar38 >> 0x10);
                                    uStack_56 = (undefined2)((ulong)pcVar38 >> 0x20);
                                    sStack_54 = 0;
                                    __os_log_error_impl(0x100000000,uVar24,0x10,
                                                        "%{public}s: (%{public}s)",&local_68,0x16);
                                  }
                                }
                                else {
                                  local_c8 = *(uint **)(puVar45 + 0x16);
                                  if (local_c8 != (uint *)0x0) {
                                    if ((*(ushort *)((long)puVar45 + 0xc6) & 4) != 0) {
                                      *(ushort *)((long)puVar45 + 0xc6) =
                                           *(ushort *)((long)puVar45 + 0xc6) & 0xfffb;
                                      FUN_1004729c1(puVar45,0x83);
                                    }
                                    if (*(long *)puVar45 != *(long *)puVar31) {
                                      uVar28 = FUN_1004744bf(puVar45,0);
                                      if ((uVar28 & 0xc00000) == 0) {
                                        FUN_100472be7(puVar45,puVar31);
                                        if (-1 < *(int *)((long)puVar45 + 0xc2)) {
                                          local_98 = *(uint **)puVar31;
                                          lVar29 = FUN_10061fb66(&local_188,*(long *)puVar45,puVar45
                                                                );
                                          *(uint **)(lVar29 + 0x28) = local_98;
                                          FUN_100472588(puVar45,*(long *)puVar31,1);
                                        }
                                      }
                                    }
                                    local_98 = puVar45;
                                    if (*(char *)((long)local_c8 + 0x45) != '\0') {
                                      local_b0 = puVar31;
                                      if (*(char *)(local_a8 + 0x3a2) == '\0') {
                                        if (DAT_1008c75c0 != -1) {
                                          _dispatch_once(&DAT_1008c75c0,
                                                         &PTR___NSConcreteGlobalBlock_100857068);
                                        }
                                        local_c0 = DAT_1008c75b8;
                                        cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                        puVar45 = local_98;
                                        puVar31 = local_b0;
                                        if (cVar13 != '\0') {
                                          FUN_100476ac1(&local_88,local_98);
                                          uVar24 = FUN_1001b83ae(&local_88);
                                          lVar29 = *(long *)(puVar25 + 0x18);
                                          local_68 = 0x202;
                                          uStack_66 = 0x822;
                                          uStack_64._0_4_ = (undefined4)uVar24;
                                          uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                          uStack_5c = 0x800;
                                          uStack_5a = (undefined2)lVar29;
                                          uStack_58 = (undefined2)((ulong)lVar29 >> 0x10);
                                          uStack_56 = (undefined2)((ulong)lVar29 >> 0x20);
                                          sStack_54 = (short)((ulong)lVar29 >> 0x30);
                                          __os_log_impl(0x100000000,local_c0,1,
                                                                                                                
                                                  "sync> copying track \"%{public}s\", size = %llu",
                                                  &local_68,0x16);
LAB_100611b84:
                                          FUN_1001b7a50(&local_88);
                                          puVar45 = local_98;
LAB_100611ce0:
                                          puVar31 = local_b0;
                                        }
                                      }
                                      else {
                                        *(long *)(local_a0 + 0x3d0) =
                                             *(long *)(local_a0 + 0x3d0) + *(long *)(puVar25 + 0x18)
                                        ;
                                        cVar13 = FUN_1002bd03f(puVar45,*(undefined1 *)
                                                                        (local_a8 + 0x39e),
                                                               *(undefined1 *)(local_a8 + 0x39d));
                                        if (cVar13 == '\0') {
                                          if (DAT_1008c75c0 != -1) {
                                            _dispatch_once(&DAT_1008c75c0,
                                                           &PTR___NSConcreteGlobalBlock_100857068);
                                          }
                                          local_c0 = DAT_1008c75b8;
                                          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                          puVar45 = local_98;
                                          puVar31 = local_b0;
                                          if (cVar13 != '\0') {
                                            FUN_100476ac1(&local_88,local_98);
                                            uVar24 = FUN_1001b83ae(&local_88);
                                            lVar29 = *(long *)local_98;
                                            local_50 = *(uint **)(puVar25 + 0x18);
                                            uStack_64._0_4_ = (undefined4)uVar24;
                                            uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                            uStack_5a = (undefined2)lVar29;
                                            uStack_58 = (undefined2)((ulong)lVar29 >> 0x10);
                                            uStack_56 = (undefined2)((ulong)lVar29 >> 0x20);
                                            sStack_54 = (short)((ulong)lVar29 >> 0x30);
                                            pcVar38 = 
                                            "sync> copying track \"%{public}s\", identifier \"%lld\", size = %llu"
                                            ;
LAB_100611cc8:
                                            puVar45 = local_98;
                                            uStack_52 = 0x800;
                                            uStack_5c = 0x800;
                                            uStack_66 = 0x822;
                                            local_68 = 0x302;
                                            __os_log_impl(0x100000000,local_c0,1,pcVar38,&local_68,
                                                          0x20);
                                            FUN_1001b7a50(&local_88);
                                            goto LAB_100611ce0;
                                          }
                                        }
                                        else {
                                          local_68 = 0;
                                          uStack_66 = 0;
                                          FUN_100474029(local_b0,&local_68,0);
                                          if (CONCAT22(uStack_66,local_68) < 2) {
                                            if (DAT_1008c75c0 != -1) {
                                              _dispatch_once(&DAT_1008c75c0,
                                                             &PTR___NSConcreteGlobalBlock_100857068)
                                              ;
                                            }
                                            local_c0 = DAT_1008c75b8;
                                            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                            puVar45 = local_98;
                                            puVar31 = local_b0;
                                            if (cVar13 != '\0') {
                                              FUN_100476ac1(&local_88,local_98);
                                              uVar24 = FUN_1001b83ae(&local_88);
                                              lVar29 = *(long *)local_98;
                                              local_50 = *(uint **)(puVar25 + 0x18);
                                              uStack_64._0_4_ = (undefined4)uVar24;
                                              uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                              uStack_5a = (undefined2)lVar29;
                                              uStack_58 = (undefined2)((ulong)lVar29 >> 0x10);
                                              uStack_56 = (undefined2)((ulong)lVar29 >> 0x20);
                                              sStack_54 = (short)((ulong)lVar29 >> 0x30);
                                              pcVar38 = 
                                              "sync> copying track \"%{public}s\", identifier \"%016llX\", size = %llu"
                                              ;
                                              goto LAB_100611cc8;
                                            }
                                          }
                                          else {
                                            if (DAT_1008c75c0 != -1) {
                                              _dispatch_once(&DAT_1008c75c0,
                                                             &PTR___NSConcreteGlobalBlock_100857068)
                                              ;
                                            }
                                            local_c0 = DAT_1008c75b8;
                                            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                            puVar45 = local_98;
                                            puVar31 = local_b0;
                                            if (cVar13 != '\0') {
                                              FUN_100476ac1(&local_88,local_98);
                                              uVar24 = FUN_1001b83ae(&local_88);
                                              lVar29 = *(long *)local_98;
                                              FUN_100313dab(&local_110,lVar49,1);
                                              local_50 = (uint *)FUN_1001b83ae(&local_110);
                                              lVar34 = *(long *)(puVar25 + 0x18);
                                              local_68 = 0x402;
                                              uStack_66 = 0x822;
                                              uStack_64._0_4_ = (undefined4)uVar24;
                                              uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                              uStack_5c = 0x800;
                                              uStack_5a = (undefined2)lVar29;
                                              uStack_58 = (undefined2)((ulong)lVar29 >> 0x10);
                                              uStack_56 = (undefined2)((ulong)lVar29 >> 0x20);
                                              sStack_54 = (short)((ulong)lVar29 >> 0x30);
                                              uStack_52 = 0x822;
                                              local_48 = 0x800;
                                              iStack_46 = (int)lVar34;
                                              uStack_42 = (undefined2)((ulong)lVar34 >> 0x20);
                                              uStack_40 = (undefined2)((ulong)lVar34 >> 0x30);
                                              __os_log_impl(0x100000000,local_c0,1,
                                                                                                                        
                                                  "sync> copying track \"%{public}s\", identifier \"%016llX\", flavor \"%{public}s\", size = %llu"
                                                  ,&local_68,0x2a);
                                              FUN_1001b7a50(&local_110);
                                              goto LAB_100611b84;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    FUN_100490f45(lVar27,puVar25 + 0xc);
                                    uVar28 = FUN_1002b1255(lVar49,0);
                                    if ((uVar28 & 0x810090) != 0) {
                                      FUN_1002fca9a(lVar49,local_c8);
                                    }
                                    FUN_1002fe59d(lVar49,local_c8);
                                    lVar27 = *(long *)(puVar45 + 10);
                                    cVar13 = FUN_10061d990(lVar27);
                                    if (cVar13 != '\0') {
                                      FUN_1003a2e0a(lVar27,*(long *)(puVar31 + 10));
                                    }
                                    lVar27 = *(long *)(puVar45 + 0x10);
                                    cVar13 = FUN_10061da63(lVar27);
                                    if ((cVar13 != '\0') &&
                                       (lVar49 = *(long *)(puVar31 + 0x10), lVar49 != 0)) {
                                      FUN_1005e5f8e(lVar27,*(undefined1 *)(lVar49 + 0x88),
                                                    *(undefined4 *)(lVar49 + 0xa4));
                                      *(undefined1 *)(lVar27 + 0x89) =
                                           *(undefined1 *)(lVar49 + 0x88);
                                    }
                                    if (*(char *)(local_a8 + 0x37f) == '\0') {
                                      if (*(char *)(local_a8 + 0x3a7) != '\0') {
                                        uVar19 = FUN_1004744bf(puVar45,0);
                                        if ((uVar19 & 0x10004) == 4) goto LAB_100611e72;
                                      }
                                      if (*(char *)(local_a8 + 0x3a5) != '\0') {
                                        cVar13 = FUN_1002bd03f(local_98,*(undefined1 *)
                                                                         (local_a8 + 0x39e),
                                                               *(undefined1 *)(local_a8 + 0x39d));
LAB_100611ecf:
                                        if (cVar13 != '\0') {
LAB_100611ed7:
                                          if ((*(char *)(local_a8 + 0x39c) == '\0') ||
                                             (*(char *)(local_a8 + 0x6b03) == '\0')) {
                                            *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0x27) = 1;
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      uVar19 = FUN_1004744bf(puVar45,0);
                                      if ((uVar19 & 0x10004) == 4) {
LAB_100611e72:
                                        if (*(char *)(local_a8 + 0x6b06) == '\0') {
                                          *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0x28) = 1;
                                        }
                                      }
                                      else {
                                        uVar19 = FUN_1004744bf(puVar45,0);
                                        if ((uVar19 >> 0x14 & 1) != 0) {
                                          if ((*(int *)(local_a0 + 4) != 0x69506164) &&
                                             (*(char *)(local_a8 + 0x6b02) == '\0')) {
                                            *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0x26) = 1;
                                          }
                                          goto LAB_100611a5e;
                                        }
                                        uVar19 = FUN_1004744bf(local_98,0);
                                        if ((uVar19 & 0xfe182321) == 0 || (uVar19 >> 0x10 & 1) != 0)
                                        {
                                          uVar28 = FUN_1004744bf(local_98,0);
                                          if ((uVar28 & 0x20) == 0) {
                                            uVar28 = FUN_1004744bf(local_98,0);
                                            if ((uVar28 & 0xc62) != 0) {
                                              if ((*(char *)(local_a8 + 0x6b00) == '\0') &&
                                                 (*(char *)(local_a8 + 0x6b01) == '\0')) {
                                                *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0x25) =
                                                     1;
                                              }
                                              goto LAB_100611a5e;
                                            }
                                            uVar19 = FUN_1004744bf(local_98,0);
                                            if ((uVar19 & 0x21800c) != 8) {
                                              cVar13 = FUN_1002bd03f(local_98,*(undefined1 *)
                                                                               (local_a8 + 0x39e),
                                                                     *(undefined1 *)
                                                                      (local_a8 + 0x39d));
                                              goto LAB_100611ecf;
                                            }
                                            goto LAB_100611ed7;
                                          }
                                        }
                                        if (*(char *)(local_a8 + 0x6aff) == '\0') {
                                          *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0x24) = 1;
                                        }
                                      }
                                    }
                                    goto LAB_100611a5e;
                                  }
                                  uVar24 = FUN_1001cc310();
                                  cVar13 = _os_log_type_enabled(uVar24,0x10);
                                  if (cVar13 != '\0') {
                                    pcVar38 = "destTrackInstance != nullptr";
                                    goto LAB_100611f92;
                                  }
                                }
                                FUN_1001782e9(0,0);
                                goto LAB_100611a83;
                              }
                              if ((*(byte *)(local_f0 + 0x2be1) & 0x80) != 0) {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                puVar25 = DAT_1008c75b8;
                                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar13 != '\0') {
                                  local_68 = 0;
                                  __os_log_impl(0x100000000,puVar25,1,
                                                "sync> copying exceeded free bytes",&local_68,2);
                                }
                                break;
                              }
                            }
LAB_100611a5e:
                            iVar36 = FUN_1006020dd(local_a0);
                            if (iVar36 != 0) {
                              if (iVar36 == -0x80) goto LAB_1006101e5;
                              uVar24 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar24,0x10);
                              if (cVar13 == '\0') goto LAB_1006101e5;
                              uStack_5a = (undefined2)iVar36;
                              uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                              goto LAB_1006120df;
                            }
                            local_98 = puStack_140;
                          }
                        }
LAB_100611a83:
                      }
                      if (((*(char *)(local_a8 + 0x353) != '\0') &&
                          (*(char *)(local_d8 + 0x2b0) != '\0')) && (lStack_178 != 0)) {
                        iVar36 = FUN_1004f2b0b(local_a8,1);
                        if (iVar36 != -0x80) {
                          if (iVar36 != 0) {
                            uVar24 = FUN_1001cc310();
                            cVar13 = _os_log_type_enabled(uVar24,0x10);
                            if (cVar13 != '\0') {
                              local_68 = 0x202;
                              uStack_66 = 0x822;
                              uStack_64._0_4_ = 0x7a0a90;
                              uStack_64._4_4_ = 1;
                              uStack_5c = 0x400;
                              uStack_5a = (undefined2)iVar36;
                              uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                              __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: err == (%d)",
                                                  &local_68,0x12);
                            }
                            if (iVar36 != 0) goto LAB_100612299;
                          }
                          lVar27 = FUN_100496019(*(undefined8 *)(local_a8 + 0x66c0));
                          while (lVar27 != 0) {
                            if ((undefined8 ******)local_180 != (undefined8 ******)0x0) {
                              pppppuVar3 = *(undefined8 ******)(lVar27 + 0x20);
                              ppppppuVar35 = &local_180;
                              ppppppuVar41 = (undefined8 ******)local_180;
                              do {
                                if (ppppppuVar41[4] >= pppppuVar3) {
                                  ppppppuVar35 = ppppppuVar41;
                                }
                                ppppppuVar41 = (undefined8 ******)
                                               ppppppuVar41[ppppppuVar41[4] < pppppuVar3];
                              } while (ppppppuVar41 != (undefined8 ******)0x0);
                              if ((ppppppuVar35 != &local_180) && (ppppppuVar35[4] <= pppppuVar3)) {
                                FUN_1004987ec(lVar27,ppppppuVar35[5]);
                              }
                            }
                            lVar27 = FUN_1004960d0(lVar27);
                          }
                        }
LAB_100612299:
                        if ((*(char *)(local_a8 + 0x360) != '\0') &&
                           ((undefined8 ******)local_188 != &local_180)) {
                          ppppppuVar35 = (undefined8 ******)local_188;
                          do {
                            lVar27 = FUN_100300729(local_f0,ppppppuVar35[5]);
                            if (lVar27 != 0) {
                              lVar27 = *(long *)(lVar27 + 0x28);
                              if (lVar27 == 0) {
                                uVar24 = FUN_1001cc310();
                                cVar13 = _os_log_type_enabled(uVar24,0x10);
                                if (cVar13 != '\0') {
                                  local_68 = 0x202;
                                  uStack_66 = 0x822;
                                  uStack_64._0_4_ = 0x7a0a90;
                                  uStack_64._4_4_ = 1;
                                  uStack_5c = 0x822;
                                  uStack_5a = 0x68cf;
                                  uStack_58 = 0x7b;
                                  uStack_56 = 1;
                                  sStack_54 = 0;
                                  __os_log_error_impl(0x100000000,uVar24,0x10,
                                                      "%{public}s: (%{public}s)",&local_68,0x16);
                                }
                                FUN_1001782e9(0,0);
                              }
                              else if (*(undefined8 ******)(lVar27 + 0x70) == ppppppuVar35[4]) {
                                *(undefined8 ******)(lVar27 + 0x70) = ppppppuVar35[5];
                              }
                            }
                            ppppppuVar41 = (undefined8 ******)ppppppuVar35[1];
                            ppppppuVar42 = ppppppuVar35;
                            if ((undefined8 ******)ppppppuVar35[1] == (undefined8 ******)0x0) {
                              do {
                                ppppppuVar35 = (undefined8 ******)ppppppuVar42[2];
                                bVar51 = (undefined8 ******)*ppppppuVar35 != ppppppuVar42;
                                ppppppuVar42 = ppppppuVar35;
                              } while (bVar51);
                            }
                            else {
                              do {
                                ppppppuVar35 = ppppppuVar41;
                                ppppppuVar41 = (undefined8 ******)*ppppppuVar35;
                              } while ((undefined8 ******)*ppppppuVar35 != (undefined8 ******)0x0);
                            }
                          } while (ppppppuVar35 != &local_180);
                        }
                      }
                      piVar50 = local_90;
                      uVar24 = FUN_10027934f();
                      FUN_1001cd3f9(uVar24);
                      uVar24 = FUN_100279402();
                      FUN_1001cd3f9(uVar24);
                      FUN_100353213(local_160,local_158,0);
                      FUN_1001c6987(local_158 + 0x32,0x6370636c,local_158,0,0);
                      piVar23 = local_b8;
                      if (piVar50 != local_b8) {
LAB_10061240e:
                        do {
                          if (*piVar50 != 0) {
                            lVar27 = FUN_10048b3c0(local_e0);
                            uVar19 = piVar50[2];
                            *piVar50 = 0;
                            if (lVar27 != 0) {
                              if (piVar50 == piVar23) {
                                uVar24 = FUN_1001cc310();
                                cVar13 = _os_log_type_enabled(uVar24,0x10);
                                if (cVar13 != '\0') {
                                  local_68 = 0x202;
                                  uStack_66 = 0x822;
                                  uStack_64._0_4_ = 0x7a0a90;
                                  uStack_64._4_4_ = 1;
                                  uStack_5c = 0x822;
                                  uStack_5a = 0x505d;
                                  uStack_58 = 0x7f;
                                  uStack_56 = 1;
                                  sStack_54 = 0;
                                  __os_log_error_impl(0x100000000,uVar24,0x10,
                                                      "%{public}s: (%{public}s)",&local_68,0x16);
                                }
                                FUN_1001782e9(0,0);
                              }
                              local_b8 = piVar23;
                              if ((*(short *)(lVar27 + 0x10) == 0x20) &&
                                 (*(char *)(local_a8 + 0x394) != '\0')) {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                puVar25 = DAT_1008c75b8;
                                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar13 != '\0') {
                                  FUN_100486d8f(&local_68,lVar27);
                                  uVar24 = FUN_1001b83ae(&local_68);
                                  local_88 = 0x8220102;
                                  uStack_84 = (undefined1)uVar24;
                                  uStack_83 = (undefined2)((ulong)uVar24 >> 8);
                                  cStack_81 = (char)((ulong)uVar24 >> 0x18);
                                  local_80 = (undefined4)((ulong)uVar24 >> 0x20);
                                  __os_log_impl(0x100000000,puVar25,1,
                                                "sync> creating Genius Mix playlist \"%{public}s\"",
                                                &local_88,0xc);
                                  puVar25 = (uint *)&local_68;
LAB_1006125b0:
                                  FUN_1001b7a50(puVar25);
                                }
                              }
                              else {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                puVar25 = DAT_1008c75b8;
                                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar13 != '\0') {
                                  FUN_100486d8f(&local_88,lVar27);
                                  uVar24 = FUN_1001b83ae(&local_88);
                                  FUN_10061db36(&local_110,uVar19);
                                  uVar30 = FUN_1001b83ae(&local_110);
                                  local_68 = 0x202;
                                  uStack_66 = 0x822;
                                  uStack_64._0_4_ = (undefined4)uVar24;
                                  uStack_64._4_4_ = (undefined4)((ulong)uVar24 >> 0x20);
                                  uStack_5c = 0x822;
                                  uStack_5a = (undefined2)uVar30;
                                  uStack_58 = (undefined2)((ulong)uVar30 >> 0x10);
                                  uStack_56 = (undefined2)((ulong)uVar30 >> 0x20);
                                  sStack_54 = (short)((ulong)uVar30 >> 0x30);
                                  __os_log_impl(0x100000000,puVar25,1,
                                                "sync> copying playlist \"%{public}s\", media kinds = { %{public}s }"
                                                ,&local_68,0x16);
                                  FUN_1001b7a50(&local_110);
                                  puVar25 = &local_88;
                                  goto LAB_1006125b0;
                                }
                              }
                              lVar49 = (long)&uStack_64 + 4;
                              uStack_64._4_4_ = 0;
                              uStack_5c = 0;
                              uStack_5a = 0;
                              uStack_58 = 0;
                              uStack_56 = 0;
                              sStack_54 = 0;
                              uStack_52 = 0;
                              local_68 = (ushort)lVar49;
                              uStack_66 = (undefined2)((ulong)lVar49 >> 0x10);
                              uStack_64._0_4_ = (undefined4)((ulong)lVar49 >> 0x20);
                              lVar49 = FUN_10061dc00(local_a0,lVar27,&local_68);
                              if (lVar49 == 0) {
                                uVar24 = FUN_1001cc310();
                                cVar13 = _os_log_type_enabled(uVar24,0x10);
                                if (cVar13 != '\0') {
                                  local_88 = 0x8220202;
                                  uStack_84 = 0x90;
                                  uStack_83 = 0x7a0a;
                                  cStack_81 = '\0';
                                  local_80 = 1;
                                  uStack_7c = 0x22;
                                  uStack_7b = 8;
                                  uStack_7a = 0x4e32;
                                  uStack_78 = 0x7f;
                                  uStack_76 = 1;
                                  __os_log_error_impl(0x100000000,uVar24,0x10,
                                                      "%{public}s: (%{public}s)",&local_88,0x16);
                                }
                                FUN_1001782e9(0,0);
                                FUN_100350daa(&local_68,
                                              CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_64._4_4_)
                                                      ));
                                break;
                              }
                              piVar50[1] = *(int *)(lVar49 + 0x58);
                              FUN_10061fbf4(&local_1d8);
                              if (*(short *)(lVar27 + 0x10) == 10) {
                                local_d0 = lVar49;
                              }
                              local_98 = (uint *)CONCAT44(local_98._4_4_,
                                                          *(undefined4 *)(lVar27 + 0x58));
                              local_b0 = (uint *)CONCAT44(local_b0._4_4_,
                                                          *(undefined4 *)(lVar27 + 0x270));
                              local_c8 = (uint *)CONCAT44(local_c8._4_4_,
                                                          *(undefined4 *)
                                                           (*(long *)(lVar27 + 0x78) + 0x18));
                              local_160 = (int *)(lVar49 + 0x4a0);
                              iVar21 = 0;
                              while (lVar27 = FUN_10048b3c0(local_e0,(ulong)local_98 & 0xffffffff),
                                    lVar27 != 0) {
                                if (iVar21 == (int)local_c8) goto LAB_1006129a8;
                                uVar24 = 1;
                                if ((*(short *)(lVar27 + 0x10) != 10) &&
                                   (uVar24 = 1, *(char *)(lVar27 + 0x2a3) == '\0')) {
                                  uVar24 = 0x77;
                                }
                                lVar27 = FUN_10037ddf6(*(undefined8 *)(lVar27 + 0x3c0),uVar24,0,
                                                       iVar21);
                                if (lVar27 != 0) {
                                  if ((*(long *)(lVar27 + 8) == 0) ||
                                     ((*(byte *)(*(long *)(lVar27 + 8) + 0xc5) & 4) == 0)) {
                                    lVar29 = FUN_10061e800(lVar27,&local_148,&local_220);
                                    if (lVar29 != 0) {
                                      uVar20 = FUN_1004744bf(*(undefined8 *)(lVar29 + 8),0);
                                      if ((uVar20 & 0x10004) == 4) {
                                        if (local_1a0 == 0) {
                                          bVar51 = true;
                                        }
                                        else {
                                          cVar13 = FUN_100485bb5(*(undefined8 *)(lVar27 + 8),
                                                                 local_1a0,0);
                                          bVar51 = cVar13 == '\0';
                                        }
                                        FUN_100480385(*(undefined8 *)(lVar29 + 8),bVar51);
                                      }
                                      uVar20 = FUN_1004744bf(*(undefined8 *)(lVar29 + 8),0);
                                      if (((uVar20 & uVar19) != 0) &&
                                         (((*(short *)(lVar49 + 0x10) != 0x11 ||
                                           (*(char *)(local_a8 + 0x396) == '\0')) ||
                                          (lVar34 = FUN_10048584d(*(undefined8 *)(lVar29 + 8),lVar49
                                                                  ,0), lVar34 == 0)))) {
                                        uVar24 = *(undefined8 *)(lVar49 + 0x78);
                                        local_88 = (uint)uVar24;
                                        uStack_84 = (undefined1)((ulong)uVar24 >> 0x20);
                                        uStack_83 = (undefined2)((ulong)uVar24 >> 0x28);
                                        cStack_81 = (char)((ulong)uVar24 >> 0x38);
                                        local_80 = 0xffffffff;
                                        uStack_7c = 0xff;
                                        uStack_7b = 0xff;
                                        uStack_7a = 0xffff;
                                        if ((CONCAT26(uStack_52,
                                                      CONCAT24(sStack_54,
                                                               CONCAT22(uStack_56,uStack_58))) != 0)
                                           && (lVar34 = CONCAT26(uStack_5a,
                                                                 CONCAT24(uStack_5c,uStack_64._4_4_)
                                                                ), lVar34 != 0)) {
                                          uVar28 = **(ulong **)(lVar29 + 8);
                                          lVar33 = (long)&uStack_64 + 4;
                                          do {
                                            bVar51 = *(ulong *)(lVar34 + 0x20) < uVar28;
                                            if (!bVar51) {
                                              lVar33 = lVar34;
                                            }
                                            lVar34 = *(long *)(lVar34 + (ulong)bVar51 * 8);
                                          } while (lVar34 != 0);
                                          if ((lVar33 != (long)&uStack_64 + 4) &&
                                             (*(ulong *)(lVar33 + 0x20) <= uVar28)) {
                                            if (*(int *)(lVar33 + 0x28) == 0) {
                                              uVar28 = 0;
                                            }
                                            else {
                                              uVar28 = FUN_1004839f2(lVar49);
                                              uVar28 = -(ulong)(uVar28 == 0) | uVar28;
                                            }
                                            local_80 = (undefined4)uVar28;
                                            uStack_7c = (undefined1)(uVar28 >> 0x20);
                                            uStack_7b = (undefined1)(uVar28 >> 0x28);
                                            uStack_7a = (undefined2)(uVar28 >> 0x30);
                                          }
                                        }
                                        lVar29 = FUN_1003a790f(lVar29,0,lVar49,&local_88,0);
                                        if ((((lVar29 != 0) &&
                                             (uVar20 = FUN_1004744bf(*(undefined8 *)(lVar27 + 8),0),
                                             (uVar20 & 0x10004) == 4)) &&
                                            (lVar27 = FUN_1002ba359(lVar27), lVar27 != 0)) &&
                                           (lVar27 = FUN_1002ba73f(lVar49,lVar27), lVar27 != 0)) {
                                          local_110 = *(uint **)(lVar29 + 0x28);
                                          local_108 = *(uint **)(lVar27 + 0x28);
                                          FUN_1002bbb84(local_160,&local_110);
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    FUN_1001b7a44(&local_110);
                                    FUN_10048681f(&local_88,lVar27);
                                    FUN_1001b80b2(&local_110,&local_88);
                                    FUN_1001b7a50(&local_88);
                                    uVar24 = *(undefined8 *)(lVar49 + 8);
                                    uVar30 = FUN_1002ba359(lVar27);
                                    lVar27 = FUN_1002bb612(uVar24,&local_110,uVar30);
                                    if (lVar27 != 0) {
                                      *(byte *)(lVar27 + 0xc5) = *(byte *)(lVar27 + 0xc5) | 8;
                                      lVar27 = FUN_100489a1f(lVar49,lVar27,0,0);
                                      if (lVar27 == 0) {
                                        uVar24 = FUN_1001cc310();
                                        cVar13 = _os_log_type_enabled(uVar24,0x10);
                                        if (cVar13 != '\0') {
                                          local_88 = 0x8220202;
                                          uStack_84 = 0x90;
                                          uStack_83 = 0x7a0a;
                                          cStack_81 = '\0';
                                          local_80 = 1;
                                          uStack_7c = 0x22;
                                          uStack_7b = 8;
                                          uStack_7a = 0x9e38;
                                          uStack_78 = 0x7b;
                                          uStack_76 = 1;
                                          __os_log_error_impl(0x100000000,uVar24,0x10,
                                                              "%{public}s: (%{public}s)",&local_88,
                                                              0x16);
                                        }
                                        FUN_1001782e9(0,0);
                                      }
                                    }
                                    FUN_1001b7a50(&local_110);
                                  }
                                  if ((*(short *)(lVar49 + 0x10) == 0x20) &&
                                     (99 < *(uint *)(*(long *)(lVar49 + 0x78) + 0x18)))
                                  goto LAB_1006129a8;
                                  iVar36 = FUN_1006020dd(local_a0);
                                  if (iVar36 != 0) {
                                    if (iVar36 == -0x80) goto LAB_100612b6d;
                                    uVar24 = FUN_1001cc310();
                                    cVar13 = _os_log_type_enabled(uVar24,0x10);
                                    if (cVar13 == '\0') goto LAB_100612b6d;
                                    uStack_7a = (undefined2)iVar36;
                                    uStack_78 = (undefined2)((uint)iVar36 >> 0x10);
                                    goto LAB_1006135cc;
                                  }
                                }
                                iVar21 = iVar21 + 1;
                              }
                              uVar24 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar24,0x10);
                              if (cVar13 != '\0') {
                                local_88 = 0x8220202;
                                uStack_84 = 0x90;
                                uStack_83 = 0x7a0a;
                                cStack_81 = '\0';
                                local_80 = 1;
                                uStack_7c = 0x22;
                                uStack_7b = 8;
                                uStack_7a = 0x8c7e;
                                uStack_78 = 0x7b;
                                uStack_76 = 1;
                                __os_log_error_impl(0x100000000,uVar24,0x10,
                                                    "%{public}s: (%{public}s)",&local_88,0x16);
                              }
                              FUN_1001782e9(0,0);
LAB_1006129a8:
                              *(undefined4 *)(lVar49 + 0x270) = (undefined4)local_b0;
                              FUN_1001c6987(lVar49 + 200,0x6370636c,lVar49,0);
                              iVar36 = FUN_1006020dd(local_a0);
                              if (iVar36 != 0) {
                                if (iVar36 != -0x80) {
                                  uVar24 = FUN_1001cc310();
                                  cVar13 = _os_log_type_enabled(uVar24,0x10);
                                  if (cVar13 != '\0') {
                                    uStack_7a = (undefined2)iVar36;
                                    uStack_78 = (undefined2)((uint)iVar36 >> 0x10);
LAB_1006135cc:
                                    uStack_7b = 4;
                                    uStack_7c = 0;
                                    local_80 = 1;
                                    cStack_81 = '\0';
                                    uStack_83 = 0x7a0a;
                                    uStack_84 = 0x90;
                                    local_88 = 0x8220202;
                                    __os_log_error_impl(0x100000000,uVar24,0x10,
                                                        "%{public}s: err == (%d)",&local_88,0x12);
                                  }
                                }
LAB_100612b6d:
                                FUN_100350daa(&local_68,
                                              CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_64._4_4_)
                                                      ));
                                goto LAB_1006101e5;
                              }
                              FUN_100350daa(&local_68,
                                            CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_64._4_4_)))
                              ;
                              piVar50 = local_90;
                              piVar23 = local_b8;
                              goto LAB_10061240e;
                            }
                          }
                          piVar50 = piVar50 + 3;
                        } while (piVar50 != piVar23);
                      }
                      if (local_1d8 != &local_1d0) {
                        plVar26 = local_1d8;
                        do {
                          lVar27 = FUN_10048b3c0(local_f0,*(undefined4 *)((long)plVar26 + 0x1c));
                          if (lVar27 != 0) {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            puVar25 = DAT_1008c75b8;
                            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar13 != '\0') {
                              FUN_100486d8f(&local_68,lVar27);
                              uVar24 = FUN_1001b83ae(&local_68);
                              local_88 = 0x8220102;
                              uStack_84 = (undefined1)uVar24;
                              uStack_83 = (undefined2)((ulong)uVar24 >> 8);
                              cStack_81 = (char)((ulong)uVar24 >> 0x18);
                              local_80 = (undefined4)((ulong)uVar24 >> 0x20);
                              __os_log_impl(0x100000000,puVar25,1,
                                            "sync> deleting playlist \"%{public}s\"",&local_88,0xc);
                              FUN_1001b7a50(&local_68);
                            }
                            if (lVar27 == local_d0) {
                              local_d0 = 0;
                            }
                            FUN_100488d27(lVar27,0,0);
                          }
                          plVar37 = (long *)plVar26[1];
                          plVar40 = plVar26;
                          if ((long *)plVar26[1] == (long *)0x0) {
                            do {
                              plVar26 = (long *)plVar40[2];
                              bVar51 = (long *)*plVar26 != plVar40;
                              plVar40 = plVar26;
                            } while (bVar51);
                          }
                          else {
                            do {
                              plVar26 = plVar37;
                              plVar37 = (long *)*plVar26;
                            } while ((long *)*plVar26 != (long *)0x0);
                          }
                        } while (plVar26 != &local_1d0);
                      }
                      if (local_d0 != 0 && (char)local_11c == '\0') {
                        local_68 = 0;
                        uStack_66 = 0;
                        uStack_64._0_4_ = 0;
                        uStack_64._4_4_ = 0;
                        uStack_5c = 0;
                        uStack_5a = 0;
                        uStack_58 = 0;
                        uStack_56 = 0;
                        sStack_54 = 0;
                        uStack_52 = 0;
                        lVar27 = *(long *)(*(long *)(local_d0 + 0xa0) + 8);
                        local_88 = (uint)lVar27;
                        uStack_84 = (undefined1)((ulong)lVar27 >> 0x20);
                        uStack_83 = (undefined2)((ulong)lVar27 >> 0x28);
                        cStack_81 = (char)((ulong)lVar27 >> 0x38);
                        if (lVar27 != 0) {
                          do {
                            if ((*(long *)(lVar27 + 8) != 0) &&
                               ((*(byte *)(*(long *)(lVar27 + 8) + 0xc5) & 4) != 0)) {
                              FUN_10061ea4e(&local_68,&local_88);
                            }
                            lVar27 = *(long *)(lVar27 + 0x18);
                            local_88 = (uint)lVar27;
                            uStack_84 = (undefined1)((ulong)lVar27 >> 0x20);
                            uStack_83 = (undefined2)((ulong)lVar27 >> 0x28);
                            cStack_81 = (char)((ulong)lVar27 >> 0x38);
                          } while (lVar27 != 0);
                          puVar25 = (uint *)CONCAT44((undefined4)uStack_64,
                                                     CONCAT22(uStack_66,local_68));
                          local_b0 = (uint *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_64._4_4_))
                          ;
                          if (puVar25 != local_b0) {
                            do {
                              local_98 = *(uint **)puVar25;
                              local_c8 = puVar25;
                              lVar27 = FUN_1002ba359();
                              puVar25 = *(uint **)(*(long *)(local_d0 + 0xa0) + 8);
                              if (puVar25 != (uint *)0x0) {
                                local_b8 = (int *)((ulong)local_b8 & 0xffffffff00000000);
                                do {
                                  puVar31 = *(uint **)(puVar25 + 6);
                                  if (((*(long *)(puVar25 + 2) == 0) ||
                                      ((*(byte *)(*(long *)(puVar25 + 2) + 0xc5) & 4) == 0)) &&
                                     (lVar49 = FUN_1002ba359(puVar25), lVar49 == lVar27)) {
                                    lVar49 = *(long *)(puVar25 + 2);
                                    if ((*(long *)(lVar49 + 0x180) == 0) &&
                                       (-1 < *(int *)(lVar49 + 0xc2))) {
                                      uVar24 = FUN_1001cc310();
                                      cVar13 = _os_log_type_enabled(uVar24,0x10);
                                      if (cVar13 != '\0') {
                                        local_88 = 0x8220202;
                                        uStack_84 = 0x90;
                                        uStack_83 = 0x7a0a;
                                        cStack_81 = '\0';
                                        local_80 = 1;
                                        uStack_7c = 0x22;
                                        uStack_7b = 8;
                                        uStack_7a = 0x508c;
                                        uStack_78 = 0x7f;
                                        uStack_76 = 1;
                                        __os_log_error_impl(0x100000000,uVar24,0x10,
                                                            "%{public}s: (%{public}s)",&local_88,
                                                            0x16);
                                      }
                                      FUN_1001782e9(0,0);
                                    }
                                    if (((*(int *)(lVar49 + 0xc2) < 0) &&
                                        (lVar29 = FUN_10048584d(lVar49,local_d0,0), lVar29 == 0)) ||
                                       ((lVar29 = *(long *)(lVar49 + 0x180), lVar29 != 0 &&
                                        ((lVar34 = FUN_100309008(local_e0), lVar29 != lVar34 &&
                                         (lVar49 = *(long *)(lVar49 + 0x180),
                                         lVar29 = FUN_10030806a(local_e0,4), lVar49 != lVar29))))))
                                    {
                                      if (((ulong)local_b8 & 1) == 0) {
                                        local_110 = *(uint **)(local_d0 + 0x78);
                                        local_108 = (uint *)0xffffffffffffffff;
                                        FUN_10048a5e2(local_98,&local_110);
                                        local_108 = local_98;
                                        local_b8 = (int *)CONCAT44(local_b8._4_4_,
                                                                   (int)CONCAT71((int7)((ulong)
                                                  local_98 >> 8),1));
                                      }
                                      FUN_10048a5e2(puVar25,&local_110);
                                      local_108 = puVar25;
                                    }
                                  }
                                  puVar25 = puVar31;
                                } while (puVar31 != (uint *)0x0);
                              }
                              puVar25 = local_c8 + 2;
                            } while (puVar25 != local_b0);
                            puVar25 = (uint *)CONCAT44((undefined4)uStack_64,
                                                       CONCAT22(uStack_66,local_68));
                          }
                          if (puVar25 != (uint *)0x0) {
                            uStack_64._4_4_ = SUB84(puVar25,0);
                            uStack_5c = (undefined2)((ulong)puVar25 >> 0x20);
                            uStack_5a = (undefined2)((ulong)puVar25 >> 0x30);
                            operator_delete(puVar25);
                          }
                        }
                      }
                      if (local_d0 == 0) {
LAB_10061315b:
                        local_d0 = 0;
                      }
                      else {
                        if ((char)local_e4 != '\0') {
                          FUN_1002bb8b8(local_d0);
                          FUN_1003a6d71(*(undefined8 *)(local_d0 + 0xa0));
                          goto LAB_10061315b;
                        }
                        if ((char)local_11c != '\0') {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          puVar25 = DAT_1008c75b8;
                          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar13 != '\0') {
                            FUN_100486d8f(&local_68,local_d0);
                            uVar24 = FUN_1001b83ae(&local_68);
                            local_88 = 0x8220102;
                            uStack_84 = (undefined1)uVar24;
                            uStack_83 = (undefined2)((ulong)uVar24 >> 8);
                            cStack_81 = (char)((ulong)uVar24 >> 0x18);
                            local_80 = (undefined4)((ulong)uVar24 >> 0x20);
                            __os_log_impl(0x100000000,puVar25,1,
                                          "sync> deleting playlist \"%{public}s\"",&local_88,0xc);
                            FUN_1001b7a50(&local_68);
                          }
                          FUN_100488d27(local_d0,0,0);
                          goto LAB_10061315b;
                        }
                      }
                      lVar27 = FUN_100315ede(local_f0);
                      iVar36 = 0;
                      if (lVar27 != 0) {
                        local_b8 = (int *)((ulong)local_b8 & 0xffffffff00000000);
                        do {
                          lVar49 = FUN_1003161a8(lVar27);
                          uVar17 = FUN_10048c0ca(lVar27);
                          cVar13 = FUN_10048c208(uVar17);
                          if (cVar13 != '\0') {
                            lVar29 = FUN_10048bbac(local_e0,*(undefined2 *)(lVar27 + 0x10),0);
                            if (lVar29 != 0) {
                              FUN_10048f5c3(lVar27,*(undefined8 *)(lVar29 + 0x60));
                              FUN_1004862fd(lVar29,lVar27);
                            }
                          }
                          if (((*(byte *)(lVar27 + 0x240) & 4) == 0) &&
                             (*(int *)(*(long *)(lVar27 + 0x78) + 0x18) == 0)) {
                            local_80 = 0;
                            uStack_7c = 0;
                            local_88 = 0;
                            uStack_84 = 0;
                            uStack_83 = 0;
                            cStack_81 = '\0';
                            iVar36 = FUN_10048256b(lVar27,&local_88);
                            if ((iVar36 != -0x80) && (iVar36 != 0)) {
                              uVar24 = FUN_1001cc310();
                              cVar13 = _os_log_type_enabled(uVar24,0x10);
                              if (cVar13 != '\0') {
                                local_68 = 0x202;
                                uStack_66 = 0x822;
                                uStack_64._0_4_ = 0x7a0a90;
                                uStack_64._4_4_ = 1;
                                uStack_5c = 0x400;
                                uStack_5a = (undefined2)iVar36;
                                uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar24,0x10,
                                                    "%{public}s: err == (%d)",&local_68,0x12);
                              }
                            }
                            if (*(int *)(lVar27 + 0x40) != 0) goto LAB_10061324f;
                            cVar13 = FUN_100586027(lVar27);
                            if (cVar13 != '\0' || cStack_81 != '\0') goto LAB_10061324f;
                            if ((*(byte *)(lVar27 + 0x298) & 3) != 1) {
                              if (((*(byte *)(lVar27 + 0x298) & 2) == 0) ||
                                 (*(char *)(local_a8 + 0x373) == '\0')) goto LAB_1006133af;
                              cVar13 = FUN_1002be216(*(undefined8 *)(local_d8 + 0x7c8),
                                                     *(undefined8 *)(lVar27 + 0x60));
                              if (cVar13 == '\0') goto LAB_100613294;
                              goto LAB_10061324f;
                            }
                            if (*(char *)(local_a8 + 0x371) == '\0') {
LAB_1006133af:
                              if ((*(short *)(lVar27 + 0x10) != 0xb) &&
                                 (((*(short *)(lVar27 + 0x10) == 0x1e &&
                                   (*(char *)(local_a8 + 0x391) != '\0')) ||
                                  (*(char *)(local_d8 + 0x28a) == '\0' && (char)local_e4 == '\0'))))
                              goto LAB_10061324f;
                            }
                            else if (*(char *)(local_d8 + 0x36) == '\0') goto LAB_10061324f;
LAB_100613294:
                            if (lVar27 == local_d0) {
                              local_d0 = 0;
                            }
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            puVar25 = DAT_1008c75b8;
                            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar13 != '\0') {
                              FUN_100486d8f(&local_68,lVar27);
                              uVar24 = FUN_1001b83ae(&local_68);
                              local_88 = 0x8220102;
                              uStack_84 = (undefined1)uVar24;
                              uStack_83 = (undefined2)((ulong)uVar24 >> 8);
                              cStack_81 = (char)((ulong)uVar24 >> 0x18);
                              local_80 = (undefined4)((ulong)uVar24 >> 0x20);
                              __os_log_impl(0x100000000,puVar25,1,
                                            "sync> deleting empty playlist \"%{public}s\"",&local_88
                                            ,0xc);
                              FUN_1001b7a50(&local_68);
                            }
                            FUN_100488d27(lVar27,0,0);
                          }
                          else {
LAB_10061324f:
                            if (*(int *)(local_a8 + 0x414) != 0) {
                              cVar13 = FUN_1002bded4(lVar27);
                              if (cVar13 != '\0') {
                                uVar19 = (uint)local_b8 + 1;
                                local_b8 = (int *)CONCAT44(local_b8._4_4_,uVar19);
                                if (*(uint *)(local_a8 + 0x414) < uVar19) goto LAB_100613294;
                              }
                            }
                          }
                          lVar27 = lVar49;
                        } while (lVar49 != 0);
                        if (*(uint *)(local_a8 + 0x414) < (uint)local_b8 &&
                            *(uint *)(local_a8 + 0x414) != 0) {
                          *(undefined1 *)(*(long *)(local_a0 + 0x28) + 0xe) = 1;
                        }
                      }
                      if ((*(char *)(local_a8 + 0x37c) != '\0') &&
                         (*(char *)(local_a8 + 0x3a2) == '\0')) {
                        FUN_1003c9e3c(local_a8);
                      }
                      ppppppuVar35 = (undefined8 ******)local_188;
                      if ((undefined8 ******)local_188 != &local_180 && local_100 != 0) {
                        do {
                          lVar27 = FUN_100300729(local_f0,ppppppuVar35[5]);
                          if (lVar27 != 0) {
                            FUN_1005abddc(local_100,lVar27,ppppppuVar35[4]);
                          }
                          ppppppuVar41 = (undefined8 ******)ppppppuVar35[1];
                          ppppppuVar42 = ppppppuVar35;
                          if ((undefined8 ******)ppppppuVar35[1] == (undefined8 ******)0x0) {
                            do {
                              ppppppuVar35 = (undefined8 ******)ppppppuVar42[2];
                              bVar51 = (undefined8 ******)*ppppppuVar35 != ppppppuVar42;
                              ppppppuVar42 = ppppppuVar35;
                            } while (bVar51);
                          }
                          else {
                            do {
                              ppppppuVar35 = ppppppuVar41;
                              ppppppuVar41 = (undefined8 ******)*ppppppuVar35;
                            } while ((undefined8 ******)*ppppppuVar35 != (undefined8 ******)0x0);
                          }
                        } while (ppppppuVar35 != &local_180);
                      }
                    }
                    else {
                      uVar24 = FUN_1001cc310();
                      cVar13 = _os_log_type_enabled(uVar24,0x10);
                      if (cVar13 != '\0') {
                        uStack_5a = (undefined2)iVar36;
                        uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
                        goto LAB_1006120df;
                      }
                    }
                  }
                }
                else {
                  if (*(long *)(local_a8 + 0x153b0) == 0) {
                    lVar49 = FUN_1006019f0();
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    puVar25 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar13 != '\0') {
                      local_68 = 0x100;
                      uStack_66 = 0x800;
                      uStack_64._0_4_ = (undefined4)lVar49;
                      uStack_64._4_4_ = (undefined4)((ulong)lVar49 >> 0x20);
                      __os_log_impl(0x100000000,puVar25,1,"sync> minimum free bytes = %llu",
                                    &local_68,0xc);
                    }
                    puVar31 = (uint *)((long)puVar31 + lVar49);
                  }
                  piVar23 = local_90;
                  *(uint **)(local_a8 + 0x157a8) = puVar31;
                  *(long *)(local_a8 + 0x157b0) = local_168;
                  *(long *)(local_a8 + 0x157b8) = lVar27;
                  *(uint **)(local_a8 + 88000) = local_118;
                  *(undefined8 **)(local_a8 + 0x157c8) = puVar43;
                  iVar36 = 0x455;
                  FUN_1004dccf5(local_a8,"");
                  local_90 = piVar23;
                }
              }
              else {
                uVar24 = FUN_1001cc310();
                cVar13 = _os_log_type_enabled(uVar24,0x10);
                if (cVar13 != '\0') {
                  uStack_5a = (undefined2)iVar36;
                  uStack_58 = (undefined2)((uint)iVar36 >> 0x10);
LAB_1006120df:
                  uStack_64._4_4_ = 1;
                  uStack_64._0_4_ = 0x7a0a90;
                  uStack_66 = 0x822;
                  local_68 = 0x202;
                  uStack_5c = 0x400;
                  __os_log_error_impl(0x100000000,uVar24,0x10,"%{public}s: err == (%d)",&local_68,
                                      0x12);
                }
              }
            }
          }
LAB_1006101e5:
          FUN_100595344(local_150);
          puVar48 = *(undefined8 **)(local_a0 + 0x3c0);
          if (puVar48 != (undefined8 *)0x0) {
            pvVar1 = (void *)*puVar48;
            if (pvVar1 != (void *)0x0) {
              puVar48[1] = pvVar1;
              operator_delete(pvVar1);
            }
            operator_delete(puVar48);
          }
          *(undefined8 *)(local_a0 + 0x3c0) = 0;
          puVar48 = *(undefined8 **)(local_a0 + 0x3c8);
          if (puVar48 != (undefined8 *)0x0) {
            pvVar1 = (void *)*puVar48;
            if (pvVar1 != (void *)0x0) {
              puVar48[1] = pvVar1;
              operator_delete(pvVar1);
            }
            operator_delete(puVar48);
          }
          *(undefined8 *)(local_a0 + 0x3c8) = 0;
          FUN_10031c2c9(local_f0);
          if (local_d0 != 0) {
            FUN_1003a6d71(*(undefined8 *)(local_d0 + 0xa0));
          }
          FUN_1002fbbfc(local_f0);
          FUN_100321e5c(local_f0);
          puVar25 = uStack_64;
          if (local_100 != 0) {
            FUN_1005a47d0(local_100);
            puVar25 = uStack_64;
          }
          uStack_64._4_4_ = (undefined4)((ulong)puVar25 >> 0x20);
          if (*(char *)(local_a0 + 0x4d8) == '\0') {
            local_68 = 0;
            uStack_66 = 0;
            uStack_64._0_4_ = 0;
            iVar21 = FUN_100432267(*(undefined4 *)(local_a8 + 0x28));
            puVar25 = (uint *)CONCAT44(uStack_64._4_4_,(undefined4)uStack_64);
            if (iVar21 == 0) {
              pvVar1 = (void *)CONCAT44((undefined4)uStack_64,CONCAT22(uStack_66,local_68));
              if (((*(char *)(local_d8 + 0x46) != *(char *)((long)pvVar1 + 0x46)) ||
                  (*(char *)(local_d8 + 0x47) != *(char *)((long)pvVar1 + 0x47))) ||
                 ((*(char *)(local_d8 + 0x48) != *(char *)((long)pvVar1 + 0x48) ||
                  ((((*(char *)(local_d8 + 0x49) != *(char *)((long)pvVar1 + 0x49) ||
                     (*(char *)(local_d8 + 0x4a) != *(char *)((long)pvVar1 + 0x4a))) ||
                    (*(char *)(local_d8 + 0x4b) != *(char *)((long)pvVar1 + 0x4b))) ||
                   ((*(char *)(local_d8 + 0x4c) != *(char *)((long)pvVar1 + 0x4c) ||
                    (*(char *)(local_d8 + 0x4d) != *(char *)((long)pvVar1 + 0x4d))))))))) {
                *(undefined1 *)(local_a0 + 0x4d8) = 1;
              }
              FUN_10022ad5e(pvVar1);
              operator_delete(pvVar1);
              puVar25 = (uint *)CONCAT44(uStack_64._4_4_,(undefined4)uStack_64);
            }
          }
          uStack_64 = puVar25;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          puVar25 = DAT_1008c75b8;
          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
          piVar23 = local_90;
          if (cVar13 != '\0') {
            dVar5 = (double)FUN_1001ebd46();
            uStack_64 = (uint *)((dVar5 - local_208) * _DAT_100708b48);
            local_68 = 0x100;
            uStack_66 = 0x800;
            __os_log_impl(0x100000000,puVar25,1,"perf> SynchronizeIPodTracks() took %.2f ms",
                          &local_68,0xc);
            piVar23 = local_90;
          }
          goto LAB_10060c7b5;
        }
LAB_10060c73e:
        uVar24 = FUN_1001cc310();
        cVar13 = _os_log_type_enabled(uVar24,0x10);
        if (cVar13 != '\0') {
          pcVar38 = "PlaylistIsValid(destPrimaryPlaylist)";
          goto LAB_10060c77e;
        }
      }
    }
  }
  iVar36 = -0x80;
  FUN_1001782e9(0,0);
  piVar23 = (int *)0x0;
LAB_10060c7b5:
  FUN_1002a41f4(&local_1b8,local_1b0);
  FUN_1002a41f4(&local_1f0,local_1e8);
  FUN_1002a41f4(&local_1d8,local_1d0);
  if (piVar23 != (int *)0x0) {
    operator_delete(piVar23);
  }
  FUN_1002a41f4(&local_188,local_180);
  FUN_100230408(local_218);
  if (local_148 != (uint *)0x0) {
    operator_delete(local_148);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar36;
}

