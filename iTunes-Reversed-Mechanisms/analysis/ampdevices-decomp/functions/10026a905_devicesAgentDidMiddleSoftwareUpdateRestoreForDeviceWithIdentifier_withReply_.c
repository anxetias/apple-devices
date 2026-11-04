// name: devicesAgentDidMiddleSoftwareUpdateRestoreForDeviceWithIdentifier:withReply:
// address: 10026a905

/* Function Stack Size: 0x20 bytes */

void AMPDiscoveryDevicesAgentEventsClient::
     devicesAgentDidMiddleSoftwareUpdateRestoreForDeviceWithIdentifier_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar3 = (*(code *)puVar1)(param_4);
  puVar1 = PTR_s_currentConnection_10088c550;
  IVar4 = currentConnection(param_1,PTR_s_currentConnection_10088c550);
  lVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  if (lVar5 != 0) {
    uVar6 = FUN_1002697c6();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,1);
    local_50 = uVar3;
    if (cVar2 != '\0') {
      local_44 = _sel_getName(param_2);
      local_48 = 0x8220102;
      __os_log_impl(0x100000000,uVar6,1,
                    "AMPDevicesAgent -> AMPDeviceDiscoveryAgent: { sel = %{public}s }",&local_48,0xc
                   );
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    IVar4 = currentConnection(param_1,puVar1);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
    local_b0 = PTR___NSConcreteStackBlock_10082caf0;
    local_a8 = 0xc2000000;
    local_a0 = FUN_10026ab7b;
    local_98 = &DAT_10083f548;
    uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
    local_90 = uVar3;
    local_60 = uVar6;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar6,PTR_s_synchronousRemoteObjectProxyWith_10088c560,&local_b0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_88 = PTR___NSConcreteStackBlock_10082caf0;
    local_80 = 0xc2000000;
    local_78 = FUN_10026ac2c;
    local_70 = &DAT_10083f548;
    local_68 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar6,PTR_s_devicesAgentDidMiddleSoftwareUpd_10088c570,local_58,&local_88);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    uVar3 = local_50;
    (*(code *)PTR__objc_release_10082c7b0)(local_60);
    (*(code *)PTR__objc_release_10082c7b0)(local_68);
    (*(code *)PTR__objc_release_10082c7b0)(local_90);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

