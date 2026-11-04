// name: FUN_10021746c
// address: 10021746c

void FUN_10021746c(int *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined1 local_88 [12];
  undefined2 local_7c;
  char *local_7a;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = param_2;
  if (*param_1 != 0) {
    lVar4 = FUN_1004de449();
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_8_ = "Assertion failure (expected to be not NULL)";
        local_7c = 0x822;
        local_7a = "handlerData";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_88,0x16);
      }
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_1002174d6;
    }
    *(undefined1 *)(lVar4 + 0x16677) = 0;
  }
LAB_1002174d6:
  if (param_1[0xd] == 0) {
    FUN_10024d14f(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 10));
    local_68 = operator_new(0x28);
    *local_68 = (long)&PTR_FUN_10083e058;
    local_68[1] = (long)FUN_1005f4ae4;
    local_68[2] = 0;
    local_68[3] = 1;
    local_68[4] = 1;
    local_58 = 0;
    uStack_50 = 0;
    uStack_49 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = (long *)0x0;
    FUN_10017869a(local_88);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_68 == (long *)local_88) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_100217594;
    }
    (**(code **)(*local_68 + lVar4))();
  }
LAB_100217594:
  if (((char)param_1[0xc] == '\0') && (*(undefined1 **)(param_1 + 0xe) != (undefined1 *)0x0)) {
    **(undefined1 **)(param_1 + 0xe) = 1;
  }
  iVar3 = FUN_1001eed65(&local_90);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_8_ = "Assertion failure";
      local_7c = 0x400;
      local_7a = (char *)CONCAT44(local_7a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_88,0x12);
    }
  }
  FUN_10021828c(param_1);
  operator_delete(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

