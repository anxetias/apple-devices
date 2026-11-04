// name: FUN_100658960
// address: 100658960

void FUN_100658960(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_38 [4];
  
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKey__10088be28,
                     *(undefined8 *)PTR__AMPDeviceBackupPathKey_10082b7b0);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38[0] = 0;
      __os_log_impl(0x100000000,uVar3,0x10,"missing path in backup",local_38,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xffffffce);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSFileManager_10082c668,PTR_s_defaultManager_10088bfa0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSURL_10082dfd8,PTR_s_fileURLWithPath__10088dca0,lVar4);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_removeItemAtURL_error__10088dca8,uVar6);
    uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(0);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
    _dispatch_async(PTR___dispatch_main_q_10082cb60,&PTR___NSConcreteGlobalBlock_1008718d0);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  (*(code *)puVar1)(uVar3);
  return;
}

