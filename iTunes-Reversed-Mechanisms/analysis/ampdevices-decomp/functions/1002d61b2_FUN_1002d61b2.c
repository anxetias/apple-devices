// name: FUN_1002d61b2
// address: 1002d61b2

void FUN_1002d61b2(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 local_90;
  undefined **local_88;
  code *local_80;
  undefined4 local_78;
  undefined ***local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((((*(char *)(param_1 + 0x36) != '\0') && (*(char *)(param_1 + 0x40) != '\0')) &&
      (*(char *)(param_1 + 0x39) != '\0')) && (*(char *)(param_1 + 0x43) == '\0')) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffffffff0000);
      __os_log_impl(0x100000000,uVar2,1,"",&local_88,2);
    }
    *(undefined1 *)(param_1 + 0x6db2) = 1;
    local_78 = *(undefined4 *)(param_1 + 0x20);
    local_68 = &local_88;
    local_88 = &PTR_FUN_100852528;
    local_80 = FUN_1002d6350;
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    FUN_10017848a(&local_90);
    local_40 = local_90;
    FUN_10017869a(&local_88);
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
    if (local_68 == &local_88) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (local_68 == (undefined ***)0x0) goto LAB_1002d6301;
    }
    (**(code **)((long)*local_68 + lVar4))();
  }
LAB_1002d6301:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

