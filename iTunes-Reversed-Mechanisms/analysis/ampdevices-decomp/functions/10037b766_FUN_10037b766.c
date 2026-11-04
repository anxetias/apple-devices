// name: FUN_10037b766
// address: 10037b766

undefined8 ** FUN_10037b766(undefined8 **param_1,undefined4 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 **ppuVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar5 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_100855b48;
    *(undefined4 *)(puVar5 + 1) = 0;
    *(undefined1 *)((long)puVar5 + 0xc) = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[2] = puVar5 + 3;
  }
  local_58 = puVar5;
  plStack_50 = operator_new(0x20);
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = (long)&PTR_FUN_100855c48;
  plStack_50[3] = (long)puVar5;
  ppuVar8 = param_1;
  if (puVar5 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    if (*(long *)(param_3 + 2) == 0) {
      ppuVar7 = &PTR_FUN_100855b48;
    }
    else {
      LOCK();
      plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      ppuVar7 = (undefined **)*puVar5;
    }
    cVar4 = (*(code *)*ppuVar7)(puVar5,param_2,&local_68);
    plVar1 = (long *)CONCAT44(uStack_5c,uStack_60);
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
    if (cVar4 != '\0') {
      *param_1 = local_58;
      param_1[1] = plStack_50;
      ppuVar8 = &local_58;
    }
  }
  *ppuVar8 = (undefined8 *)0x0;
  ppuVar8[1] = (undefined8 *)0x0;
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
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

