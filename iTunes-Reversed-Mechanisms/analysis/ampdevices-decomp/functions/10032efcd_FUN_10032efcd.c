// name: FUN_10032efcd
// address: 10032efcd

void FUN_10032efcd(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    lVar1 = FUN_1001ad170(param_3);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSColor_10082d300);
      uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,lVar1);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    }
    _objc_autoreleaseReturnValue(uVar2);
    return;
  }
  _objc_autoreleaseReturnValue(0);
  return;
}

