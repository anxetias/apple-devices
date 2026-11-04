// name: FUN_100654615
// address: 100654615

void FUN_100654615(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_38;
  long local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKey__10088be28,
                     *(undefined8 *)PTR__AMPDeviceBackupTargetIdentifierKey_10082b7b8);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = local_38 & 0xffff0000;
      __os_log_impl(0x100000000,uVar3,0x10,"missing target identifier in backup",&local_38,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar1 = *(long *)(param_1 + 0x28);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xffffffce);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  else {
    cVar2 = FUN_1001fc26b(lVar4);
    if (cVar2 == '\0') {
      uVar3 = FUN_100642e20();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8420102;
        local_34 = lVar4;
        __os_log_impl(0x100000000,uVar3,0x10,
                      "failed to copy backup password from keychain for device %{public}@",&local_38
                      ,0xc);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      lVar1 = *(long *)(param_1 + 0x28);
      uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         0xffffffff);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
    }
    else {
      uVar3 = 0;
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

