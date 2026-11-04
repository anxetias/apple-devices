// name: init
// address: 10064591a

/* Function Stack Size: 0x10 bytes */

ID AMPDevicesClientConnection::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 *puVar2;
  objc_super local_28;
  
  local_28.super_class = (class_t *)PTR_AMPDevicesClientConnection_100885728;
  local_28.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_28,PTR_s_init_10088c4d0);
  if (IVar1 != 0) {
    puVar2 = operator_new(0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined8 **)(IVar1 + 0x20) = puVar2;
  }
  return IVar1;
}

