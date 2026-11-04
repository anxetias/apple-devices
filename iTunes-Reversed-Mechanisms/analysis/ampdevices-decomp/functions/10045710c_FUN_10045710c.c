// name: FUN_10045710c
// address: 10045710c

long ** FUN_10045710c(long **param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long **pplVar6;
  long *local_68;
  long *plStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_100859ca8;
    puVar4[1] = 0;
  }
  FUN_1004577fc(&local_68,puVar4);
  pplVar6 = param_1;
  if (local_68 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar3 = (**(code **)(*local_68 + 0x90))(local_68,param_2,param_3);
    if (cVar3 != '\0') {
      *param_1 = local_68;
      param_1[1] = plStack_60;
      pplVar6 = &local_68;
    }
  }
  *pplVar6 = (long *)0x0;
  pplVar6[1] = (long *)0x0;
  if (plStack_60 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

