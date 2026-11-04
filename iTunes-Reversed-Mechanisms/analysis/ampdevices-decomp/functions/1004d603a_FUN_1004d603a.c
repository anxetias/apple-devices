// name: FUN_1004d603a
// address: 1004d603a

undefined8 * FUN_1004d603a(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_10085e940;
    FUN_1001a8f5c(puVar3 + 1,0);
  }
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_10085ea88;
  plVar4[3] = (long)puVar3;
  *param_1 = puVar3;
  param_1[1] = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_1004d6258();
    if (cVar2 == '\0') {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,0xffffffce);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      plVar6 = plVar4 + 1;
      *param_1 = 0;
      param_1[1] = 0;
      LOCK();
      lVar1 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

