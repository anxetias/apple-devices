// name: FUN_10064b29d
// address: 10064b29d

void FUN_10064b29d(long param_1,undefined4 param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_100502680(param_2);
  if (iVar3 < 0x69506f64) {
    if ((iVar3 == 0x69506164) || (iVar3 == 0x6950686e)) {
LAB_10064b388:
      uVar4 = FUN_1004ffd67(param_2);
      iVar3 = FUN_1005bc8a6(uVar4,&local_58);
      if (iVar3 != 0) {
        uVar4 = FUN_100642e20();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_38 = (void *)CONCAT44(iVar3,0x4000100);
          __os_log_impl(0x100000000,uVar4,0x10,"failed to get accessibility prefs (%d)",&local_38,8)
          ;
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           iVar3);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
LAB_10064b5e4:
        uVar4 = 0;
        goto LAB_10064b5ed;
      }
      uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___AMPDeviceAccessibilityPrefs_10082b998);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setEnableVoiceOver__10088db58,(int)(char)local_58);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setEnableZoom__10088db60,(int)local_58._1_1_);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setInvertDisplay__10088db68,(int)local_58._2_1_);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setSpeakAutofillText__10088db70,(int)local_58._3_1_);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setUseMonoAudio__10088db78,(int)(char)local_54);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setShowClosedCaptions__10088db80,(int)local_54._1_1_);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setClosedCaptionsSupported__10088db88,(int)local_54._2_1_);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setIsUnsupportedLanguage__10088db90,(int)local_54._3_1_);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setInvertColorsSupported__10088db98,(int)local_54._4_1_);
LAB_10064b50f:
      uVar5 = 0;
      goto LAB_10064b5ed;
    }
  }
  else {
    if (iVar3 == 0x69506f64) {
      local_38 = (void *)0x0;
      iVar3 = FUN_100432267(param_2);
      if (iVar3 != 0) {
        uVar4 = FUN_100642e20();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                            (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          local_58 = 0x8420202;
          local_4c = 0x400;
          local_54 = uVar5;
          local_4a = iVar3;
          __os_log_impl(0x100000000,uVar4,0x10,"failed to get prefs for device %{public}@ (%d)",
                        &local_58,0x12);
          (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           iVar3);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
        goto LAB_10064b5e4;
      }
      uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___AMPDeviceAccessibilityPrefs_10082b998);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setEnableVoiceOver__10088db58,(int)*(char *)((long)local_38 + 0xd57));
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setInvertDisplay__10088db68,(int)*(char *)((long)local_38 + 0xd58));
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,PTR_s_setUseMonoAudio__10088db78,(int)*(char *)((long)local_38 + 0xd59));
      pvVar1 = local_38;
      if (local_38 != (void *)0x0) {
        FUN_10022ad5e(local_38);
        operator_delete(pvVar1);
      }
      goto LAB_10064b50f;
    }
    if (iVar3 == 0x69506f74) goto LAB_10064b388;
  }
  uVar4 = FUN_100642e20();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    local_58 = local_58 & 0xffff0000;
    __os_log_impl(0x100000000,uVar4,0x10,"unsupported device class",&local_58,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar4 = 0;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                     0xffffffce);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
LAB_10064b5ed:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar4,uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

