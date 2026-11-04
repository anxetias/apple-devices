// name: FUN_10015177b
// address: 10015177b

ulong FUN_10015177b(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_R14;
  ulong uVar4;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_accountPropertyForKey__10088bc88,param_2);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_10082c690);
  cVar1 = _objc_opt_isKindOfClass(uVar2,uVar3);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_boolValue_10088bda8);
    uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),cVar1 != '\0');
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return uVar4 & 0xffffffff;
}

