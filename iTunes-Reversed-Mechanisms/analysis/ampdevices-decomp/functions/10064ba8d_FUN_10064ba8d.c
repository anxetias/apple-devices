// name: FUN_10064ba8d
// address: 10064ba8d

void FUN_10064ba8d(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  void *pvVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined1 local_40;
  char local_39;
  undefined4 local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = FUN_100502680(param_2);
  puVar1 = PTR__objc_msgSend_10082c770;
  local_39 = '\0';
  if (iVar5 < 0x69506f64) {
    if ((iVar5 == 0x69506164) || (iVar5 == 0x6950686e)) {
LAB_10064bb75:
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_enableVoiceOver_10088dba0);
      local_48 = (void *)CONCAT71(local_48._1_7_,uVar4);
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_enableZoom_10088dba8);
      local_48._0_2_ = CONCAT11(uVar4,(undefined1)local_48);
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_invertDisplay_10088dbb0);
      local_48._0_3_ = CONCAT12(uVar4,(undefined2)local_48);
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_speakAutofillText_10088dbb8);
      local_48._0_4_ = CONCAT13(uVar4,(undefined3)local_48);
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_useMonoAudio_10088dbc0);
      local_48._0_5_ = CONCAT14(uVar4,(undefined4)local_48);
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),PTR_s_showClosedCaptions_10088dbc8);
      local_48._0_6_ = CONCAT15(uVar4,(undefined5)local_48);
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),
                                PTR_s_closedCaptionsSupported_10088dbd0);
      local_48._0_7_ = CONCAT16(uVar4,(undefined6)local_48);
      uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),
                                PTR_s_isUnsupportedLanguage_10088dbd8);
      local_48 = (void *)CONCAT17(uVar4,(undefined7)local_48);
      local_40 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20),
                                   PTR_s_invertColorsSupported_10088dbe0);
      uVar6 = FUN_1004ffd67(param_2);
      iVar5 = FUN_1005bcbc1(uVar6,&local_48);
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_100642e20();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_38 = 0x4000100;
          local_34 = iVar5;
          __os_log_impl(0x100000000,uVar6,0x10,"failed to set accessibility prefs (%d)",&local_38,8)
          ;
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           iVar5);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      }
LAB_10064bd5b:
      cVar3 = '\0';
      goto LAB_10064bd5d;
    }
  }
  else {
    if (iVar5 == 0x69506f64) {
      local_48 = (void *)0x0;
      iVar5 = FUN_100432267(param_2);
      if (iVar5 == 0) {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x20),PTR_s_enableVoiceOver_10088dba0);
        *(undefined1 *)((long)local_48 + 0xd57) = uVar4;
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x20),PTR_s_invertDisplay_10088dbb0);
        *(undefined1 *)((long)local_48 + 0xd58) = uVar4;
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x20),PTR_s_useMonoAudio_10088dbc0);
        *(undefined1 *)((long)local_48 + 0xd59) = uVar4;
        iVar5 = FUN_100432ddc(param_2,local_48,&local_39);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_100642e20();
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_38 = 0x4000100;
            local_34 = iVar5;
            __os_log_impl(0x100000000,uVar6,0x10,"failed to set device prefs (%d)",&local_38,8);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                             iVar5);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        }
        pvVar2 = local_48;
        cVar3 = local_39;
        if (local_48 != (void *)0x0) {
          FUN_10022ad5e(local_48);
          operator_delete(pvVar2);
          cVar3 = local_39;
        }
        goto LAB_10064bd5d;
      }
      uVar6 = FUN_100642e20();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_38 = 0x4000100;
        local_34 = iVar5;
        __os_log_impl(0x100000000,uVar6,0x10,"failed to get device prefs (%d)",&local_38,8);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         iVar5);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      goto LAB_10064bd5b;
    }
    if (iVar5 == 0x69506f74) goto LAB_10064bb75;
  }
  uVar6 = FUN_100642e20();
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = _os_log_type_enabled(uVar6,0x10);
  if (cVar3 != '\0') {
    local_48 = (void *)((ulong)local_48 & 0xffffffffffff0000);
    __os_log_impl(0x100000000,uVar6,0x10,"unsupported device class",&local_48,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                     0xffffffce);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = '\0';
LAB_10064bd5d:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar6,(int)cVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

