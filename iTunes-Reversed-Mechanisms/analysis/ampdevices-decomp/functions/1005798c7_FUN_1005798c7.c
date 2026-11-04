// name: FUN_1005798c7
// address: 1005798c7

int FUN_1005798c7(uint param_1,undefined2 *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  long lVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  uint *context;
  dispatch_queue_t queue;
  undefined8 uVar9;
  undefined2 *local_f8;
  undefined1 *local_f0;
  uint *local_e8;
  int *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined8 local_c0;
  long *plStack_b8;
  uint local_b0;
  long local_a8;
  uint local_a0;
  long local_98;
  long local_90;
  uint local_84;
  int local_80;
  undefined1 local_79;
  uint local_78 [3];
  undefined2 uStack_6c;
  short sStack_6a;
  short sStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  uint local_60;
  long local_58;
  uint local_50;
  long local_48;
  undefined2 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_c0 = 0;
  plStack_b8 = (long *)0x0;
  local_b0 = 0;
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_79 = 0;
  local_84 = param_1;
  cVar5 = FUN_1001edfc7();
  if (cVar5 == '\0') {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_78[0] = 0x8220202;
      local_78[1] = 0x7a0a90;
      local_78[2] = 1;
      uStack_6c = 0x822;
      sStack_6a = 0x654;
      sStack_68 = 0x7b;
      uStack_66 = 1;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_78,0x16);
    }
    iVar7 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_100579d44;
  }
  local_f0 = &local_79;
  local_e8 = &local_84;
  local_e0 = &local_80;
  local_d8 = *param_3;
  uStack_d4 = param_3[1];
  uStack_d0 = param_3[2];
  uStack_cc = param_3[3];
  if (*(long *)(param_3 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  local_f8 = param_2;
  lVar8 = FUN_1004de449(param_1);
  if (lVar8 == 0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9);
    if (cVar5 != '\0') {
      local_78[0] = 0x8220202;
      local_78[1] = 0x7a0a90;
      local_78[2] = 1;
      uStack_6c = 0x822;
      sStack_6a = -0x2196;
      sStack_68 = 0x7a;
      uStack_66 = 1;
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_78,0x16);
    }
    iVar7 = 0x45f;
    FUN_1001782e9(0);
  }
  else if (*(char *)(lVar8 + 0x16680) == '\x01') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar9 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8);
    iVar7 = -0x1b;
    if (cVar5 != '\0') {
      local_78[0] = local_78[0] & 0xffff0000;
      __os_log_impl(0x100000000,uVar9,0x10,"skynet> existing instance already running",local_78,2);
    }
  }
  else {
    local_c8 = param_1;
    FUN_100203686(&local_c0,&local_d8);
    local_b0 = *(uint *)(lVar8 + 0x66b0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar9 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_78[0] = local_78[0] & 0xffff0000;
      __os_log_impl(0x100000000,uVar9,1,"skynet> starting carrier bundle update service",local_78,2)
      ;
    }
    *(undefined1 *)(lVar8 + 0x16680) = 1;
    local_90 = 0;
    iVar7 = FUN_1005b98e2(*(undefined8 *)(lVar8 + 0x7168),
                          &cf_com_apple_commcenter_mobile_helper_cbupdateservice,0);
    lVar4 = local_90;
    if (local_a8 != 0) {
      _CFRelease();
    }
    local_a8 = lVar4;
    if (iVar7 == -0x80) {
LAB_100579b8b:
      iVar7 = 0x689;
    }
    else {
      if (iVar7 != 0) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9);
        if (cVar5 != '\0') {
          local_78[0] = 0x8220202;
          local_78[1] = 0x7a0a90;
          local_78[2] = 1;
          uStack_6c = 0x400;
          sStack_6a = (short)iVar7;
          sStack_68 = (short)((uint)iVar7 >> 0x10);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",local_78,0x12);
        }
        goto LAB_100579b8b;
      }
      local_a0 = _AMDServiceConnectionGetSocket(lVar4);
      if (local_a0 == 0xffffffff) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9);
        if (cVar5 != '\0') {
          local_78[0] = 0x8220202;
          local_78[1] = 0x7a0a90;
          local_78[2] = 1;
          uStack_6c = 0x822;
          sStack_6a = -0x6849;
          sStack_68 = 0x7e;
          uStack_66 = 1;
          uStack_64 = 0;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_78,0x16);
        }
        FUN_1001782e9(0);
        iVar7 = 0x689;
        goto LAB_100579b99;
      }
      sVar6 = FUN_1001d251b(local_a0);
      if (sVar6 == -0x80) {
        iVar7 = -0x80;
      }
      else {
        if (sVar6 == 0) {
          iVar7 = 0;
          goto LAB_100579b99;
        }
        uVar9 = FUN_1001cc310();
        iVar7 = (int)sVar6;
        cVar5 = _os_log_type_enabled(uVar9);
        if (cVar5 != '\0') {
          local_78[0] = 0x8220202;
          local_78[1] = 0x7a0a90;
          local_78[2] = 1;
          uStack_6c = 0x400;
          sStack_68 = sVar6 >> 0xf;
          sStack_6a = sVar6;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",local_78,0x12);
        }
      }
    }
    *(undefined1 *)(lVar8 + 0x16680) = 0;
  }
LAB_100579b99:
  plVar1 = (long *)CONCAT44(uStack_cc,uStack_d0);
  local_80 = iVar7;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  iVar7 = local_80;
  if (local_80 != -0x80) {
    if (local_80 == 0) {
      local_78[0] = local_c8;
      local_78[2] = (undefined4)local_c0;
      uStack_6c = (undefined2)((ulong)local_c0 >> 0x20);
      sStack_6a = (short)((ulong)local_c0 >> 0x30);
      sStack_68 = (short)plStack_b8;
      uStack_66 = (undefined2)((ulong)plStack_b8 >> 0x10);
      uStack_64 = (undefined2)((ulong)plStack_b8 >> 0x20);
      uStack_62 = (undefined2)((ulong)plStack_b8 >> 0x30);
      if (plStack_b8 != (long *)0x0) {
        LOCK();
        plStack_b8[1] = plStack_b8[1] + 1;
        UNLOCK();
      }
      local_60 = local_b0;
      local_58 = local_a8;
      if (local_a8 != 0) {
        _CFRetain();
      }
      local_50 = local_a0;
      local_48 = local_98;
      if (local_98 != 0) {
        _CFRetain();
      }
      uVar3 = *param_2;
      local_40 = uVar3;
      context = operator_new(0x40);
      queue = _dispatch_get_global_queue(9,0);
      *context = local_78[0];
      *(ulong *)(context + 2) = CONCAT26(sStack_6a,CONCAT24(uStack_6c,local_78[2]));
      *(ulong *)(context + 4) =
           CONCAT26(uStack_62,CONCAT24(uStack_64,CONCAT22(uStack_66,sStack_68)));
      local_78[2] = 0;
      uStack_6c = 0;
      sStack_6a = 0;
      sStack_68 = 0;
      uStack_66 = 0;
      uStack_64 = 0;
      uStack_62 = 0;
      context[6] = local_60;
      *(long *)(context + 8) = local_58;
      local_58 = 0;
      context[10] = local_50;
      *(long *)(context + 0xc) = local_48;
      local_48 = 0;
      *(undefined2 *)(context + 0xe) = uVar3;
      local_90 = 0;
      _dispatch_async_f(queue,context,FUN_10057a580);
      FUN_10057a53a(&local_90);
      FUN_10026340c(&local_48);
      FUN_10057a0de(local_58);
      plVar1 = (long *)CONCAT26(uStack_62,CONCAT24(uStack_64,CONCAT22(uStack_66,sStack_68)));
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar8 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_79 = 1;
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_78[0] = 0x8220202;
        local_78[1] = 0x7a0a90;
        local_78[2] = 1;
        uStack_6c = 0x400;
        sStack_6a = (short)iVar7;
        sStack_68 = (short)((uint)iVar7 >> 0x10);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",local_78,0x12);
      }
    }
  }
  iVar7 = local_80;
  FUN_10057a080(&local_f8);
LAB_100579d44:
  FUN_10026340c(&local_98);
  FUN_10057a0de(local_a8);
  if (plStack_b8 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_b8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

