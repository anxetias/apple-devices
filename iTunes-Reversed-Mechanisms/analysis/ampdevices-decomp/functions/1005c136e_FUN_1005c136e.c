// name: FUN_1005c136e
// address: 1005c136e

int FUN_1005c136e(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_80 [8];
  undefined4 local_78;
  int local_74;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 local_6c;
  int local_6a;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined6 uStack_62;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = *(undefined8 *)PTR__kCFBundleIdentifierKey_10082e048;
  local_50 = *(undefined8 *)PTR__kCFBundleNameKey_10082e050;
  local_48 = &cf_CFBundleDisplayName;
  local_40 = &cf_UIFileSharingEnabled;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_100170716(DAT_1008c4d90,&local_58,4,PTR__kCFTypeArrayCallBacks_10082e130);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_78 = 0x8220202;
          local_74 = 0x7a0a90;
          uStack_70 = 1;
          uStack_6e = 0;
          local_6c = 0x822;
          local_6a = 0x7f01b0;
          uStack_66 = 1;
          uStack_64 = 0;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = FUN_1005c6bd5(param_1,param_2,&cf_UIFileSharingEnabled,lVar3,param_3);
      FUN_1005b8595(param_1);
      FUN_10017060f(lVar3);
      goto LAB_1005c148a;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      local_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6e = 0;
      local_6c = 0x400;
      local_6a = iVar2;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_78,0x12);
    }
  }
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
  if (cVar1 != '\0') {
    uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(local_80,uVar4);
    local_78 = 0x4000302;
    uStack_70 = 0x842;
    uStack_6e = local_80._0_2_;
    local_6c = local_80._2_2_;
    local_6a = local_80._4_4_;
    uStack_66 = 0x800;
    uStack_64 = (undefined2)param_1;
    uStack_62 = (undefined6)((ulong)param_1 >> 0x10);
    local_74 = iVar2;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                        "failed to look up file sharing applications (0x%08X) for device %{public}@ (%p)"
                        ,&local_78,0x1c);
    FUN_1001ab006(local_80);
  }
LAB_1005c148a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

