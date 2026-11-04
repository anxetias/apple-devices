// name: FUN_10015292e
// address: 10015292e

void FUN_10015292e(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *self;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  self = PTR__OBJC_CLASS___NSHTTPCookie_10082c670;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = *(undefined8 *)PTR__NSHTTPCookieName_10082c5d0;
  uVar1 = FUN_1001bdcb0(param_2,0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  local_70 = *(undefined8 *)PTR__NSHTTPCookieValue_10082c5e0;
  local_58 = uVar1;
  uVar2 = FUN_1001bdcb0(param_3,0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_68 = *(undefined8 *)PTR__NSHTTPCookieDomain_10082c5c8;
  local_50 = uVar2;
  uVar3 = FUN_1001bdcb0(param_4,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_60 = *(undefined8 *)PTR__NSHTTPCookiePath_10082c5d8;
  local_48 = uVar3;
  uVar4 = FUN_1001bdcb0(param_5,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = uVar4;
  IVar5 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)PTR__OBJC_CLASS___NSDictionary_10082df90,
                     PTR_s_dictionaryWithObjects_forKeys_co_10088bc30,&local_58,&local_78,4);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  IVar5 = NSHTTPCookie::cookieWithProperties_((ID)self,PTR_s_cookieWithProperties__10088bdb0,uVar6);
  lVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  if (lVar7 != 0) {
    uVar1 = *(undefined8 *)*param_1;
    local_80 = lVar7;
    IVar5 = NSArray::arrayWithObjects_count_
                      ((ID)PTR__OBJC_CLASS___NSArray_10082df78,
                       PTR_s_arrayWithObjects_count__10088bda0,&local_80,1);
    uVar2 = _objc_retainAutoreleasedReturnValue(IVar5);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar1,PTR_s_ams_addCookies__10088bcd8,uVar2);
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    LOCK();
    *(undefined1 *)(*param_1 + 8) = 1;
    UNLOCK();
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

