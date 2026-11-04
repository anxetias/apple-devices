// name: FUN_1005c3217
// address: 1005c3217

int FUN_1005c3217(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
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
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7eeb85;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != 0) {
      lVar3 = FUN_10017076e(param_2);
      if (lVar3 < 1) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_1005b7cbc(param_1);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            lVar6 = 0;
            iVar2 = 0;
            do {
              lVar4 = FUN_100170853(param_2,lVar6);
              if (lVar4 == 0) {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = 0x7a0a90;
                  uStack_50 = 1;
                  uStack_4e = 0;
                  uStack_4c = 0x822;
                  iStack_4a = 0x7ae86a;
                  uStack_46 = 1;
                  uStack_44 = 0;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                iVar2 = _AMDeviceInstallProvisioningProfile(param_1,lVar4);
                if (iVar2 == 0) {
                  iVar2 = 0;
                }
                else {
                  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
                  if (cVar1 != '\0') {
                    uVar5 = _AMDeviceCopyDeviceIdentifier(param_1);
                    FUN_1001aaedc(local_60,uVar5);
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
                                        "AMDeviceInstallProvisioningProfile failed (0x%08X) for device %{public}@ (%p)"
                                        ,&local_58,0x1c);
                    FUN_1001ab006(local_60);
                  }
                }
              }
              lVar6 = lVar6 + 1;
            } while (lVar3 != lVar6);
            FUN_1005b8595(param_1);
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
      goto LAB_1005c3404;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      iStack_4a = 0x7ef3fc;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_1005c3404:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

