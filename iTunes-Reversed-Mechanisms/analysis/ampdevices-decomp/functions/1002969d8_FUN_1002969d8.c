// name: FUN_1002969d8
// address: 1002969d8

/* WARNING: Removing unreachable block (ram,0x000100296c70) */
/* WARNING: Removing unreachable block (ram,0x000100296c82) */

int FUN_1002969d8(undefined4 param_1,int param_2,void *param_3,undefined4 param_4,undefined4 param_5
                 ,long *param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined4 local_50c;
  long *local_508;
  undefined4 local_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  int local_4e0;
  undefined4 uStack_4dc;
  long *local_4d8;
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0x44574e4c) {
    FUN_1001c62d9(&local_4e0,0x488);
    local_4e0 = 0x44574e4c;
    _memcpy(&uStack_4dc,param_3,0x460);
    FUN_100531852(&local_58,&local_4e0);
    FUN_100217418(param_6,&local_58);
    plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar10 = 0;
    if (*param_6 == 0) {
      uVar11 = FUN_1001cc310();
      cVar9 = _os_log_type_enabled(uVar11,0x10);
      if (cVar9 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x7526;
        uStack_48 = 0x7b;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar10 = -0x32;
    }
    goto LAB_100296e73;
  }
  local_4f8 = 0;
  uStack_4f0 = (long *)0x0;
  local_50c = param_5;
  local_4fc = param_4;
  if (DAT_1008c7810 != (long *)0x0) {
    local_508 = param_6;
    (**(code **)(*DAT_1008c7810 + 0x40))(&local_4e0,DAT_1008c7810,param_2,param_3);
    lVar2 = CONCAT44(uStack_4dc,local_4e0);
    uStack_4f0 = local_4d8;
    local_4f8 = lVar2;
    if (lVar2 == 0) {
      iVar10 = 0;
    }
    else {
      local_528 = 0;
      uStack_520 = (long *)0x0;
      FUN_1001c62d9(&local_4e0,0x488);
      local_68 = 1;
      FUN_100531852(&local_58);
      uVar8 = uStack_50;
      uVar7 = uStack_54;
      uVar6 = local_58;
      plVar4 = uStack_520;
      uVar5 = CONCAT22(uStack_4a,uStack_4c);
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      local_528 = CONCAT44(uVar7,uVar6);
      uStack_520 = (long *)CONCAT44(uVar5,uVar8);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_528 == 0) {
        uVar11 = FUN_1001cc310();
        cVar9 = _os_log_type_enabled(uVar11,0x10);
        if (cVar9 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x7290;
          uStack_48 = 0x7b;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar10 = -0x32;
        FUN_1001782e9(0,0);
      }
      else {
        FUN_100203686(local_508,&local_528);
        iVar10 = 0;
      }
      if (uStack_520 != (long *)0x0) {
        LOCK();
        plVar4 = uStack_520 + 1;
        lVar3 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*uStack_520 + 0x10))(uStack_520);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (uStack_4f0 != (long *)0x0) {
      LOCK();
      plVar4 = uStack_4f0 + 1;
      lVar3 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*uStack_4f0 + 0x10))(uStack_4f0);
        std::__shared_weak_count::__release_weak();
      }
    }
    param_6 = local_508;
    if (lVar2 != 0) goto LAB_100296e73;
  }
  local_4f8 = 0;
  uStack_4f0 = (long *)0x0;
  iVar10 = FUN_1003ae8a5(param_1,param_3,param_2,(int)(char)local_4fc,local_50c);
  if (iVar10 != -0x80) {
    if (iVar10 != 0) {
      uVar11 = FUN_1001cc310();
      cVar9 = _os_log_type_enabled(uVar11,0x10);
      if (cVar9 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar10;
        uStack_48 = (undefined2)((uint)iVar10 >> 0x10);
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar10 != 0) goto LAB_100296e44;
    }
    FUN_1001c62d9(&local_4e0,0x488);
    local_4e0 = param_2;
    _memcpy(&uStack_4dc,param_3,0x460);
    FUN_10053207e(&local_58,&local_4e0,0,(char)local_4fc == '\x04');
    uVar8 = uStack_50;
    uVar7 = uStack_54;
    uVar6 = local_58;
    plVar4 = uStack_4f0;
    uVar5 = CONCAT22(uStack_4a,uStack_4c);
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    local_4f8 = CONCAT44(uVar7,uVar6);
    uStack_4f0 = (long *)CONCAT44(uVar5,uVar8);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_4f8 == 0) {
      uVar11 = FUN_1001cc310();
      cVar9 = _os_log_type_enabled(uVar11,0x10);
      if (cVar9 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x7290;
        uStack_48 = 0x7b;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar10 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100203686(param_6,&local_4f8);
      iVar10 = 0;
    }
  }
LAB_100296e44:
  if (uStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = uStack_4f0 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_4f0 + 0x10))(uStack_4f0);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100296e73:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

