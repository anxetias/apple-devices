// name: FUN_100365318
// address: 100365318

void FUN_100365318(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1004d6258();
  if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar4 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_10085e940;
      FUN_1001a8f5c(puVar4 + 1,0);
      *puVar4 = &PTR_FUN_100855800;
      *(undefined4 *)(puVar4 + 3) = param_3;
    }
    plVar5 = operator_new(0x20);
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_1008559f0;
    plVar5[3] = (long)puVar4;
    if (puVar4 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "obj != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      puVar4 = (undefined8 *)0x0;
      FUN_1001782e9(0,0);
    }
    else {
      iVar3 = FUN_1003654e8(puVar4,param_2);
      if (iVar3 != 0) {
        plVar6 = plVar5 + 1;
        LOCK();
        lVar1 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__shared_weak_count::__release_weak();
        }
        plVar5 = (long *)0x0;
        puVar4 = (undefined8 *)0x0;
      }
    }
    *param_1 = puVar4;
    param_1[1] = plVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

