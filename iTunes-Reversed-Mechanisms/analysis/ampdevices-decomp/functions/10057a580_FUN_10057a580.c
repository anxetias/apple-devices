// name: FUN_10057a580
// address: 10057a580

/* WARNING: Type propagation algorithm not settling */

void FUN_10057a580(long param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long local_2c0;
  undefined1 *local_2b8;
  int *local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long local_290;
  long local_288;
  uint local_27c;
  undefined8 local_278;
  long local_270;
  int local_264;
  undefined1 local_25d;
  int local_25c [2];
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_25d = *(undefined1 *)(param_1 + 0x38);
  bVar3 = *(byte *)(param_1 + 0x39);
  local_2b8 = &local_25d;
  local_2b0 = local_25c;
  local_25c[0] = 0;
  local_2c0 = param_1;
  local_290 = param_1;
  local_270 = param_1;
  uVar7 = FUN_100416f20(*(undefined4 *)(param_1 + 0x18),0x10cc0248);
  FUN_1001e115f(uVar7,local_25c + 1);
  local_2a8 = *(undefined4 *)(local_270 + 8);
  uStack_2a4 = *(undefined4 *)(local_270 + 0xc);
  uStack_2a0 = *(undefined4 *)(local_270 + 0x10);
  uStack_29c = *(undefined4 *)(local_270 + 0x14);
  if (*(long *)(local_270 + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(local_270 + 0x10) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1001ceb3c(&local_2a8,0x7570726d,0,0xffffffffffffffff,local_25c + 1);
  plVar1 = (long *)CONCAT44(uStack_29c,uStack_2a0);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_27c = (uint)bVar3;
  do {
    uVar4 = local_25d;
    lVar8 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar8 == 0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mutableDictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "getURLListMessage != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_100579800(&local_2c0);
      iVar6 = -0x6c;
      goto LAB_10057ad9e;
    }
    FUN_10016843e(lVar8,&cf_messageName,"GetURLList",0);
    FUN_100168b0b(lVar8,&cf_isManualCheck,uVar4,1);
    FUN_100168b0b(lVar8,&cf_storeActivationMode,local_27c,1);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar7,1,"skynet> getting URL list",&local_58,2);
    }
    iVar6 = FUN_100578a84(local_270);
    local_25c[0] = iVar6;
    if (iVar6 == -0x80) {
LAB_10057a8c4:
      iVar11 = 1;
      local_264 = local_25c[0];
    }
    else if (iVar6 == 0) {
      uVar7 = FUN_100166844(*(undefined8 *)(local_270 + 0x30),&cf_URLList);
      uVar7 = FUN_1001705fc(uVar7);
      local_278 = uVar7;
      local_288 = FUN_10017076e(uVar7);
      if (local_288 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8);
        iVar11 = 2;
        if (cVar5 != '\0') {
          local_58 = local_58 & 0xffff0000;
          __os_log_impl(0x100000000,uVar7,1,"skynet> device returned empty URL list",&local_58,2);
        }
      }
      else {
        lVar9 = FUN_10016499b(uVar7,0);
        if (lVar9 == 0) {
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "dictionary != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0);
          local_264 = 0x234f;
          iVar11 = 1;
        }
        else {
          cVar5 = FUN_100171439(lVar9);
          if (cVar5 == '\0') {
            lVar9 = 0;
LAB_10057a979:
            iVar11 = 0;
            if (lVar9 < local_288) {
              do {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar7 = DAT_1008c75b8;
                cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar5 != '\0') {
                  local_58 = 0x4000100;
                  local_54 = (char *)CONCAT44(local_54._4_4_,(int)lVar9);
                  __os_log_impl(0x100000000,uVar7,1,"skynet> reading request %d",&local_58,8);
                }
                lVar10 = FUN_10016499b(local_278,lVar9);
                if (lVar10 == 0) {
                  uVar7 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar7);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure (expected to be not NULL)";
                    local_4c = 0x822;
                    local_4a = "dictionary";
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  cVar5 = FUN_1001782e9(0);
                  if (cVar5 != '\0') goto LAB_10057aa20;
                }
                else {
LAB_10057aa20:
                  lVar10 = FUN_100166c1b(lVar10,&cf_URL);
                  if (lVar10 == 0) {
                    uVar7 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar7);
                    if (cVar5 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure (expected to be not NULL)";
                      local_4c = 0x822;
                      local_4a = "urlString";
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    cVar5 = FUN_1001782e9(0);
                    if (cVar5 == '\0') goto LAB_10057aa9a;
                  }
                  iVar6 = FUN_100578e86(local_270,lVar10,0);
                  if ((iVar6 != -0x80) && (iVar6 != 0)) {
                    uVar7 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar7);
                    if (cVar5 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                }
LAB_10057aa9a:
                lVar9 = lVar9 + 1;
              } while (local_288 != lVar9);
            }
          }
          else {
            lVar9 = FUN_100166c1b(lVar9,&cf_URL);
            if (lVar9 == 0) {
              uVar7 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar7);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "urlString != nullptr";
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0);
            }
            else {
              iVar6 = FUN_100578e86(local_270,lVar9,1);
              local_25c[0] = iVar6;
              if (iVar6 != -0x80) {
                lVar9 = 1;
                if (iVar6 == 0) goto LAB_10057a979;
                uVar7 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar7);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
            }
            iVar11 = 1;
            local_264 = local_25c[0];
          }
        }
      }
      FUN_10017060f(local_278);
    }
    else {
      if (iVar6 != 1) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_10057a8c4;
      }
      local_25c[0] = 0;
      iVar11 = 2;
    }
    FUN_10017060f(lVar8);
    if (iVar11 != 0) {
      iVar6 = local_264;
      if (iVar11 == 2) {
        iVar6 = local_25c[0];
      }
      goto LAB_10057ad27;
    }
    iVar6 = local_25c[0];
    if (local_25c[0] != 0) {
LAB_10057ad27:
      FUN_100579800(&local_2c0);
      if ((iVar6 != -0x80) && (iVar6 != 0)) {
LAB_10057ad9e:
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_25c[1] = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x400;
          local_24a = iVar6;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_25c + 1,0x12);
        }
      }
      FUN_10057a53a(&local_290);
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  } while( true );
}

