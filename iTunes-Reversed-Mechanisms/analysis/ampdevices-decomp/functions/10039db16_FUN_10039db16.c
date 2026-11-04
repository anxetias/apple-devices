// name: FUN_10039db16
// address: 10039db16

undefined8 FUN_10039db16(long param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 - 1U < 2) {
    cVar3 = FUN_100247cdd(param_3);
    if (cVar3 == '\0') {
      plVar1 = *(long **)(param_1 + 8);
      if ((plVar1 != (long *)0x0) && (plVar2 = *(long **)(param_1 + 0x10), plVar2 != (long *)0x0)) {
        if (param_2 == 1) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    /* WARNING: Could not recover jumptable at 0x00010039dc31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,1,param_3,param_4);
            return uVar4;
          }
        }
        else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    /* WARNING: Could not recover jumptable at 0x00010039dca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,2,param_3,param_4,*(code **)(*plVar2 + 0x30))
          ;
          return uVar4;
        }
        goto LAB_10039dcf8;
      }
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_3a = 
        "(mIPodUpdaterController != nullptr) && (mMobileDeviceUpdaterController != nullptr)";
        goto LAB_10039dcce;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_3a = "IsSoftwareRestoreOnlyDeviceClass(deviceClass) == false";
        goto LAB_10039dcce;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = 
      "(updateRestoreDeviceClass == kUpdateRestoreDeviceClassTraditionalIPod) || (updateRestoreDeviceClass == kUpdateRestoreDeviceClassMobileDevice)"
      ;
LAB_10039dcce:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0xffffffce;
  }
LAB_10039dcf8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

