// name: FUN_1005c3543
// address: 1005c3543

undefined1 FUN_1005c3543(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
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
  local_68 = 0;
  local_60 = 0;
  local_78 = param_2;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ef413;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = FUN_1005b98e2(param_1,&cf_com_apple_mobile_installation_proxy,0,&local_60);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        lVar4 = FUN_100170716(DAT_1008c4d90,&local_78,1,PTR__kCFTypeArrayCallBacks_10082e130);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            iStack_4a = 0x7ef428;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
LAB_1005c36b5:
          uVar1 = 0;
        }
        else {
          iVar3 = _AMDeviceSecureCheckCapabilitiesMatch(local_60,0,lVar4,0,&local_68);
          if (iVar3 == -0x80) {
LAB_1005c369c:
            cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
            if (cVar2 != '\0') {
              uVar5 = _AMDeviceCopyDeviceIdentifier(param_1);
              FUN_1001aaedc(local_70,uVar5);
              local_58 = 0x4000302;
              uStack_50 = 0x842;
              uStack_4e = local_70._0_2_;
              uStack_4c = local_70._2_2_;
              iStack_4a = local_70._4_4_;
              uStack_46 = 0x800;
              uStack_44 = (undefined2)param_1;
              uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
              local_54 = iVar3;
              __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                  "AMDeviceSecureCheckCapabilitiesMatch failed (0x%08X) for device %{public}@ (%p)"
                                  ,&local_58,0x1c);
              FUN_1001ab006(local_70);
            }
            goto LAB_1005c36b5;
          }
          if (iVar3 != 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              uStack_4c = 0x400;
              iStack_4a = iVar3;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_1005c369c;
          }
          uVar1 = FUN_100167dd2(local_68,&cf_CapabilitiesMatch,0);
        }
        FUN_10017060f(local_60);
        FUN_10017060f(local_68);
        FUN_10017060f(lVar4);
        goto LAB_1005c36d2;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x400;
        iStack_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  uVar1 = 0;
LAB_1005c36d2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

