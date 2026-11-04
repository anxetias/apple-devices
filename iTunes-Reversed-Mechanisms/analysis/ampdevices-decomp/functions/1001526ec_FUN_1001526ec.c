// name: FUN_1001526ec
// address: 1001526ec

void FUN_1001526ec(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = _objc_autoreleasePoolPush();
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(*param_3);
  uVar5 = (*(code *)puVar1)(*param_2);
  puVar1 = PTR_s_cookiesWithResponseHeaderFields__10088bdb8;
  IVar6 = NSHTTPCookie::cookiesWithResponseHeaderFields_forURL_
                    ((ID)PTR__OBJC_CLASS___NSHTTPCookie_10082c670,
                     PTR_s_cookiesWithResponseHeaderFields__10088bdb8,uVar5,uVar4);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar5,PTR_s_objectForKey__10088be28,
                     *(undefined8 *)PTR__AMSHTTPHeaderSetUserCookies_10082b708);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
  lVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_length_10088bdf0);
  puVar2 = PTR_s_mutableCopy_10088bdf8;
  uVar8 = uVar7;
  if (lVar10 != 0) {
    uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_mutableCopy_10088bdf8);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar11,PTR_s_setObject_forKeyedSubscript__10088be60,uVar9,
               *(undefined8 *)PTR__AMSHTTPHeaderSetCookie_10082b700);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,puVar2);
    IVar6 = NSHTTPCookie::cookiesWithResponseHeaderFields_forURL_
                      ((ID)PTR__OBJC_CLASS___NSHTTPCookie_10082c670,puVar1,uVar11,uVar4);
    uVar12 = _objc_retainAutoreleasedReturnValue(IVar6);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_addObjectsFromArray__10088bca8,uVar12);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar12);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar1)(uVar11);
  }
  lVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_count_10088bdc0);
  if (lVar10 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)*param_1,PTR_s_ams_addCookies__10088bcd8,uVar8);
    LOCK();
    *(undefined1 *)(*param_1 + 8) = 1;
    UNLOCK();
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  (*(code *)puVar1)(uVar8);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  _objc_autoreleasePoolPop(uVar3);
  return;
}

