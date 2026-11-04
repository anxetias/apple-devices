// name: FUN_100193820
// address: 100193820

undefined4 FUN_100193820(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  
  uVar3 = _objc_autoreleasePoolPush();
  lVar4 = FUN_10016ff43(DAT_1008c4d98,param_1);
  cVar1 = FUN_100183b4f(param_1);
  if (cVar1 == '\0') {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100694b68(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  if (lVar4 == 0) {
    uVar2 = 0xffffffd5;
  }
  else {
    IVar6 = NSFileManager::defaultManager
                      ((ID)PTR__OBJC_CLASS___NSFileManager_10082c668,PTR_s_defaultManager_10088bfa0)
    ;
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar6);
    uVar2 = 0;
    cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar5,PTR_s_trashItemAtURL_resultingItemURL__10088bfa8,lVar4,0);
    uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(0);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    if (cVar1 != '\x01') {
      uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_code_10088bb40);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  FUN_10017060f(lVar4);
  _objc_autoreleasePoolPop(uVar3);
  return uVar2;
}

