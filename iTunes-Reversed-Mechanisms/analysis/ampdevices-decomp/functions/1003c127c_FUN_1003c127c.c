// name: FUN_1003c127c
// address: 1003c127c

undefined8 FUN_1003c127c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    IVar3 = NSError::errorWithDomain_code_userInfo_
                      ((ID)PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xffffffffffffffce,0);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  }
  else {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_setDeviceIdentifier__10088ca00);
    lVar2 = FUN_1003c13da(*(undefined8 *)(param_1 + 0x20));
    if (lVar2 != 0) {
      lVar2 = FUN_100309008(lVar2);
      puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
      if (lVar2 != 0) {
        IVar3 = NSNumber::numberWithUnsignedLongLong_
                          ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedLongLong__10088be20,lVar2);
        uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
        IVar3 = NSDictionary::dictionaryWithObject_forKey_
                          ((ID)puVar1,PTR_s_dictionaryWithObject_forKey__10088ca08,uVar4,
                           &cf_persistent_id);
        uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        uVar4 = 0;
        goto LAB_1003c138c;
      }
    }
    IVar3 = NSError::errorWithDomain_code_userInfo_
                      ((ID)PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0x2365,0);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  }
  uVar5 = 0;
LAB_1003c138c:
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar4,uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar4);
  return 1;
}

