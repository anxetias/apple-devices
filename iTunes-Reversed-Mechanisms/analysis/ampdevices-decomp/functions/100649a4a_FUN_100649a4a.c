// name: FUN_100649a4a
// address: 100649a4a

void FUN_100649a4a(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 local_98;
  char local_96;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  long local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_98 = 0;
  local_96 = '\0';
  local_90 = 0;
  local_88 = 0xffffffffffffffff;
  local_60 = param_1;
  FUN_1001b7a44(local_80);
  FUN_1001b7a44(local_70);
  iVar2 = FUN_1004fdec8(param_2,&local_98);
  if (iVar2 == 0) {
    uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___AMPDeviceSetupInfo_10082b9b8);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setShowLicenseAgreement__10088db00,(int)(char)local_98);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setShowWarrantyInfo__10088db08,(int)local_98._1_1_);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setSuppressRestoreFromBackup__10088db10,(int)local_96);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setBackupList__10088db18,local_90);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setBestBackupIndex__10088db20,local_88);
    uVar3 = FUN_1001bdcb0(local_80,0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setLicenseAgreementText__10088db28,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar3 = FUN_1001bdcb0(local_70,0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setWarrantyInfoText__10088db30,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(local_60 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_58 = 0x8420202;
      local_4c = 0x400;
      local_54 = uVar4;
      local_4a = iVar2;
      __os_log_impl(0x100000000,uVar3,0x10,"failed to get setup params for device %{public}@ (%d)",
                    &local_58,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar4 = 0;
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar2)
    ;
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  (**(code **)(*(long *)(local_60 + 0x28) + 0x10))(*(long *)(local_60 + 0x28),uVar4,uVar3);
  FUN_1001b7a50(local_70);
  FUN_1001b7a50(local_80);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

