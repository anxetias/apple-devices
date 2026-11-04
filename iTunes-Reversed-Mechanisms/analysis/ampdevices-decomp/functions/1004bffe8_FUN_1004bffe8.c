// name: FUN_1004bffe8
// address: 1004bffe8

undefined8 * FUN_1004bffe8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = operator_new(0x5f0,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar4 != (long *)0x0) {
    FUN_1003c2b00(plVar4);
    *(undefined4 *)(plVar4 + 0x9b) = 0;
    *plVar4 = (long)&PTR_FUN_10085d2d0;
    plVar4[0x9c] = (long)&PTR_FUN_10085d6b8;
    *(undefined4 *)(plVar4 + 0x9d) = 0;
    *(undefined8 *)((long)plVar4 + 0x52c) = 0;
    plVar4[0x9e] = 0;
    plVar4[0x9f] = 0;
    *(undefined4 *)(plVar4 + 0xa0) = 0;
    plVar4[0xa1] = 0;
    plVar4[0xa2] = 0;
    plVar4[0xa3] = 0;
    plVar4[0xa4] = 0;
    *(undefined1 *)(plVar4 + 0xa5) = 0;
    plVar4[0xa7] = 0;
    plVar4[0xa8] = 0;
    *(undefined4 *)(plVar4 + 0xa9) = 0;
    plVar4[0xaa] = 0;
    plVar4[0xab] = 0;
    plVar4[0xac] = 0;
    plVar4[0xad] = 0;
    plVar4[0xae] = 0;
    plVar4[0xaf] = 0;
    *(undefined1 *)(plVar4 + 0xb0) = 0;
    *(undefined4 *)(plVar4 + 0xb3) = 0;
    plVar4[0xb1] = 0;
    plVar4[0xb2] = 0;
    *(undefined8 *)((long)plVar4 + 0x5c9) = 0;
    *(undefined8 *)((long)plVar4 + 0x5d1) = 0;
    plVar4[0xb8] = 0;
    plVar4[0xb9] = 0;
    plVar4[0xb6] = 0;
    plVar4[0xb7] = 0;
    plVar4[0xb4] = 0;
    plVar4[0xb5] = 0;
    plVar4[0xbc] = 0;
    plVar4[0xbd] = 0;
  }
  plVar5 = operator_new(0x20);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_10085d738;
  plVar5[3] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handler != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    plVar4 = (long *)0x0;
    FUN_1001782e9(0,0);
    goto LAB_1004c0218;
  }
  plVar7 = plVar5 + 1;
  if (plVar4[2] == 0) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar5[2] = plVar5[2] + 1;
    UNLOCK();
    plVar4[1] = (long)plVar4;
    plVar4[2] = (long)plVar5;
LAB_1004c018d:
    LOCK();
    lVar1 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  else if (*(long *)(plVar4[2] + 8) == -1) {
    LOCK();
    plVar5[1] = plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar5[2] = plVar5[2] + 1;
    UNLOCK();
    plVar4[1] = (long)plVar4;
    plVar4[2] = (long)plVar5;
    std::__shared_weak_count::__release_weak();
    goto LAB_1004c018d;
  }
  iVar3 = (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) goto LAB_1004c0218;
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar3 == 0) goto LAB_1004c0218;
  }
  LOCK();
  lVar1 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
  }
  plVar5 = (long *)0x0;
  plVar4 = (long *)0x0;
LAB_1004c0218:
  *param_1 = plVar4;
  param_1[1] = plVar5;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

