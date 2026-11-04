// name: FUN_100348713
// address: 100348713

int FUN_100348713(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 ,code *param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  undefined1 local_314 [44];
  long local_2e8;
  long *local_2e0;
  long *local_2d8;
  undefined8 local_2d0;
  code *local_2c8;
  undefined8 local_2c0;
  uint local_2b4;
  long local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  long local_290;
  uint local_284;
  undefined8 local_280;
  char local_278 [4];
  char *local_274;
  undefined2 local_26c;
  int local_26a;
  char local_258 [4];
  uint local_254;
  undefined2 uStack_250;
  undefined2 uStack_24e;
  undefined2 local_24c;
  int local_24a;
  undefined2 uStack_246;
  undefined2 uStack_244;
  undefined2 uStack_242;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_280 = 0;
  local_2b0 = 0;
  local_2d0 = param_2;
  local_2c8 = param_6;
  local_2c0 = param_5;
  lVar8 = FUN_100347f79(param_1,param_3,&local_2b0);
  if (lVar8 == 0) {
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 != '\0') {
      builtin_strncpy(local_258,"\x02\x02\"\b",4);
      local_254 = 0x7a0a90;
      uStack_250 = 1;
      uStack_24e = 0;
      local_24c = 0x822;
      local_24a = 0x7c1dc6;
      uStack_246 = 1;
      uStack_244 = 0;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_258,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar9 = FUN_100597c13(lVar8,0);
    if (lVar9 != 0) {
      FUN_10031bd9c(lVar9,local_314);
      if (((*(long *)(lVar8 + 0x10) == *(long *)(param_1 + 0x30)) && (param_4 != 0)) &&
         (*(long *)(lVar8 + 0x188) == 0)) {
        iVar4 = FUN_100354604(param_4,&local_280);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
LAB_1003489ba:
            iVar4 = FUN_1003376b5(*(undefined4 *)(param_1 + 8),local_2d0,local_238);
            if (iVar4 == -0x80) goto LAB_10034894d;
            if (iVar4 != 0) {
              uVar10 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar10,0x10);
              if (cVar3 != '\0') {
                builtin_strncpy(local_258,"\x02\x02\"\b",4);
                local_254 = 0x7a0a90;
                uStack_250 = 1;
                uStack_24e = 0;
                local_24c = 0x400;
                local_24a = iVar4;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",local_258,0x12
                                   );
              }
              goto LAB_10034894d;
            }
            (*local_2c8)(param_7,local_280,local_2c0,local_238);
            FUN_10017060f(local_280);
            local_280 = 0;
            lVar9 = FUN_10030252b(local_314);
            iVar4 = 0;
            if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x48) & 0x40) == 0)) goto LAB_10034894d;
            FUN_100241e02(&local_2e0,lVar9,0x20,0,0,0);
            if (local_2e0 == (long *)0x0) {
              uVar10 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar10,0x10);
              if (cVar3 != '\0') {
                pcVar13 = "playerHandler != nullptr";
LAB_10034929f:
                local_24c = 0x822;
                uStack_24e = 0;
                uStack_250 = 1;
                local_254 = 0x7a0a90;
                builtin_strncpy(local_258,"\x02\x02\"\b",4);
                local_24a = (int)pcVar13;
                uStack_246 = (undefined2)((ulong)pcVar13 >> 0x20);
                uStack_244 = 0;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_258,
                                    0x16);
              }
LAB_10034904f:
              iVar4 = 0;
              FUN_1001782e9(0,0);
              local_298 = 0;
            }
            else {
              local_298 = FUN_1003ae1f8();
              if (local_298 == 0) {
                uVar10 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar10,0x10);
                if (cVar3 != '\0') {
                  pcVar13 = "combinedITTrackInfo != nullptr";
                  goto LAB_10034929f;
                }
                goto LAB_10034904f;
              }
              uVar5 = FUN_10047fc8b(lVar8);
              iVar4 = (**(code **)(*local_2e0 + 0x88))(local_2e0,8,uVar5,0,0,local_298 + 0x4ca8,0);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  lVar9 = *(long *)(local_298 + 0x4cac);
                  if (lVar9 == 0) {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar10 = DAT_1008c75b8;
                    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                    iVar4 = 0;
                    if (cVar3 != '\0') {
                      FUN_100476ac1(local_258,lVar8);
                      local_274 = (char *)FUN_1001b83ae(local_258);
                      builtin_strncpy(local_278,"\x02\x01\"\b",4);
                      __os_log_impl(0x100000000,uVar10,0x10,
                                    "airtraffic> failed to copy chapter data for track \"%{public}s\""
                                    ,local_278,0xc);
                      FUN_1001b7a50(local_258);
                    }
                  }
                  else {
                    uVar6 = FUN_100176d97(lVar9);
                    if (uVar6 == 0) {
LAB_100349246:
                      iVar4 = 0;
                    }
                    else {
                      uVar14 = 1;
                      iVar4 = 0;
                      local_284 = 0;
                      local_2a8 = 0;
                      local_2b4 = uVar6;
                      local_290 = lVar9;
                      while( true ) {
                        uVar6 = FUN_100176de6(local_290);
                        if (uVar6 == 0xffffffff) break;
                        uVar12 = FUN_100176d48(local_290);
                        lVar9 = local_2a8;
                        if (((uVar12 & 2) != 0) &&
                           (iVar7 = FUN_1001776af(local_290,(ulong)uVar6,0,&local_2e8),
                           lVar9 = local_2a8, iVar7 == 0)) {
                          local_2a0 = local_2e8;
                          if (local_2a8 != local_2e8) {
                            iVar4 = FUN_10017610a(local_290,uVar6,0x70636664,0,8,&local_280);
                            if (iVar4 == 0) {
                              iVar4 = FUN_1003376b5(*(undefined4 *)(param_1 + 8),local_2d0,local_238
                                                   );
                              if (iVar4 != 0) {
                                if (iVar4 != -0x80) {
                                  uVar10 = FUN_1001cc310();
                                  cVar3 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar3 != '\0') {
                                    pcVar13 = local_278;
                                    builtin_strncpy(local_278,"\x02\x02\"\b",4);
                                    local_274 = "Assertion failure";
                                    local_26c = 0x400;
                                    local_26a = iVar4;
                                    goto LAB_100349108;
                                  }
                                }
                                goto LAB_100349065;
                              }
                              _snprintf(local_258,0x20,"-%d",(ulong)uVar6);
                              FUN_1001e26e1(local_258,local_238);
                              (*local_2c8)(param_7,local_280,local_2c0,local_238);
                              FUN_10017060f(local_280);
                              local_280 = 0;
                              local_284 = local_284 + 1;
                              iVar4 = 0;
                              lVar9 = local_2a0;
                              if (*(int *)(param_1 + 0x41c) - 1U < local_284) goto LAB_100349246;
                            }
                            else {
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              uVar10 = DAT_1008c75b8;
                              cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                              lVar9 = local_2a0;
                              if (cVar3 != '\0') {
                                FUN_100476ac1(local_278,lVar8);
                                uVar11 = FUN_1001b83ae(local_278);
                                local_258[0] = '\x02';
                                local_258[1] = '\x03';
                                local_258[2] = '\0';
                                local_258[3] = '\x04';
                                uStack_250 = 0x822;
                                uStack_24e = (undefined2)uVar11;
                                local_24c = (undefined2)((ulong)uVar11 >> 0x10);
                                local_24a = (int)((ulong)uVar11 >> 0x20);
                                uStack_246 = 0x400;
                                uStack_244 = (undefined2)iVar4;
                                uStack_242 = (undefined2)((uint)iVar4 >> 0x10);
                                local_254 = uVar14;
                                __os_log_impl(0x100000000,uVar10,0x10,
                                              "airtraffic> failed to get artwork for chapter %u for track \"%{public}s\" (%d)"
                                              ,local_258,0x18);
                                FUN_1001b7a50(local_278);
                                lVar9 = local_2a0;
                              }
                            }
                          }
                        }
                        local_2a8 = lVar9;
                        uVar14 = uVar14 + 1;
                        if (local_2b4 < uVar14) goto LAB_100349065;
                      }
                      uVar10 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar10,0x10);
                      if (cVar3 != '\0') {
                        builtin_strncpy(local_258,"\x02\x02\"\b",4);
                        local_254 = 0x7a0a90;
                        uStack_250 = 1;
                        uStack_24e = 0;
                        local_24c = 0x822;
                        local_24a = 0x7c1f17;
                        uStack_246 = 1;
                        uStack_244 = 0;
                        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                            local_258,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                  }
                }
                else {
                  uVar10 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar3 != '\0') {
                    pcVar13 = local_258;
                    builtin_strncpy(local_258,"\x02\x02\"\b",4);
                    local_254 = 0x7a0a90;
                    uStack_250 = 1;
                    uStack_24e = 0;
                    local_24c = 0x400;
                    local_24a = iVar4;
LAB_100349108:
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",pcVar13,
                                        0x12);
                  }
                }
              }
            }
LAB_100349065:
            if (local_2d8 != (long *)0x0) {
              LOCK();
              plVar1 = local_2d8 + 1;
              lVar8 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar8 == 0) {
                (**(code **)(*local_2d8 + 0x10))(local_2d8);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar8 = local_298;
            if (local_298 != 0) {
              FUN_1003ae783(local_298 + 0x4ca8);
              FUN_1001c64c1(lVar8);
            }
            goto LAB_10034894d;
          }
          uVar10 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar10,0x10);
          if (cVar3 != '\0') {
            builtin_strncpy(local_258,"\x02\x02\"\b",4);
            local_254 = 0x7a0a90;
            uStack_250 = 1;
            uStack_24e = 0;
            local_24c = 0x400;
            local_24a = iVar4;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",local_258,0x12);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 == '\0') goto LAB_10034894d;
        FUN_10017d520(local_278,param_4);
        uVar11 = FUN_1001b83ae(local_278);
        local_254 = (uint)uVar11;
        uStack_250 = (undefined2)((ulong)uVar11 >> 0x20);
        uStack_24e = (undefined2)((ulong)uVar11 >> 0x30);
        pcVar13 = "airtraffic> failed to copy artwork data for file \"%{public}s\" (%d)";
        local_24a = iVar4;
      }
      else {
        iVar4 = FUN_100354428(lVar8,&local_280);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            if ((local_2b0 != 0) && (local_2b0 != lVar8 && *(long *)(local_2b0 + 0x10) != 0)) {
              if (*(long *)(local_2b0 + 0x10) != *(long *)(param_1 + 0x30)) {
                uVar10 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar10,0x10);
                if (cVar3 != '\0') {
                  builtin_strncpy(local_258,"\x02\x02\"\b",4);
                  local_254 = 0x7a0a90;
                  uStack_250 = 1;
                  uStack_24e = 0;
                  local_24c = 0x822;
                  local_24a = 0x7c1eb6;
                  uStack_246 = 1;
                  uStack_244 = 0;
                  __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_258,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              lVar2 = *(long *)(local_2b0 + 0x58);
              if (*(int *)(lVar2 + 0x78) != *(int *)(lVar9 + 0x78)) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar10 = DAT_1008c75b8;
                cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar3 != '\0') {
                  FUN_100476ac1(local_278,lVar8);
                  uVar11 = FUN_1001b83ae(local_278);
                  local_24a = *(int *)(lVar2 + 0x78);
                  builtin_strncpy(local_258,"\x02\x03\"\b",4);
                  local_254 = (uint)uVar11;
                  uStack_250 = (undefined2)((ulong)uVar11 >> 0x20);
                  uStack_24e = (undefined2)((ulong)uVar11 >> 0x30);
                  local_24c = 0x400;
                  uStack_246 = 0x400;
                  uStack_244 = (undefined2)*(undefined4 *)(lVar9 + 0x78);
                  uStack_242 = (undefined2)((uint)*(undefined4 *)(lVar9 + 0x78) >> 0x10);
                  __os_log_impl(0x100000000,uVar10,1,
                                "airtraffic> artwork size for track \"%{public}s\" changed from %u to %u"
                                ,local_258,0x18);
                  FUN_1001b7a50(local_278);
                }
                *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(lVar9 + 0x78);
                FUN_100330868(param_1,local_2b0);
              }
            }
            goto LAB_1003489ba;
          }
          uVar10 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar10,0x10);
          if (cVar3 != '\0') {
            builtin_strncpy(local_258,"\x02\x02\"\b",4);
            local_254 = 0x7a0a90;
            uStack_250 = 1;
            uStack_24e = 0;
            local_24c = 0x400;
            local_24a = iVar4;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",local_258,0x12);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar3 == '\0') goto LAB_10034894d;
        FUN_100476ac1(local_278,lVar8);
        uVar11 = FUN_1001b83ae(local_278);
        local_254 = (uint)uVar11;
        uStack_250 = (undefined2)((ulong)uVar11 >> 0x20);
        uStack_24e = (undefined2)((ulong)uVar11 >> 0x30);
        pcVar13 = "airtraffic> failed to copy artwork data for track \"%{public}s\" (%d)";
        local_24a = iVar4;
      }
      iVar4 = local_24a;
      local_24c = 0x400;
      builtin_strncpy(local_258,"\x02\x02\"\b",4);
      __os_log_impl(0x100000000,uVar10,0x10,pcVar13,local_258,0x12);
      FUN_1001b7a50(local_278);
      goto LAB_10034894d;
    }
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 != '\0') {
      builtin_strncpy(local_258,"\x02\x02\"\b",4);
      local_254 = 0x7a0a90;
      uStack_250 = 1;
      uStack_24e = 0;
      local_24c = 0x822;
      local_24a = 0x7c1de5;
      uStack_246 = 1;
      uStack_244 = 0;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",local_258,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x2b;
LAB_10034894d:
  FUN_10017060f(local_280);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

