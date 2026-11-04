// name: FUN_10064adb4
// address: 10064adb4

void FUN_10064adb4(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_49;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_49 = '\0';
  pvVar3 = (void *)(*(code *)PTR__objc_msgSend_10082c770)
                             (*(undefined8 *)(param_1 + 0x20),
                              PTR_s_createIPodPrefsForObjectID__10088db50,param_2);
  iVar2 = FUN_100432ddc(param_2,pvVar3,&local_49);
  if (pvVar3 != (void *)0x0) {
    FUN_10022ad5e(pvVar3);
    operator_delete(pvVar3);
  }
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_48 = 0x8420202;
      local_3c = 0x400;
      local_44 = uVar5;
      local_3a = iVar2;
      __os_log_impl(0x100000000,uVar4,0x10,"failed to set prefs for device %{public}@ (%d)",
                    &local_48,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar2)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar4,(int)local_49);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

