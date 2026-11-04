// name: FUN_1001516e7
// address: 1001516e7

undefined1 FUN_1001516e7(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_accountPropertyForKey__10088bc88,param_2);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_10082c690);
  cVar1 = _objc_opt_isKindOfClass(uVar3,uVar4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_unsignedCharValue_10088be70);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return uVar2;
}

