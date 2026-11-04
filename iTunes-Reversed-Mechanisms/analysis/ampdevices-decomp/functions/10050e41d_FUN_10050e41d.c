// name: FUN_10050e41d
// address: 10050e41d

undefined4 FUN_10050e41d(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
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
  iVar3 = FUN_1004dccf5(param_1,"");
  if (iVar3 == -0x80) {
LAB_10050e475:
    uVar4 = 0;
  }
  else {
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = (undefined2)iVar3;
        uStack_78 = (undefined2)((uint)iVar3 >> 0x10);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_88,0x12);
      }
      if (iVar3 != 0) goto LAB_10050e475;
    }
    local_70 = *(uint *)(param_1 + 0x28);
    local_88._0_4_ = 0x85f820;
    local_88._4_4_ = 1;
    local_80 = 0x50e594;
    uStack_7c = 1;
    uStack_7a = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    local_58 = (ulong)local_70 << 0x20;
    local_68 = &local_88;
    uVar4 = FUN_10017869a(&local_88);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == &local_88) {
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_10050e517;
    }
    (**(code **)(*local_68 + lVar6))();
  }
LAB_10050e517:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

