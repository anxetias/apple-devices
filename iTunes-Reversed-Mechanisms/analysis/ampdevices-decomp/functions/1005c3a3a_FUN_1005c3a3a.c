// name: FUN_1005c3a3a
// address: 1005c3a3a

int FUN_1005c3a3a(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_68 [8];
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
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if (param_4 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar4 = "results != __null";
LAB_1005c3c4b:
      uStack_4c = 0x822;
      uStack_4e = 0;
      uStack_50 = 1;
      local_54 = 0x7a0a90;
      local_58 = 0x8220202;
      iStack_4a = (int)pcVar4;
      uStack_46 = (undefined2)((ulong)pcVar4 >> 0x20);
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_4 = 0;
    if (param_2 != 0) {
      iVar2 = FUN_1005b98e2(param_1,&cf_com_apple_mobile_installation_proxy,0,&local_60);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = _AMDeviceSecureCheckCapabilitiesMatch(local_60,0,param_2,param_3,param_4);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) goto LAB_1005c3bf9;
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
          }
          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
          if (cVar1 != '\0') {
            uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(local_68,uVar3);
            local_58 = 0x4000302;
            uStack_50 = 0x842;
            uStack_4e = local_68._0_2_;
            uStack_4c = local_68._2_2_;
            iStack_4a = local_68._4_4_;
            uStack_46 = 0x800;
            uStack_44 = (undefined2)param_1;
            uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
            local_54 = iVar2;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDeviceSecureCheckCapabilitiesMatch failed (0x%08X) for device %{public}@ (%p)"
                                ,&local_58,0x1c);
            FUN_1001ab006(local_68);
          }
        }
        else {
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
        }
      }
LAB_1005c3bf9:
      FUN_10017060f(local_60);
      goto LAB_1005c3c02;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      pcVar4 = "capabilities != __null";
      goto LAB_1005c3c4b;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1005c3c02:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

