// name: FUN_10015181d
// address: 10015181d

undefined8 FUN_10015181d(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_accountPropertyForKey__10088bc88);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = _objc_opt_class(PTR__OBJC_CLASS___NSString_10082c6b8);
  cVar1 = _objc_opt_isKindOfClass(uVar2,uVar3);
  if (cVar1 == '\0') {
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1001bdca6(param_1,uVar2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return param_1;
}

