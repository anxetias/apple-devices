// name: FUN_1005b93eb
// address: 1005b93eb

int FUN_1005b93eb(undefined8 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  int iStack_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar10 = _AMDeviceConnect();
  uVar7 = uStack_42;
  uVar2 = uStack_44;
  uStack_44 = (undefined2)param_1;
  uVar4 = uStack_44;
  uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
  uVar8 = uStack_42;
  uStack_44 = uVar2;
  uStack_42 = uVar7;
  if (iVar10 != -0x80) {
    if (iVar10 == 0) {
      iVar11 = _AMDeviceValidatePairing(param_1);
      cVar9 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      uVar5 = uStack_44;
      uVar2 = uStack_46;
      iVar10 = iStack_4a;
      uStack_46 = (undefined2)((ulong)param_1 >> 0x20);
      uVar3 = uStack_46;
      uStack_44 = (undefined2)((ulong)param_1 >> 0x30);
      uVar6 = uStack_44;
      iStack_4a = (int)param_1;
      iVar1 = iStack_4a;
      iStack_4a = iVar10;
      uStack_46 = uVar2;
      uStack_44 = uVar5;
      if (iVar11 == 0) {
        iVar10 = 0;
        if (cVar9 != '\0') {
          uVar12 = _AMDeviceCopyDeviceIdentifier(param_1);
          FUN_1001aaedc(&local_30,uVar12);
          local_54 = (int)local_30;
          uStack_50 = (undefined2)((ulong)local_30 >> 0x20);
          uStack_4e = (undefined2)((ulong)local_30 >> 0x30);
          pcVar14 = "AMDeviceValidatePairing succeeded for device %{public}@ (%p)";
LAB_1005b9724:
          uStack_4c = 0x800;
          local_58 = 0x8420202;
          iVar10 = 0;
          iStack_4a = iVar1;
          uStack_46 = uVar3;
          uStack_44 = uVar6;
          __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar14,&local_58,0x16);
LAB_1005b9734:
          FUN_1001ab006(&local_30);
        }
      }
      else {
        if (cVar9 != '\0') {
          uVar12 = _AMDeviceCopyDeviceIdentifier(param_1);
          FUN_1001aaedc(&local_30,uVar12);
          local_58 = 0x4000302;
          uStack_50 = 0x842;
          uStack_4e = SUB82(local_30,0);
          uStack_4c = (undefined2)((ulong)local_30 >> 0x10);
          iStack_4a = (int)((ulong)local_30 >> 0x20);
          uStack_46 = 0x800;
          local_54 = iVar11;
          uStack_44 = uVar4;
          uStack_42 = uVar8;
          __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                        "AMDeviceValidatePairing failed (0x%08X) for device %{public}@ (%p)",
                        &local_58,0x1c);
          FUN_1001ab006(&local_30);
        }
        local_30 = &cf_ExtendedPairingErrors;
        local_38 = *(undefined8 *)PTR__kCFBooleanTrue_10082e038;
        lVar13 = FUN_1001713ff(DAT_1008c4d90,&local_30,&local_38,1,
                               PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                               PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar13 == 0) {
          uVar12 = FUN_1001cc310();
          cVar9 = _os_log_type_enabled(uVar12,0x10);
          if (cVar9 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            iStack_4a = 0x7ef177;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        iVar10 = _AMDevicePairWithOptions(param_1,lVar13);
        FUN_10017060f(lVar13);
        if (iVar10 == 0) {
          cVar9 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
          iVar10 = 0;
          if (cVar9 != '\0') {
            uVar12 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(&local_30,uVar12);
            local_54 = (int)local_30;
            uStack_50 = (undefined2)((ulong)local_30 >> 0x20);
            uStack_4e = (undefined2)((ulong)local_30 >> 0x30);
            pcVar14 = "AMDevicePairWithOptions succeeded for device %{public}@ (%p)";
            goto LAB_1005b9724;
          }
        }
        else {
          cVar9 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar9 != '\0') {
            uVar12 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(&local_30,uVar12);
            local_58 = 0x4000302;
            uStack_50 = 0x842;
            uStack_4e = SUB82(local_30,0);
            uStack_4c = (undefined2)((ulong)local_30 >> 0x10);
            iStack_4a = (int)((ulong)local_30 >> 0x20);
            uStack_46 = 0x800;
            local_54 = iVar10;
            uStack_44 = uVar4;
            uStack_42 = uVar8;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDevicePairWithOptions failed (0x%08X) for device %{public}@ (%p)"
                                ,&local_58,0x1c);
            goto LAB_1005b9734;
          }
        }
      }
      _AMDeviceDisconnect(param_1);
      goto LAB_1005b9744;
    }
    uVar12 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar12,0x10);
    if (cVar9 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x400;
      iStack_4a = iVar10;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  cVar9 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
  if (cVar9 != '\0') {
    uVar12 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(&local_30,uVar12);
    local_58 = 0x4000302;
    uStack_50 = 0x842;
    uStack_4e = SUB82(local_30,0);
    uStack_4c = (undefined2)((ulong)local_30 >> 0x10);
    iStack_4a = (int)((ulong)local_30 >> 0x20);
    uStack_46 = 0x800;
    local_54 = iVar10;
    uStack_44 = uVar4;
    uStack_42 = uVar8;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                        "AMDeviceConnect failed (0x%08X) for device %{public}@ (%p)",&local_58,0x1c)
    ;
    FUN_1001ab006(&local_30);
  }
LAB_1005b9744:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

