// name: FUN_100503b03
// address: 100503b03

void FUN_100503b03(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_88 [12];
  undefined2 local_7c;
  char *local_7a;
  long *local_68;
  long local_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = FUN_1004e1958(param_1,0);
  plVar5 = (long *)FUN_1001c629e(0x80,&DAT_100711c6e);
  if (plVar5 != (long *)0x0) {
    plVar5[4] = 0;
  }
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_68 = (long *)0x0;
  }
  else if (plVar1 == param_2) {
    local_68 = (long *)local_88;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_68 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  if ((long *)local_88 != plVar5) {
    plVar1 = (long *)plVar5[4];
    if (local_68 == (long *)local_88) {
      if (plVar1 == plVar5) {
        (**(code **)(*local_68 + 0x18))(local_68,local_58);
        (**(code **)(*local_68 + 0x20))();
        local_68 = (long *)0x0;
        (**(code **)(*(long *)plVar5[4] + 0x18))((long *)plVar5[4],local_88);
        (**(code **)(*(long *)plVar5[4] + 0x20))();
        plVar5[4] = 0;
        local_68 = (long *)local_88;
        (**(code **)(local_58[0] + 0x18))(local_58,plVar5);
        (**(code **)(local_58[0] + 0x20))();
      }
      else {
        (**(code **)(*local_68 + 0x18))(local_68,plVar5);
        (**(code **)(*local_68 + 0x20))();
        local_68 = (long *)plVar5[4];
      }
      plVar5[4] = (long)plVar5;
    }
    else if (plVar1 == plVar5) {
      (**(code **)(*plVar1 + 0x18))(plVar1,local_88);
      (**(code **)(*(long *)plVar5[4] + 0x20))();
      plVar5[4] = (long)local_68;
      local_68 = (long *)local_88;
    }
    else {
      plVar5[4] = (long)local_68;
      local_68 = plVar1;
    }
  }
  if (local_68 == (long *)local_88) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (local_68 == (long *)0x0) goto LAB_100503c7f;
  }
  (**(code **)(*local_68 + lVar6))();
LAB_100503c7f:
  *(undefined1 *)(plVar5 + 6) = 1;
  if (param_1 != 0) {
    FUN_1001dfbb3(param_1,(long)plVar5 + 0x31,0x20);
  }
  iVar3 = FUN_1005c67a3(uVar4,FUN_100503dd8,plVar5);
  if (iVar3 != 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x8220202;
      local_88._4_8_ = "Assertion failure";
      local_7c = 0x822;
      local_7a = "status == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_88,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_88._0_4_ = 0x4000100;
      local_88._4_4_ = iVar3;
      __os_log_impl(0x100000000,uVar7,0x10,"AMSCopySourcesForRestoreCompatibleWithAsync failed (%d)"
                    ,local_88,8);
    }
  }
  FUN_10017060f(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

