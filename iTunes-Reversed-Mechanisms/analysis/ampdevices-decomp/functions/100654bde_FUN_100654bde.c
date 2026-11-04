// name: FUN_100654bde
// address: 100654bde

void FUN_100654bde(long param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = FUN_1004de449(param_2);
  cVar2 = FUN_1001fc6d2(uVar3,uVar4);
  if (cVar2 == '\0') {
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      local_38 = 0x8420102;
      local_34 = uVar3;
      __os_log_impl(0x100000000,uVar4,0x10,
                    "failed to set backup password in keychain for device %{public}@",&local_38,0xc)
      ;
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    lVar1 = *(long *)(param_1 + 0x30);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xffffffff);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
                    /* WARNING: Could not recover jumptable at 0x000100654c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

