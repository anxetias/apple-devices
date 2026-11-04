// name: FUN_1005b98e2
// address: 1005b98e2

int FUN_1005b98e2(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_70 [8];
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  int local_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined6 uStack_52;
  undefined2 local_4c;
  undefined8 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = 0x7eec65;
      uStack_56 = 1;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005b99b3;
  }
  *param_4 = 0;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != 0) goto LAB_1005b99b3;
  iVar2 = _AMDeviceSecureStartService(param_1,param_2,param_3,param_4);
  if (iVar2 == -0x80) {
LAB_1005b9968:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_70,uVar3);
      local_68 = 0x8420402;
      local_5c = 0x400;
      uStack_56 = 0x842;
      uStack_54 = local_70._0_2_;
      uStack_52 = local_70._2_6_;
      local_4c = 0x800;
      local_64 = param_2;
      local_5a = iVar2;
      local_4a = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceSecureStartService failed for %{public}@ (0x%08X) for device %{public}@ (%p)"
                          ,&local_68,0x26);
      FUN_1001ab006(local_70);
    }
  }
  else if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x400;
      local_5a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_68,0x12);
    }
    goto LAB_1005b9968;
  }
  FUN_1005b8595(param_1);
LAB_1005b99b3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

