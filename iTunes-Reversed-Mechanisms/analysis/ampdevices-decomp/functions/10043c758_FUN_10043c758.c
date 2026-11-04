// name: FUN_10043c758
// address: 10043c758

undefined4 FUN_10043c758(long param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_190 [16];
  long *local_180;
  undefined4 local_178;
  long local_170;
  undefined8 *local_160;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_190,0x148);
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = "playerPlugin != nullptr";
LAB_10043c89c:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = "location != nullptr";
      goto LAB_10043c89c;
    }
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
      local_178 = param_2;
      local_170 = param_3;
      local_160 = param_4;
      uVar4 = FUN_10043a8b3(param_1,0x676c7972);
      goto LAB_10043c8cf;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_3a = "outLyrics != nullptr";
      goto LAB_10043c89c;
    }
  }
  uVar4 = 0xffffffce;
  FUN_1001782e9(0,0);
LAB_10043c8cf:
  if (local_180 != (long *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_180 + 0x10))(local_180);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

