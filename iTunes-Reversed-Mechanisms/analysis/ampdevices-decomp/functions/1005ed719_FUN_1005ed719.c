// name: FUN_1005ed719
// address: 1005ed719

undefined1 FUN_1005ed719(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((((uint)(param_2 != 0) - (uint)(param_1 == 0)) + 2) - (uint)(param_3 == 0) == 1) {
    plVar3 = (long *)FUN_10039a28c();
    uVar5 = 0;
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,0,0,0,0);
    if (cVar1 != '\0') goto LAB_1005ed7cd;
    if (param_1 == 0) {
      if (param_2 == 0) {
        iVar2 = _AMRecoveryModeDeviceGetLocationID(param_3);
      }
      else {
        iVar2 = _AMDFUModeDeviceGetLocationID(param_2);
      }
    }
    else {
      iVar2 = _AMDeviceUSBLocationID(param_1);
    }
    if (iVar2 != 0) {
      uVar5 = 0;
      goto LAB_1005ed7cd;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "locationID != 0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    uVar5 = 1;
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "((UInt32)(deviceRef != nullptr) + (UInt32)(dfuDeviceRef != nullptr) + (UInt32)(recoveryDeviceRef != nullptr)) == 1"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1005ed7cd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

