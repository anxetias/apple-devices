// name: FUN_100575270
// address: 100575270

undefined8 * FUN_100575270(undefined8 *param_1,undefined4 param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  long *plStack_540;
  undefined8 local_538;
  undefined3 uStack_530;
  undefined5 uStack_52d;
  undefined3 local_528;
  undefined5 uStack_525;
  undefined3 uStack_520;
  undefined8 local_518;
  long *local_4f8;
  long *plStack_4f0;
  undefined4 local_4e0;
  undefined1 local_4dc [1116];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  local_518 = 0;
  local_558 = 0;
  uStack_550 = (long *)0x0;
  local_548 = 0;
  plStack_540 = (long *)0x0;
  local_538 = 0;
  uStack_530 = 0;
  uStack_52d = 0;
  local_528 = 0;
  uStack_525 = 0;
  uStack_520 = 0;
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_4e0 = param_2;
  _memcpy(local_4dc,param_3,0x460);
  FUN_100531852(&local_58,&local_4e0);
  uStack_550 = (long *)CONCAT44(CONCAT22(uStack_4a,uStack_4c),uStack_50);
  if (CONCAT44(uStack_54,local_58) == 0) {
    FUN_1002188e4(param_1);
    goto LAB_10057552d;
  }
  local_4f8 = (long *)0x0;
  plStack_4f0 = (long *)0x0;
  plVar4 = operator_new(0xf8,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar4 != (long *)0x0) {
    *plVar4 = (long)&PTR_FUN_10086a550;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    *(undefined4 *)(plVar4 + 9) = 0;
    *(undefined2 *)(plVar4 + 0x12) = 0x101;
    *(undefined1 *)((long)plVar4 + 0x92) = 0;
    *(undefined4 *)((long)plVar4 + 0x94) = 0;
    *(undefined1 *)(plVar4 + 0x13) = 0;
    *(undefined4 *)((long)plVar4 + 0x9c) = 0;
    plVar4[0x14] = (long)(plVar4 + 0x14);
    plVar4[0x15] = (long)(plVar4 + 0x14);
    plVar4[0x19] = 0;
    *(undefined4 *)(plVar4 + 0x18) = 0;
    plVar4[0x16] = 0;
    plVar4[0x17] = 0;
    plVar4[0x1a] = (long)(plVar4 + 0x1a);
    plVar4[0x1b] = (long)(plVar4 + 0x1a);
    plVar4[0x1c] = 0;
    plVar4[0x1d] = -1;
    *(undefined1 *)(plVar4 + 0x1e) = 0;
    FUN_1001c62d9(plVar4 + 9,0x48);
  }
  plVar5 = operator_new(0x20);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_10086a750;
  plVar5[3] = (long)plVar4;
  local_4f8 = plVar4;
  plStack_4f0 = plVar5;
  if (plVar4 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xf62;
      uStack_48 = 0x7b;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = (**(code **)(*plVar4 + 0x80))(plVar4,&local_558);
    if (iVar3 == -0x80) {
LAB_10057548a:
      plVar4 = plVar5 + 1;
      local_4f8 = (long *)0x0;
      plStack_4f0 = (long *)0x0;
      LOCK();
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    else if (iVar3 != 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x400;
        uStack_4a = (undefined2)iVar3;
        uStack_48 = (undefined2)((uint)iVar3 >> 0x10);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar3 != 0) goto LAB_10057548a;
    }
  }
  FUN_100217418(param_1,&local_4f8);
  if (plStack_4f0 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_4f0 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10057552d:
  plVar4 = (long *)CONCAT53(uStack_525,local_528);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_540 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_540 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_540 + 0x10))(plStack_540);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (uStack_550 != (long *)0x0) {
    LOCK();
    plVar4 = uStack_550 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*uStack_550 + 0x10))(uStack_550);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

