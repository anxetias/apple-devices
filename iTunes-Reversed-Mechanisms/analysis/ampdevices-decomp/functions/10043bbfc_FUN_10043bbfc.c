// name: FUN_10043bbfc
// address: 10043bbfc

int FUN_10043bbfc(long param_1,undefined4 param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 *param_7)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_1a0 [16];
  long *local_190;
  undefined4 local_188;
  long local_180;
  long local_78;
  undefined4 local_70;
  undefined4 local_6c;
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
LAB_10043bdd2:
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
      goto LAB_10043bdd2;
    }
  }
  else if (param_4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "ownerID != nullptr";
      goto LAB_10043bdd2;
    }
  }
  else {
    if (param_5 != 0) {
      local_188 = param_2;
      local_180 = param_3;
      FUN_1001dfc9d(param_4);
      local_78 = param_5;
      local_70 = param_6;
      iVar4 = FUN_10043a8b3(param_1,0x67756669);
      if (param_7 != (undefined4 *)0x0 && iVar4 == 0) {
        *param_7 = local_6c;
        iVar4 = 0;
      }
      goto LAB_10043be05;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "buffer != nullptr";
      goto LAB_10043bdd2;
    }
  }
  iVar4 = -0x32;
  FUN_1001782e9(0,0);
LAB_10043be05:
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
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

