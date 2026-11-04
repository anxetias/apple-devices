// name: FUN_1005bf047
// address: 1005bf047

int FUN_1005bf047(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_60 [8];
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  int iStack_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ef144;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x17ffffd9;
    goto LAB_1005bf1b5;
  }
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != 0) goto LAB_1005bf1b5;
  iVar2 = FUN_1005b8e27(param_1,0,&cf_ActivationStateAcknowledged);
  if ((iVar2 != -0x17ffffe8) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ef109;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_3 == 0) {
LAB_1005bf127:
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_100166547(DAT_1008c4d90,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140,
                          &cf_ActivationResponseHeaders,param_3,0);
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        iStack_4a = 0x7ef177;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005bf127;
    }
  }
  iVar2 = _AMDeviceActivateWithOptions(param_1,param_2,lVar4);
  if (iVar2 == -0x80) {
LAB_1005bf162:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_60,uVar3);
      local_58 = 0x4000302;
      uStack_50 = 0x842;
      uStack_4e = local_60._0_2_;
      uStack_4c = local_60._2_2_;
      iStack_4a = local_60._4_4_;
      uStack_46 = 0x800;
      uStack_44 = (undefined2)param_1;
      uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
      local_54 = iVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceActivateWithOptions failed (0x%08X) for device %{public}@ (%p)",
                          &local_58,0x1c);
      FUN_1001ab006(local_60);
    }
  }
  else if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x400;
      iStack_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005bf162;
  }
  FUN_10017060f(lVar4);
  FUN_1005b8595(param_1);
LAB_1005bf1b5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

