// name: FUN_10014ca88
// address: 10014ca88

void FUN_10014ca88(long param_1)

{
  ID IVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    IVar1 = NSDistributedNotificationCenter::defaultCenter
                      ((ID)PTR__OBJC_CLASS___NSDistributedNotificationCenter_10082c658,
                       PTR_s_defaultCenter_10088bb58);
    uVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar2,PTR_s_removeObserver__10088bbb8,*(undefined8 *)(param_1 + 0x18));
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    _notify_cancel();
  }
  (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)(param_1 + 0x18));
  FUN_1001b7a50(param_1);
  return;
}

