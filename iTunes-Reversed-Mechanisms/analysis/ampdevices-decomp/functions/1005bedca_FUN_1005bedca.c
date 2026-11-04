// name: FUN_1005bedca
// address: 1005bedca

int FUN_1005bedca(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  int iStack_3a;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined6 uStack_32;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      iStack_3a = 0x7ef0ee;
      uStack_36 = 1;
      uStack_34 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x17ffffd9;
    goto LAB_1005beec6;
  }
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != 0) goto LAB_1005beec6;
  iVar2 = FUN_1005b8e27(param_1,0,&cf_ActivationStateAcknowledged);
  if ((iVar2 != -0x17ffffe8) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      iStack_3a = 0x7ef109;
      uStack_36 = 1;
      uStack_34 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = _AMDeviceActivate(param_1,param_2);
  if (iVar2 == -0x80) {
LAB_1005bee7b:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_50,uVar3);
      local_48 = 0x4000302;
      uStack_40 = 0x842;
      uStack_3e = local_50._0_2_;
      uStack_3c = local_50._2_2_;
      iStack_3a = local_50._4_4_;
      uStack_36 = 0x800;
      uStack_34 = (undefined2)param_1;
      uStack_32 = (undefined6)((ulong)param_1 >> 0x10);
      local_44 = iVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceActivate failed (0x%08X) for device %{public}@ (%p)",&local_48,
                          0x1c);
      FUN_1001ab006(local_50);
    }
  }
  else if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x400;
      iStack_3a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_1005bee7b;
  }
  FUN_1005b8595(param_1);
LAB_1005beec6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

