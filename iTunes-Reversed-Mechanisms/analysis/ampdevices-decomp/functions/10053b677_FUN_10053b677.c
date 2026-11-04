// name: FUN_10053b677
// address: 10053b677

void FUN_10053b677(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined1 local_80 [8];
  long *local_78;
  long local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = param_2[2];
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xde6a;
      uStack_58 = 0x7a;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10053b770;
  }
  local_70 = *(long *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x24) == 0) {
    if (local_70 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a168c;
        uStack_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0x649f;
        uStack_58 = 0x7e;
        uStack_56 = 1;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_10053b6b9;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8420102;
      local_68._4_4_ = (undefined4)*(undefined8 *)(lVar4 + 0x152c8);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x152c8) >> 0x20);
      __os_log_impl(0x100000000,uVar3,1,"activation> created activation info for device %{public}@",
                    &local_68,0xc);
    }
    lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    *param_2 = lVar4;
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a0a90;
        uStack_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0x64b4;
        uStack_58 = 0x7e;
        uStack_56 = 1;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_100171502(lVar4,&cf_activation_info,local_70);
      FUN_100168b0b(*param_2,&cf_InStoreActivation,*(undefined1 *)(DAT_1008c76a0 + 0x1a91),1);
      FUN_10012bbaa(local_80);
      local_68._0_4_ = 0x869728;
      local_68._4_4_ = 1;
      uStack_60 = SUB84(param_2,0);
      uStack_5c = (undefined2)((ulong)param_2 >> 0x20);
      uStack_5a = (undefined2)((ulong)param_2 >> 0x30);
      local_48 = &local_68;
      FUN_10012bbf4(local_80,&local_68,1);
      if (local_48 == &local_68) {
        lVar4 = 0x20;
LAB_10053b8f3:
        (**(code **)(*local_48 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (local_48 != (long *)0x0) goto LAB_10053b8f3;
      }
      if (local_78 != (long *)0x0) {
        LOCK();
        plVar1 = local_78 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  else {
LAB_10053b6b9:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8420202;
      local_68._4_4_ = (undefined4)*(undefined8 *)(lVar4 + 0x152c8);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x152c8) >> 0x20);
      uStack_5c = 0x400;
      uStack_5a = (undefined2)*(undefined4 *)(param_1 + 0x24);
      uStack_58 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x24) >> 0x10);
      __os_log_impl(0x100000000,uVar3,0x10,
                    "activation> failed to create activation info for device %{public}@ (0x%08X)",
                    &local_68,0x12);
    }
    iVar5 = -0x17ffffff;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar5 = *(int *)(param_1 + 0x24);
    }
    *(int *)(param_2 + 1) = iVar5;
    FUN_10053b52b(param_2);
  }
  FUN_10016f5f2(&local_70);
LAB_10053b770:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

