// name: FUN_100152b8e
// address: 100152b8e

void FUN_100152b8e(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(undefined8 *)*param_1;
  local_78 = *(undefined8 *)PTR__NSHTTPCookieName_10082c5d0;
  uVar2 = FUN_1001bdcb0(param_2,0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_70 = *(undefined8 *)PTR__NSHTTPCookieValue_10082c5e0;
  local_58 = uVar2;
  uVar3 = FUN_1001bdcb0(param_3,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_68 = *(undefined8 *)PTR__NSHTTPCookieDomain_10082c5c8;
  local_50 = uVar3;
  uVar4 = FUN_1001bdcb0(param_4,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_60 = *(undefined8 *)PTR__NSHTTPCookiePath_10082c5d8;
  local_48 = uVar4;
  uVar5 = FUN_1001bdcb0(param_5,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_40 = uVar5;
  IVar6 = NSDictionary::dictionaryWithObjects_forKeys_count_
                    ((ID)PTR__OBJC_CLASS___NSDictionary_10082df90,
                     PTR_s_dictionaryWithObjects_forKeys_co_10088bc30,&local_58,&local_78,4);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar1,PTR_s_ams_removeCookiesMatchingPropert_10088bd40,uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  LOCK();
  *(undefined1 *)(*param_1 + 8) = 1;
  UNLOCK();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

