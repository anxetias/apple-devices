// name: FUN_100243534
// address: 100243534

int FUN_100243534(long param_1)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  short sVar6;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
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
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xcb5;
      local_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    sVar6 = 0;
  }
  else {
    IVar3 = NSMutableDictionary::dictionary
                      ((ID)PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,
                       PTR_s_dictionary_10088c4a0);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
    uVar5 = FUN_1001bdcb0(param_1 + 0x28,0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar1 = PTR_s_setObject_forKey__10088c000;
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_setObject_forKey__10088c000,uVar5,
               *(undefined8 *)PTR__AMPDevicePromptForPasswordMessageKey_10082b8e0);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    cVar2 = FUN_1001b8428(param_1 + 8);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 8,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,*(undefined8 *)PTR__AMPDevicePromptForPasswordUUIDKey_10082b8f8)
      ;
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x38);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x38,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordExplanationKey_10082b8c8);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x58);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x58,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordOKButtonTitleKey_10082b8e8);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x68);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x68,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordCancelButtonTitleKey_10082b8a0);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x88);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x88,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordCheckboxTitleKey_10082b8a8);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    if (*(char *)(param_1 + 0x11c) != '\0') {
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,PTR____kCFBooleanTrue_10082e000,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordCheckboxValueKey_10082b8b0);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x98);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x98,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordUserNameLabelKey_10082b900);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0xb8);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0xb8,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordPasswordLabelKey_10082b8f0);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 200);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 200,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordVerifyLabelKey_10082b908);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0xa8);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0xa8,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordDefaultUserNameKey_10082b8c0);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0xd8);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0xd8,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordDefaultPasswordKey_10082b8b8);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    if (*(char *)(param_1 + 0x10e) != '\0') {
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,PTR____kCFBooleanTrue_10082e000,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordHideUserNameKey_10082b8d0);
    }
    if (*(char *)(param_1 + 0x10f) != '\0') {
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,PTR____kCFBooleanTrue_10082e000,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordLockUserNameKey_10082b8d8);
    }
    if (*(char *)(param_1 + 0x111) != '\0') {
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar4,puVar1,PTR____kCFBooleanTrue_10082e000,
                 *(undefined8 *)PTR__AMPDevicePromptForPasswordVerifyPasswordKey_10082b910);
    }
    local_58 = 0;
    uStack_54 = 0;
    local_50 = SUB84(&local_58,0);
    uStack_4c = (undefined2)((ulong)&local_58 >> 0x20);
    uStack_4a = (undefined2)((ulong)&local_58 >> 0x30);
    local_48 = 0x2020000000;
    uStack_42 = 0;
    local_40 = 0;
    local_70 = &local_78;
    local_78 = 0;
    local_68 = 0x2020000000;
    local_60 = 0;
    IVar3 = AMPDevicesClientBroadcaster::sharedInstance(0x10088e6f8,PTR_s_sharedInstance_10088c4b8);
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar5,PTR_s_promptForPasswordWithParameters__10088c4c8,uVar4,0);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    uVar5 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
    while (*(char *)(local_70 + 3) == '\0') {
      _CFRunLoopRunInMode(DAT_100712580,uVar5,0);
    }
    sVar6 = *(short *)(CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)) + 0x18);
    __Block_object_dispose(&local_78,8);
    __Block_object_dispose(&local_58,8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

