// name: FUN_1004c090e
// address: 1004c090e

undefined8 FUN_1004c090e(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined1 local_a8 [16];
  undefined4 local_98;
  long local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  long *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar9 = 0;
  if (*(long *)(param_1 + 0x550) == 0) {
    FUN_1001c62d9(local_a8,0x50);
    local_98 = *(undefined4 *)(param_1 + 0x1c);
    local_90 = param_1 + 0x20;
    local_84 = *(undefined4 *)(param_1 + 0x488);
    uStack_80 = *(undefined4 *)(param_1 + 0x48c);
    uStack_7c = *(undefined4 *)(param_1 + 0x490);
    uStack_78 = *(undefined4 *)(param_1 + 0x494);
    local_74 = *(undefined4 *)(param_1 + 0x498);
    uStack_70 = *(undefined4 *)(param_1 + 0x49c);
    uStack_6c = *(undefined4 *)(param_1 + 0x4a0);
    uStack_68 = *(undefined4 *)(param_1 + 0x4a4);
    uStack_64 = *(undefined4 *)(param_1 + 0x4a8);
    uStack_60 = *(undefined4 *)(param_1 + 0x4ac);
    uStack_5c = *(undefined4 *)(param_1 + 0x4b0);
    local_88 = *(undefined4 *)(param_1 + 0x480);
    local_58 = *(long *)(param_1 + 0x4f0);
    if (local_58 == 0) {
      FUN_1004c3f8e(param_1);
      local_58 = *(long *)(param_1 + 0x4f0);
    }
    local_50 = *(long **)(param_1 + 0x4f8);
    if (local_50 != (long *)0x0) {
      LOCK();
      local_50[1] = local_50[1] + 1;
      UNLOCK();
    }
    FUN_100540dbf(&local_48,local_a8,&local_58);
    uVar7 = uStack_40;
    uVar6 = uStack_44;
    uVar5 = local_48;
    uVar4 = CONCAT22(uStack_3a,uStack_3c);
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
    plVar3 = *(long **)(param_1 + 0x558);
    *(undefined4 *)(param_1 + 0x550) = uVar5;
    *(undefined4 *)(param_1 + 0x554) = uVar6;
    *(undefined4 *)(param_1 + 0x558) = uVar7;
    *(undefined4 *)(param_1 + 0x55c) = uVar4;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_1 + 0x550) == 0) {
      uVar9 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar9,0x10);
      if (cVar8 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x53bb;
        uStack_38 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar9 = 0xffffffce;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

