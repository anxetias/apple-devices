// name: FUN_1005b81c3
// address: 1005b81c3

int FUN_1005b81c3(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  int iStack_3a;
  undefined2 local_36;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = _AMDeviceConnect();
  if (iVar2 == -0x17ffffd8) goto LAB_1005b83f9;
  if (iVar2 != 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_50,uVar4);
      local_48 = 0x4000302;
      uStack_40 = 0x842;
      uStack_3e = local_50._0_2_;
      uStack_3c = local_50._2_2_;
      iStack_3a = local_50._4_4_;
      local_36 = 0x800;
      local_44 = iVar2;
      local_34 = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceConnect failed (0x%08X) for device %{public}@ (%p)",&local_48,
                          0x1c);
      FUN_1001ab006(local_50);
    }
    goto LAB_1005b83f9;
  }
  iVar3 = _AMDeviceValidatePairing(param_1);
  if ((iVar3 + 0x17ffffe5U < 0xb) && ((0x403U >> (iVar3 + 0x17ffffe5U & 0x1f) & 1) != 0)) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 != '\0') {
      uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_50,uVar4);
      local_48 = 0x4000302;
      uStack_40 = 0x842;
      uStack_3e = local_50._0_2_;
      uStack_3c = local_50._2_2_;
      iStack_3a = local_50._4_4_;
      local_36 = 0x800;
      local_44 = iVar3;
      local_34 = param_1;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "AMDeviceValidatePairing failed (0x%08X) for device %{public}@ (%p), returning kAMDeviceNotPairedErr"
                    ,&local_48,0x1c);
      FUN_1001ab006(local_50);
    }
    iVar3 = 0x479;
  }
  else {
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar2 = _AMDeviceStartSession(param_1);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) goto LAB_1005b83f9;
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3e = 0;
            uStack_3c = 0x400;
            iStack_3a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        if (cVar1 != '\0') {
          uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
          FUN_1001aaedc(local_50,uVar4);
          local_48 = 0x4000302;
          uStack_40 = 0x842;
          uStack_3e = local_50._0_2_;
          uStack_3c = local_50._2_2_;
          iStack_3a = local_50._4_4_;
          local_36 = 0x800;
          local_44 = iVar2;
          local_34 = param_1;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDeviceStartSession failed (0x%08X) for device %{public}@ (%p)",
                              &local_48,0x1c);
          FUN_1001ab006(local_50);
        }
        iVar3 = 0x479;
        if ((iVar2 != -0x17ffffdb) && (iVar2 != -0x17ffffa4)) {
          iVar3 = iVar2;
        }
        goto LAB_1005b83ee;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3e = 0;
        uStack_3c = 0x400;
        iStack_3a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_50,uVar4);
      local_48 = 0x4000302;
      uStack_40 = 0x842;
      uStack_3e = local_50._0_2_;
      uStack_3c = local_50._2_2_;
      iStack_3a = local_50._4_4_;
      local_36 = 0x800;
      local_44 = iVar3;
      local_34 = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceValidatePairing failed (0x%08X) for device %{public}@ (%p)",
                          &local_48,0x1c);
      FUN_1001ab006(local_50);
    }
    if (iVar3 == 0) {
      iVar2 = 0;
      goto LAB_1005b83f9;
    }
  }
LAB_1005b83ee:
  iVar2 = iVar3;
  _AMDeviceDisconnect(param_1);
LAB_1005b83f9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

