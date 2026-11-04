// name: currentConnection
// address: 100269f8d

/* Function Stack Size: 0x10 bytes */

ID AMPDiscoveryDevicesAgentEventsClient::currentConnection(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  socklen_t extraout_EDX;
  long lVar4;
  
  uVar3 = _objc_opt_self(&objc::class_t::AMPDiscoveryDevicesAgentEventsClient);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  _objc_sync_enter(uVar3);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    if (*(char *)(param_1 + 8) == '\x01') {
      connect((int)param_1,(sockaddr *)PTR_s_connect_10088c548,extraout_EDX);
      lVar4 = *(long *)(param_1 + 0x10);
    }
    else {
      lVar4 = 0;
    }
  }
  uVar1 = (*(code *)PTR__objc_retain_10082c7b8)(lVar4);
  _objc_sync_exit(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

