// name: FUN_100540e46
// address: 100540e46

undefined8 * FUN_100540e46(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = operator_new(0xff0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1008699c0;
    *(undefined8 *)((long)puVar6 + 0x4a4) = 0;
    *(undefined4 *)((long)puVar6 + 0xfdc) = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[0x1f9] = 0;
    puVar6[0x1fa] = 0;
    *(undefined2 *)(puVar6 + 0x1fb) = 0;
    FUN_1001c62d9(puVar6 + 3,0x460);
    FUN_1001c62d9(puVar6 + 0x8f,0x2c);
    FUN_1001c62d9(puVar6 + 0x96,0xb18);
    *puVar6 = &PTR_FUN_100869c28;
    puVar6[0x1fc] = 0;
    puVar6[0x1fd] = 0;
  }
  puVar7 = operator_new(0x20);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_100869f48;
  puVar7[3] = puVar6;
  *param_1 = puVar6;
  param_1[1] = puVar7;
  if (puVar6 == (undefined8 *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ref != __null";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100541026;
  }
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  if (*(long *)(param_3 + 2) == 0) {
    ppuVar8 = &PTR_FUN_100869c28;
  }
  else {
    LOCK();
    plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    ppuVar8 = (undefined **)*puVar6;
  }
  iVar5 = (*(code *)ppuVar8[0x4b])(puVar6,param_2,&local_68);
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
  if (iVar5 != -0x80) {
    if (iVar5 == 0) goto LAB_100541026;
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar5 == 0) goto LAB_100541026;
  }
  plVar1 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
LAB_100541026:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

