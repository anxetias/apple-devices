// name: connectionInvalidated
// address: 100269b3f

/* Function Stack Size: 0x10 bytes */

void AMPDiscoveryDevicesAgentEventsClient::connectionInvalidated(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong local_28;
  
  local_28 = CONCAT71(in_register_00000001,in_AL);
  uVar3 = FUN_1002697c6();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar2 = _os_log_type_enabled(uVar3,1);
  if (cVar2 != '\0') {
    local_28 = local_28 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,uVar3,1,"AMPDiscoveryDevicesAgentEventsClient connection invalidated",
                  &local_28,2);
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  uVar3 = _objc_opt_self(&objc::class_t::AMPDiscoveryDevicesAgentEventsClient);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  _objc_sync_enter(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*(code *)puVar1)(uVar3);
  _objc_sync_exit(uVar4);
  (*(code *)puVar1)(uVar4);
  return;
}

