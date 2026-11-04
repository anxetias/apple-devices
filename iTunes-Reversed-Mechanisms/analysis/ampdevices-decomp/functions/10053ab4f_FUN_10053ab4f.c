// name: FUN_10053ab4f
// address: 10053ab4f

void FUN_10053ab4f(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int *param_5)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x7168) == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->mobileDeviceRef != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_54 = *(char **)(param_1 + 0x152c8);
      local_58 = 0x8420102;
      __os_log_impl(0x100000000,uVar5,1,"activation> activating device %{public}@",&local_58,0xc);
    }
    if (param_3 == 0) {
      iVar3 = FUN_1005bedca(*(undefined8 *)(param_1 + 0x7168),param_2);
    }
    else {
      iVar3 = FUN_1005bf047(*(undefined8 *)(param_1 + 0x7168),param_3,param_4);
    }
    if (iVar3 == 0) {
      puVar1 = (uint *)(param_1 + 0x151f8);
      iVar4 = FUN_1005be428(*(undefined8 *)(param_1 + 0x7168),puVar1,(char *)(param_1 + 0x151fc),
                            param_1 + 0x15200);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      iVar3 = 0;
      if (iVar4 != -0x17fffff8) {
        iVar3 = iVar4;
      }
      if (*(char *)(param_1 + 0x151fc) != '\0') {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "handlerData->activationAcknowledged == false";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if ((*puVar1 < 10) && ((0x30cU >> (*puVar1 & 0x1f) & 1) != 0)) {
        FUN_1005bbb13(*(undefined8 *)(param_1 + 0x7168),0,&cf_iTunesHasConnected,
                      *(undefined8 *)PTR__kCFBooleanTrue_10082e038);
        FUN_100500aa3(param_1,0,0,0x69706463);
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar3 = 0x475;
        if (cVar2 != '\0') {
          local_58 = 0x4000100;
          local_54 = (char *)CONCAT44(local_54._4_4_,*puVar1);
          __os_log_impl(0x100000000,uVar5,0x10,
                        "activation> unexpected activation state %d after activating device",
                        &local_58,8);
        }
      }
      cVar2 = FUN_1002d827e(param_1);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x6ae7) = 1;
        FUN_1004ef324(param_1,4,0);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
        goto LAB_10053ade2;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "localAmdError == kAMDSuccess";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_54 = *(char **)(param_1 + 0x152c8);
      local_58 = 0x8420202;
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_impl(0x100000000,uVar5,0x10,
                    "activation> activation failed for device %{public}@ (0x%08X)",&local_58,0x12);
    }
  }
LAB_10053ade2:
  if (param_5 != (int *)0x0) {
    *param_5 = iVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

