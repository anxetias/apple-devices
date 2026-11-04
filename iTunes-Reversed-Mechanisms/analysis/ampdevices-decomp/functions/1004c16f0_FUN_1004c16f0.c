// name: FUN_1004c16f0
// address: 1004c16f0

undefined4 FUN_1004c16f0(long *param_1,undefined4 param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  (**(code **)(*param_1 + 0x310))(param_1,1);
  plVar3 = (long *)param_1[0xaa];
  if (plVar3 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mMetaDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    if (*(long *)(param_3 + 2) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    (**(code **)(*plVar3 + 0xe8))(plVar3,param_2,&local_58);
    plVar3 = (long *)CONCAT44(uStack_4c,uStack_50);
    uVar6 = 0;
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

