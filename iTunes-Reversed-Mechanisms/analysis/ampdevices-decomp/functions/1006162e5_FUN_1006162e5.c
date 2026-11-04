// name: FUN_1006162e5
// address: 1006162e5

void FUN_1006162e5(undefined8 param_1,uint param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  double dVar7;
  undefined8 local_88;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 local_78;
  uint uStack_76;
  undefined2 uStack_72;
  uint local_70;
  long *local_68;
  long local_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100601c1f(param_3);
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_4_ = 0x7a0a90;
      local_80 = 1;
      uStack_7e = 0;
      uStack_7c = 0x822;
      uStack_7a = 0xa858;
      local_78 = 0x7c;
      uStack_76 = 1;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined4 *)(param_3 + 0x458) = 0x626b7570;
  if ((int)param_2 < 1) {
    if ((int)param_2 < 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        uVar4 = FUN_1005c68ce(param_2);
        local_88._0_4_ = 0x4000202;
        local_80 = 0x820;
        uStack_7e = (undefined2)uVar4;
        uStack_7c = (undefined2)((ulong)uVar4 >> 0x10);
        uStack_7a = (undefined2)((ulong)uVar4 >> 0x20);
        local_78 = (undefined2)((ulong)uVar4 >> 0x30);
        local_88._4_4_ = param_2;
        __os_log_impl(0x100000000,uVar3,0x10,"backup error %d (%s)",&local_88,0x12);
      }
      *(uint *)(*(long *)(param_3 + 0x28) + 0x44) = param_2;
    }
    else {
      uVar3 = FUN_1001ebd46();
      *(undefined8 *)(param_3 + 0x470) = uVar3;
      *(undefined4 *)(param_3 + 0x478) = 0;
    }
  }
  else if (*(int *)(param_3 + 0x30) == 0) {
    dVar7 = (double)FUN_1001ebd46();
    if (*(double *)(param_3 + 0x470) + DAT_100700b00 <= dVar7) {
      lVar5 = 0;
      uVar6 = 0;
      if (param_2 < 100 || *(int *)(param_3 + 0x478) != 0) {
        lVar5 = (ulong)param_2 << 0x20;
        uVar6 = param_2;
      }
    }
    else {
      lVar5 = 0;
      uVar6 = 0;
    }
    *(uint *)(param_3 + 0x478) = uVar6;
    if (*(long *)(param_3 + 0x10) == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7e = 0;
        uStack_7c = 0x822;
        uStack_7a = 0xde6a;
        local_78 = 0x7a;
        uStack_76 = 1;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uStack_76 = (uint)((ulong)lVar5 >> 0x10) | *(uint *)(param_3 + 0x458) >> 0x10;
      local_70 = *(uint *)(*(long *)(param_3 + 0x10) + 0x28);
      local_88._0_4_ = 0x870bb0;
      local_88._4_4_ = 1;
      local_80 = 0x60fe;
      uStack_7e = 0x61;
      uStack_7c = 1;
      uStack_7a = 0;
      local_78 = (undefined2)*(uint *)(param_3 + 0x458);
      uStack_72 = (undefined2)((ulong)lVar5 >> 0x30);
      uStack_50 = 0;
      uStack_49 = 0;
      uStack_48 = 0;
      uStack_46 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = (long *)0x0;
      local_58 = (ulong)local_70 << 0x20;
      uStack_47 = 1;
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
        if (local_68 == (long *)0x0) goto LAB_100616516;
      }
      (**(code **)(*local_68 + lVar5))();
    }
  }
LAB_100616516:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

