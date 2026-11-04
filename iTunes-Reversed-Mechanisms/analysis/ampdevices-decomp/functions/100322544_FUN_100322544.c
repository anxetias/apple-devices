// name: FUN_100322544
// address: 100322544

undefined8 FUN_100322544(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined6 uStack_76;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_100182a5c(param_1 + 0x30,0,0,param_1 + 0x450);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7c = 0x400;
      uStack_7a = (undefined2)iVar3;
      uStack_78 = (undefined2)((uint)iVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
    }
  }
  if (DAT_1008c76a0 != 0) {
    local_88._0_4_ = 0x853910;
    local_88._4_4_ = 1;
    local_80 = 0x3226bc;
    uStack_7c = 1;
    uStack_7a = 0;
    uStack_78 = (undefined2)param_1;
    uStack_76 = (undefined6)((ulong)param_1 >> 0x10);
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    local_68 = &local_88;
    FUN_10017869a(&local_88);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == &local_88) {
      lVar5 = 0x20;
    }
    else {
      lVar5 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_10032263f;
    }
    (**(code **)(*local_68 + lVar5))();
  }
LAB_10032263f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

