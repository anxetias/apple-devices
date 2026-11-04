// name: FUN_100456f9e
// address: 100456f9e

long ** FUN_100456f9e(long **param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long **pplVar6;
  long *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_100859ca8;
    puVar4[1] = 0;
  }
  FUN_1004577fc(&local_58,puVar4);
  pplVar6 = param_1;
  if (local_58 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar3 = (**(code **)(*local_58 + 0x88))(local_58,param_2);
    if (cVar3 != '\0') {
      *param_1 = local_58;
      param_1[1] = plStack_50;
      pplVar6 = &local_58;
    }
  }
  *pplVar6 = (long *)0x0;
  pplVar6[1] = (long *)0x0;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

