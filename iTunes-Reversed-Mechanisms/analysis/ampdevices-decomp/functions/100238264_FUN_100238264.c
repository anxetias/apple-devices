// name: FUN_100238264
// address: 100238264

void FUN_100238264(long param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = 0x7b269e;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    cVar5 = FUN_1001782e9(0,0);
    if (cVar5 == '\0') goto LAB_1002383d0;
  }
  if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 5)) {
    uVar6 = FUN_100235e52();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar5 = _os_log_type_enabled(uVar6,1);
    if (cVar5 != '\0') {
      pcVar7 = (char *)FUN_100237792(param_1,*(undefined4 *)(param_1 + 0xa0));
      uVar8 = FUN_1001b83ae(param_1 + 0x28);
      local_58 = 0x8220302;
      local_4c = 0x400;
      uStack_46 = 0x822;
      uStack_44 = (undefined2)uVar8;
      uStack_42 = (undefined6)((ulong)uVar8 >> 0x10);
      local_54 = pcVar7;
      local_4a = param_3;
      __os_log_impl(0x100000000,uVar6,1,
                    "Starting post processs %{public}s command with status:%d for ccp:%{public}s",
                    &local_58,0x1c);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    param_2 = (long *)*param_2;
    uVar4 = *(undefined4 *)(param_1 + 0xa0);
    local_68 = *(undefined4 *)(param_1 + 0xa8);
    uStack_64 = *(undefined4 *)(param_1 + 0xac);
    uStack_60 = *(undefined4 *)(param_1 + 0xb0);
    uStack_5c = *(undefined4 *)(param_1 + 0xb4);
    if (*(long *)(param_1 + 0xb0) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    (**(code **)(*param_2 + 8))(param_2,uVar4,&local_68,param_3);
    plVar1 = (long *)CONCAT44(uStack_5c,uStack_60);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
LAB_1002383d0:
  cVar5 = FUN_1001e8dbb(param_1 + 0xd8);
  if (cVar5 != '\0') {
    FUN_1001e8f15(param_1 + 0xd8);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

