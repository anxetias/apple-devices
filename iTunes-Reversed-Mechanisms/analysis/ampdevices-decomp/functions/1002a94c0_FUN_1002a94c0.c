// name: FUN_1002a94c0
// address: 1002a94c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002a94c0(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined7 uVar19;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  undefined2 *puVar24;
  short *psVar25;
  undefined4 *puVar26;
  bool bVar27;
  undefined1 local_338 [16];
  long local_328;
  undefined2 *local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  long local_2f8;
  short *local_2f0;
  long local_2e8;
  undefined4 local_2dc;
  long local_2d8;
  ulong local_2d0;
  ulong local_2c8;
  long local_2c0;
  int *local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  uint local_2a0 [4];
  ulong local_290;
  undefined4 local_284;
  byte local_27d;
  uint local_27c;
  long local_278;
  ulong local_270;
  short local_266;
  uint local_264;
  ulong local_260;
  undefined4 local_258;
  uint local_254;
  undefined2 local_250;
  undefined4 local_24e;
  undefined4 local_248;
  undefined8 local_244;
  undefined2 local_238;
  undefined2 uStack_236;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined2 uStack_22c;
  undefined2 uStack_22a;
  undefined2 uStack_228;
  undefined4 uStack_226;
  undefined2 local_222;
  uint local_220;
  undefined2 uStack_21c;
  undefined2 uStack_21a;
  undefined2 local_218;
  undefined4 local_216;
  undefined4 uStack_212;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_318 = 0;
  uStack_310 = (long *)0x0;
  local_278 = param_1;
  lVar11 = FUN_1004de07b();
  if (lVar11 == 0) {
    uVar15 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar15,0x10);
    if (cVar4 != '\0') {
      pcVar20 = "handlerData != nullptr";
LAB_1002a96f0:
      uStack_22c = 0x822;
      uStack_230 = 1;
      uStack_234 = 0x7a0a90;
      uStack_236 = 0x822;
      local_238 = 0x202;
      uStack_22a = SUB82(pcVar20,0);
      uStack_228 = (undefined2)((ulong)pcVar20 >> 0x10);
      uStack_226 = (undefined4)((ulong)pcVar20 >> 0x20);
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    lVar12 = FUN_1004e0c3f(lVar11,1);
    if (lVar12 == 0) {
      uVar15 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar15,0x10);
      if (cVar4 != '\0') {
        pcVar20 = "sourceTrackData != nullptr";
        goto LAB_1002a96f0;
      }
    }
    else {
      local_318 = 0;
      uStack_310 = (long *)0x0;
      local_2b8 = (int *)0x0;
      local_2e8 = FUN_10048604a(local_278);
      if (local_2e8 == 0) {
        uVar15 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar15,0x10);
        if (cVar4 != '\0') {
          pcVar20 = "iPodPlaylist != nullptr";
          goto LAB_1002a96f0;
        }
      }
      else {
        lVar13 = FUN_10048b5ec(lVar12,*(undefined8 *)(lVar11 + 0x14d20));
        if (((lVar13 != 0) && (cVar4 = FUN_100485f88(lVar13), cVar4 == '\0')) ||
           (lVar13 = FUN_10048bf36(lVar12), lVar13 != 0)) {
          lVar14 = FUN_1004e39cc(lVar11,1);
          if (lVar14 == 0) {
            uVar15 = FUN_100416f20(*(undefined4 *)(lVar11 + 0x66b0),0x10cc0078);
            FUN_1001b7eb0(&local_248,uVar15);
            FUN_1004f0e83(lVar11,&local_238);
            FUN_1001b8dfc(local_2a0,&local_238);
            FUN_1004fda52(&local_238,*(undefined4 *)(lVar11 + 0x28));
            FUN_100450a08(&local_248,local_2a0,&local_238);
            FUN_1001b7a50(&local_238);
            FUN_1001b7a50(local_2a0);
            FUN_1001b7a50(&local_248);
            iVar8 = -0x80;
            goto LAB_1002a9724;
          }
          uVar15 = FUN_1004317ff(lVar11);
          iVar8 = -0x80;
          if ((char)uVar15 == '\0') goto LAB_1002a9724;
          uVar19 = (undefined7)((ulong)uVar15 >> 8);
          if (*(char *)(lVar11 + 0x35c) == '\0') {
            if ((*(byte *)(lVar11 + 0x14d1c) & 2) == 0) {
              local_27c = 0;
            }
            else {
              local_27c = (uint)CONCAT71(uVar19,1);
              if (((*(char *)(lVar11 + 0x14dd4) == '\0') &&
                  (lVar14 = FUN_10048bbac(local_278,4,0), lVar14 != 0)) &&
                 (*(int *)(*(long *)(lVar14 + 0x78) + 0x18) != 0)) {
                local_2a0[0] = local_2a0[0] & 0xffffff00;
                uVar2 = *(undefined4 *)(lVar11 + 0x66b0);
                FUN_1004fda52(&local_238,*(undefined4 *)(lVar11 + 0x28));
                FUN_1004fdbd0(&local_248,lVar11);
                sVar7 = FUN_1002ab9e4(uVar2,&local_238,&local_248,local_2a0);
                FUN_1001b7a50(&local_248);
                uVar15 = FUN_1001b7a50(&local_238);
                if (sVar7 == 1 && (char)local_2a0[0] != '\0') {
                  *(undefined1 *)(lVar11 + 0x14dd4) = 1;
                  FUN_1004ef324(lVar11,8,0);
                }
                else {
                  local_27c = (uint)CONCAT71((int7)((ulong)uVar15 >> 8),sVar7 != 2);
                  if (sVar7 == 3) goto LAB_1002a9724;
                }
              }
            }
          }
          else {
            local_27c = (uint)CONCAT71(uVar19,*(byte *)(lVar11 + 0x14d1c)) & 0xffffff01;
          }
          FUN_10031ae5a(local_278);
          if (((char)local_27c != '\0') &&
             (cVar4 = FUN_100402ecf(*(undefined8 *)(lVar11 + 0x30)), cVar4 != '\0')) {
            FUN_100407827(*(undefined8 *)(lVar11 + 0x30));
            while ((*(byte *)(*(long *)(lVar11 + 0x30) + 0x2be0) & 0x20) != 0) {
              FUN_1001b153d();
              FUN_1001ee7ac();
            }
          }
          FUN_100313e0b(local_278);
          if (*(char *)(lVar11 + 0x14d1b) == '\0') {
            FUN_10037ef5e(&local_238,lVar13,0x77,0,0);
          }
          else {
            FUN_10037f23e(&local_238,lVar13,0,0,0,0);
          }
          local_2d8 = CONCAT44(uStack_234,CONCAT22(uStack_236,local_238));
          local_318 = CONCAT44(uStack_234,CONCAT22(uStack_236,local_238));
          uStack_310 = (long *)CONCAT44(CONCAT22(uStack_22a,uStack_22c),uStack_230);
          if (local_2d8 == 0) goto LAB_1002ab4f6;
          local_264 = 0;
          local_2dc = 0x52;
          local_284 = (undefined4)CONCAT71((int7)((ulong)local_2d8 >> 8),1);
          local_328 = lVar12;
          local_2c0 = lVar13;
          if ((*(char *)(lVar11 + 0x14dc9) == '\0') ||
             (local_2f8 = *(long *)(lVar11 + 0x16640), local_2f8 == 0)) {
            local_2f8 = 0;
          }
          else {
            FUN_1005a44e2();
            local_284 = 0;
          }
          FUN_1001c62d9(&local_238,0x38);
          local_238 = 0xf00;
          FUN_1002f7c7e(local_278,0x74646774);
          uVar22 = local_220;
          uVar2 = uStack_230;
          uVar16 = CONCAT26(uStack_22a,CONCAT24(uStack_22c,uStack_230));
          uVar23 = CONCAT26(uStack_21a,CONCAT24(uStack_21c,local_220));
          lVar12 = 0;
          if (uVar23 <= uVar16) {
            lVar12 = uVar16 - uVar23;
          }
          local_290 = FUN_1002abbfa(lVar11);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar15 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_238 = 0x400;
            uStack_236 = 0x800;
            uStack_234 = uVar2;
            uStack_230 = (undefined4)(uVar16 >> 0x20);
            uStack_22c = 0x800;
            uStack_22a = (undefined2)uVar22;
            uStack_228 = (undefined2)(uVar22 >> 0x10);
            uStack_226 = (undefined4)(uVar23 >> 0x20);
            local_222 = 0x800;
            local_220 = (uint)local_290;
            uStack_21c = (undefined2)(local_290 >> 0x20);
            uStack_21a = (undefined2)(local_290 >> 0x30);
            local_218 = 0x800;
            local_216 = (undefined4)*(undefined8 *)(lVar11 + 0x14d10);
            uStack_212 = (undefined4)((ulong)*(undefined8 *)(lVar11 + 0x14d10) >> 0x20);
            __os_log_impl(0x100000000,uVar15,1,
                          "sync> autofill free bytes = %llu, reserved bytes = %llu, existing bytes = %lld, reserved free space bytes = %llu"
                          ,&local_238,0x2a);
          }
          uVar16 = 0x200000;
          if ((*(char *)(lVar11 + 0x35c) == '\0') && (*(char *)(lVar11 + 0x35b) == '\0')) {
            uVar16 = FUN_1006019f0(lVar11);
          }
          local_2c8 = *(ulong *)(lVar11 + 0x14d10);
          if (*(ulong *)(lVar11 + 0x14d10) < uVar16) {
            local_2c8 = uVar16;
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar22 = local_27c;
          uVar15 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_238 = 0x100;
            uStack_236 = 0x800;
            uStack_234 = (undefined4)local_2c8;
            uStack_230 = (undefined4)(local_2c8 >> 0x20);
            __os_log_impl(0x100000000,uVar15,1,"sync> autofill minimum free bytes = %llu",&local_238
                          ,0xc);
          }
          if ((char)uVar22 == '\0') {
            FUN_10031c2c9(local_278);
          }
          else {
            for (lVar13 = FUN_1002f930c(local_278); lVar13 != 0; lVar13 = FUN_1002f9451(lVar13)) {
              bVar5 = FUN_1002ac6f9(lVar13);
              *(uint *)(lVar13 + 0xc2) = *(uint *)(lVar13 + 0xc2) & 0xfffffeff | (uint)bVar5 << 8;
            }
          }
          lVar13 = FUN_1002f930c(local_278);
          uVar16 = (lVar12 + local_290) - 0x100000;
          local_290 = 0;
          for (; lVar13 != 0; lVar13 = FUN_1002f9451(lVar13)) {
            if ((*(byte *)(lVar13 + 0xc3) & 1) == 0) {
              lVar12 = FUN_1002abc4e(lVar11,*(undefined8 *)(lVar13 + 0x58),0);
              local_290 = (ulong)((int)local_290 + 1);
              uVar16 = uVar16 - lVar12;
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar15 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_238 = 0x100;
            uStack_236 = 0x800;
            uStack_234 = (undefined4)uVar16;
            uStack_230 = (undefined4)(uVar16 >> 0x20);
            __os_log_impl(0x100000000,uVar15,1,"sync> autofill remaining bytes = %lld",&local_238,
                          0xc);
          }
          iVar8 = FUN_100594adc(&local_2b8,0);
          if (iVar8 != -0x80) {
            if (iVar8 == 0) {
              local_2d0 = (ulong)(*(long *)(local_2d8 + 0x18) - *(long *)(local_2d8 + 0x10)) >> 3;
              iVar8 = (int)local_2d0;
              if ((local_2c8 < uVar16) && (iVar8 != 0)) {
                local_290 = local_290 & 0xffffffff;
                if (*(int *)(lVar11 + 0x410) == 0) {
                  local_290 = 0;
                }
                if ((*(char *)(lVar11 + 0x14d1b) == '\0') || (*(char *)(lVar11 + 0x14d1a) == '\0'))
                {
                  local_2f0 = (short *)(lVar11 + 0x14df6);
                  local_2b0 = CONCAT44(local_2b0._4_4_,iVar8 + -1);
                  iVar9 = 0;
                  do {
                    lVar12 = FUN_10037b3b0(local_2d8,iVar9);
                    if (lVar12 != 0) {
                      lVar13 = FUN_100597ce2(lVar12,*(undefined8 *)(lVar11 + 0x30));
                      cVar4 = FUN_1002abcce(lVar11,lVar13,&local_2dc,&local_264);
                      if (cVar4 != '\0') {
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
                        uVar23 = FUN_100306976(local_278,lVar13,&DAT_1008c77c8,0,0,1);
                        if ((uVar23 == 0) || ((*(byte *)(*(long *)(uVar23 + 8) + 0xc3) & 1) != 0)) {
                          local_2a0[0] = 0;
                          local_2a8 = uVar23;
                          local_270 = uVar16;
                          local_260 = FUN_1002abe50(lVar11,lVar12,local_2a0);
                          cVar4 = FUN_1004eb61a(lVar11,lVar13,0);
                          psVar25 = (short *)(lVar13 + 0x54);
                          if (cVar4 != '\0') {
                            psVar25 = local_2f0;
                          }
                          local_266 = *psVar25;
                          uVar23 = local_270 - local_2c8;
                          if (local_270 <= local_2c8) {
                            uVar15 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar15,0x10);
                            if (cVar4 != '\0') {
                              local_238 = 0x202;
                              uStack_236 = 0x822;
                              uStack_234 = 0x7a0a90;
                              uStack_230 = 1;
                              uStack_22c = 0x822;
                              uStack_22a = 0x8c98;
                              uStack_228 = 0x7b;
                              uStack_226 = 1;
                              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_238,0x16);
                            }
                            FUN_1001782e9(0,0);
                          }
                          uVar16 = local_270;
                          if (uVar23 < local_260) {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar15 = DAT_1008c75b8;
                            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar4 != '\0') {
                              FUN_10048681f(&local_248,lVar12);
                              uVar17 = FUN_1001b83ae(&local_248);
                              local_238 = 0x202;
                              uStack_236 = 0x822;
                              uStack_234 = (undefined4)uVar17;
                              uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                              uStack_22c = 0x800;
                              uStack_22a = (undefined2)local_260;
                              uStack_228 = (undefined2)(local_260 >> 0x10);
                              uStack_226 = (undefined4)(local_260 >> 0x20);
                              __os_log_impl(0x100000000,uVar15,1,
                                            "sync> insufficient free space for \"%{public}s\", size = %llu"
                                            ,&local_238,0x16);
                              FUN_1001b7a50(&local_248);
                            }
                            local_264 = local_264 | 0x20;
                          }
                          else {
                            if ((*(uint *)(lVar11 + 0x410) != 0) &&
                               (uVar22 = (int)local_290 + 1, local_290 = (ulong)uVar22,
                               *(uint *)(lVar11 + 0x410) < uVar22)) goto LAB_1002ab696;
                            if ((local_2a8 == 0) || (*(short *)(local_2a8 + 0x54) != local_266)) {
                              if ((char)local_284 == '\0') {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                uVar15 = DAT_1008c75b8;
                                cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar4 != '\0') {
                                  FUN_10048681f(&local_248,lVar12);
                                  uVar17 = FUN_1001b83ae(&local_248);
                                  lVar13 = uVar16 - local_260;
                                  local_238 = 0x402;
                                  uStack_234 = (undefined4)uVar17;
                                  uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                                  uStack_22a = (undefined2)local_260;
                                  uStack_228 = (undefined2)(local_260 >> 0x10);
                                  uStack_226 = (undefined4)(local_260 >> 0x20);
                                  local_222 = 0x400;
                                  local_220 = local_2a0[0];
                                  uStack_21c = 0x800;
                                  uStack_21a = (undefined2)lVar13;
                                  local_218 = (undefined2)((ulong)lVar13 >> 0x10);
                                  local_216 = (undefined4)((ulong)lVar13 >> 0x20);
                                  pcVar20 = 
                                  "sync> copying new autofilled track \"%{public}s\", size = %llu, speech size = %u, remaining bytes = %lld"
                                  ;
                                  uVar17 = 0x26;
                                  goto LAB_1002aac26;
                                }
                              }
                              else {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                uVar15 = DAT_1008c75b8;
                                cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar4 != '\0') {
                                  FUN_10048681f(&local_248,lVar12);
                                  uVar17 = FUN_1001b83ae(&local_248);
                                  lVar13 = uVar16 - local_260;
                                  local_238 = 0x302;
                                  uStack_234 = (undefined4)uVar17;
                                  uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                                  uStack_22a = (undefined2)local_260;
                                  uStack_228 = (undefined2)(local_260 >> 0x10);
                                  uStack_226 = (undefined4)(local_260 >> 0x20);
                                  local_222 = 0x800;
                                  local_220 = (uint)lVar13;
                                  uStack_21c = (undefined2)((ulong)lVar13 >> 0x20);
                                  uStack_21a = (undefined2)((ulong)lVar13 >> 0x30);
                                  pcVar20 = 
                                  "sync> copying new autofilled track \"%{public}s\", size = %llu, remaining bytes = %lld"
                                  ;
                                  uVar17 = 0x20;
LAB_1002aac26:
                                  uStack_236 = 0x822;
                                  uStack_22c = 0x800;
                                  __os_log_impl(0x100000000,uVar15,1,pcVar20,&local_238,uVar17);
                                  FUN_1001b7a50(&local_248);
                                }
                              }
                              iVar8 = FUN_100595808(local_2b8,lVar12,0,0);
                              if (iVar8 != 0) {
                                if (iVar8 == -0x80) goto LAB_1002ab4f9;
                                uVar15 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar15,0x10);
                                if (cVar4 == '\0') goto LAB_1002ab4f9;
                                uStack_22a = (undefined2)iVar8;
                                uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
                                goto LAB_1002aa61c;
                              }
                            }
                            else {
                              local_260 = FUN_1002abc4e(lVar11,local_2a8,local_2a0);
                              if ((char)local_284 == '\0') {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                uVar15 = DAT_1008c75b8;
                                cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar4 != '\0') {
                                  FUN_10048681f(&local_248,lVar12);
                                  uVar17 = FUN_1001b83ae(&local_248);
                                  lVar12 = local_270 - local_260;
                                  local_238 = 0x402;
                                  uStack_234 = (undefined4)uVar17;
                                  uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                                  uStack_22a = (undefined2)local_260;
                                  uStack_228 = (undefined2)(local_260 >> 0x10);
                                  uStack_226 = (undefined4)(local_260 >> 0x20);
                                  local_222 = 0x400;
                                  local_220 = local_2a0[0];
                                  uStack_21c = 0x800;
                                  uStack_21a = (undefined2)lVar12;
                                  local_218 = (undefined2)((ulong)lVar12 >> 0x10);
                                  local_216 = (undefined4)((ulong)lVar12 >> 0x20);
                                  pcVar20 = 
                                  "sync> keeping existing autofilled track \"%{public}s\", size = %llu, speech size = %u, remaining bytes = %lld"
                                  ;
                                  uVar17 = 0x26;
                                  goto LAB_1002aad14;
                                }
                              }
                              else {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                uVar15 = DAT_1008c75b8;
                                cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar4 != '\0') {
                                  FUN_10048681f(&local_248,lVar12);
                                  uVar17 = FUN_1001b83ae(&local_248);
                                  lVar12 = local_270 - local_260;
                                  local_238 = 0x302;
                                  uStack_234 = (undefined4)uVar17;
                                  uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                                  uStack_22a = (undefined2)local_260;
                                  uStack_228 = (undefined2)(local_260 >> 0x10);
                                  uStack_226 = (undefined4)(local_260 >> 0x20);
                                  local_222 = 0x800;
                                  local_220 = (uint)lVar12;
                                  uStack_21c = (undefined2)((ulong)lVar12 >> 0x20);
                                  uStack_21a = (undefined2)((ulong)lVar12 >> 0x30);
                                  pcVar20 = 
                                  "sync> keeping existing autofilled track \"%{public}s\", size = %llu, remaining bytes = %lld"
                                  ;
                                  uVar17 = 0x20;
LAB_1002aad14:
                                  uStack_236 = 0x822;
                                  uStack_22c = 0x800;
                                  __os_log_impl(0x100000000,uVar15,1,pcVar20,&local_238,uVar17);
                                  FUN_1001b7a50(&local_248);
                                }
                              }
                              lVar12 = *(long *)(local_2a8 + 8);
                              uVar22 = *(uint *)(lVar12 + 0xc2);
                              if ((uVar22 >> 8 & 1) == 0) {
                                uVar15 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar15,0x10);
                                if (cVar4 != '\0') {
                                  local_238 = 0x202;
                                  uStack_236 = 0x822;
                                  uStack_234 = 0x7a0a90;
                                  uStack_230 = 1;
                                  uStack_22c = 0x822;
                                  uStack_22a = 0x8cba;
                                  uStack_228 = 0x7b;
                                  uStack_226 = 1;
                                  __os_log_error_impl(0x100000000,uVar15,0x10,
                                                      "%{public}s: (%{public}s)",&local_238,0x16);
                                }
                                FUN_1001782e9(0,0);
                                lVar12 = *(long *)(local_2a8 + 8);
                                uVar22 = *(uint *)(lVar12 + 0xc2);
                              }
                              piVar3 = local_2b8;
                              *(uint *)(lVar12 + 0xc2) = uVar22 & 0xfffffeff;
                              uVar15 = FUN_10048584d(*(undefined8 *)(local_2a8 + 8),local_2e8,0);
                              iVar8 = FUN_100595808(piVar3,uVar15,0,0);
                              if (iVar8 != 0) {
                                if (iVar8 == -0x80) goto LAB_1002ab4f9;
                                uVar15 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar15,0x10);
                                if (cVar4 == '\0') goto LAB_1002ab4f9;
                                uStack_22a = (undefined2)iVar8;
                                uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
                                goto LAB_1002aa61c;
                              }
                            }
                            uVar16 = local_270 - local_260;
                          }
                        }
                      }
                    }
                    if (uVar16 <= local_2c8) break;
                    bVar27 = (int)local_2b0 != iVar9;
                    iVar9 = iVar9 + 1;
                  } while (bVar27);
                }
                else {
                  uVar6 = FUN_10027bd6f();
                  local_266 = CONCAT11(local_266._1_1_,uVar6);
                  local_27d = FUN_10027bdd3();
                  local_2f0 = (short *)CONCAT71(local_2f0._1_7_,local_27d);
                  local_27d = (byte)local_266 & local_27d;
                  local_320 = (undefined2 *)(lVar11 + 0x14df6);
LAB_1002a9c7b:
                  do {
                    iVar8 = FUN_1001ebcfb();
                    iVar9 = FUN_1001ebdc3();
                    local_260 = CONCAT44(local_260._4_4_,
                                         (int)((ulong)(uint)(iVar9 + iVar8) %
                                              (local_2d0 & 0xffffffff)));
                    iVar8 = FUN_1001ebcfb();
                    iVar9 = FUN_1001ebdc3();
                    local_2a8 = (ulong)((uint)(iVar9 + iVar8) % 0x32 + 0x32);
                    local_2b0 = local_2b0 & 0xffffffff00000000;
                    uVar23 = local_260 & 0xffffffff;
                    local_270 = uVar16;
LAB_1002a9cdb:
                    lVar12 = FUN_10037b3b0(local_2d8,uVar23);
                    if (lVar12 == 0) goto LAB_1002a9eaf;
                    lVar13 = FUN_100597ce2(lVar12,*(undefined8 *)(lVar11 + 0x30));
                    cVar4 = FUN_1002abcce(lVar11,lVar13,&local_2dc,&local_264);
                    if (cVar4 == '\0') {
LAB_1002a9d9c:
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar15 = DAT_1008c75b8;
                      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar4 != '\0') {
                        FUN_10048681f(&local_238,lVar12);
                        local_244 = FUN_1001b83ae(&local_238);
                        local_248 = 0x8220102;
                        __os_log_impl(0x100000000,uVar15,1,"sync> can\'t accept \"%{public}s\"",
                                      &local_248,0xc);
                        FUN_1001b7a50(&local_238);
                      }
                      FUN_10037b472(local_2d8,uVar23,0);
LAB_1002a9eaf:
                      uVar22 = (int)uVar23 + 1;
                      if ((uint)local_2d0 <= uVar22) {
                        uVar22 = 0;
                      }
                      uVar23 = (ulong)uVar22;
                      if (uVar22 == (uint)local_260 && (char)local_2b0 == '\0') break;
                      goto LAB_1002a9cdb;
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
                    uVar16 = FUN_100306976(local_278,lVar13,&DAT_1008c77c8,0,0,1);
                    if ((uVar16 != 0) && ((*(byte *)(*(long *)(uVar16 + 8) + 0xc3) & 1) == 0))
                    goto LAB_1002a9d9c;
                    uVar22 = 0;
                    if ((byte)local_266 != '\0') {
                      bVar5 = *(byte *)(*(long *)(lVar13 + 8) + 300);
                      if ((char)bVar5 < '\x01') {
                        uVar22 = 1;
                      }
                      else {
                        bVar5 = bVar5 / 0x14;
                        if (4 < bVar5) {
                          bVar5 = 5;
                        }
                        uVar22 = (uint)(byte)(bVar5 + 2);
                      }
                    }
                    local_2b0 = uVar16;
                    if ((char)local_2f0 != '\0') {
                      cVar4 = FUN_1004817dc(*(long *)(lVar13 + 8),0);
                      if (cVar4 == '\x02') {
                        uVar22 = uVar22 + 7;
                      }
                      else {
                        uVar22 = uVar22 + 1;
                      }
                    }
                    uVar22 = uVar22 >> (local_27d & 0x1f);
                    uVar10 = (uint)local_2a8;
                    uVar21 = uVar10 - uVar22;
                    local_2a8 = (ulong)uVar21;
                    if (uVar22 <= uVar10 && uVar21 != 0) {
                      local_2b0 = CONCAT44(local_2b0._4_4_,
                                           (int)CONCAT71((uint7)(uint3)(uVar21 >> 8),1));
                      goto LAB_1002a9eaf;
                    }
                    FUN_10037b472(local_2d8,uVar23,0);
                    uVar16 = local_270;
                    local_2a0[0] = 0;
                    local_260 = FUN_1002abe50(lVar11,lVar12,local_2a0);
                    cVar4 = FUN_1004eb61a(lVar11,lVar13,0);
                    puVar24 = (undefined2 *)(lVar13 + 0x54);
                    if (cVar4 != '\0') {
                      puVar24 = local_320;
                    }
                    local_2a8 = CONCAT62(local_2a8._2_6_,*puVar24);
                    uVar23 = uVar16 - local_2c8;
                    if (uVar16 <= local_2c8) {
                      uVar15 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar15,0x10);
                      if (cVar4 != '\0') {
                        local_238 = 0x202;
                        uStack_236 = 0x822;
                        uStack_234 = 0x7a0a90;
                        uStack_230 = 1;
                        uStack_22c = 0x822;
                        uStack_22a = 0x8c98;
                        uStack_228 = 0x7b;
                        uStack_226 = 1;
                        __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                            &local_238,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    if (uVar23 < local_260) {
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar15 = DAT_1008c75b8;
                      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar4 != '\0') {
                        FUN_10048681f(&local_248,lVar12);
                        uVar17 = FUN_1001b83ae(&local_248);
                        local_238 = 0x202;
                        uStack_236 = 0x822;
                        uStack_234 = (undefined4)uVar17;
                        uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                        uStack_22c = 0x800;
                        uStack_22a = (undefined2)local_260;
                        uStack_228 = (undefined2)(local_260 >> 0x10);
                        uStack_226 = (undefined4)(local_260 >> 0x20);
                        __os_log_impl(0x100000000,uVar15,1,
                                      "sync> insufficient free space for \"%{public}s\", size = %llu"
                                      ,&local_238,0x16);
                        FUN_1001b7a50(&local_248);
                      }
                      local_264 = local_264 | 0x20;
                      goto LAB_1002a9c7b;
                    }
                    if ((*(uint *)(lVar11 + 0x410) != 0) &&
                       (uVar22 = (int)local_290 + 1, local_290 = (ulong)uVar22,
                       *(uint *)(lVar11 + 0x410) < uVar22)) goto LAB_1002ab696;
                    if ((local_2b0 == 0) || (*(short *)(local_2b0 + 0x54) != (short)local_2a8)) {
                      if ((char)local_284 == '\0') {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar15 = DAT_1008c75b8;
                        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar4 != '\0') {
                          FUN_10048681f(&local_248);
                          uVar17 = FUN_1001b83ae(&local_248);
                          lVar13 = local_270 - local_260;
                          local_238 = 0x402;
                          uStack_234 = (undefined4)uVar17;
                          uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                          uStack_22a = (undefined2)local_260;
                          uStack_228 = (undefined2)(local_260 >> 0x10);
                          uStack_226 = (undefined4)(local_260 >> 0x20);
                          local_222 = 0x400;
                          local_220 = local_2a0[0];
                          uStack_21c = 0x800;
                          uStack_21a = (undefined2)lVar13;
                          local_218 = (undefined2)((ulong)lVar13 >> 0x10);
                          local_216 = (undefined4)((ulong)lVar13 >> 0x20);
                          pcVar20 = 
                          "sync> copying new autofilled track \"%{public}s\", size = %llu, speech size = %u, remaining bytes = %lld"
                          ;
                          uVar17 = 0x26;
                          goto LAB_1002aa2e7;
                        }
                      }
                      else {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar15 = DAT_1008c75b8;
                        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar4 != '\0') {
                          FUN_10048681f(&local_248);
                          uVar17 = FUN_1001b83ae(&local_248);
                          lVar13 = local_270 - local_260;
                          local_238 = 0x302;
                          uStack_234 = (undefined4)uVar17;
                          uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                          uStack_22a = (undefined2)local_260;
                          uStack_228 = (undefined2)(local_260 >> 0x10);
                          uStack_226 = (undefined4)(local_260 >> 0x20);
                          local_222 = 0x800;
                          local_220 = (uint)lVar13;
                          uStack_21c = (undefined2)((ulong)lVar13 >> 0x20);
                          uStack_21a = (undefined2)((ulong)lVar13 >> 0x30);
                          pcVar20 = 
                          "sync> copying new autofilled track \"%{public}s\", size = %llu, remaining bytes = %lld"
                          ;
                          uVar17 = 0x20;
LAB_1002aa2e7:
                          uVar16 = local_270;
                          uStack_236 = 0x822;
                          uStack_22c = 0x800;
                          __os_log_impl(0x100000000,uVar15,1,pcVar20,&local_238,uVar17);
                          FUN_1001b7a50(&local_248);
                        }
                      }
                      iVar8 = FUN_100595808(local_2b8,lVar12,0,0);
                      if (iVar8 != 0) {
                        if (iVar8 == -0x80) goto LAB_1002ab4f9;
                        uVar15 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar15,0x10);
                        if (cVar4 == '\0') goto LAB_1002ab4f9;
                        uStack_22a = (undefined2)iVar8;
                        uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
                        goto LAB_1002aa61c;
                      }
                    }
                    else {
                      local_260 = FUN_1002abc4e(lVar11,local_2b0,local_2a0);
                      if ((char)local_284 == '\0') {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar15 = DAT_1008c75b8;
                        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                        uVar16 = local_270;
                        if (cVar4 != '\0') {
                          FUN_10048681f(&local_248,lVar12);
                          uVar17 = FUN_1001b83ae(&local_248);
                          lVar12 = local_270 - local_260;
                          local_238 = 0x402;
                          uStack_234 = (undefined4)uVar17;
                          uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                          uStack_22a = (undefined2)local_260;
                          uStack_228 = (undefined2)(local_260 >> 0x10);
                          uStack_226 = (undefined4)(local_260 >> 0x20);
                          local_222 = 0x400;
                          local_220 = local_2a0[0];
                          uStack_21c = 0x800;
                          uStack_21a = (undefined2)lVar12;
                          local_218 = (undefined2)((ulong)lVar12 >> 0x10);
                          local_216 = (undefined4)((ulong)lVar12 >> 0x20);
                          pcVar20 = 
                          "sync> keeping existing autofilled track \"%{public}s\", size = %llu, speech size = %u, remaining bytes = %lld"
                          ;
                          uVar17 = 0x26;
                          goto LAB_1002aa3df;
                        }
                      }
                      else {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar15 = DAT_1008c75b8;
                        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                        uVar16 = local_270;
                        if (cVar4 != '\0') {
                          FUN_10048681f(&local_248,lVar12);
                          uVar17 = FUN_1001b83ae(&local_248);
                          lVar12 = local_270 - local_260;
                          local_238 = 0x302;
                          uStack_234 = (undefined4)uVar17;
                          uStack_230 = (undefined4)((ulong)uVar17 >> 0x20);
                          uStack_22a = (undefined2)local_260;
                          uStack_228 = (undefined2)(local_260 >> 0x10);
                          uStack_226 = (undefined4)(local_260 >> 0x20);
                          local_222 = 0x800;
                          local_220 = (uint)lVar12;
                          uStack_21c = (undefined2)((ulong)lVar12 >> 0x20);
                          uStack_21a = (undefined2)((ulong)lVar12 >> 0x30);
                          pcVar20 = 
                          "sync> keeping existing autofilled track \"%{public}s\", size = %llu, remaining bytes = %lld"
                          ;
                          uVar17 = 0x20;
LAB_1002aa3df:
                          uVar16 = local_270;
                          uStack_236 = 0x822;
                          uStack_22c = 0x800;
                          __os_log_impl(0x100000000,uVar15,1,pcVar20,&local_238,uVar17);
                          FUN_1001b7a50(&local_248);
                        }
                      }
                      lVar12 = *(long *)(local_2b0 + 8);
                      uVar22 = *(uint *)(lVar12 + 0xc2);
                      if ((uVar22 >> 8 & 1) == 0) {
                        uVar15 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar15,0x10);
                        if (cVar4 != '\0') {
                          local_238 = 0x202;
                          uStack_236 = 0x822;
                          uStack_234 = 0x7a0a90;
                          uStack_230 = 1;
                          uStack_22c = 0x822;
                          uStack_22a = 0x8cba;
                          uStack_228 = 0x7b;
                          uStack_226 = 1;
                          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                              &local_238,0x16);
                        }
                        FUN_1001782e9(0,0);
                        lVar12 = *(long *)(local_2b0 + 8);
                        uVar22 = *(uint *)(lVar12 + 0xc2);
                        uVar16 = local_270;
                      }
                      piVar3 = local_2b8;
                      *(uint *)(lVar12 + 0xc2) = uVar22 & 0xfffffeff;
                      uVar15 = FUN_10048584d(*(undefined8 *)(local_2b0 + 8),local_2e8,0);
                      iVar8 = FUN_100595808(piVar3,uVar15,0,0);
                      if (iVar8 != 0) {
                        if (iVar8 == -0x80) goto LAB_1002ab4f9;
                        uVar15 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar15,0x10);
                        if (cVar4 == '\0') goto LAB_1002ab4f9;
                        uStack_22a = (undefined2)iVar8;
                        uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
                        goto LAB_1002aa61c;
                      }
                    }
                    uVar16 = uVar16 - local_260;
                  } while (local_2c8 < uVar16);
                }
              }
              else if (iVar8 == 0) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar15 = DAT_1008c75b8;
                cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar4 != '\0') {
                  local_238 = 0;
                  __os_log_impl(0x100000000,uVar15,1,"sync> no tracks available for autofilling",
                                &local_238,2);
                }
              }
              else {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar15 = DAT_1008c75b8;
                cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar4 != '\0') {
                  local_238 = 0;
                  __os_log_impl(0x100000000,uVar15,1,"sync> insufficient free space for any tracks",
                                &local_238,2);
                }
                local_264 = 0x20;
              }
              goto LAB_1002aaf62;
            }
            uVar15 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar15,0x10);
            if (cVar4 != '\0') {
              uStack_22a = (undefined2)iVar8;
              uStack_228 = (undefined2)((uint)iVar8 >> 0x10);
LAB_1002aa61c:
              uStack_230 = 1;
              uStack_234 = 0x7a0a90;
              uStack_236 = 0x822;
              local_238 = 0x202;
              uStack_22c = 0x400;
              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_238,0x12)
              ;
            }
          }
          goto LAB_1002ab4f9;
        }
        uVar15 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar15,0x10);
        if (cVar4 != '\0') {
          pcVar20 = "sourcePlaylist != nullptr";
          goto LAB_1002a96f0;
        }
      }
    }
  }
  iVar8 = -0x32;
  FUN_1001782e9(0,0);
LAB_1002a9724:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_1002ab696:
  local_264 = local_264 | 0x40;
LAB_1002aaf62:
  if ((char)local_284 == '\0') {
    FUN_1005a47d0(local_2f8);
  }
  if ((char)local_27c != '\0') {
    FUN_10031c5b6(local_278);
    FUN_1002abfbf(local_278);
  }
  if ((((local_2b8 == (int *)0x0) || (*local_2b8 != 0x4f4c5354)) || (local_2b8[1] == 0)) ||
     (iVar8 = (int)((ulong)(*(long *)(local_2b8 + 4) - *(long *)(local_2b8 + 2)) >> 3) * -0x49249249
     , iVar8 == 0)) {
    FUN_1001b7a44(&local_238);
    FUN_1001b7a44(&local_248);
    lVar12 = local_2c0;
    lVar13 = FUN_10048bf36(local_328);
    FUN_1004fdbd0(local_2a0,lVar11);
    FUN_100486d8f(&local_258,lVar12);
    FUN_1001b80b2(&local_238,&local_258);
    FUN_1001b7a50(&local_258);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar15 = DAT_1008c75b8;
    cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar4 != '\0') {
      local_258 = 0x4000200;
      local_254 = local_264;
      local_250 = 0x400;
      local_24e = (undefined4)local_2d0;
      __os_log_impl(0x100000000,uVar15,1,
                    "sync> autofill failed, reasonFlags = %08x, numTableItems = %u",&local_258,0xe);
    }
    puVar26 = &local_258;
    FUN_1001b7a44(puVar26);
    uVar22 = local_264;
    if ((int)local_264 < 0x10) {
      if (local_264 == 4) {
        uVar21 = local_2c0 == lVar13 ^ 0x10cc0237;
LAB_1002ab44c:
        uVar15 = FUN_100416f20(*(undefined4 *)(lVar11 + 0x66b0),uVar21);
      }
      else {
        if (local_264 != 8) {
LAB_1002ab559:
          if ((uint)local_2d0 == 0) {
            uVar21 = local_2c0 == lVar13 ^ 0x10cc0239;
          }
          else {
            if (local_264 == 0) {
              uVar21 = local_2c0 == lVar13 ^ 0x10cc023b;
              goto LAB_1002ab44c;
            }
            uVar21 = 0x10cc0235;
            if ((local_264 & 0x20) == 0) {
              uVar21 = local_2c0 == lVar13 ^ 0x10cc023f;
            }
          }
          uVar15 = FUN_100416f20(*(undefined4 *)(lVar11 + 0x66b0),uVar21);
          FUN_1001b81f2(&local_258,uVar15);
          if ((uVar22 & 0x10) == 0) goto LAB_1002ab463;
          goto LAB_1002ab5dd;
        }
        uVar15 = FUN_100416f20(*(undefined4 *)(lVar11 + 0x66b0),0x10cc0240);
        FUN_1001b81f2(&local_258,uVar15);
        uVar15 = 0x10cc0241;
LAB_1002ab3fa:
        uVar15 = FUN_100416f20(*(undefined4 *)(lVar11 + 0x66b0),uVar15);
        puVar26 = &local_248;
      }
      FUN_1001b81f2(puVar26,uVar15);
    }
    else if (local_264 == 0x10) {
      uVar15 = FUN_100416f20(*(undefined4 *)(lVar11 + 0x66b0),local_2c0 == lVar13 ^ 0x10cc023d);
      FUN_1001b81f2(&local_258,uVar15);
LAB_1002ab5dd:
      if (((*(char *)(lVar11 + 0x390) != '\0') && (*(char *)(lVar11 + 0x14d18) == '\0')) &&
         (cVar4 = FUN_1001b8428(&local_248), cVar4 != '\0')) {
        uVar15 = 0x10cc0242;
        goto LAB_1002ab3fa;
      }
    }
    else {
      uVar21 = 0x10cc0235;
      if (local_264 == 0x20) goto LAB_1002ab44c;
      if (local_264 != 0x40) goto LAB_1002ab559;
      uVar15 = FUN_100416f20(*(undefined4 *)(lVar11 + 0x66b0),
                             0x10cc022d - (uint)(*(char *)(lVar11 + 0x346) == '\0'));
      FUN_1001b81f2(&local_258,uVar15);
      FUN_1001b8e86(local_308,*(undefined4 *)(lVar11 + 0x410),1);
      FUN_1001b80b2(&local_238,local_308);
      FUN_1001b7a50(local_308);
    }
LAB_1002ab463:
    FUN_1001bbf68(local_308,&local_258,local_2a0,&local_238);
    FUN_1004fda52(local_338,*(undefined4 *)(lVar11 + 0x28));
    FUN_1002ac044(local_308,&local_248,local_338);
    FUN_1001b7a50(local_338);
    FUN_1001b7a50(local_308);
    FUN_1001b7a50(&local_258);
    FUN_1001b7a50(local_2a0);
    FUN_1001b7a50(&local_248);
    FUN_1001b7a50(&local_238);
  }
  else {
    iVar9 = 0;
    do {
      plVar18 = (long *)FUN_1005968bf(local_2b8,iVar9,0);
      if ((plVar18 == (long *)0x0) || ((int *)*plVar18 == (int *)0x0)) {
LAB_1002ab0bf:
        uVar15 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar15,0x10);
        if (cVar4 != '\0') {
          local_238 = 0x202;
          uStack_236 = 0x822;
          uStack_234 = 0x7a0a90;
          uStack_230 = 1;
          uStack_22c = 0x822;
          uStack_22a = 0x8ce8;
          uStack_228 = 0x7b;
          uStack_226 = 1;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (*(int *)*plVar18 != 0x706c7374) {
          uVar15 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar15,0x10);
          if (cVar4 != '\0') {
            local_238 = 0x202;
            uStack_236 = 0x822;
            uStack_234 = 0x7ab58c;
            uStack_230 = 1;
            uStack_22c = 0x822;
            uStack_22a = 0x2d50;
            uStack_228 = 0x7b;
            uStack_226 = 1;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          cVar4 = FUN_1001782e9(0,1);
          if (cVar4 == '\0') goto LAB_1002ab0bf;
        }
        if ((int)plVar18[8] == 0) goto LAB_1002ab0bf;
        if (*(long *)(*plVar18 + 8) == local_278) {
          FUN_10048a5e2(plVar18,0);
LAB_1002ab0fc:
          uVar1 = *(ushort *)(plVar18[1] + 0xc6);
          if ((uVar1 & 4) == 0) {
            *(ushort *)(plVar18[1] + 0xc6) = uVar1 | 4;
            FUN_1004729c1(plVar18[1],0x83);
          }
        }
        else {
          uVar15 = FUN_100597ce2(plVar18,*(undefined8 *)(lVar11 + 0x30));
          cVar4 = FUN_1004eb61a(lVar11,uVar15,0);
          plVar18 = (long *)FUN_1003a790f(plVar18,0,local_2e8,0,cVar4 != '\0');
          if (plVar18 != (long *)0x0) goto LAB_1002ab0fc;
          uVar15 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar15,0x10);
          if (cVar4 != '\0') {
            local_238 = 0x202;
            uStack_236 = 0x822;
            uStack_234 = 0x7a0a90;
            uStack_230 = 1;
            uStack_22c = 0x822;
            uStack_22a = 0x8d0b;
            uStack_228 = 0x7b;
            uStack_226 = 1;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar8 != iVar9);
  }
LAB_1002ab4f6:
  iVar8 = 0;
LAB_1002ab4f9:
  FUN_100595344(local_2b8);
  FUN_1002fbbfc(local_278);
  FUN_10031b040(local_278);
  if (uStack_310 != (long *)0x0) {
    LOCK();
    plVar18 = uStack_310 + 1;
    lVar11 = *plVar18;
    *plVar18 = *plVar18 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*uStack_310 + 0x10))(uStack_310);
      std::__shared_weak_count::__release_weak();
    }
  }
  goto LAB_1002a9724;
}

