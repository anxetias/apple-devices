// name: FUN_10014c56e
// address: 10014c56e

void FUN_10014c56e(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  dispatch_queue_t pdVar6;
  undefined2 local_38 [4];
  
  uVar3 = _NSClassFromString(&cf_ISDevice);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_eosDeviceType_10088bb80);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  FUN_1001bdca6(param_1,uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_10014c776(param_1);
  FUN_10014c83c(param_1);
  uVar3 = FUN_10014c4fc();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar2 = _os_log_type_enabled(uVar3,0);
  if (cVar2 != '\0') {
    local_38[0] = 0;
    __os_log_impl(0x100000000,uVar3,0,"Listening for TouchID changes.",local_38,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  IVar4 = NSDistributedNotificationCenter::defaultCenter
                    ((ID)PTR__OBJC_CLASS___NSDistributedNotificationCenter_10082c658,
                     PTR_s_defaultCenter_10088bb58);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_addObserverForName_object_queue__10088bb38,
                     *(undefined8 *)PTR__AMSBiometricsDeviceStateChangedNotificationName_10082b6f0,0
                     ,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  (*(code *)PTR__objc_release_10082c7b0)();
  pdVar6 = _dispatch_get_global_queue(0,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(pdVar6);
  _notify_register_dispatch("com.apple.BiometricKit.enrollmentChanged",param_1 + 0x20,uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar3);
  return;
}

