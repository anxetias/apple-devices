// name: FUN_1003679f7
// address: 1003679f7

void FUN_1003679f7(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = param_1;
  local_4c = param_4;
  FUN_1001a8c1c(&local_48,&PTR_cf_restoreDevice_100855938);
  FUN_100365318(&local_68,&local_48,0);
  FUN_1001ab006(&local_48);
  if (local_68 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "event != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar3 = (long *)(**(code **)(*local_68 + 0x10))(local_68);
    if (*plVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "eventDict.IsValid()";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      (**(code **)(*local_68 + 0x78))(local_68,param_2);
      FUN_1001a7b90(&local_48,&PTR_cf_backupEncrypted_100855920);
      FUN_1001a9d34(plVar3,&local_48,param_3);
      FUN_1001ab240(&local_48);
      FUN_1001a7b90(&local_48,&PTR_cf_opStatus_100855928);
      FUN_100365d78(plVar3,&local_48,&local_4c);
      FUN_1001ab240(&local_48);
      FUN_1001a7b90(&local_48,&PTR_cf_opDuration_100855930);
      FUN_10036799a(plVar3,&local_48);
      FUN_1001ab240(&local_48);
      (**(code **)(*local_68 + 0x20))(local_68,0);
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

