// name: FUN_10043be74
// address: 10043be74

undefined4
FUN_10043be74(long param_1,undefined4 param_2,long param_3,undefined4 param_4,long param_5,
             long param_6,undefined4 param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_1a0 [16];
  long *local_190;
  undefined4 local_188;
  long local_180;
  undefined4 local_178;
  long local_68;
  undefined4 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_1a0,0x148);
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "playerPlugin != nullptr";
LAB_10043c039:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "location != nullptr";
      goto LAB_10043c039;
    }
  }
  else if (param_5 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "ownerID != nullptr";
      goto LAB_10043c039;
    }
  }
  else {
    if (param_6 != 0) {
      local_188 = param_2;
      local_180 = param_3;
      local_178 = param_4;
      FUN_1001dfc9d(param_5);
      local_60 = param_7;
      local_68 = param_6;
      uVar4 = FUN_10043b340(param_1,0x73756669);
      goto LAB_10043c06c;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "buffer != nullptr";
      goto LAB_10043c039;
    }
  }
  uVar4 = 0xffffffce;
  FUN_1001782e9(0,0);
LAB_10043c06c:
  if (local_190 != (long *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

