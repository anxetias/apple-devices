// name: FUN_1001509a3
// address: 1001509a3

void FUN_1001509a3(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = _objc_autoreleasePoolPush();
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    *(undefined1 *)(puVar4 + 1) = 0;
    puVar4[2] = 0;
  }
  FUN_100150a96(&DAT_1008c4d78,puVar4);
  FUN_1001505d2(DAT_1008c4d78);
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar5 = NSDistributedNotificationCenter::defaultCenter
                    ((ID)PTR__OBJC_CLASS___NSDistributedNotificationCenter_10082c658,
                     PTR_s_defaultCenter_10088bb58);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  puVar2 = PTR_s_addObserverForName_object_queue__10088bb38;
  uVar7 = (*(code *)puVar1)(uVar6,PTR_s_addObserverForName_object_queue__10088bb38,
                            &cf_com_apple_amp_StoreServices_UserChangedNotification,0,0,
                            &PTR___NSConcreteGlobalBlock_10083b700);
  _objc_unsafeClaimAutoreleasedReturnValue(uVar7);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar6,puVar2,&cf_com_apple_amp_StoreServices_UserPropertiesChangedNotification,
                     0,0,&PTR___NSConcreteGlobalBlock_10083b720);
  _objc_unsafeClaimAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  _objc_autoreleasePoolPop(uVar3);
  return;
}

