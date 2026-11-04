// name: FUN_10037b1be
// address: 10037b1be

undefined8 ** FUN_10037b1be(undefined8 **param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined8 *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_100855b20;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined1 *)((long)puVar4 + 0xc) = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
  }
  local_58 = puVar4;
  plStack_50 = operator_new(0x20);
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = (long)&PTR_FUN_100855bf8;
  plStack_50[3] = (long)puVar4;
  if (puVar4 == (undefined8 *)0x0) {
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
    ppuVar6 = param_1;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = param_2;
    *param_1 = puVar4;
    param_1[1] = plStack_50;
    ppuVar6 = &local_58;
  }
  *ppuVar6 = (undefined8 *)0x0;
  ppuVar6[1] = (undefined8 *)0x0;
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

