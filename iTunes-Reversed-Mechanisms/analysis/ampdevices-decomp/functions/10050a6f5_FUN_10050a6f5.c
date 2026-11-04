// name: FUN_10050a6f5
// address: 10050a6f5

undefined4 FUN_10050a6f5(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  uint local_70;
  long *local_68;
  long local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0xde6a;
      uStack_78 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    local_70 = *(uint *)(param_1 + 0x28);
    local_88._0_4_ = 0x85f1c0;
    local_88._4_4_ = 1;
    local_80 = (undefined4)param_2;
    uStack_7c = (undefined2)((ulong)param_2 >> 0x20);
    uStack_7a = (undefined2)((ulong)param_2 >> 0x30);
    uStack_50 = 0;
    uStack_49 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    local_58 = (ulong)local_70 << 0x20;
    local_68 = &local_88;
    uVar3 = FUN_10017869a(&local_88);
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
      if (local_68 == (long *)0x0) goto LAB_10050a7d3;
    }
    (**(code **)(*local_68 + lVar4))();
  }
LAB_10050a7d3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

