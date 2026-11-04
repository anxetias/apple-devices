// name: FUN_10057dbf2
// address: 10057dbf2

undefined8 ** FUN_10057dbf2(undefined8 **param_1,undefined8 param_2)

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
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = operator_new(0x128,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_10086a8a0;
    *(undefined1 *)((long)puVar4 + 0x44) = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    *(undefined4 *)(puVar4 + 0x11) = 0x3f800000;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    *(undefined4 *)(puVar4 + 0x22) = 0x3f800000;
    *(undefined4 *)(puVar4 + 0x23) = 0;
    *(undefined2 *)((long)puVar4 + 0x11c) = 0;
    *(undefined1 *)(puVar4 + 0x24) = 0;
  }
  local_58 = puVar4;
  plStack_50 = operator_new(0x20);
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = (long)&PTR_FUN_10086a900;
  plStack_50[3] = (long)puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    plStack_50[1] = plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    plStack_50[2] = plStack_50[2] + 1;
    UNLOCK();
    puVar4[1] = puVar4;
    puVar4[2] = plStack_50;
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
  puVar4 = local_58;
  ppuVar6 = param_1;
  if (local_58 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar3 = (**(code **)*local_58)(local_58,param_2);
    if (cVar3 != '\0') {
      *param_1 = puVar4;
      param_1[1] = plStack_50;
      ppuVar6 = &local_58;
    }
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
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

