// name: devicesAgentDidChangeState:withReply:
// address: 10026a110

/* Function Stack Size: 0x20 bytes */

void AMPDiscoveryDevicesAgentEventsClient::devicesAgentDidChangeState_withReply_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
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
  unsigned_long_long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  *(unsigned_long_long *)(param_1 + 0x18) = param_3;
  puVar1 = PTR_s_currentConnection_10088c550;
  IVar3 = currentConnection(param_1,PTR_s_currentConnection_10088c550);
  lVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (lVar4 != 0) {
    uVar5 = FUN_1002697c6();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,1);
    if (cVar2 != '\0') {
      local_44 = _sel_getName(param_2);
      local_48 = 0x8220102;
      __os_log_impl(0x100000000,uVar5,1,
                    "AMPDevicesAgent -> AMPDeviceDiscoveryAgent: { sel = %{public}s }",&local_48,0xc
                   );
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    IVar3 = currentConnection(param_1,puVar1);
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
    local_b0 = PTR___NSConcreteStackBlock_10082caf0;
    local_a8 = 0xc2000000;
    local_a0 = FUN_10026a35f;
    local_98 = &DAT_10083f548;
    local_60 = param_3;
    uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(local_50);
    local_90 = uVar6;
    local_58 = uVar5;
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar5,PTR_s_remoteObjectProxyWithErrorHandle_10088c558,&local_b0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_88 = PTR___NSConcreteStackBlock_10082caf0;
    local_80 = 0xc2000000;
    local_78 = FUN_10026a47c;
    local_70 = &DAT_10083f548;
    local_68 = (*(code *)PTR__objc_retain_10082c7b8)(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar5,PTR_s_devicesAgentDidChangeState_withR_10088c500,local_60,&local_88);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    (*(code *)PTR__objc_release_10082c7b0)(local_58);
    (*(code *)PTR__objc_release_10082c7b0)(local_68);
    (*(code *)PTR__objc_release_10082c7b0)(local_90);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

