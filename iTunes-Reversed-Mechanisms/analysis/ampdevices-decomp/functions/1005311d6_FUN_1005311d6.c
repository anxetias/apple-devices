// name: FUN_1005311d6
// address: 1005311d6

undefined8 FUN_1005311d6(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = 0;
  if (DAT_1008c7810 != (long *)0x0) goto LAB_10053139e;
  plVar4 = operator_new(0x88,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar4 != (long *)0x0) {
    *plVar4 = (long)&PTR_FUN_1008688c8;
    *(undefined4 *)(plVar4 + 7) = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 0;
    *(undefined8 *)((long)plVar4 + 0x7d) = 0;
    FUN_1001c62d9(plVar4 + 1,0x30);
    FUN_1001c62d9(plVar4 + 7,0x48);
  }
  plVar5 = operator_new(0x20);
  plVar8 = plVar5 + 1;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_100869400;
  plVar5[3] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    plVar4 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,0);
    if (iVar3 == -0x80) {
LAB_1005312d4:
      LOCK();
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
      plVar4 = (long *)0x0;
      plVar5 = (long *)0x0;
    }
    else if (iVar3 != 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar3 != 0) goto LAB_1005312d4;
    }
  }
  plVar8 = DAT_1008c7818;
  DAT_1008c7810 = plVar4;
  if (DAT_1008c7818 != (long *)0x0) {
    LOCK();
    plVar4 = DAT_1008c7818 + 1;
    lVar1 = *plVar4;
    DAT_1008c7818 = plVar5;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    plVar5 = DAT_1008c7818;
    if (lVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
      plVar5 = DAT_1008c7818;
    }
  }
  DAT_1008c7818 = plVar5;
  if (DAT_1008c7810 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sHandlerList != __null";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffff94;
  }
LAB_10053139e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

