// name: FUN_10056ef18
// address: 10056ef18

void FUN_10056ef18(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_10086a340;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  *param_1 = puVar4;
  plVar5 = operator_new(0x20);
  plVar7 = plVar5 + 1;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_10086a660;
  plVar5[3] = (long)puVar4;
  param_1[1] = plVar5;
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "obj";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') goto LAB_10056f008;
  }
  iVar3 = FUN_10056f136(puVar4,param_2);
  if (iVar3 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    lVar1 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10056f008:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

