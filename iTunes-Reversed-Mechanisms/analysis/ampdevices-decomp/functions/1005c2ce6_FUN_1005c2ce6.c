// name: FUN_1005c2ce6
// address: 1005c2ce6

int FUN_1005c2ce6(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4,
                 code *param_5,undefined8 param_6,long *param_7,long param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_80;
  undefined1 local_78 [12];
  undefined4 local_6c;
  long local_68;
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
  local_80 = 0;
  local_68 = 0;
  local_6c = param_3;
  if (param_8 == 0 && param_7 != (long *)0x0) {
    cVar1 = FUN_1001ee056();
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        iStack_4a = 0x7ef3af;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1005c2d78:
    *param_7 = 0;
  }
  else if (param_7 != (long *)0x0) goto LAB_1005c2d78;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ae7de;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005c3126;
  }
  local_60 = param_1;
  iVar2 = FUN_1005b7cbc(param_1);
  if (iVar2 == -0x80) goto LAB_1005c3126;
  if (iVar2 == 0) {
    if ((char)local_6c == '\0') {
LAB_1005c2de7:
      iVar2 = FUN_1005b98e2(local_60,&cf_com_apple_mobile_installation_proxy,0,&local_68);
      if (iVar2 == -0x80) goto LAB_1005c3126;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        goto joined_r0x0001005c2e8a;
      }
      if (param_7 != (long *)0x0) {
        if (param_8 == 0) {
          *param_7 = local_68;
        }
        else {
          FUN_1001e9de0();
          *param_7 = local_68;
          FUN_1001e9eb9(param_8);
        }
      }
      pcVar4 = FUN_1005c219a;
      if (param_5 != (code *)0x0) {
        pcVar4 = param_5;
      }
      iVar2 = _AMDeviceSecureRemoveApplicationArchive(local_68,0,param_2,param_4,pcVar4,param_6);
      if ((iVar2 != 0) &&
         (cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar1 != '\0')) {
        uVar3 = _AMDeviceCopyDeviceIdentifier(local_60);
        FUN_1001aaedc(local_78,uVar3);
        local_58 = 0x4000302;
        uStack_50 = 0x842;
        uStack_4e = (undefined2)local_78._0_8_;
        uStack_4c = SUB82(local_78._0_8_,2);
        iStack_4a = SUB84(local_78._0_8_,4);
        uStack_46 = 0x800;
        uStack_44 = (undefined2)local_60;
        uStack_42 = (undefined6)((ulong)local_60 >> 0x10);
        local_54 = iVar2;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AMDeviceSecureRemoveApplicationArchive failed (0x%08X) for device %{public}@ (%p)"
                            ,&local_58,0x1c);
        FUN_1001ab006(local_78);
      }
      if ((char)local_6c == '\0') {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = _AMDeviceLookupApplicationArchives(local_60,0,&local_80);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          cVar1 = FUN_100171439(local_80,param_2);
          if (cVar1 != '\0') goto LAB_1005c2de7;
          iVar2 = 0;
          goto LAB_1005c30d1;
        }
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
        uVar3 = _AMDeviceCopyDeviceIdentifier(local_60);
        FUN_1001aaedc(local_78,uVar3);
        local_58 = 0x4000302;
        uStack_50 = 0x842;
        uStack_4e = (undefined2)local_78._0_8_;
        uStack_4c = SUB82(local_78._0_8_,2);
        iStack_4a = SUB84(local_78._0_8_,4);
        uStack_46 = 0x800;
        uStack_44 = (undefined2)local_60;
        uStack_42 = (undefined6)((ulong)local_60 >> 0x10);
        local_54 = iVar2;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AMDeviceLookupApplicationArchives failed (0x%08X) for device %{public}@ (%p)"
                            ,&local_58,0x1c);
        FUN_1001ab006(local_78);
      }
    }
LAB_1005c30d1:
    if (param_7 != (long *)0x0) {
      if (param_8 == 0) {
        *param_7 = 0;
      }
      else {
        FUN_1001e9de0();
        *param_7 = 0;
        FUN_1001e9eb9(param_8);
      }
    }
    if (local_68 != 0) {
      _AMDServiceConnectionInvalidate();
      FUN_10017060f(local_68);
    }
    FUN_1005b8595(local_60);
    FUN_10017060f(local_80);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
joined_r0x0001005c2e8a:
    if (cVar1 != '\0') {
      uStack_4e = 0;
      uStack_50 = 1;
      local_54 = 0x7a0a90;
      uStack_4c = 0x400;
      local_58 = 0x8220202;
      iStack_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_1005c3126:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

