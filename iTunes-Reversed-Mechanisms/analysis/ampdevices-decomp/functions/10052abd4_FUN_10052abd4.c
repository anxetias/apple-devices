// name: FUN_10052abd4
// address: 10052abd4

void FUN_10052abd4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  undefined8 uVar4;
  ulong local_28;
  
  local_28 = CONCAT71(in_register_00000001,in_AL);
  cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (cVar3 != '\0') {
    local_28 = local_28 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "devicesframework xpc connection invalidated",&local_28,2);
  }
  puVar2 = PTR__objc_msgSend_10082c770;
  uVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar4 = _objc_loadWeakRetained(param_1 + 0x20);
  (*(code *)puVar2)(uVar1,PTR_s_removeClientWithConnection__10088d710,uVar4);
  puVar2 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar2)(uVar1);
  return;
}

