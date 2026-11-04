// name: discoveryServiceWillTerminate
// address: 10026a020

/* Function Stack Size: 0x10 bytes */

void AMPDiscoveryDevicesAgentEventsClient::discoveryServiceWillTerminate(ID param_1,SEL param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1002697c6();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,1);
  if (cVar1 != '\0') {
    local_34 = _sel_getName(param_2);
    local_38 = 0x8220102;
    __os_log_impl(0x100000000,uVar2,1,
                  "AMPDeviceDiscoveryAgent -> AMPDevicesAgent: { sel = %{public}s }",&local_38,0xc);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  uVar2 = _objc_opt_self(&objc::class_t::AMPDiscoveryDevicesAgentEventsClient);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  _objc_sync_enter(uVar2);
  *(undefined1 *)(param_1 + 8) = 0;
  _objc_sync_exit(uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

