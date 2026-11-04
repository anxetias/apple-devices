// name: FUN_10023686e
// address: 10023686e

void FUN_10023686e(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 0x7b267c;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
    goto LAB_100236a05;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_1002368ee:
    plVar5 = (long *)0x0;
LAB_1002368f1:
    if (*(int *)(param_1 + 0xa0) != -1) {
      uVar6 = FUN_100235e52();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        pcVar7 = (char *)FUN_100237792(param_1,*(undefined4 *)(param_1 + 0xa0));
        uVar2 = *(undefined4 *)(param_1 + 0xa0);
        uVar8 = FUN_1001b83ae(param_1 + 0x28);
        local_58 = 0x8220302;
        local_4c = 0x400;
        uStack_46 = 0x822;
        uStack_44 = (undefined2)uVar8;
        uStack_42 = (undefined6)((ulong)uVar8 >> 0x10);
        local_54 = pcVar7;
        local_4a = uVar2;
        __os_log_impl(0x100000000,uVar6,0x10,
                      "**ERROR**: ActiveCommand((%{public}s-%d) but no execution delegate! ccp:%{public}s"
                      ,&local_58,0x1c);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
  }
  else {
    plVar5 = (long *)std::__shared_weak_count::lock();
    if (plVar5 == (long *)0x0) goto LAB_1002368ee;
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 == (long *)0x0) goto LAB_1002368f1;
    FUN_1001e9eb9(param_1 + 0x40);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_1001e9de0(param_1 + 0x40);
  }
  if ((*(int *)(param_1 + 0xfc) == 4) && ((*(byte *)(param_1 + 0xbd) & 1) != 0)) {
    *(undefined1 *)(param_1 + 200) = 1;
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100236a05:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

