// name: FUN_10064dde0
// address: 10064dde0

void FUN_10064dde0(long param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(ulong *)(param_1 + 0x38) & 2) == 0) {
    uVar6 = (uint)*(ulong *)(param_1 + 0x38);
    iVar3 = FUN_1004e3435(param_2,uVar6 & 1,(uVar6 & 4) >> 2);
  }
  else {
    iVar3 = FUN_1004e3548(param_2);
  }
  uVar4 = FUN_100642e20();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (iVar3 == 0) {
    cVar2 = _os_log_type_enabled(uVar4,1);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_3a = *(int *)(param_1 + 0x38);
      local_48 = 0x8420202;
      local_3c = 0x400;
      local_44 = uVar5;
      __os_log_impl(0x100000000,uVar4,1,"started sync for device %{public}@, options = 0x%08x",
                    &local_48,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_addSyncProgress_withReply_forObj_10088dc08,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30),param_2);
  }
  else {
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_48 = 0x8420202;
      local_3c = 0x400;
      local_44 = uVar5;
      local_3a = iVar3;
      __os_log_impl(0x100000000,uVar4,0x10,"failed to start sync for device %{public}@ (%d)",
                    &local_48,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    lVar1 = *(long *)(param_1 + 0x30);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar3)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

