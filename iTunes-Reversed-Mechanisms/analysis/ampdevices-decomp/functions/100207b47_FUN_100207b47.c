// name: FUN_100207b47
// address: 100207b47

void FUN_100207b47(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_68 [8];
  long *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c5470 != 0) {
    FUN_1001bdf7a(DAT_100717d30);
    return;
  }
  local_58._0_4_ = 0x83da60;
  local_58._4_4_ = 1;
  local_50 = 0x208083;
  uStack_4c = 1;
  uStack_4a = 0;
  local_38 = &local_58;
  FUN_1001bdcc2(DAT_100717d30,DAT_100700af8,DAT_10070e568,local_68,&local_58);
  FUN_100217418(&DAT_1008c5470,local_68);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_38 == &local_58) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_100207c2b;
  }
  (**(code **)(*local_38 + lVar3))();
LAB_100207c2b:
  if (DAT_1008c5470 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe0a8;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

