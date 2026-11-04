// name: FUN_10064e34f
// address: 10064e34f

void FUN_10064e34f(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_objectIDForBootedOSDevice__10088dc10,
                     *(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x45f)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      return;
    }
  }
  else {
    lVar3 = FUN_1004de449(iVar2);
    if ((lVar3 == 0) || ((*(char *)(lVar3 + 0x6acf) == '\0' && (*(int *)(lVar3 + 0x6b0c) == 0)))) {
      cVar1 = FUN_100502b90(iVar2);
      if (cVar1 == '\0') {
        uVar4 = FUN_100642e20();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                            (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          local_38 = 0x8420102;
          local_34 = uVar5;
          __os_log_impl(0x100000000,uVar4,0x10,"sync not in progress for device %{public}@",
                        &local_38,0xc);
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        lVar3 = *(long *)(param_1 + 0x38);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           0xffffffce);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
          return;
        }
        goto LAB_10064e526;
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      (*(code *)PTR__objc_msgSend_10082c770)
                (&objc::class_t::AMPDevicesClientConnection,
                 PTR_s_addSyncProgress_withReply_forObj_10088dc08,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),iVar2);
      return;
    }
  }
LAB_10064e526:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

