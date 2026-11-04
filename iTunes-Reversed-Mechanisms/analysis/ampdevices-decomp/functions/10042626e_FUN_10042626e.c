// name: FUN_10042626e
// address: 10042626e

undefined8 FUN_10042626e(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x58);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x28);
  local_58 = *(undefined4 *)(param_1 + 0x18);
  uStack_54 = *(undefined4 *)(param_1 + 0x1c);
  uStack_50 = *(undefined4 *)(param_1 + 0x20);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  if (*(long *)(param_1 + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar6 = FUN_1002281fa(uVar4,uVar7,&local_58,&local_40);
  plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
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
  if ((iVar6 != -0x80) && (iVar6 != 0)) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar6;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

