// name: FUN_1004dc8a0
// address: 1004dc8a0

void FUN_1004dc8a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
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
  local_98 = 0;
  uStack_90 = 0;
  cVar2 = FUN_1001ee056();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_8_ = "Assertion failure";
      local_7c = 0x822;
      local_7a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_88,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004dc937;
  }
  iVar3 = FUN_1001b19b0();
  iVar4 = FUN_1001b1a0f();
  if (iVar3 == iVar4) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_8_ = "Assertion failure";
      local_7c = 0x822;
      local_7a = "ITFibersGetCurrent() != ITFibersGetMain()";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_88,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004dc937;
  }
  iVar3 = FUN_1004dccf5(param_1,"");
  if (iVar3 == -0x80) goto LAB_1004dc937;
  if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_8_ = "Assertion failure";
      local_7c = 0x400;
      local_7a = (char *)CONCAT44(local_7a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_88,0x12);
    }
    goto LAB_1004dc937;
  }
  local_c0[0] = *(undefined4 *)(param_1 + 0x28);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 1;
  local_b8 = param_2;
  iVar3 = FUN_1001e96d3(&local_98,0,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      local_68 = operator_new(0x28);
      *local_68 = (long)&PTR_FUN_100868380;
      local_68[1] = (long)FUN_1004dd64e;
      local_68[2] = (long)FUN_10050bd27;
      local_68[3] = (long)local_c0;
      local_68[4] = (long)&local_98;
      uStack_50 = 0;
      uStack_49 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = (long *)0x0;
      local_58 = 1;
      FUN_10017869a(local_88);
      if (local_30 != (long *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 == (long *)local_88) {
        lVar6 = 0x20;
LAB_1004dcbd6:
        (**(code **)(*local_68 + lVar6))();
      }
      else {
        lVar6 = 0x28;
        if (local_68 != (long *)0x0) goto LAB_1004dcbd6;
      }
      iVar3 = FUN_1001e9afc(&local_98);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_1001e9bb5(&local_98);
          if ((iVar3 != -0x80) && (iVar3 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_7a = (char *)CONCAT44(local_7a._4_4_,iVar3);
              goto LAB_1004dccb3;
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_7a = (char *)CONCAT44(local_7a._4_4_,iVar3);
            goto LAB_1004dccb3;
          }
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_1004dccc3;
      local_7a = (char *)CONCAT44(local_7a._4_4_,iVar3);
LAB_1004dccb3:
      local_7c = 0x400;
      local_88._4_8_ = "Assertion failure";
      local_88._0_4_ = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_88,0x12);
    }
  }
LAB_1004dccc3:
  FUN_1004dd69c(param_1,"");
LAB_1004dc937:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

