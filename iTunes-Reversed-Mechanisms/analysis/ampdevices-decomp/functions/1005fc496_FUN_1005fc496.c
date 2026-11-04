// name: FUN_1005fc496
// address: 1005fc496

void FUN_1005fc496(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined4 uStack_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100238ca8(local_90,param_1 + 7);
  lVar3 = param_1[0x1c];
  plVar4 = (long *)param_1[0x1d];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    cVar8 = FUN_1005fc8be(lVar3);
    if (cVar8 != '\0') {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar11 = DAT_1008c7d18;
      cVar8 = _os_log_type_enabled(DAT_1008c7d18,0);
      if (cVar8 != '\0') {
        local_70 = uVar11;
        FUN_100238ca8(local_a0,lVar3 + 0x40);
        lVar5 = *(long *)(lVar3 + 0x90);
        lVar6 = *(long *)(lVar3 + 0x88);
        FUN_10015a142(local_a0);
        FUN_100238ca8(local_a0,lVar3 + 0x40);
        uVar2 = *(undefined4 *)(lVar3 + 0xa0);
        FUN_10015a142(local_a0);
        uVar11 = (**(code **)(*param_1 + 0x20))(param_1,uVar2);
        local_64 = (int)((ulong)(lVar5 - lVar6) >> 4) * -0x55555555;
        local_68 = 0x4000202;
        uStack_60 = 0x820;
        uStack_5e = (undefined2)uVar11;
        uStack_5c = (undefined2)((ulong)uVar11 >> 0x10);
        uStack_5a = (undefined4)((ulong)uVar11 >> 0x20);
        __os_log_impl(0x100000000,local_70,0,
                      "Waiting for completion of outstanding Library Change commands... Queue size:%d ActiveCmd type:%s"
                      ,&local_68,0x12);
      }
      FUN_100395b14(&local_68,local_90);
      do {
        FUN_1001ebe12((int)DAT_100700c28);
        iVar9 = FUN_1001b19b0();
        iVar10 = FUN_1001b1a0f();
        if (iVar9 == iVar10) {
          FUN_100178bf5(4,0);
        }
        cVar8 = FUN_1005fc8be(lVar3);
      } while (cVar8 != '\0');
      FUN_100179644(&local_68);
    }
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined1 *)(param_1 + 0x10) = 9;
  FUN_10044e22a(param_1);
  FUN_10044d294(param_1);
  if (param_1[0x1c] != 0) {
    FUN_100236412();
  }
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar11 = DAT_1008c7d18;
  cVar8 = _os_log_type_enabled(DAT_1008c7d18,0);
  if (cVar8 != '\0') {
    uVar7 = param_1[0x17];
    if (uVar7 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (ulong)param_1[0x18] / uVar7;
    }
    local_80 = FUN_1001cc0ac(uVar12);
    local_78 = 0;
    local_70 = 0;
    if (param_1[0x19] != -1) {
      local_70 = FUN_1001cc0ac();
    }
    if (param_1[0x1a] != 0) {
      local_78 = FUN_1001cc0ac();
    }
    local_68 = 0x8000400;
    local_64 = (int)uVar7;
    uStack_60 = (undefined2)(uVar7 >> 0x20);
    uStack_5e = (undefined2)(uVar7 >> 0x30);
    uStack_5c = 0x800;
    uStack_5a = (undefined4)local_80;
    uStack_56 = (undefined4)((ulong)local_80 >> 0x20);
    local_52 = 0x800;
    local_50 = local_70;
    local_48 = 0x800;
    local_46 = local_78;
    __os_log_impl(0x100000000,uVar11,0,
                  "Summary for applying changes from library:%llu Avg:%.5f Min:%.5f Max:%.5f",
                  &local_68,0x2a);
  }
  if (param_1[0x2e] != 0) {
    uVar11 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar11,0x10);
    if (cVar8 != '\0') {
      local_68 = 0x8220202;
      local_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      uStack_5a = 0x7f4150;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1006005aa(param_1[0x2d]);
  param_1[0x2c] = (long)(param_1 + 0x2d);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xb;
  param_1[0x14] = 0;
  FUN_10015a142(local_90);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

