// name: FUN_1005c21bf
// address: 1005c21bf

int FUN_1005c21bf(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,long *param_6,long param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
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
  local_70 = param_5;
  local_68 = param_3;
  if (param_7 == 0 && param_6 != (long *)0x0) {
    cVar1 = FUN_1001ee056();
    if (cVar1 == '\0') {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        iStack_4a = 0x7ef3af;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else if (param_6 == (long *)0x0) goto LAB_1005c2249;
  *param_6 = 0;
LAB_1005c2249:
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ef384;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1005b98e2(param_1,&cf_com_apple_mobile_installation_proxy,0,&local_60);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        lVar4 = FUN_10016ff43(0,param_2);
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            iStack_4a = 0x7ef39a;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x2b;
        }
        else {
          if (param_6 != (long *)0x0) {
            if (param_7 == 0) {
              *param_6 = local_60;
            }
            else {
              FUN_1001e9de0();
              *param_6 = local_60;
              FUN_1001e9eb9(param_7);
            }
          }
          pcVar6 = FUN_1005c219a;
          if (param_4 != (code *)0x0) {
            pcVar6 = param_4;
          }
          iVar3 = _AMDeviceSecureInstallApplication(local_60,0,lVar4,local_68,pcVar6,local_70);
          iVar2 = 0;
          if ((iVar3 != 0) &&
             (cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), iVar2 = iVar3,
             cVar1 != '\0')) {
            uVar5 = _AMDeviceCopyDeviceIdentifier(param_1);
            FUN_1001aaedc(local_78,uVar5);
            local_58 = 0x4000302;
            uStack_50 = 0x842;
            uStack_4e = local_78._0_2_;
            uStack_4c = local_78._2_2_;
            iStack_4a = local_78._4_4_;
            uStack_46 = 0x800;
            uStack_44 = (undefined2)param_1;
            uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
            local_54 = iVar3;
            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                "AMDeviceSecureInstallApplication failed (0x%08X) for device %{public}@ (%p)"
                                ,&local_58,0x1c);
            FUN_1001ab006(local_78);
          }
        }
        if (param_6 != (long *)0x0) {
          if (param_7 == 0) {
            *param_6 = 0;
          }
          else {
            FUN_1001e9de0();
            *param_6 = 0;
            FUN_1001e9eb9(param_7);
          }
        }
        if (local_60 != 0) {
          _AMDServiceConnectionInvalidate();
          FUN_10017060f(local_60);
        }
        FUN_10017060f(lVar4);
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x400;
          iStack_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

