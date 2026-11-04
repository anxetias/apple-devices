// name: FUN_1004efbf5
// address: 1004efbf5

undefined4 FUN_1004efbf5(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
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
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0xde6a;
      uStack_88 = 0x7a;
      uStack_86 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = FUN_1004dccf5(param_1,"");
    if (iVar3 != -0x80) {
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x400;
          uStack_8a = (undefined2)iVar3;
          uStack_88 = (undefined2)((uint)iVar3 >> 0x10);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_98,0x12);
        }
        if (iVar3 != 0) goto LAB_1004efd17;
      }
      local_80 = *(uint *)(param_1 + 0x28);
      local_98._0_4_ = 0x8684c8;
      local_98._4_4_ = 1;
      local_90 = (undefined4)param_2;
      uStack_8c = (undefined2)((ulong)param_2 >> 0x20);
      uStack_8a = (undefined2)((ulong)param_2 >> 0x30);
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
      uVar4 = FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar6 = 0x20;
      }
      else {
        lVar6 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_1004efd26;
      }
      (**(code **)(*local_78 + lVar6))();
      goto LAB_1004efd26;
    }
  }
LAB_1004efd17:
  uVar4 = 0;
LAB_1004efd26:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

