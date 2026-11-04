// name: FUN_1005b2a2e
// address: 1005b2a2e

void FUN_1005b2a2e(long param_1,long *param_2)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe97d;
      uStack_48 = 0x1007e;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe966;
      uStack_48 = 0x1007e;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1003d05ba(&local_78,*param_2,1,0,0);
    pvVar1 = (void *)CONCAT44(uStack_74,local_78);
    local_50 = local_70;
    uStack_4c = (undefined2)uStack_6c;
    uStack_4a = (undefined2)((uint)uStack_6c >> 0x10);
    uStack_48 = uStack_68;
    uStack_44 = (undefined2)uStack_64;
    uStack_42 = (undefined2)((uint)uStack_64 >> 0x10);
    uVar4 = CONCAT44(uStack_6c,local_70) - (long)pvVar1;
    if (uVar4 != 0) {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar3 = DAT_1008c7658;
      cVar2 = _os_log_type_enabled(DAT_1008c7658,0);
      if (cVar2 != '\0') {
        local_78 = 0x4000100;
        uStack_74 = (undefined4)(uVar4 >> 3);
        __os_log_impl(0x100000000,uVar3,0,"ch> %d deleted trackInstances",&local_78,8);
      }
      FUN_1005b13d8(*(undefined8 *)(param_1 + 0x28),&local_58);
    }
    FUN_1003d05ba(&local_78,*param_2,2,0,0);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)CONCAT44(uStack_74,local_78);
    local_58 = local_78;
    uStack_54 = uStack_74;
    local_50 = local_70;
    uStack_4c = (undefined2)uStack_6c;
    uStack_4a = (undefined2)((uint)uStack_6c >> 0x10);
    uStack_48 = uStack_68;
    uStack_44 = (undefined2)uStack_64;
    uStack_42 = (undefined2)((uint)uStack_64 >> 0x10);
    uVar4 = CONCAT44(uStack_6c,local_70) - (long)pvVar1;
    if (uVar4 != 0) {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar3 = DAT_1008c7658;
      cVar2 = _os_log_type_enabled(DAT_1008c7658,0);
      if (cVar2 != '\0') {
        local_78 = 0x4000100;
        uStack_74 = (undefined4)(uVar4 >> 3);
        __os_log_impl(0x100000000,uVar3,0,"ch> %d deleted trackInfos",&local_78,8);
      }
      FUN_1005b1328(*(undefined8 *)(param_1 + 0x28),&local_58);
    }
    FUN_1003d05ba(&local_78,*param_2,3,0,0);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)CONCAT44(uStack_74,local_78);
    local_58 = local_78;
    uStack_54 = uStack_74;
    local_50 = local_70;
    uStack_4c = (undefined2)uStack_6c;
    uStack_4a = (undefined2)((uint)uStack_6c >> 0x10);
    uStack_48 = uStack_68;
    uStack_44 = (undefined2)uStack_64;
    uStack_42 = (undefined2)((uint)uStack_64 >> 0x10);
    uVar4 = CONCAT44(uStack_6c,local_70) - (long)pvVar1;
    if (uVar4 != 0) {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar3 = DAT_1008c7658;
      cVar2 = _os_log_type_enabled(DAT_1008c7658,0);
      if (cVar2 != '\0') {
        local_78 = 0x4000100;
        uStack_74 = (undefined4)(uVar4 >> 3);
        __os_log_impl(0x100000000,uVar3,0,"ch> %d deleted albums",&local_78,8);
      }
      FUN_1005b1488(*(undefined8 *)(param_1 + 0x28),&local_58);
    }
    FUN_1003d05ba(&local_78,*param_2,4,0,0);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)CONCAT44(uStack_74,local_78);
    local_58 = local_78;
    uStack_54 = uStack_74;
    local_50 = local_70;
    uStack_4c = (undefined2)uStack_6c;
    uStack_4a = (undefined2)((uint)uStack_6c >> 0x10);
    uStack_48 = uStack_68;
    uStack_44 = (undefined2)uStack_64;
    uStack_42 = (undefined2)((uint)uStack_64 >> 0x10);
    uVar4 = CONCAT44(uStack_6c,local_70) - (long)pvVar1;
    if (uVar4 != 0) {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar3 = DAT_1008c7658;
      cVar2 = _os_log_type_enabled(DAT_1008c7658,0);
      if (cVar2 != '\0') {
        local_78 = 0x4000100;
        uStack_74 = (undefined4)(uVar4 >> 3);
        __os_log_impl(0x100000000,uVar3,0,"ch> %d deleted artists",&local_78,8);
      }
      FUN_1005b1538(*(undefined8 *)(param_1 + 0x28),&local_58);
    }
    FUN_1003d05ba(&local_78,*param_2,5,0,0);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)CONCAT44(uStack_74,local_78);
    local_58 = local_78;
    uStack_54 = uStack_74;
    local_50 = local_70;
    uStack_4c = (undefined2)uStack_6c;
    uStack_4a = (undefined2)((uint)uStack_6c >> 0x10);
    uStack_48 = uStack_68;
    uStack_44 = (undefined2)uStack_64;
    uStack_42 = (undefined2)((uint)uStack_64 >> 0x10);
    uVar4 = CONCAT44(uStack_6c,local_70) - (long)pvVar1;
    if (uVar4 != 0) {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar3 = DAT_1008c7658;
      cVar2 = _os_log_type_enabled(DAT_1008c7658,0);
      if (cVar2 != '\0') {
        local_78 = 0x4000100;
        uStack_74 = (undefined4)(uVar4 >> 3);
        __os_log_impl(0x100000000,uVar3,0,"ch> %d deleted playlists",&local_78,8);
      }
      FUN_1005b1698(*(undefined8 *)(param_1 + 0x28),&local_58);
    }
    FUN_1003d05ba(&local_78,*param_2,7,0,0);
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)CONCAT44(uStack_74,local_78);
    local_58 = local_78;
    uStack_54 = uStack_74;
    local_50 = local_70;
    uStack_4c = (undefined2)uStack_6c;
    uStack_4a = (undefined2)((uint)uStack_6c >> 0x10);
    uStack_48 = uStack_68;
    uStack_44 = (undefined2)uStack_64;
    uStack_42 = (undefined2)((uint)uStack_64 >> 0x10);
    uVar4 = CONCAT44(uStack_6c,local_70) - (long)pvVar1;
    if (uVar4 != 0) {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar3 = DAT_1008c7658;
      cVar2 = _os_log_type_enabled(DAT_1008c7658,0);
      if (cVar2 != '\0') {
        local_78 = 0x4000100;
        uStack_74 = (undefined4)(uVar4 >> 3);
        __os_log_impl(0x100000000,uVar3,0,"ch> %d deleted social profiles",&local_78,8);
      }
      FUN_1005b15e8(*(undefined8 *)(param_1 + 0x28),&local_58);
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

