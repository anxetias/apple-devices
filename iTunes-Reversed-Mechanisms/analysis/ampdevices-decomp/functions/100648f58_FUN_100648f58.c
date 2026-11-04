// name: FUN_100648f58
// address: 100648f58

void FUN_100648f58(long param_1)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),
                     PTR_s_objectIDForDevice_onlyBootedOSMo_10088dac0,
                     *(undefined8 *)(param_1 + 0x28),(int)*(char *)(param_1 + 0x40),1);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_1 + 0x41);
    uVar5 = FUN_100642e20();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') {
      if (cVar3 != '\0') {
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_38 = 0x8420102;
        local_34 = uVar6;
        __os_log_impl(0x100000000,uVar5,0x10,"device %{public}@ not found",&local_38,0xc);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      lVar2 = *(long *)(param_1 + 0x38);
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         0x45f);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    else {
      if (cVar3 != '\0') {
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_38 = 0x8420102;
        local_34 = uVar6;
        __os_log_impl(0x100000000,uVar5,0x10,"device %{public}@ not found, adding request to queue",
                      &local_38,0xc);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (DAT_10070f3d0,*(undefined8 *)(param_1 + 0x20),
                 PTR_s_enqueueRequestBlock_forDevice_wi_10088dae8,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x30) + 0x10);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
                    /* WARNING: Could not recover jumptable at 0x000100648fc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (*(long *)(param_1 + 0x30),iVar4,*(long *)PTR____stack_chk_guard_10082cb58,
                 UNRECOVERED_JUMPTABLE);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

