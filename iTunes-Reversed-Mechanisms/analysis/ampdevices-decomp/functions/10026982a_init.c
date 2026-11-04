// name: init
// address: 10026982a

/* Function Stack Size: 0x10 bytes */

ID AMPDiscoveryDevicesAgentEventsClient::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_18;
  undefined *local_10;
  
  local_10 = PTR_AMPDiscoveryDevicesAgentEventsClient_1008856d0;
  local_18 = param_1;
  IVar1 = NSObject::init((ID)&local_18,PTR_s_init_10088c4d0);
  if (IVar1 != 0) {
    *(undefined8 *)(IVar1 + 0x18) = 0;
    *(undefined1 *)(IVar1 + 8) = 1;
  }
  return IVar1;
}

