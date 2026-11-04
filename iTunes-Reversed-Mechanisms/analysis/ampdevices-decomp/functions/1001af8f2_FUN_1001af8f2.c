// name: FUN_1001af8f2
// address: 1001af8f2

undefined8 FUN_1001af8f2(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  cVar2 = FUN_1001edfc7();
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    IVar3 = NSAppearance::removeVibrancyAppearance
                      ((ID)PTR__OBJC_CLASS___NSAppearance_10082d2f0,
                       PTR_s_removeVibrancyAppearance_10088c0f8);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  }
  uVar5 = FUN_1001af9cc(param_1);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = _objc_retainAutorelease(uVar5);
  lVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_CGColor_10088c100);
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = _CGColorCreateCopy(lVar6);
  }
  if (cVar2 != '\0') {
    NSAppearance::setCurrentAppearance_
              ((ID)PTR__OBJC_CLASS___NSAppearance_10082d2f0,PTR_s_setCurrentAppearance__10088c108,
               uVar4);
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar4);
  return uVar7;
}

