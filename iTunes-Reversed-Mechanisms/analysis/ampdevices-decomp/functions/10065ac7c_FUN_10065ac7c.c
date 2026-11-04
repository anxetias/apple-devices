// name: FUN_10065ac7c
// address: 10065ac7c

void FUN_10065ac7c(long param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  int local_7c;
  undefined **local_78;
  int local_70;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
                    /* WARNING: Could not recover jumptable at 0x00010065ad3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
      return;
    }
    goto LAB_10065aede;
  }
  local_7c = 0;
  plVar3 = (long *)(*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientConnection,
                              PTR_s_softwareUpdateRestoreDelegateFor_10088dcb8,param_2);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "status != noErr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    local_78 = &PTR_FUN_100871c00;
    local_70 = param_2;
    local_58 = &local_78;
    local_7c = (**(code **)(*plVar3 + 0x10))
                         (plVar3,uVar1 & 1,(uVar1 & 2) >> 1,(uVar1 & 4) >> 2,&local_78);
    if (local_58 == &local_78) {
      lVar7 = 0x20;
LAB_10065ad8d:
      (**(code **)((long)*local_58 + lVar7))();
    }
    else {
      lVar7 = 0x28;
      if (local_58 != (undefined ***)0x0) goto LAB_10065ad8d;
    }
    if (local_7c != 0) {
      uVar4 = FUN_100642e20();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
        pcVar6 = (char *)_objc_retainAutoreleasedReturnValue(uVar5);
        local_48 = 0x8420202;
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,local_7c);
        local_44 = pcVar6;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "failed to check for software updates for device %{public}@ (%d)",&local_48,
                      0x12);
        (*(code *)PTR__objc_release_10082c7b0)(pcVar6);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
  }
  if (local_7c == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar7 + 0x10))(lVar7,uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_10065aede:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

