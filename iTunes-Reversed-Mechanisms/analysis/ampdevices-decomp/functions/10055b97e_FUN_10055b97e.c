// name: FUN_10055b97e
// address: 10055b97e

undefined8 FUN_10055b97e(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined6 local_78;
  undefined2 uStack_72;
  long *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x7ae1;
      local_78 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffffce;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2c) + -1;
    *(int *)(param_1 + 0x2c) = iVar4;
    uVar7 = 0;
    if (iVar4 == 0) {
      uVar7 = 0;
      FUN_10055c435(param_1,0);
      uVar2 = DAT_1008c7870;
      if (*(long *)(param_1 + 0x6dd8) == 0) {
        uVar5 = FUN_10026394e(param_1);
        local_88._0_4_ = 0x86a0d8;
        local_88._4_4_ = 1;
        local_80 = 0x55d10c;
        uStack_7c = 1;
        uStack_7a = 0;
        local_78 = (undefined6)uVar5;
        uStack_72 = (undefined2)((ulong)uVar5 >> 0x30);
        uStack_50 = 0;
        uStack_49 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = (long *)0x0;
        _local_58 = CONCAT44(uVar2,1);
        local_68 = &local_88;
        FUN_10017869a(&local_88);
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
          if (local_68 == (long *)0x0) goto LAB_10055ba97;
        }
        (**(code **)(*local_68 + lVar6))();
        uVar7 = 0;
      }
    }
  }
LAB_10055ba97:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

