// name: FUN_10021a095
// address: 10021a095

void FUN_10021a095(undefined8 param_1)

{
  char cVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 local_28 [8];
  
  cVar1 = FUN_1001b8428();
  if (cVar1 == '\0') {
    IVar2 = _objc_alloc();
    uVar4 = FUN_1001bdcb0(param_1,0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
    IVar2 = UNUserNotificationCenter::initWithBundleIdentifier_
                      (IVar2,PTR_s_initWithBundleIdentifier__10088c320,uVar3);
    uVar4 = DAT_1008a2da0;
    DAT_1008a2da0 = IVar2;
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    IVar2 = UNUserNotificationCenter::currentNotificationCenter
                      ((ID)PTR__OBJC_CLASS___UNUserNotificationCenter_10082c3c8,
                       PTR_s_currentNotificationCenter_10088c328);
    IVar2 = _objc_retainAutoreleasedReturnValue(IVar2);
    uVar3 = DAT_1008a2da0;
    DAT_1008a2da0 = IVar2;
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (DAT_1008a2da0 != 0) {
    uVar3 = _objc_alloc_init(&objc::class_t::UserNotificationsDelegate);
    uVar4 = DAT_1008c54c8;
    DAT_1008c54c8 = uVar3;
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    (*(code *)PTR__objc_msgSend_10082c770)(DAT_1008a2da0,PTR_s_setDelegate__10088c330,DAT_1008c54c8)
    ;
    if (DAT_1008a2da0 != 0) {
      return;
    }
  }
  if (DAT_1008c75d0 != -1) {
    _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
  }
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_28[0] = 0;
    __os_log_impl(0x100000000,uVar4,0x10,"Could not create notification center connection!",local_28
                  ,2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return;
}

