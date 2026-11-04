// name: FUN_1003844b4
// address: 1003844b4

long * FUN_1003844b4(long *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_100855ce8;
    *(undefined4 *)(puVar3 + 3) = 0;
    FUN_1001b7a44(puVar3 + 4);
    *(undefined1 *)(puVar3 + 6) = 0;
    *(undefined4 *)((long)puVar3 + 0x34) = 0;
  }
  *param_1 = (long)puVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_100855d60;
  plVar4[3] = (long)puVar3;
  param_1[1] = (long)plVar4;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3[2] == 0) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar4;
    }
    else {
      if (*(long *)(puVar3[2] + 8) != -1) goto LAB_1003845be;
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar4;
      std::__shared_weak_count::__release_weak();
    }
    plVar5 = plVar4 + 1;
    LOCK();
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1003845be:
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "obj";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') goto LAB_100384603;
  }
  *(undefined4 *)(lVar1 + 0x18) = param_2;
  FUN_1001b8172(lVar1 + 0x20,param_3);
  *(undefined1 *)(lVar1 + 0x30) = param_4;
LAB_100384603:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

