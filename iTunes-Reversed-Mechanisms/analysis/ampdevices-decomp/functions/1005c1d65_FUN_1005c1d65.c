// name: FUN_1005c1d65
// address: 1005c1d65

int FUN_1005c1d65(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5,long *param_6,long *param_7,long param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
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
  local_68 = 0;
  local_60 = 0;
  local_80 = param_5;
  local_78 = param_3;
  if ((param_8 == 0 && (param_6 != (long *)0x0 || param_7 != (long *)0x0)) &&
     (cVar1 = FUN_1001ee056(), cVar1 == '\0')) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ef31c;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_6 != (long *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ef384;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1005c1860(param_1,0,0,&local_68,&local_60);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (param_8 != 0) {
          FUN_1001e9de0(param_8);
        }
        if (param_6 != (long *)0x0) {
          *param_6 = local_68;
        }
        if (param_7 != (long *)0x0) {
          *param_7 = local_60;
        }
        if (param_8 != 0) {
          FUN_1001e9eb9(param_8);
        }
        local_70 = FUN_10016ff43(0,param_2);
        if (local_70 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            iStack_4a = 0x7ef39a;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x2b;
        }
        else {
          pcVar4 = FUN_1005c219a;
          if (param_4 != (code *)0x0) {
            pcVar4 = param_4;
          }
          iVar2 = _AMDeviceSecureTransferPath(local_60,param_1,local_70,local_78,pcVar4,local_80);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
            if (cVar1 != '\0') {
              uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
              FUN_1001aaedc(local_88,uVar3);
              local_58 = 0x4000302;
              uStack_50 = 0x842;
              uStack_4e = local_88._0_2_;
              uStack_4c = local_88._2_2_;
              iStack_4a = local_88._4_4_;
              uStack_46 = 0x800;
              uStack_44 = (undefined2)param_1;
              uStack_42 = (undefined6)((ulong)param_1 >> 0x10);
              local_54 = iVar2;
              __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                  "AMDeviceSecureTransferPath failed (0x%08X) for device %{public}@ (%p)"
                                  ,&local_58,0x1c);
              FUN_1001ab006(local_88);
            }
          }
        }
        if (param_8 != 0) {
          FUN_1001e9de0();
        }
        if (param_6 != (long *)0x0) {
          *param_6 = 0;
        }
        if (param_7 != (long *)0x0) {
          *param_7 = 0;
        }
        if (param_8 != 0) {
          FUN_1001e9eb9();
        }
        if (local_60 != 0) {
          _AFCConnectionInvalidate();
          FUN_10017060f(local_60);
        }
        if (local_68 != 0) {
          _AMDServiceConnectionInvalidate();
          FUN_10017060f(local_68);
        }
        FUN_10017060f(local_70);
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

