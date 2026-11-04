// name: connectionInterrupted
// address: 100269907

/* Function Stack Size: 0x10 bytes */

void AMPDiscoveryDevicesAgentEventsClient::connectionInterrupted(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *local_48;
  undefined1 local_40 [8];
  undefined2 local_38 [8];
  
  uVar3 = FUN_1002697c6();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar2 = _os_log_type_enabled(uVar3,1);
  if (cVar2 != '\0') {
    local_38[0] = 0;
    __os_log_impl(0x100000000,uVar3,1,"AMPDiscoveryDevicesAgentEventsClient connection interrupted",
                  local_38,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  uVar3 = _objc_opt_self(&objc::class_t::AMPDiscoveryDevicesAgentEventsClient);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  _objc_sync_enter(uVar3);
  if (*(char *)(param_1 + 8) == '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_setInvalidationHandler__10088c4e0,0);
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_invalidate_10088c4e8);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    _objc_initWeak(local_38,param_1);
    puVar1 = PTR__OBJC_CLASS___NSTimer_10082dfd0;
    local_60 = PTR___NSConcreteStackBlock_10082caf0;
    local_58 = 0xc2000000;
    local_50 = FUN_100269aa6;
    local_48 = &DAT_10083f4b8;
    _objc_copyWeak(local_40,local_38);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_1007106d0,puVar1,PTR_s_scheduledTimerWithTimeInterval_r_10088c508,0,
                       &local_60);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar4);
    _objc_destroyWeak(local_40);
    _objc_destroyWeak(local_38);
  }
  _objc_sync_exit(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

