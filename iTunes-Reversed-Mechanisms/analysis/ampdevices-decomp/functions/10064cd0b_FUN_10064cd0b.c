// name: FUN_10064cd0b
// address: 10064cd0b

void FUN_10064cd0b(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_1d8 [400];
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100502206(param_2);
  iVar2 = FUN_1003185d5(uVar3,0,local_1d8,0);
  if (iVar2 == 0) {
    uVar3 = 0;
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientConnection,
                       PTR_s_totalsForDeviceTotals__10088dbf8,local_1d8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  else {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_48 = 0x8420202;
      local_3c = 0x400;
      local_44 = uVar4;
      local_3a = iVar2;
      __os_log_impl(0x100000000,uVar3,0x10,"failed to get totals for device %{public}@ (%d)",
                    &local_48,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar4 = 0;
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar2)
    ;
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar4,uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

