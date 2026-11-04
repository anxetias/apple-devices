// name: FUN_100233265
// address: 100233265

undefined4 FUN_100233265(long param_1,undefined8 *param_2,undefined8 param_3)

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
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined8 local_40;
  undefined8 local_38;
  long *plStack_30;
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
    local_88._0_4_ = 0x83e590;
    local_88._4_4_ = 1;
    local_80 = (undefined4)param_3;
    uStack_7c = (undefined2)((ulong)param_3 >> 0x20);
    uStack_7a = (undefined2)((ulong)param_3 >> 0x30);
    uStack_50 = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_46 = 0;
    local_38 = 0;
    plStack_30 = (long *)0x0;
    local_58 = (ulong)local_70 << 0x20;
    local_40 = *param_2;
    uStack_47 = 1;
    local_68 = &local_88;
    uVar3 = FUN_10017869a(&local_88);
    if (plStack_30 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == &local_88) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_100233347;
    }
    (**(code **)(*local_68 + lVar4))();
  }
LAB_100233347:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

