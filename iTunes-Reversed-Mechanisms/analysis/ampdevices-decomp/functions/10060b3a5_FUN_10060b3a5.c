// name: FUN_10060b3a5
// address: 10060b3a5

int FUN_10060b3a5(long param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined1 local_298 [16];
  long local_288;
  long local_280;
  char *local_278;
  long local_270;
  long local_268;
  char local_25c;
  undefined1 local_25b;
  char local_25a;
  byte local_259;
  undefined4 local_258;
  undefined8 local_254;
  undefined2 local_24c;
  char *local_24a;
  uint local_238;
  uint local_234;
  undefined2 uStack_230;
  ushort uStack_22e;
  undefined2 uStack_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_280 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(local_280 + 0x16640);
  if (lVar9 == 0) {
    uVar12 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar12,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x8220202;
      local_234 = 0x7a0a90;
      uStack_230 = 1;
      uStack_22e = 0;
      uStack_22c = 0x822;
      local_22a = "iPodSpeech != nullptr";
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x32;
    goto LAB_10060bb7c;
  }
  FUN_1005a44e2(lVar9);
  local_270 = param_1;
  if (*(char *)(param_1 + 0x4dc) == '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar12 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_238 = local_238 & 0xffff0000;
      __os_log_impl(0x100000000,uVar12,1,"sync> deleting speech clips",&local_238,2);
    }
    iVar7 = FUN_1005a9036(lVar9,param_1 + 0x410);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar12 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar12,0x10);
      if (cVar5 != '\0') {
        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
        goto LAB_10060bf85;
      }
    }
  }
  else {
    local_278 = (char *)0x0;
    local_288 = 0;
    local_259 = 0;
    local_25a = '\0';
    local_25b = 0;
    bVar3 = FUN_1005a4bc0(lVar9,*(undefined1 *)(*(long *)(param_1 + 0x20) + 0x385));
    uVar6 = *(uint *)(lVar9 + 0x15b8) & *(uint *)(lVar9 + 0x15b4);
    local_268 = lVar9;
    if ((uVar6 & 1) == 0) {
      if ((uVar6 & 0x20) == 0) {
        bVar4 = FUN_1005a5736(lVar9);
        pcVar13 = (char *)0x0;
      }
      else {
        iVar7 = FUN_1005adfc2(lVar9,&local_278,&local_259,&local_25b);
        if (iVar7 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          pcVar13 = local_278;
          bVar4 = local_259;
          if (cVar5 != '\0') {
            local_238 = 0x8000100;
            local_234 = (uint)local_278;
            uStack_230 = (undefined2)((ulong)local_278 >> 0x20);
            uStack_22e = (ushort)((ulong)local_278 >> 0x30);
            __os_log_impl(0x100000000,uVar12,1,"sync> speech system messages size = %llu",&local_238
                          ,0xc);
            pcVar13 = local_278;
            bVar4 = local_259;
          }
        }
        else {
          pcVar13 = (char *)0x0;
          bVar4 = local_259;
        }
      }
    }
    else {
      iVar7 = FUN_1005adc86(lVar9,&local_278,&local_259,&local_25a);
      if (iVar7 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        pcVar13 = local_278;
        if (cVar5 != '\0') {
          local_238 = 0x8000100;
          local_234 = (uint)local_278;
          uStack_230 = (undefined2)((ulong)local_278 >> 0x20);
          uStack_22e = (ushort)((ulong)local_278 >> 0x30);
          __os_log_impl(0x100000000,uVar12,1,"sync> speech UI messages size = %llu",&local_238,0xc);
          pcVar13 = local_278;
        }
      }
      else {
        pcVar13 = (char *)0x0;
      }
      bVar4 = local_25a != '\0' || local_259 != 0;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar12 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_234 = (uint)bVar3;
      uStack_22e = (ushort)bVar4;
      local_238 = 0x4000200;
      uStack_230 = 0x400;
      uStack_22c = 0;
      __os_log_impl(0x100000000,uVar12,1,
                    "sync> speech clipModeHasChanged = %d, staleSpeechClipsOnIPod = %d",&local_238,
                    0xe);
    }
    local_25c = bVar4 != 0 || bVar3 != 0;
    if (bVar4 != 0 || bVar3 != 0) {
      lVar9 = FUN_100315ede(*(undefined8 *)(local_280 + 0x30));
      if (lVar9 != 0) {
        do {
          pcVar10 = (char *)FUN_1005aa1f2(local_268,lVar9);
          local_278 = pcVar10;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            FUN_100486d8f(&local_258,lVar9);
            uVar11 = FUN_1001b83ae(&local_258);
            local_238 = 0x8220202;
            local_234 = (uint)uVar11;
            uStack_230 = (undefined2)((ulong)uVar11 >> 0x20);
            uStack_22e = (ushort)((ulong)uVar11 >> 0x30);
            uStack_22c = 0x800;
            local_22a = local_278;
            __os_log_impl(0x100000000,uVar12,1,
                          "sync> destination playlist \"%{public}s\", speech size = %llu",&local_238
                          ,0x16);
            FUN_1001b7a50(&local_258);
          }
          lVar9 = FUN_100316031(lVar9);
          pcVar13 = pcVar13 + (long)pcVar10;
        } while (lVar9 != 0);
      }
      lVar9 = FUN_10048604a(*(undefined8 *)(local_280 + 0x30));
      if (lVar9 == 0) {
        uVar12 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar12,0x10);
        if (cVar5 != '\0') {
          local_238 = 0x8220202;
          local_234 = 0x7a0a90;
          uStack_230 = 1;
          uStack_22e = 0;
          uStack_22c = 0x822;
          local_22a = "destPlaylist != nullptr";
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar9 = FUN_100485529(lVar9);
      if (lVar9 != 0) {
        do {
          uVar12 = FUN_100242590(lVar9);
          pcVar10 = (char *)FUN_1005a99fa(local_268,uVar12);
          local_278 = pcVar10;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            FUN_10048687f(lVar9,&local_238);
            FUN_1001b8dfc(local_298,&local_238);
            local_254 = FUN_1001b83ae(local_298);
            local_258 = 0x8220202;
            local_24c = 0x800;
            local_24a = local_278;
            __os_log_impl(0x100000000,uVar12,1,
                          "sync> destination playlist item \"%{public}s\", speech size = %llu",
                          &local_258,0x16);
            FUN_1001b7a50(local_298);
          }
          pcVar13 = pcVar13 + (long)pcVar10;
          lVar9 = *(long *)(lVar9 + 0x18);
        } while (lVar9 != 0);
      }
    }
    iVar7 = FUN_100601cd5(local_270,&local_288);
    lVar9 = local_268;
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        if (local_288 < (long)pcVar13) {
          iVar7 = FUN_10060375e(local_270,pcVar13);
          lVar9 = local_268;
          if (iVar7 != -0x80) {
            if (iVar7 == 0) {
              iVar7 = FUN_100601cd5(local_270,&local_288);
              lVar9 = local_268;
              if (iVar7 != -0x80) {
                if (iVar7 == 0) goto LAB_10060b9b4;
                uVar12 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar12,0x10);
                lVar9 = local_268;
                if (cVar5 != '\0') {
                  local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
                  goto LAB_10060be99;
                }
              }
            }
            else {
              uVar12 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar12,0x10);
              lVar9 = local_268;
              if (cVar5 != '\0') {
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
LAB_10060be99:
                uStack_22e = 0;
                uStack_230 = 1;
                local_234 = 0x7a0a90;
                uStack_22c = 0x400;
                local_238 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
                lVar9 = local_268;
              }
            }
          }
        }
        else {
LAB_10060b9b4:
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar5 != '\0') {
            local_238 = 0x8000200;
            local_234 = (uint)local_288;
            uStack_230 = (undefined2)((ulong)local_288 >> 0x20);
            uStack_22e = (ushort)((ulong)local_288 >> 0x30);
            uStack_22c = 0x800;
            local_22a = pcVar13;
            __os_log_impl(0x100000000,uVar12,1,
                          "sync> speech available free bytes = %lld, required free bytes = %lld",
                          &local_238,0x16);
          }
          lVar1 = local_270;
          if (local_288 < (long)pcVar13) {
            *(undefined1 *)(local_280 + 0x14dc9) = 0;
            *(undefined1 *)(local_270 + 0x4dc) = 0;
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            lVar9 = local_268;
            uVar12 = DAT_1008c75b8;
            cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar5 != '\0') {
              local_238 = local_238 & 0xffff0000;
              __os_log_impl(0x100000000,uVar12,1,"sync> deleting speech clips",&local_238,2);
            }
            iVar8 = FUN_1005a9036(lVar9,lVar1 + 0x410);
            iVar7 = 0x46c;
            if ((iVar8 != -0x80) && (iVar8 != 0)) {
              uVar12 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar12,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = 0x7a0a90;
                uStack_230 = 1;
                uStack_22e = 0;
                uStack_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar8);
                __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
              }
            }
          }
          else {
            FUN_100602d40(local_270,0x73706b6d,0);
            lVar9 = local_268;
            uVar6 = *(uint *)(local_268 + 0x15b8) & *(uint *)(local_268 + 0x15b4);
            if ((uVar6 & 1) == 0) {
              bVar2 = true;
              if ((uVar6 & 0x20) == 0) {
LAB_10060bd46:
                if (local_25c == '\0') {
                  cVar5 = FUN_1005a56fe();
                  if (cVar5 == '\0') {
                    iVar7 = 0;
                    if (!bVar2) {
LAB_10060bffc:
                      FUN_1005aebfe(lVar9);
                      iVar7 = 0;
                    }
                  }
                  else {
                    iVar7 = FUN_1005a7eb8(lVar9,0,local_270 + 0x410);
                    if (iVar7 != -0x80) {
                      if (iVar7 == 0) goto LAB_10060bffc;
                      uVar12 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar12,0x10);
                      if (cVar5 != '\0') {
                        local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
                        goto LAB_10060bf85;
                      }
                    }
                  }
                }
                else {
                  iVar7 = FUN_1005a7eb8(lVar9,1,local_270 + 0x410);
                  if (iVar7 != -0x80) {
                    if (iVar7 == 0) goto LAB_10060bffc;
                    uVar12 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar12,0x10);
                    if (cVar5 != '\0') {
                      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
LAB_10060bf85:
                      uStack_22c = 0x400;
                      uStack_22e = 0;
                      uStack_230 = 1;
                      local_234 = 0x7a0a90;
                      local_238 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",
                                          &local_238,0x12);
                    }
                  }
                }
              }
              else {
                iVar7 = FUN_1005a7342(local_268,local_25b,local_270 + 0x410);
                if (iVar7 != -0x80) {
                  if (iVar7 == 0) goto LAB_10060bd3a;
                  uVar12 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar12,0x10);
                  if (cVar5 != '\0') {
                    local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
                    goto LAB_10060bf85;
                  }
                }
              }
            }
            else {
              iVar7 = FUN_1005a53d0(local_268,local_25a,local_270 + 0x410);
              if (iVar7 != -0x80) {
                if (iVar7 == 0) {
LAB_10060bd3a:
                  bVar2 = false;
                  goto LAB_10060bd46;
                }
                uVar12 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar12,0x10);
                if (cVar5 != '\0') {
                  local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
                  goto LAB_10060bf85;
                }
              }
            }
          }
        }
      }
      else {
        uVar12 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar12,0x10);
        lVar9 = local_268;
        if (cVar5 != '\0') {
          local_22a = (char *)CONCAT44(local_22a._4_4_,iVar7);
          goto LAB_10060be99;
        }
      }
    }
  }
  FUN_1005a47d0(lVar9);
  lVar9 = *(long *)(local_270 + 0x10);
  lVar1 = *(long *)(lVar9 + 0x6750);
  if (lVar1 != 0) {
    FUN_100529664(lVar1,0,0);
  }
  *(undefined2 *)(lVar9 + 0x67bc) = 0;
  *(undefined4 *)(local_270 + 0x458) = 0;
  *(undefined8 *)(local_270 + 0x460) = 0;
  *(undefined8 *)(local_270 + 0x468) = 0;
  FUN_1004e4afa(local_280,1);
  if (*(long *)(local_280 + 0x30) != 0) {
    FUN_100321e5c();
  }
LAB_10060bb7c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

