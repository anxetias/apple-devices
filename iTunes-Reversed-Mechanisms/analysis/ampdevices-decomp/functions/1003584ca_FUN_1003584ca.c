// name: FUN_1003584ca
// address: 1003584ca

void FUN_1003584ca(long param_1,undefined1 param_2,char param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined1 local_70;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x6950;
      local_78 = 0x1007b;
      local_74 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else if (param_3 != '\0') {
    local_78 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x88);
    local_88._0_4_ = 0x854998;
    local_88._4_4_ = 1;
    local_80 = 0x358659;
    uStack_7c = 1;
    uStack_7a = 0;
    local_74 = (undefined2)*(undefined4 *)(param_1 + 8);
    uStack_72 = (undefined2)((uint)*(undefined4 *)(param_1 + 8) >> 0x10);
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    local_70 = param_2;
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
      if (local_68 == (long *)0x0) goto LAB_1003585c7;
    }
    (**(code **)(*local_68 + lVar3))();
  }
LAB_1003585c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

