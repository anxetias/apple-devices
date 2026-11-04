// name: FUN_10015190e
// address: 10015190e

undefined8 FUN_10015190e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_autoreleasePoolPush();
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)*param_2,PTR_s_ams_cookiesForURL__10088bce0,*param_3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  IVar4 = NSHTTPCookie::requestHeaderFieldsWithCookies_
                    ((ID)PTR__OBJC_CLASS___NSHTTPCookie_10082c670,
                     PTR_s_requestHeaderFieldsWithCookies__10088be40,uVar3);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  FUN_1001a8d5a(param_1,uVar5,1);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar3);
  _objc_autoreleasePoolPop(uVar2);
  return param_1;
}

