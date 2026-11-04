// name: FUN_1002281fa
// address: 1002281fa

int FUN_1002281fa(undefined4 param_1,undefined8 param_2,undefined4 *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  long local_8c0;
  long *local_8b8;
  undefined8 local_8b0;
  long local_8a8;
  undefined8 local_8a0;
  undefined1 local_898 [1056];
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_8b0 = 0;
  local_8b8 = param_4;
  local_8c0 = FUN_1001744bd(DAT_1008c4d90,param_2,0);
  if (local_8c0 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "firmwareBundleURL != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1002284d4:
    iVar4 = 0x688;
    lVar6 = 0;
    local_8a8 = 0;
  }
  else {
    local_8a8 = FUN_100174a69(DAT_1008c4d90,local_8c0);
    uVar7 = DAT_1008c4d90;
    if (local_8a8 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "manifestDirectoryURL != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1002284d4;
    }
    FUN_1001b7b04(&local_58,"BuildManifest.plist");
    FUN_1001b8d18(&local_8a0,&local_58);
    lVar6 = FUN_100174a21(uVar7,local_8a8,local_8a0,0);
    FUN_10014d890(&local_8a0);
    FUN_1001b7a50(&local_58);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "manifestURL != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar4 = 0x688;
      lVar6 = 0;
    }
    else {
      iVar4 = FUN_10018e9e7(local_478);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          uVar7 = FUN_1001746bc(lVar6);
          plVar2 = *(long **)(param_3 + 2);
          local_8d8 = *param_3;
          uStack_8d4 = param_3[1];
          uStack_8d0 = param_3[2];
          uStack_8cc = param_3[3];
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar2[1] = plVar2[1] + 1;
            UNLOCK();
          }
          local_8a0 = uVar7;
          uVar8 = FUN_100416f20(param_1,0x10cc00fd);
          FUN_1001b7eb0(&local_58,uVar8);
          iVar4 = FUN_100227caa(uVar7,&local_8d8,&local_58,local_478,0,local_898);
          FUN_1001b7a50(&local_58);
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar9 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar9 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          FUN_10016d588(&local_8a0);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              lVar9 = FUN_10016aa24(DAT_1008c4d90,local_898,0,&local_8b0);
              *local_8b8 = lVar9;
              if (lVar9 == 0) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "*outDictionary != nullptr";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              FUN_10017060f(local_8b0);
              iVar5 = FUN_100182d4d(local_898);
              iVar4 = 0;
              if ((iVar5 != -0x80) && (iVar5 != 0)) {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                  iVar4 = 0;
                }
              }
              goto LAB_1002284f4;
            }
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_10022860b;
            }
          }
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_10022860b:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
    }
  }
  FUN_10017060f(local_8b0);
LAB_1002284f4:
  FUN_10017060f(lVar6);
  FUN_10017060f(local_8a8);
  FUN_10017060f(local_8c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

