// name: FUN_100669b0b
// address: 100669b0b

void FUN_100669b0b(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  lVar3 = (*(code *)puVar1)(param_3);
  if (lVar3 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (&objc::class_t::AMPDevicesClientBroadcaster,PTR_s_sharedInstance_10088c4b8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_didChangeFileSharingApps_forDevi_10088dee0,uVar2,
               *(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

