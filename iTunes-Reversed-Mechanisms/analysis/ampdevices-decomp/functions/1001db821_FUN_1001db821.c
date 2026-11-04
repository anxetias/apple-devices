// name: FUN_1001db821
// address: 1001db821

void FUN_1001db821(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined8 local_548;
  long local_540;
  long local_538;
  long local_530;
  long local_528;
  undefined *local_520;
  undefined8 local_518;
  long local_510;
  long *local_508;
  undefined8 *local_500;
  long local_4f8;
  uint local_4ec;
  undefined4 local_4e8;
  uint local_4e4;
  long local_4e0;
  long local_4d8;
  long local_4d0;
  long local_4c8;
  int local_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  undefined2 uStack_4ac;
  undefined2 uStack_4aa;
  undefined2 uStack_4a8;
  undefined4 uStack_4a6;
  uint local_488;
  char *local_484;
  undefined2 local_47c;
  char *local_47a;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_540 = param_1 + 0x58;
  lVar9 = param_1 + 0x70;
  local_528 = param_1 + 0x1e8;
  local_500 = (undefined8 *)(param_1 + 0x1f0);
  local_508 = (long *)(param_1 + 0x1f8);
  lVar11 = param_1 + 0x90;
  local_520 = PTR_cf_Content_Length_10083c4d0;
  local_518 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
  local_538 = lVar9;
  local_510 = lVar11;
  do {
    lVar4 = FUN_1001ead5c(lVar9);
    if (lVar4 == 0) {
      lVar4 = FUN_1001eada7(local_540);
      if (lVar4 == 0) break;
      FUN_1001eac02(lVar4,lVar9);
    }
    if (*(int *)(lVar4 + 8) == 0x77726974) {
      local_530 = *(long *)(param_1 + 0x50);
      lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
      lVar7 = _CFRunLoopGetCurrent();
      if (lVar9 != lVar7) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_488 = 0x8220202;
          local_484 = "Assertion failure";
          local_47c = 0x822;
          local_47a = "threadInfo->runLoopThread->runLoop == CFRunLoopGetCurrent()";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (*(long *)(param_1 + 0x50) == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_488 = 0x8220202;
          local_484 = "Assertion failure";
          local_47c = 0x822;
          local_47a = "threadInfo->httpControl != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_1001db798(param_1);
      FUN_10017060f(*(undefined8 *)(param_1 + 0x1e8));
      *(undefined8 *)(param_1 + 0x1e8) = 0;
      FUN_10017060f(*(undefined8 *)(param_1 + 0x1f0));
      *(undefined8 *)(param_1 + 0x1f0) = 0;
      FUN_10017060f(*(undefined8 *)(param_1 + 0x1f8));
      local_508[2] = 0;
      local_508[3] = 0;
      *local_508 = 0;
      local_508[1] = 0;
      puVar13 = &local_4e8;
      iVar2 = FUN_1001a41e5(*(undefined8 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x28),local_58,
                            0x20,&local_488,0x401,local_78,0x20,&local_4ec,puVar13,&local_4e4,
                            &local_548);
      uVar14 = (undefined4)((ulong)puVar13 >> 0x20);
      if (iVar2 == -0x80) {
LAB_1001dc08b:
        local_4bc = iVar2;
        lVar9 = 0;
LAB_1001dc09b:
        local_4d8 = 0;
        lVar11 = 0;
        lVar6 = 0;
        lVar7 = 0;
      }
      else {
        if (iVar2 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_4b8 = 0x8220202;
            uStack_4b4 = 0x7a0a90;
            local_4b0 = 1;
            uStack_4ac = 0x400;
            uStack_4aa = (undefined2)iVar2;
            uStack_4a8 = (undefined2)((uint)iVar2 >> 0x10);
            local_4bc = iVar2;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
            iVar2 = local_4bc;
          }
          goto LAB_1001dc08b;
        }
        iVar2 = _strncasecmp((char *)&local_488,"daap://",7);
        if ((iVar2 == 0) || (iVar2 = _strncasecmp((char *)&local_488,"daa6://",7), iVar2 == 0)) {
          local_488 = 0x70747468;
        }
        uVar5 = DAT_1008c4d90;
        sVar8 = _strlen((char *)&local_488);
        lVar9 = FUN_10017444a(uVar5,&local_488,sVar8,0x8000100,*(undefined8 *)(param_1 + 0x1e0));
        if (lVar9 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_4b8 = 0x8220202;
            uStack_4b4 = 0x7a0a90;
            local_4b0 = 1;
            uStack_4ac = 0x822;
            uStack_4aa = 0xae69;
            uStack_4a8 = 0x7a;
            uStack_4a6 = 1;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
          }
          FUN_1001782e9(0,0);
          local_4bc = -0x6c;
          iVar2 = local_4bc;
          goto LAB_1001dc08b;
        }
        lVar7 = FUN_100172473(DAT_1008c4d90,local_58,0x201);
        if (lVar7 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_4b8 = 0x8220202;
            uStack_4b4 = 0x7a0a90;
            local_4b0 = 1;
            uStack_4ac = 0x822;
            uStack_4aa = 0xae7e;
            uStack_4a8 = 0x7a;
            uStack_4a6 = 1;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
          }
          FUN_1001782e9(0,0);
          local_4bc = -0x6c;
          goto LAB_1001dc09b;
        }
        local_4c8 = lVar7;
        lVar7 = FUN_100172473(DAT_1008c4d90,local_78,0x201);
        if (lVar7 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_4b8 = 0x8220202;
            uStack_4b4 = 0x7a0a90;
            local_4b0 = 1;
            uStack_4ac = 0x822;
            uStack_4aa = 0xae92;
            uStack_4a8 = 0x7a;
            uStack_4a6 = 1;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16);
          }
          FUN_1001782e9(0,0);
          local_4bc = -0x6c;
          lVar11 = 0;
          local_4d8 = 0;
          lVar6 = 0;
          lVar7 = local_4c8;
        }
        else {
          local_4d0 = lVar7;
          lVar7 = FUN_100171969(DAT_1008c4d90,local_4c8,lVar9,lVar7);
          if (lVar7 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_4b8 = 0x8220202;
              uStack_4b4 = 0x7a0a90;
              local_4b0 = 1;
              uStack_4ac = 0x822;
              uStack_4aa = 0xaea7;
              uStack_4a8 = 0x7a;
              uStack_4a6 = 1;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4b8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            local_4bc = -0x6c;
            local_4d8 = 0;
            iVar2 = local_4bc;
          }
          else {
            cVar1 = FUN_100171b94(lVar7,(ulong)local_4ec + *(long *)(lVar4 + 0x20),local_4e8);
            local_4d8 = lVar7;
            if ((cVar1 == '\0') || (cVar1 = FUN_100171bd8(lVar7), cVar1 == '\0')) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_4b8 = 0x8220202;
                uStack_4b4 = 0x7a0a90;
                local_4b0 = 1;
                uStack_4ac = 0x822;
                uStack_4aa = 0x5ee1;
                uStack_4a8 = 0x7a;
                uStack_4a6 = 1;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4b8,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              local_4bc = -0x32;
              iVar2 = local_4bc;
            }
            else {
              local_4e0 = lVar9;
              cVar1 = FUN_100171b94(lVar7,(ulong)local_4e4 + *(long *)(lVar4 + 0x20),local_548);
              if (cVar1 == '\0') {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_4b8 = 0x8220202;
                  uStack_4b4 = 0x7a0a90;
                  local_4b0 = 1;
                  uStack_4ac = 0x822;
                  uStack_4aa = 0x5ee1;
                  uStack_4a8 = 0x7a;
                  uStack_4a6 = 1;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4b8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                local_4bc = -0x32;
                lVar9 = local_4e0;
                iVar2 = local_4bc;
              }
              else {
                uVar3 = *(uint *)(param_1 + 0x88);
                FUN_1001e9eb9(param_1);
                iVar2 = FUN_10019b807((int)DAT_100700af8,(int)DAT_100700af8,2,lVar11,lVar7,local_500
                                      ,local_528,0,0,
                                      CONCAT44(uVar14,uVar3 >> 5 & 2 |
                                                      (uVar3 >> 2 & 0xc) + (uVar3 & 2) * 8) ^ 2,0,0)
                ;
                FUN_1001e9de0(param_1);
                lVar9 = local_4e0;
                if ((*(long *)(param_1 + 0x50) != 0) && (iVar2 != -0x80)) {
                  if (iVar2 == 0) {
                    lVar9 = FUN_100171c1c(*local_500);
                    *local_508 = lVar9;
                    if (lVar9 != 0) {
                      uVar5 = FUN_100170ef7(lVar9);
                      *(undefined8 *)(param_1 + 0x200) = uVar5;
                      *(undefined8 *)(param_1 + 0x210) = 0xffffffffffffffff;
                      local_4f8 = _CFHTTPMessageCopyHeaderFieldValue
                                            (*(undefined8 *)(param_1 + 0x1f0),local_520);
                      if (local_4f8 != 0) {
                        uVar3 = FUN_1001740d5(local_4f8);
                        if ((int)uVar3 < 0) {
                          uVar5 = FUN_1001cc310();
                          cVar1 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar1 != '\0') {
                            local_4b8 = 0x8220202;
                            uStack_4b4 = 0x7a0a90;
                            local_4b0 = 1;
                            uStack_4ac = 0x822;
                            uStack_4aa = 0xaee6;
                            uStack_4a8 = 0x7a;
                            uStack_4a6 = 1;
                            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                                &local_4b8,0x16);
                          }
                          FUN_1001782e9(0,0);
                        }
                        else {
                          *(ulong *)(param_1 + 0x210) = (ulong)uVar3;
                        }
                      }
                      local_488 = local_488 & 0xffffff00;
                      FUN_10017393c(*(undefined8 *)(param_1 + 0x1e8),&local_488,0x401,0x8000100);
                      sVar8 = _strlen((char *)&local_488);
                      lVar9 = local_530;
                      *(size_t *)(local_530 + 0x18) = sVar8;
                      _memcpy((void *)(local_530 + 0x20),&local_488,sVar8);
                      FUN_10016af5a(*(undefined8 *)(param_1 + 0x90),lVar9 + 0x430);
                      FUN_1001c62d9(&local_4b8,0x28);
                      local_4b0 = (undefined4)param_1;
                      uStack_4ac = (undefined2)((ulong)param_1 >> 0x20);
                      uStack_4aa = (undefined2)((ulong)param_1 >> 0x30);
                      FUN_1001732be(*(undefined8 *)(param_1 + 0x90),0x1a,FUN_1001dcae4,&local_4b8);
                      FUN_100173302(*(undefined8 *)(param_1 + 0x90),
                                    *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10),local_518);
                      *(undefined4 *)(lVar9 + 0x480) = 0;
                      *(undefined1 *)(lVar9 + 0x479) = 1;
                      *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x28);
                      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + *(long *)(lVar4 + 0x28);
                      local_4bc = 0;
                      lVar11 = local_4f8;
                      lVar7 = local_4c8;
                      lVar6 = local_4d0;
                      lVar9 = local_4e0;
                      goto LAB_1001dc0a1;
                    }
                    uVar5 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar1 != '\0') {
                      local_4b8 = 0x8220202;
                      uStack_4b4 = 0x7a0a90;
                      local_4b0 = 1;
                      uStack_4ac = 0x822;
                      uStack_4aa = 0xaec0;
                      uStack_4a8 = 0x7a;
                      uStack_4a6 = 1;
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                          &local_4b8,0x16);
                    }
                    FUN_1001782e9(0,0);
                    local_4bc = -0x27;
                    lVar9 = local_4e0;
                    iVar2 = local_4bc;
                  }
                  else {
                    uVar5 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar5,0x10);
                    lVar9 = local_4e0;
                    if (cVar1 != '\0') {
                      local_4b8 = 0x8220202;
                      uStack_4b4 = 0x7a0a90;
                      local_4b0 = 1;
                      uStack_4ac = 0x400;
                      uStack_4aa = (undefined2)iVar2;
                      uStack_4a8 = (undefined2)((uint)iVar2 >> 0x10);
                      local_4bc = iVar2;
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                          &local_4b8,0x12);
                      lVar9 = local_4e0;
                      iVar2 = local_4bc;
                    }
                  }
                }
              }
            }
          }
          local_4bc = iVar2;
          lVar11 = 0;
          lVar7 = local_4c8;
          lVar6 = local_4d0;
        }
      }
LAB_1001dc0a1:
      FUN_10017060f(lVar11);
      FUN_10017060f(lVar6);
      FUN_10017060f(lVar7);
      FUN_10017060f(lVar9);
      FUN_10017060f(local_4d8);
      lVar11 = local_510;
      lVar9 = local_538;
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_1001dca35(param_1,lVar4,local_4bc);
        lVar11 = local_510;
        lVar9 = local_538;
      }
    }
    else {
      if (*(int *)(lVar4 + 8) == 0x72656164) {
        if (*(long *)(param_1 + 0x50) == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_488 = 0x8220202;
            local_484 = "Assertion failure";
            local_47c = 0x822;
            local_47a = "threadInfo->httpControl != __null";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
          }
          FUN_1001782e9(0,0);
          if (*(int *)(lVar4 + 8) != 0x72656164) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_488 = 0x8220202;
              local_484 = "Assertion failure";
              local_47c = 0x822;
              local_47a = "paramBlockRec->requestType == kReadRequestType";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
        }
        if (*(ulong *)(lVar4 + 0x28) <= *(ulong *)(lVar4 + 0x30)) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_488 = 0x8220202;
            local_484 = "Assertion failure";
            local_47c = 0x822;
            local_47a = "paramBlockRec->reqCount > paramBlockRec->actCount";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
          }
          FUN_1001782e9(0,0);
        }
        lVar7 = *(long *)(param_1 + 0x208);
        lVar6 = *(long *)(param_1 + 0x200) - lVar7;
        if (lVar6 == 0 || *(long *)(param_1 + 0x200) < lVar7) {
LAB_1001db9ef:
          while (iVar2 = 0, *(ulong *)(lVar4 + 0x30) < *(ulong *)(lVar4 + 0x28)) {
            FUN_1001e9eb9(param_1);
            FUN_1001e9de0(param_1);
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_1001dc24e;
            lVar7 = *(long *)(param_1 + 0x210);
            if (lVar7 == 0) {
              iVar2 = 0;
              if (*(long *)(lVar4 + 0x30) == 0) {
                iVar2 = -0x27;
              }
              break;
            }
            lVar12 = *(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x30);
            lVar6 = lVar7;
            if (lVar12 < lVar7) {
              lVar6 = lVar12;
            }
            if (lVar7 < 1) {
              lVar6 = lVar12;
            }
            local_4b8 = (undefined4)lVar6;
            uStack_4b4 = (undefined4)((ulong)lVar6 >> 0x20);
            iVar2 = FUN_10019ba51(lVar11,*(long *)(lVar4 + 0x30) + *(long *)(lVar4 + 0x20),lVar6,
                                  &local_4b8);
            if ((0x27 < iVar2 + 0x27U) ||
               ((0x8000000801U >> ((ulong)(iVar2 + 0x27U) & 0x3f) & 1) == 0)) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_488 = 0x8220202;
                local_484 = "Assertion failure";
                local_47c = 0x822;
                local_47a = "(status == noErr) || (status == eofErr) || (status == notOpenErr)";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              lVar11 = local_510;
              break;
            }
            if ((iVar2 != 0) || (lVar7 = CONCAT44(uStack_4b4,local_4b8), lVar7 == 0)) break;
            uVar10 = *(long *)(lVar4 + 0x30) + lVar7;
            *(ulong *)(lVar4 + 0x30) = uVar10;
            if (*(ulong *)(lVar4 + 0x28) < uVar10) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_488 = 0x8220202;
                local_484 = "Assertion failure";
                local_47c = 0x822;
                local_47a = "paramBlockRec->actCount <= paramBlockRec->reqCount";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              lVar7 = CONCAT44(uStack_4b4,local_4b8);
            }
            **(long **)(param_1 + 0x50) = **(long **)(param_1 + 0x50) + lVar7;
            lVar6 = *(long *)(param_1 + 0x210);
            if (0 < lVar6) {
              if (lVar6 < lVar7) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_488 = 0x8220202;
                  local_484 = "Assertion failure";
                  local_47c = 0x822;
                  local_47a = "threadInfo->responseContentLength >= readCount";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                lVar7 = CONCAT44(uStack_4b4,local_4b8);
                lVar6 = *(long *)(param_1 + 0x210);
              }
              *(long *)(param_1 + 0x210) = lVar6 - lVar7;
            }
            iVar2 = 0;
            if ((*(byte *)(lVar4 + 0xc) & 1) != 0) break;
          }
        }
        else {
          lVar12 = *(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x30);
          if (lVar6 <= lVar12) {
            lVar12 = lVar6;
          }
          local_4b8 = (undefined4)lVar12;
          uStack_4b4 = (undefined4)((ulong)lVar12 >> 0x20);
          FUN_100170fc3(*(undefined8 *)(param_1 + 0x1f8),lVar7,lVar12,
                        *(long *)(lVar4 + 0x30) + *(long *)(lVar4 + 0x20));
          *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + lVar12;
          *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + lVar12;
          **(long **)(param_1 + 0x50) = **(long **)(param_1 + 0x50) + lVar12;
          iVar2 = 0;
          if ((*(byte *)(lVar4 + 0xc) & 1) == 0) goto LAB_1001db9ef;
        }
        if ((*(long *)(param_1 + 0x50) == 0) ||
           ((((iVar2 == 0 && (*(long *)(lVar4 + 0x30) != *(long *)(lVar4 + 0x28))) &&
             ((*(long *)(lVar4 + 0x30) == 0 || ((*(uint *)(lVar4 + 0xc) & 1) == 0)))) &&
            (*(long *)(param_1 + 0x210) != 0)))) goto LAB_1001dc24e;
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_488 = 0x8220202;
          local_484 = "Assertion failure";
          local_47c = 0x822;
          local_47a = "false";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x27;
      }
      FUN_1001dca35(param_1,lVar4,iVar2);
    }
LAB_1001dc24e:
    lVar4 = FUN_1001ead5c(lVar9);
  } while (lVar4 == 0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

