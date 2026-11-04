// name: FUN_1006187d9
// address: 1006187d9

void FUN_1006187d9(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  uint local_80;
  long *local_78;
  long local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *(long *)(param_3 + 0x10);
  cVar2 = FUN_100601c1f(param_3);
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xa858;
      local_88 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (((param_2 != 0) && (*(int *)(param_3 + 0x30) == 0)) &&
     (dVar5 = (double)FUN_1001ebd46(), *(double *)(param_3 + 0x470) + DAT_100701ae0 <= dVar5)) {
    uVar3 = FUN_1001705fc(param_2);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        local_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0xde6a;
        local_88 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      local_80 = *(uint *)(lVar4 + 0x28);
      local_98._0_4_ = 0x870c30;
      local_98._4_4_ = 1;
      local_90 = 0x618b2d;
      uStack_8c = 1;
      uStack_8a = 0;
      local_88 = (undefined6)uVar3;
      uStack_82 = (undefined2)((ulong)uVar3 >> 0x30);
      uStack_60 = 0;
      uStack_59 = 0;
      uStack_58 = 0;
      uStack_56 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = (long *)0x0;
      local_68 = (ulong)local_80 << 0x20;
      uStack_57 = 1;
      local_78 = &local_98;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_10061899f;
      }
      (**(code **)(*local_78 + lVar4))();
    }
  }
LAB_10061899f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

