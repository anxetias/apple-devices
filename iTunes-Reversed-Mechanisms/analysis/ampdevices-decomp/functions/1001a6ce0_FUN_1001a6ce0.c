// name: FUN_1001a6ce0
// address: 1001a6ce0

void FUN_1001a6ce0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  float local_34;
  
  uVar3 = _objc_autoreleasePoolPush();
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar4 = NSLocale::preferredLanguages
                    ((ID)PTR__OBJC_CLASS___NSLocale_10082df98,PTR_s_preferredLanguages_10088c028);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  puVar2 = PTR_s_count_10088bdc0;
  lVar6 = (*(code *)puVar1)(uVar5,PTR_s_count_10088bdc0);
  puVar1 = PTR__OBJC_CLASS___NSString_10082c6b8;
  if (lVar6 == 0) {
    IVar4 = NSLocale::currentLocale
                      ((ID)PTR__OBJC_CLASS___NSLocale_10082df98,PTR_s_currentLocale_10088beb0);
    uVar8 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar8,PTR_s_objectForKey__10088be28,
                       *(undefined8 *)PTR__NSLocaleCountryCode_10082df70);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_uppercaseString_10088c030);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar7);
    IVar4 = NSString::stringWithFormat_
                      ((ID)puVar1,PTR_s_stringWithFormat__10088c038,&cf_en___,uVar11);
    uVar12 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar7 = DAT_10089cbd0;
    puVar1 = PTR__objc_release_10082c7b0;
    DAT_10089cbd0 = uVar12;
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)puVar1)(uVar11);
    (*(code *)puVar1)(uVar9);
    uVar7 = DAT_10089cbd0;
  }
  else {
    IVar4 = NSMutableString::string
                      ((ID)PTR__OBJC_CLASS___NSMutableString_10082c680,PTR_s_string_10088c040);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar5,PTR_s_objectAtIndexedSubscript__10088c048,0);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar8,PTR_s_stringByReplacingOccurrencesOfSt_10088c020,&cf__,&cf__);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)PTR__objc_msgSend_10082c770)
              (DAT_100700458,uVar7,PTR_s_appendFormat__10088c050,&cf____q___1f,uVar9);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    (*(code *)puVar1)(uVar8);
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar2);
    uVar13 = 5;
    if (uVar10 < 5) {
      uVar13 = uVar10;
    }
    uVar8 = DAT_10089cbd0;
    if (1 < uVar10) {
      local_34 = DAT_100700b50;
      uVar10 = 1;
      do {
        local_34 = local_34 + DAT_1007106c0;
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar5,PTR_s_objectAtIndexedSubscript__10088c048,uVar10);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar8,PTR_s_stringByReplacingOccurrencesOfSt_10088c020,&cf__,&cf__);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  ((double)local_34,uVar7,PTR_s_appendFormat__10088c050,&cf_____q___1f,uVar9);
        (*(code *)puVar1)(uVar9);
        (*(code *)puVar1)(uVar8);
        uVar10 = uVar10 + 1;
        uVar8 = DAT_10089cbd0;
      } while (uVar13 != uVar10);
    }
  }
  DAT_10089cbd0 = uVar7;
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  (*(code *)puVar1)(uVar5);
  _objc_autoreleasePoolPop(uVar3);
  return;
}

