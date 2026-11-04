// name: FUN_10037bcb8
// address: 10037bcb8

undefined8 ** FUN_10037bcb8(undefined8 **param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = operator_new(0xa0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_100855b90;
    FUN_10037bab6(puVar3 + 7);
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    FUN_1001c62d9(puVar3 + 1,0x2c);
  }
  local_58 = puVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_100855c98;
  plVar4[3] = (long)puVar3;
  ppuVar6 = param_1;
  plStack_50 = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = (**(code **)*puVar3)(puVar3,param_2);
    if (cVar2 != '\0') {
      *param_1 = puVar3;
      param_1[1] = plVar4;
      ppuVar6 = &local_58;
    }
  }
  *ppuVar6 = (undefined8 *)0x0;
  ppuVar6[1] = (undefined8 *)0x0;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_50 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
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

