// name: FUN_100193a25
// address: 100193a25

bool FUN_100193a25(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  
  uVar2 = _objc_autoreleasePoolPush();
  lVar3 = FUN_10016ff43(DAT_1008c4d98,param_1);
  puVar1 = PTR__objc_msgSend_10082c770;
  if (lVar3 == 0) {
    bVar8 = false;
  }
  else {
    IVar4 = NSFileManager::defaultManager
                      ((ID)PTR__OBJC_CLASS___NSFileManager_10082c668,PTR_s_defaultManager_10088bfa0)
    ;
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_URLForDirectory_inDomain_appropr_10088bfb8,0x66,0,lVar3,0,
                              0);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar1 = PTR__objc_release_10082c7b0;
    bVar8 = lVar7 != 0;
    (*(code *)PTR__objc_release_10082c7b0)(lVar7);
    (*(code *)puVar1)(uVar5);
    FUN_10017060f(lVar3);
  }
  _objc_autoreleasePoolPop(uVar2);
  return bVar8;
}

