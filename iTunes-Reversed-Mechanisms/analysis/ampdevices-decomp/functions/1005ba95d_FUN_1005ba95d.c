// name: FUN_1005ba95d
// address: 1005ba95d

long FUN_1005ba95d(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 local_68 [12];
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  undefined2 local_3c;
  undefined8 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = _AMDeviceGetInterfaceType();
  uVar3 = _CFStringGetTypeID();
  if (iVar2 == 2) {
    lVar4 = FUN_1005ba383();
    if (lVar4 != 0) goto LAB_1005baaaf;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 0x7a1569;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 == '\0') goto LAB_1005baaaf;
    uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(local_68,uVar3);
    local_4a = local_5c;
    uStack_44 = (undefined2)local_68._0_8_;
    uStack_42 = SUB86(local_68._0_8_,2);
    pcVar5 = "MobileDeviceCopyStringValue failed for %{public}@ (0x%08X) for device %{public}@ (%p)"
    ;
  }
  else {
    lVar4 = FUN_1005ba740(param_1,0,param_2,uVar3,&local_5c);
    if (lVar4 != 0) goto LAB_1005baaaf;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 0x7a1569;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 == '\0') goto LAB_1005baaaf;
    uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(local_68,uVar3);
    local_4a = local_5c;
    uStack_44 = (undefined2)local_68._0_8_;
    uStack_42 = SUB86(local_68._0_8_,2);
    pcVar5 = 
    "MobileDeviceCopyStringValueNoSession failed for %{public}@ (0x%08X) for device %{public}@ (%p)"
    ;
  }
  local_3c = 0x800;
  uStack_46 = 0x842;
  local_4c = 0x400;
  local_58 = 0x8420402;
  local_54 = param_2;
  local_3a = param_1;
  __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar5,&local_58,0x26);
  FUN_1001ab006(local_68);
  lVar4 = 0;
LAB_1005baaaf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

