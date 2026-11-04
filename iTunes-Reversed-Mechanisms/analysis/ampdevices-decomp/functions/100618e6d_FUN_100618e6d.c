// name: FUN_100618e6d
// address: 100618e6d

void FUN_100618e6d(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  uint6 local_78;
  undefined2 uStack_72;
  uint local_70;
  long *local_68;
  long local_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0xde6a;
      local_78 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_70 = *(uint *)(param_1 + 0x28);
    local_78 = (uint6)param_2 & 0xffffffff | (uint6)(param_3 << 0x20);
    local_88._0_4_ = 0x870cb0;
    local_88._4_4_ = 1;
    local_80 = 0x6160fe;
    uStack_7c = 1;
    uStack_7a = 0;
    uStack_72 = (undefined2)((ulong)param_3 >> 0x10);
    uStack_50 = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_46 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    local_58 = (ulong)local_70 << 0x20;
    uStack_47 = 1;
    local_68 = &local_88;
    FUN_10017869a(&local_88);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == &local_88) {
      lVar3 = 0x20;
    }
    else {
      lVar3 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_100618f58;
    }
    (**(code **)(*local_68 + lVar3))();
  }
LAB_100618f58:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

