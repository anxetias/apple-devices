// name: init
// address: 100661f68

/* Function Stack Size: 0x10 bytes */

ID AMPDevicesClientBroadcaster::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_queue_t pdVar5;
  objc_super local_28;
  
  local_28.super_class = (class_t *)PTR_AMPDevicesClientBroadcaster_100885730;
  local_28.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_28,PTR_s_init_10088c4d0);
  if (IVar2 != 0) {
    *(undefined4 *)(IVar2 + 8) = 0;
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(PTR__OBJC_CLASS___NSHashTable_10082c678);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(IVar2 + 0x10);
    *(undefined8 *)(IVar2 + 0x10) = uVar4;
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    pdVar5 = _dispatch_queue_create
                       ("com.apple.AMPDevicesAgent.xpcDispatchQueue",(dispatch_queue_attr_t)0x0);
    uVar3 = *(undefined8 *)(IVar2 + 0x18);
    *(dispatch_queue_t *)(IVar2 + 0x18) = pdVar5;
    (*(code *)puVar1)(uVar3);
  }
  return IVar2;
}

