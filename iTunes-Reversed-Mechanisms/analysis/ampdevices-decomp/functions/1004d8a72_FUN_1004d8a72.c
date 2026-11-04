// name: FUN_1004d8a72
// address: 1004d8a72

bool FUN_1004d8a72(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  undefined2 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x5e6a;
      uStack_48 = 0x7d;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_1001b8428(param_1 + 0x440);
    if (cVar2 == '\0') {
      cVar2 = FUN_1001b8428(param_1 + 0x450);
      if (cVar2 == '\0') {
        local_60 = 0;
        iVar3 = FUN_100180f0c(param_1,0,&local_60,0);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                              (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,
                               PTR_s_dictionary_10088c4a0);
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            uVar5 = FUN_1001bdcb0(param_1 + 0x440,0);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            puVar1 = PTR_s_setObject_forKeyedSubscript__10088be60;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar4,PTR_s_setObject_forKeyedSubscript__10088be60,uVar5,
                       *(undefined8 *)PTR__AMPDeviceReportOKButtonTitleKey_10082b938);
            (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            uVar5 = FUN_1001bdcb0(param_1 + 0x450,0);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar4,puVar1,uVar5,
                       *(undefined8 *)PTR__AMPDeviceReportCancelButtonTitleKey_10082b920);
            (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            uVar5 = local_60;
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar4,puVar1,local_60,
                       *(undefined8 *)PTR__AMPDeviceReportRichTextKey_10082b950);
            (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            cVar2 = FUN_1001b8428(param_1 + 0x420);
            if (cVar2 == '\0') {
              uVar5 = FUN_1001bdcb0(param_1 + 0x420,0);
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar4,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceReportUUIDKey_10082b960);
              (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            }
            cVar2 = FUN_1001b8428(param_1 + 0x430);
            if (cVar2 == '\0') {
              uVar5 = FUN_1001bdcb0(param_1 + 0x430,0);
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar4,puVar1,uVar5,
                         *(undefined8 *)PTR__AMPDeviceReportWindowTitleKey_10082b968);
              (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            }
            cVar2 = FUN_1001b8428(param_1 + 0x460);
            if (cVar2 == '\0') {
              uVar5 = FUN_1001bdcb0(param_1 + 0x460,0);
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar4,puVar1,uVar5,
                         *(undefined8 *)PTR__AMPDeviceReportDefaultFileNameKey_10082b928);
              (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            }
            if (*(char *)(param_1 + 0x474) != '\0') {
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar4,puVar1,PTR____kCFBooleanTrue_10082e000,
                         *(undefined8 *)PTR__AMPDeviceReportHideSaveButtonKey_10082b930);
            }
            if (*(short *)(param_1 + 0x476) != 0) {
              uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                                (PTR__OBJC_CLASS___NSNumber_10082c690,
                                 PTR_s_numberWithUnsignedInteger__10088c4a8);
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar4,puVar1,uVar5,
                         *(undefined8 *)PTR__AMPDeviceReportReportHeightKey_10082b940);
              (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            }
            if (*(short *)(param_1 + 0x478) != 0) {
              uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                                (PTR__OBJC_CLASS___NSNumber_10082c690,
                                 PTR_s_numberWithUnsignedInteger__10088c4a8);
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar4,puVar1,uVar5,
                         *(undefined8 *)PTR__AMPDeviceReportReportWidthKey_10082b948);
              (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            }
            cVar2 = FUN_1001b8428(param_1 + 0x480);
            if (cVar2 == '\0') {
              uVar5 = FUN_1001bdcb0(param_1 + 0x480,0);
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar4,puVar1,uVar5,
                         *(undefined8 *)PTR__AMPDeviceReportSafetyInfoKey_10082b958);
              (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            }
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = SUB84(&local_58,0);
            uStack_4c = (undefined2)((ulong)&local_58 >> 0x20);
            uStack_4a = (undefined2)((ulong)&local_58 >> 0x30);
            uStack_48 = 0;
            uStack_46 = 0x202000;
            uStack_42 = 0;
            local_40 = 0;
            local_78 = &local_80;
            local_80 = 0;
            local_70 = 0x2020000000;
            local_68 = 0;
            uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                              (&objc::class_t::AMPDevicesClientBroadcaster,
                               PTR_s_sharedInstance_10088c4b8);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar5,PTR_s_showReportWithParameters_withRep_10088d6b8,uVar4);
            (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            uVar5 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
            while (*(char *)(local_78 + 3) == '\0') {
              _CFRunLoopRunInMode(DAT_100712580,uVar5,0);
            }
            bVar6 = *(short *)(CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50)) + 0x18) == 1;
            __Block_object_dispose(&local_80,8);
            __Block_object_dispose(&local_58,8);
          }
          else {
            uVar4 = FUN_1001cc310();
            uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x400;
              uStack_4a = (undefined2)iVar3;
              uStack_48 = (undefined2)((uint)iVar3 >> 0x10);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            bVar6 = false;
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar4);
          goto LAB_1004d8f1f;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x5ead;
          uStack_48 = 0x7d;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        FUN_1001782e9(0,0);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x5e80;
        uStack_48 = 0x7d;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
    }
  }
  bVar6 = false;
LAB_1004d8f1f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

