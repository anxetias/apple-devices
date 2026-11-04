// name: FUN_1003d35c8
// address: 1003d35c8

void FUN_1003d35c8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_88 [12];
  undefined2 local_7c;
  char *local_7a;
  long *local_68;
  long local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (*(long *)(lVar5 + 0x152e8) != 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_8_ = "Assertion failure";
      local_7c = 0x822;
      local_7a = "mSyncContext->handlerData->syncDelayedActionCompletion == nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_88,0x16);
    }
    FUN_1001782e9(0,0);
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(lVar4 + 0x10);
  }
  *(long *)(lVar5 + 0x152e8) = lVar4 + 0x4c8;
  FUN_1003da7e0(local_88,param_2);
  uStack_50 = 0;
  uStack_49 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (long *)0x0;
  local_58 = (ulong)*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x28) << 0x20;
  FUN_10017869a(local_88);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 == (long *)local_88) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (local_68 == (long *)0x0) goto LAB_1003d36c6;
  }
  (**(code **)(*local_68 + lVar4))();
LAB_1003d36c6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

