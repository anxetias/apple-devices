// name: FUN_10016fefa
// address: 10016fefa

cfstringStruct * FUN_10016fefa(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006791f8(uVar3);
    }
    FUN_1001782e9(0,0);
    return &cf___;
  }
  lVar4 = (*(code *)PTR__objc_retain_10082c7b8)();
  puVar1 = PTR_s_descriptionWithLocale__10088bea8;
  if (lVar4 == 0) {
    pcVar7 = &cf___;
  }
  else {
    cVar2 = _objc_opt_respondsToSelector(lVar4,PTR_s_descriptionWithLocale__10088bea8);
    if (cVar2 == '\0') {
      pcVar7 = (cfstringStruct *)_CFCopyDescription(lVar4);
    }
    else {
      IVar5 = NSLocale::currentLocale
                        ((ID)PTR__OBJC_CLASS___NSLocale_10082df98,PTR_s_currentLocale_10088beb0);
      uVar3 = _objc_retainAutoreleasedReturnValue(IVar5);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar4,puVar1,uVar3);
      pcVar7 = (cfstringStruct *)FUN_1001705fc(uVar6);
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  return pcVar7;
}

