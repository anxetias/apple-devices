// name: FUN_10025a150
// address: 10025a150

int FUN_10025a150(undefined4 param_1,long param_2,undefined1 param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  if ((param_4 != 0) == (param_2 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "(handlerData != nullptr) ^ (rawObjectID != 0)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_10025a287;
  }
  cVar3 = FUN_100259e39(param_2,param_1,&local_68,param_4);
  iVar4 = 0;
  if (cVar3 != '\0') {
    local_60 = 0;
    local_58 = 0;
    if (param_2 == 0) {
      uVar5 = FUN_1005e9a2c();
      iVar4 = FUN_1005e7d5a(uVar5,param_4,&local_60,&local_58,0,0);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          uVar5 = FUN_1005e9a2c();
          iVar4 = FUN_1005e79a6(uVar5,param_4,&local_4c);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) goto LAB_10025a1cd;
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
              goto LAB_10025a3f5;
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_10025a3f5:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
    }
    else {
      local_4c = *(undefined4 *)(param_2 + 0x66b0);
LAB_10025a1cd:
      local_78 = 0;
      plStack_70 = (long *)0x0;
      iVar4 = FUN_1002176b7(local_4c,param_2,local_58,local_60,local_68,param_3,&local_78);
      if (plStack_70 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      FUN_10017060f(local_60);
      FUN_10017060f(local_58);
    }
  }
  FUN_10017060f(local_68);
LAB_10025a287:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

