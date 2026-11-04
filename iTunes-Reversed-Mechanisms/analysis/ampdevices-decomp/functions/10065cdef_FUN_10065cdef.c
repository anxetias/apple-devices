// name: FUN_10065cdef
// address: 10065cdef

void FUN_10065cdef(long param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined8 local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,
                     PTR_s_batteryInfoForObjectID__10088dd68,param_2);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_48 = 0x8420102;
      local_44 = uVar5;
      __os_log_impl(0x100000000,uVar3,0x10,"failed to fetch battery info for device %{public}@",
                    &local_48,0xc);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar1 = *(long *)(param_1 + 0x28);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xfffffffc);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar4,0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

