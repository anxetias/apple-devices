// name: dealloc
// address: 10026986a

/* Function Stack Size: 0x10 bytes */

void AMPDiscoveryDevicesAgentEventsClient::dealloc(ID param_1,SEL param_2)

{
  ID local_38;
  undefined *local_30;
  
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setInterruptionHandler__10088c4d8,0);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setInvalidationHandler__10088c4e0,0);
  (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x10),PTR_s_invalidate_10088c4e8)
  ;
  local_30 = PTR_AMPDiscoveryDevicesAgentEventsClient_1008856d0;
  local_38 = param_1;
  NSObject::dealloc((ID)&local_38,PTR_s_dealloc_10088c4f0);
  return;
}

