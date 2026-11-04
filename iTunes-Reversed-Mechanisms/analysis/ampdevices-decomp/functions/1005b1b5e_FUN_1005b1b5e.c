// name: FUN_1005b1b5e
// address: 1005b1b5e

bool FUN_1005b1b5e(long param_1,undefined8 param_2,undefined1 param_3)

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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = param_3;
  FUN_1005b0c10(&local_38);
  uVar7 = uStack_30;
  uVar6 = uStack_34;
  uVar5 = local_38;
  uVar4 = CONCAT22(uStack_2a,uStack_2c);
  local_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_2a = 0;
  plVar3 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
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
  plVar3 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,uStack_30));
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
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    uVar9 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar9,0x10);
    if (cVar8 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      uStack_2c = 0x822;
      uStack_2a = 0xe966;
      uStack_28 = 0x1007e;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

