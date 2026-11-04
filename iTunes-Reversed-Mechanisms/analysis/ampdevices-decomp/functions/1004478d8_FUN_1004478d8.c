// name: FUN_1004478d8
// address: 1004478d8

long * FUN_1004478d8(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 local_90 [8];
  long local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *plStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1001c62d9(local_90,0x28);
  FUN_10043e902(param_2);
  if (*(long *)(param_2 + 0x498) == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4a = "mAsset != __null";
LAB_100447c3d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    local_68 = (long *)0x0;
    plStack_60 = (long *)0x0;
    local_88 = *(long *)(param_2 + 0x498);
    local_80 = param_3;
    local_78 = param_4;
    local_70 = param_5;
    plVar5 = operator_new(0xe8,(nothrow_t *)PTR_nothrow_10082c970);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)&PTR_FUN_100859180;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      *(undefined1 *)(plVar5 + 0x1c) = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[6] = 0;
      *(undefined8 *)((long)plVar5 + 0x36) = 0;
      *(undefined8 *)((long)plVar5 + 0x3e) = 0;
      FUN_1001c62d9(plVar5 + 9,0x28);
      FUN_1001c62d9(plVar5 + 0xe,0x70);
    }
    plVar6 = operator_new(0x20);
    plVar1 = plStack_60;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_1008594a8;
    plVar6[3] = (long)plVar5;
    local_68 = plVar5;
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar5 = plStack_60 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        lVar2 = *plStack_60;
        plStack_60 = plVar6;
        (**(code **)(lVar2 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
        plVar6 = plStack_60;
      }
    }
    plStack_60 = plVar6;
    if (local_68 == (long *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "obj != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      iVar4 = (**(code **)(*local_68 + 0x18))(local_68,local_90);
      if (iVar4 == -0x80) {
LAB_100447a5c:
        plVar5 = plStack_60;
        local_68 = (long *)0x0;
        plStack_60 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else if (iVar4 != 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar4 != 0) goto LAB_100447a5c;
      }
    }
    FUN_100217418(param_1,&local_68);
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar5 = plStack_60 + 1;
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((long *)*param_1 != (long *)0x0) {
      iVar4 = (**(code **)(*(long *)*param_1 + 0x38))();
      if (iVar4 != -0x80) {
        if (iVar4 == 0) goto LAB_100447ba5;
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar4 == 0) goto LAB_100447ba5;
      }
      FUN_1002188e4(param_1);
      goto LAB_100447ba5;
    }
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_4a = "reader != __null";
      goto LAB_100447c3d;
    }
  }
  FUN_1001782e9(0,0);
LAB_100447ba5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

