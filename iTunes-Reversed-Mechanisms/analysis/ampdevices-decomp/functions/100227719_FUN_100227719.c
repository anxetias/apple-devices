// name: FUN_100227719
// address: 100227719

int FUN_100227719(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [16];
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  uint local_27c;
  long local_278;
  undefined8 local_270;
  int local_264;
  long local_260;
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_278 = 0;
  local_264 = 1;
  local_270 = 0;
  if (param_4 == (long *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "responseData != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_100227b99;
  }
  *param_4 = 0;
  lVar7 = FUN_1001737f8();
  if (lVar7 < 1) {
    iVar5 = 0x194;
    goto LAB_100227b99;
  }
  iVar5 = FUN_10019c4ca(&local_278,1);
  if (iVar5 == -0x80) {
LAB_100227a49:
    lVar7 = 0;
  }
  else {
    if (iVar5 != 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_100227a49;
    }
    FUN_1001b7eb0(&local_58,param_1);
    FUN_100132a30(local_2a8);
    lVar7 = FUN_10019bec8(&local_58,local_2a8,0);
    FUN_1001b7a50(local_2a8);
    FUN_1001b7a50(&local_58);
    if (lVar7 == 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "request != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x6c;
      goto LAB_100227a49;
    }
    local_260 = lVar7;
    iVar5 = FUN_10019c021((int)DAT_100700af8,(int)DAT_100700af8,local_278,lVar7,0,&local_270,0,0,0,
                          FUN_10022abe4,&local_264,0);
    lVar7 = local_260;
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        FUN_1001bb41a(param_3,local_258);
        local_298 = *param_2;
        uStack_294 = param_2[1];
        uStack_290 = param_2[2];
        uStack_28c = param_2[3];
        if (*(long *)(param_2 + 2) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        FUN_1001ceb3c(&local_298,0x7570726d,0xffffffffffffffff,0xffffffffffffffff,local_258);
        plVar1 = (long *)CONCAT44(uStack_28c,uStack_290);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar7 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_264 == 1) {
          iVar5 = 0;
          uVar3 = 1;
          do {
            while( true ) {
              local_27c = uVar3;
              plVar1 = *(long **)(param_2 + 2);
              local_2b8 = *param_2;
              uStack_2b4 = param_2[1];
              uStack_2b0 = param_2[2];
              uStack_2ac = param_2[3];
              if (plVar1 != (long *)0x0) {
                LOCK();
                plVar1[1] = plVar1[1] + 1;
                UNLOCK();
              }
              iVar6 = FUN_1002252e1(&local_2b8);
              if (plVar1 != (long *)0x0) {
                LOCK();
                plVar2 = plVar1 + 1;
                lVar7 = *plVar2;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (lVar7 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar6 != 0) break;
              uVar3 = local_27c;
              if (local_264 != 1) {
                lVar7 = local_260;
                if ((local_27c & 1) != 0) goto LAB_100227b0b;
                goto LAB_100227b77;
              }
            }
            FUN_10019c259(local_278,local_260);
            iVar5 = -0x80;
            lVar7 = local_260;
            uVar3 = 0;
          } while (local_264 == 1);
        }
        else {
LAB_100227b0b:
          lVar7 = local_260;
          iVar5 = local_264;
          if ((local_264 == 0) &&
             (iVar5 = FUN_100171ce8(local_270), lVar7 = local_260, iVar5 - 200U < 100)) {
            lVar8 = FUN_1001719b7(local_270);
            *param_4 = lVar8;
            lVar7 = local_260;
            iVar5 = 0;
            if (lVar8 == 0) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "*responseData != nullptr";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              lVar7 = local_260;
              iVar5 = 0x5c8;
            }
          }
        }
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        lVar7 = local_260;
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          lVar7 = local_260;
        }
      }
    }
  }
LAB_100227b77:
  FUN_10017060f(lVar7);
  FUN_10017060f(local_270);
  if (local_278 != 0) {
    FUN_10019c939();
  }
LAB_100227b99:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

