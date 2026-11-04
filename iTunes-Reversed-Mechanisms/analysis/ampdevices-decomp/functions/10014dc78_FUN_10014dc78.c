// name: FUN_10014dc78
// address: 10014dc78

void FUN_10014dc78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_10012d990();
  *param_1 = &PTR_FUN_10083b178;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar4 = _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_10082c698);
  puVar1 = param_1 + 0x16;
  uVar2 = *puVar1;
  *puVar1 = uVar4;
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  (*(code *)PTR__objc_msgSend_10082c770)
            (*puVar1,PTR_s_setMaxConcurrentOperationCount__10088bc78,0x14);
  IVar5 = NSURLSessionConfiguration::defaultSessionConfiguration
                    ((ID)PTR__OBJC_CLASS___NSURLSessionConfiguration_10082c6d8,
                     PTR_s_defaultSessionConfiguration_10088bc28);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setHTTPShouldUsePipelining__10088bc70,1);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setHTTPShouldSetCookies__10088bc68,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setHTTPCookieStorage__10088bc60,0);
  puVar3 = PTR__OBJC_CLASS___NSURLSession_10082c6d0;
  uVar6 = _objc_opt_new(PTR__OBJC_CLASS___NSOperationQueue_10082c698);
  IVar5 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                    ((ID)puVar3,PTR_s_sessionWithConfiguration_delegat_10088bc58,uVar4,0,uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  uVar2 = param_1[0x17];
  param_1[0x17] = uVar7;
  puVar3 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  (*(code *)puVar3)(uVar6);
  (*(code *)puVar3)(uVar4);
  return;
}

