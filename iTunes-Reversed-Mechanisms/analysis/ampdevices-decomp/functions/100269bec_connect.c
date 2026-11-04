// name: connect
// address: 100269bec

/* Function Stack Size: 0x10 bytes */

int AMPDiscoveryDevicesAgentEventsClient::connect(int param_1,sockaddr *param_2,socklen_t param_3)

{
  undefined *puVar1;
  undefined *op;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined4 in_register_00000014;
  undefined4 in_register_0000003c;
  long lVar6;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *local_70;
  undefined1 local_68 [8];
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *local_48;
  undefined1 local_40 [8];
  undefined2 local_38 [4];
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  uVar4 = FUN_1002697c6(lVar6,param_2,CONCAT44(in_register_00000014,param_3));
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar2 = _os_log_type_enabled(uVar4,1);
  if (cVar2 != '\0') {
    local_38[0] = 0;
    __os_log_impl(0x100000000,uVar4,1,"AMPDiscoveryDevicesAgentEventsClient connecting",local_38,2);
  }
  iVar3 = (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)(lVar6 + 0x10) == 0) {
    *(undefined1 *)(lVar6 + 8) = 1;
    IVar5 = _objc_alloc(PTR__OBJC_CLASS___NSXPCConnection_10082c6e8);
    puVar1 = PTR__objc_msgSend_10082c770;
    IVar5 = NSXPCConnection::initWithMachServiceName_options_
                      (IVar5,PTR_s_initWithMachServiceName_options__10088c510,
                       &cf_com_apple_amp_devicediscoveryd_devicesagentevents,0);
    uVar4 = *(undefined8 *)(lVar6 + 0x10);
    *(ID *)(lVar6 + 0x10) = IVar5;
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    op = PTR_s_interfaceWithProtocol__10088c518;
    IVar5 = NSXPCInterface::interfaceWithProtocol_
                      ((ID)PTR__OBJC_CLASS___NSXPCInterface_10082c6f0,
                       PTR_s_interfaceWithProtocol__10088c518,
                       PTR_AMPDiscoveryDevicesAgentEventsProtocol_1008856a8);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)puVar1)(*(undefined8 *)(lVar6 + 0x10),PTR_s_setRemoteObjectInterface__10088c520,uVar4)
    ;
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    IVar5 = NSXPCInterface::interfaceWithProtocol_
                      ((ID)PTR__OBJC_CLASS___NSXPCInterface_10082c6f0,op,
                       PTR_AMPDevicesAgentDiscoveryEventsProtocol_1008856b0);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)puVar1)(*(undefined8 *)(lVar6 + 0x10),PTR_s_setExportedInterface__10088c528,uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    (*(code *)puVar1)(*(undefined8 *)(lVar6 + 0x10),PTR_s_setExportedObject__10088c530,lVar6);
    _objc_initWeak(local_38,lVar6);
    local_88 = PTR___NSConcreteStackBlock_10082caf0;
    local_80 = 0xc2000000;
    local_78 = FUN_100269e41;
    local_70 = &DAT_10083f4e8;
    _objc_copyWeak(local_68,local_38);
    (*(code *)puVar1)(*(undefined8 *)(lVar6 + 0x10),PTR_s_setInterruptionHandler__10088c4d8,
                      &local_88);
    local_60 = PTR___NSConcreteStackBlock_10082caf0;
    local_58 = 0xc2000000;
    local_50 = FUN_100269ee7;
    local_48 = &DAT_10083f4e8;
    _objc_copyWeak(local_40,local_38);
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(lVar6 + 0x10),PTR_s_setInvalidationHandler__10088c4e0,&local_60);
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(lVar6 + 0x10),PTR_s_resume_10088bc50);
    _objc_destroyWeak(local_40);
    _objc_destroyWeak(local_68);
    iVar3 = _objc_destroyWeak(local_38);
  }
  return iVar3;
}

