// name: FUN_10061c37b
// address: 10061c37b

int FUN_10061c37b(ulong param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong local_a8;
  undefined1 local_a0 [16];
  char local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  int *local_50;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = 0;
  uStack_80 = 0;
  local_a8 = param_1;
  if (param_1 < 2) {
    uVar12 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar12,0x10);
    if (cVar7 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x4da2;
      uStack_58 = 0x7f;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    iVar8 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10061c70f;
  }
  FUN_10015146c(local_a0,param_1);
  uVar5 = uStack_60;
  uVar3 = local_68._4_4_;
  local_68._4_4_ = (undefined4)param_1;
  uVar4 = local_68._4_4_;
  uStack_60 = (undefined4)(param_1 >> 0x20);
  uVar6 = uStack_60;
  local_68._4_4_ = uVar3;
  uStack_60 = uVar5;
  if (local_90 == '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar12 = DAT_1008c75b8;
    cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
    iVar8 = 0;
    if (cVar7 != '\0') {
      local_68._0_4_ = 0x8000100;
      local_68._4_4_ = uVar4;
      uStack_60 = uVar6;
      __os_log_impl(0x100000000,uVar12,1,"sync> failed to lookup account %llu",&local_68,0xc);
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar12 = DAT_1008c75b8;
    cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar7 != '\0') {
      local_68._0_4_ = 0x8000100;
      local_68._4_4_ = uVar4;
      uStack_60 = uVar6;
      __os_log_impl(0x100000000,uVar12,1,"sync> reauthorizing machine for account %llu",&local_68,
                    0xc);
    }
    iVar8 = FUN_1001e96d3(&local_88,0,0);
    local_6c = iVar8;
    if (iVar8 != -0x80) {
      if (iVar8 == 0) {
        pvVar9 = operator_new(0x1d0,(nothrow_t *)PTR_nothrow_10082c970);
        if (pvVar9 != (void *)0x0) {
          FUN_100134102(pvVar9,3,local_a0);
        }
        plVar10 = operator_new(0x20);
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = (long)&PTR_FUN_100870d30;
        plVar10[3] = (long)pvVar9;
        if (pvVar9 == (void *)0x0) {
          pvVar9 = (void *)0x0;
        }
        else {
          plVar13 = plVar10 + 1;
          local_68._0_4_ = SUB84(pvVar9,0);
          local_68._4_4_ = (undefined4)((ulong)pvVar9 >> 0x20);
          uStack_60 = SUB84(plVar10,0);
          uStack_5c = (undefined2)((ulong)plVar10 >> 0x20);
          uStack_5a = (undefined2)((ulong)plVar10 >> 0x30);
          LOCK();
          plVar10[1] = plVar10[1] + 1;
          UNLOCK();
          cVar7 = FUN_10013ee40(pvVar9);
          plVar2 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60));
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar11 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (cVar7 == '\0') {
            LOCK();
            lVar11 = *plVar13;
            *plVar13 = *plVar13 + -1;
            UNLOCK();
            if (lVar11 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
              std::__shared_weak_count::__release_weak();
            }
            pvVar9 = (void *)0x0;
            plVar10 = (long *)0x0;
          }
        }
        FUN_100134164(pvVar9,1);
        local_68._0_4_ = 0x870d80;
        local_68._4_4_ = 1;
        uStack_60 = SUB84(&local_88,0);
        uStack_5c = (undefined2)((ulong)&local_88 >> 0x20);
        uStack_5a = (undefined2)((ulong)&local_88 >> 0x30);
        uStack_58 = SUB82(&local_a8,0);
        uStack_56 = (undefined4)((ulong)&local_a8 >> 0x10);
        uStack_52 = (undefined2)((ulong)&local_a8 >> 0x30);
        local_50 = &local_6c;
        local_48 = &local_68;
        FUN_10013491a(pvVar9,&local_68);
        if (local_48 == &local_68) {
          lVar11 = 0x20;
LAB_10061c681:
          (**(code **)(*local_48 + lVar11))();
        }
        else {
          lVar11 = 0x28;
          if (local_48 != (long *)0x0) goto LAB_10061c681;
        }
        FUN_10014105c(pvVar9);
        iVar8 = FUN_1001e9afc(&local_88);
        local_6c = iVar8;
        if ((iVar8 != -0x80) && (iVar8 != 0)) {
          uVar12 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar12,0x10);
          if (cVar7 != '\0') {
            local_68._0_4_ = 0x8220202;
            local_68._4_4_ = 0x7a0a90;
            uStack_60 = 1;
            uStack_5c = 0x400;
            uStack_5a = (undefined2)iVar8;
            uStack_58 = (undefined2)((uint)iVar8 >> 0x10);
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_68,0x12);
          }
        }
        FUN_1001e9bb5(&local_88);
        iVar8 = local_6c;
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar11 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar11 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else {
        uVar12 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar12,0x10);
        if (cVar7 != '\0') {
          local_68._0_4_ = 0x8220202;
          local_68._4_4_ = 0x7a0a90;
          uStack_60 = 1;
          uStack_5c = 0x400;
          uStack_5a = (undefined2)iVar8;
          uStack_58 = (undefined2)((uint)iVar8 >> 0x10);
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_68,0x12);
        }
      }
    }
  }
  if (local_90 == '\x01') {
    FUN_100150de8(local_a0);
  }
LAB_10061c70f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

