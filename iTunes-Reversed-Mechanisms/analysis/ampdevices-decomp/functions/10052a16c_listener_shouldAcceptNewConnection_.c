// name: listener:shouldAcceptNewConnection:
// address: 10052a16c

/* Function Stack Size: 0x20 bytes */

char DevicesClientDelegate::listener_shouldAcceptNewConnection_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined4 local_5c;
  uint local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = (*(code *)puVar1)(param_4);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_processIdentifier_10088d6c0);
  uVar5 = FUN_10052a6b9(uVar3);
  local_78 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (cVar2 != '\0') {
    local_58 = 0x8420202;
    local_54 = local_78;
    local_4c = 0x400;
    local_4a = uVar3;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "devicesclient xpc connection from %{public}@:%u",&local_58,0x12);
  }
  puVar1 = PTR_s_valueForEntitlement__10088d6c8;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_valueForEntitlement__10088d6c8,&cf_com_apple_amp_devices_client);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,&cf_com_apple_amp_devices_client_ui);
  local_70 = _objc_retainAutoreleasedReturnValue(uVar5);
  if (lVar6 != 0) {
    uVar5 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_10082c690);
    cVar2 = _objc_opt_isKindOfClass(lVar6,uVar5);
    puVar1 = PTR_s_boolValue_10088bda8;
    if (cVar2 != '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(lVar6,PTR_s_boolValue_10088bda8);
      if (cVar2 != '\0') {
        if (local_70 == 0) {
LAB_10052a30a:
          local_5c = 0;
        }
        else {
          uVar5 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_10082c690);
          cVar2 = _objc_opt_isKindOfClass(local_70,uVar5);
          if (cVar2 != '\x01') goto LAB_10052a30a;
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_70,puVar1);
          local_5c = (undefined4)CONCAT71((int7)((ulong)uVar5 >> 8),(char)uVar5 == '\x01');
        }
        puVar1 = PTR_s_interfaceWithProtocol__10088c518;
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSXPCInterface_10082c6f0,
                           PTR_s_interfaceWithProtocol__10088c518,PTR_AMPDevicesProtocol_1008856b8);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setExportedInterface__10088c528,uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSXPCInterface_10082c6f0,puVar1,
                           PTR_AMPDevicesClientEventsProtocol_1008856c0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar4,PTR_s_setRemoteObjectInterface__10088c520,uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        local_68 = _objc_opt_new(&objc::class_t::AMPDevicesClientConnection);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_68,PTR_s_setAllowsUI__10088d6d0,(undefined1)local_5c);
        (*(code *)PTR__objc_msgSend_10082c770)(local_68,PTR_s_setProcessID__10088d6d8,uVar3);
        (*(code *)PTR__objc_msgSend_10082c770)(local_68,PTR_s_setProcessName__10088d6e0,local_78);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setExportedObject__10088c530,local_68);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_exportedInterface_10088d6e8);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        puVar1 = PTR__OBJC_CLASS___NSSet_10082dfc8;
        uVar7 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_10082df78);
        uVar8 = _objc_opt_class(PTR__OBJC_CLASS___NSURL_10082dfd8);
        uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                          (puVar1,PTR_s_setWithObjects__10088d6f0,uVar7,uVar8,0);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar5,PTR_s_setClasses_forSelector_argumentI_10088d700,uVar7,
                   PTR_s_canAcceptFiles_forDevice_withRep_10088d6f8,0,0);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_exportedInterface_10088d6e8);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        puVar1 = PTR__OBJC_CLASS___NSSet_10082dfc8;
        uVar7 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_10082df78);
        uVar8 = _objc_opt_class(PTR__OBJC_CLASS___NSURL_10082dfd8);
        uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                          (puVar1,PTR_s_setWithObjects__10088d6f0,uVar7,uVar8,0);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar5,PTR_s_setClasses_forSelector_argumentI_10088d700,uVar7,
                   PTR_s_copyFiles_toDevice_withReply__10088d708,0,0);
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        _objc_initWeak(&local_58,uVar4);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar4,PTR_s_setInterruptionHandler__10088c4d8,
                   &PTR___NSConcreteGlobalBlock_100868848);
        local_a8 = PTR___NSConcreteStackBlock_10082caf0;
        local_a0 = 0xc2000000;
        local_98 = FUN_10052a7b3;
        local_90 = &DAT_100868868;
        _objc_copyWeak(local_88,&local_58);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar4,PTR_s_setInvalidationHandler__10088c4e0,&local_a8);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (&objc::class_t::AMPDevicesClientBroadcaster,
                           PTR_s_sharedInstance_10088c4b8);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_addClientWithConnection__10088d718,uVar4)
        ;
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_resume_10088bc50);
        _objc_destroyWeak(local_88);
        _objc_destroyWeak(&local_58);
        (*(code *)PTR__objc_release_10082c7b0)(local_68);
        cVar2 = '\x01';
        goto LAB_10052a5fb;
      }
    }
  }
  cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
  if (cVar2 != '\0') {
    local_58 = local_58 & 0xffff0000;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,"entitlement test failed",
                        &local_58,2);
  }
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_invalidate_10088c4e8);
  cVar2 = '\0';
LAB_10052a5fb:
  (*(code *)PTR__objc_release_10082c7b0)(local_70);
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)PTR__objc_release_10082c7b0)(local_78);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

