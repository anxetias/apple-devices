// name: FUN_100368313
// address: 100368313

void FUN_100368313(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001a8c1c(&local_38,&PTR_cf_carrierBundleUpdate_1008559c0);
  FUN_100365318(&local_48,&local_38,0);
  FUN_1001ab006(&local_38);
  if (local_48 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "event != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    (**(code **)(*local_48 + 0x78))(local_48,param_1);
    (**(code **)(*local_48 + 0x20))(local_48,0);
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

