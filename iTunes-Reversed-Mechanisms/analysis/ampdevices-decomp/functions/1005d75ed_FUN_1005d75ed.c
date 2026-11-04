// name: FUN_1005d75ed
// address: 1005d75ed

undefined4
FUN_1005d75ed(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 local_4f8 [16];
  undefined8 local_4e8;
  long *plStack_4e0;
  undefined1 local_4d0 [1160];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4e8 = 0;
  plStack_4e0 = (long *)0x0;
  FUN_1001c62d9(local_4d0,0x488);
  FUN_10053207e(&local_48,local_4d0,param_1,1);
  plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  plStack_4e0 = plVar3;
  if (CONCAT44(uStack_44,local_48) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x9a1;
      uStack_38 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar5 = 0xffffffce;
    FUN_1001782e9(0,0);
  }
  else {
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    uVar5 = FUN_1005d77b9(local_4f8,param_2,param_3,param_4);
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
  if (plStack_4e0 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_4e0 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_4e0 + 0x10))(plStack_4e0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

