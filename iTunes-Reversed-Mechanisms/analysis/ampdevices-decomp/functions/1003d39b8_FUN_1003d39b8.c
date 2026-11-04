// name: FUN_1003d39b8
// address: 1003d39b8

/* WARNING: Removing unreachable block (ram,0x0001003d3abc) */
/* WARNING: Removing unreachable block (ram,0x0001003d3ace) */

undefined4 FUN_1003d39b8(undefined8 param_1,void *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_49c;
  undefined1 local_498 [44];
  undefined1 local_46c [1076];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_49c = 0xffffffce;
  uVar5 = 0;
  FUN_1001c62d9(local_498,0x460);
  if (param_2 != (void *)0x0) {
    _memcpy(local_46c,param_2,0x420);
  }
  FUN_100241e40(&local_38,0x46494c45,local_498,0,0,&local_49c,uVar5);
  FUN_100217418(param_3,&local_38);
  plVar3 = (long *)CONCAT26(uStack_2a,CONCAT24(uStack_2c,local_30));
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
  if (*param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      local_30 = 1;
      uStack_2c = 0x822;
      uStack_2a = 0xa5e7;
      uStack_28 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_49c = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_49c;
}

