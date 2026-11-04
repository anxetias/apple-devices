// name: listener:shouldAcceptNewConnection:
// address: 10052a884

/* Function Stack Size: 0x20 bytes */

char DevicesFrameworkDelegate::listener_shouldAcceptNewConnection_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *local_58;
  undefined1 local_50 [8];
  uint local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined4 local_3a;
  long local_30;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar5 = (*(code *)puVar1)(param_4);
  cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  puVar1 = PTR_s_processIdentifier_10088d6c0;
  if (cVar2 != '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_processIdentifier_10088d6c0);
    uVar6 = FUN_10052a6b9(uVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_3a = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar1);
    local_48 = 0x8420202;
    local_3c = 0x400;
    local_44 = uVar6;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "devicesframework xpc connection from %{public}@:%u",&local_48,0x12);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar5,PTR_s_valueForEntitlement__10088d6c8,&cf_com_apple_amp_devices_client);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  if (lVar7 != 0) {
    uVar6 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_10082c690);
    cVar2 = _objc_opt_isKindOfClass(lVar7,uVar6);
    if (cVar2 != '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(lVar7,PTR_s_boolValue_10088bda8);
      if (cVar2 != '\0') {
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSXPCInterface_10082c6f0,
                           PTR_s_interfaceWithProtocol__10088c518,
                           PTR_AMPLibraryFrameworkProtocol_1008856c8);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setExportedInterface__10088c528,uVar6);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        uVar6 = _objc_opt_new(&objc::class_t::AMPDevicesFrameworkConnection);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setExportedObject__10088c530,uVar6);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        _objc_initWeak(&local_48,uVar5);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar5,PTR_s_setInterruptionHandler__10088c4d8,
                   &PTR___NSConcreteGlobalBlock_100868898);
        local_70 = PTR___NSConcreteStackBlock_10082caf0;
        local_68 = 0xc2000000;
        local_60 = FUN_10052abd4;
        local_58 = &DAT_100868868;
        _objc_copyWeak(local_50,&local_48);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar5,PTR_s_setInvalidationHandler__10088c4e0,&local_70);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_resume_10088bc50);
        _objc_destroyWeak(local_50);
        _objc_destroyWeak(&local_48);
        cVar2 = '\x01';
        goto LAB_10052aadd;
      }
    }
  }
  cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
  if (cVar2 != '\0') {
    local_48 = local_48 & 0xffff0000;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,"entitlement test failed",
                        &local_48,2);
  }
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_invalidate_10088c4e8);
  cVar2 = '\0';
LAB_10052aadd:
  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

