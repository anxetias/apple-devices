// name: FUN_1004a4776
// address: 1004a4776

ulong FUN_1004a4776(void)

{
  undefined *self;
  undefined *puVar1;
  char cVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)();
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    IVar4 = NSFileManager::defaultManager
                      ((ID)PTR__OBJC_CLASS___NSFileManager_10082c668,PTR_s_defaultManager_10088bfa0)
    ;
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
    self = PTR__OBJC_CLASS___NSString_10082c6b8;
    uVar6 = _objc_retainAutorelease(lVar3);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_fileSystemRepresentation_10088cac8);
    IVar4 = NSString::stringWithUTF8String_((ID)self,PTR_s_stringWithUTF8String__10088bfc8,uVar6);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
    cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_fileExistsAtPath__10088d690,uVar6);
    puVar1 = PTR__objc_release_10082c7b0;
    uVar7 = CONCAT71((int7)((ulong)self >> 8),cVar2 != '\0');
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  return uVar7 & 0xffffffff;
}

