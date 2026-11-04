// name: FUN_100449766
// address: 100449766

long * FUN_100449766(long *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_78 [2];
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  long *plStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1001c62d9(local_78,0x20);
  FUN_10043e902(param_2);
  if (*(long *)(param_2 + 0x498) == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_3a = "mAsset != __null";
LAB_100449a29:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    local_68 = *(undefined8 *)(param_2 + 0x4a0);
    local_58 = (undefined8 *)0x0;
    plStack_50 = (long *)0x0;
    local_78[0] = param_3;
    local_70 = *(long *)(param_2 + 0x498);
    local_60 = param_4;
    puVar6 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_100859210;
      *(undefined4 *)((long)puVar6 + 0x34) = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *(undefined8 *)((long)puVar6 + 0x22) = 0;
      *(undefined8 *)((long)puVar6 + 0x2a) = 0;
    }
    plStack_50 = operator_new(0x20);
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    *plStack_50 = (long)&PTR_FUN_1008594f8;
    plStack_50[3] = (long)puVar6;
    local_58 = puVar6;
    if (puVar6 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "obj != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      iVar5 = FUN_100449b88(puVar6,local_78);
      if (iVar5 == -0x80) {
LAB_10044988b:
        plVar2 = plStack_50;
        local_58 = (undefined8 *)0x0;
        plStack_50 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else if (iVar5 != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        if (iVar5 != 0) goto LAB_10044988b;
      }
    }
    FUN_100217418(param_1,&local_58);
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*param_1 != 0) goto LAB_100449993;
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_3a = "obj != __null";
      goto LAB_100449a29;
    }
  }
  FUN_1001782e9(0,0);
LAB_100449993:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

