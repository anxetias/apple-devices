// name: FUN_10043e601
// address: 10043e601

void FUN_10043e601(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = operator_new(0x60,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    FUN_1001c62d9(puVar4 + 3,0x48);
  }
  plVar5 = operator_new(0x20);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_1008592d0;
  plVar5[3] = (long)puVar4;
  local_58 = puVar4;
  plStack_50 = plVar5;
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10043e746;
  }
  iVar3 = FUN_1001e9c3e(puVar4 + 3);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) goto LAB_10043e746;
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    if (iVar3 == 0) goto LAB_10043e746;
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  plVar7 = plVar5 + 1;
  local_58 = (undefined8 *)0x0;
  plStack_50 = (long *)0x0;
  LOCK();
  lVar1 = *plVar7;
  *plVar7 = *plVar7 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
  }
LAB_10043e746:
  FUN_100217418(&DAT_1008c7688,&local_58);
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

