// name: FUN_100177805
// address: 100177805

cfstringStruct * FUN_100177805(void)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)();
  puVar1 = PTR_s_descriptionWithLocale__10088bea8;
  if (lVar3 == 0) {
    pcVar7 = &cf___;
  }
  else {
    cVar2 = _objc_opt_respondsToSelector(lVar3,PTR_s_descriptionWithLocale__10088bea8);
    if (cVar2 == '\0') {
      pcVar7 = (cfstringStruct *)_CFCopyDescription(lVar3);
    }
    else {
      IVar4 = NSLocale::currentLocale
                        ((ID)PTR__OBJC_CLASS___NSLocale_10082df98,PTR_s_currentLocale_10088beb0);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar3,puVar1,uVar5);
      pcVar7 = (cfstringStruct *)FUN_1001705fc(uVar6);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  return pcVar7;
}

