// name: FUN_1006430b3
// address: 1006430b3

void FUN_1006430b3(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  lVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_length_10088bdf0);
  puVar1 = PTR__OBJC_CLASS___NSError_10082c660;
  if (lVar3 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       param_3);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  else {
    local_40 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_10082c5f8;
    local_38 = uVar2;
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSDictionary_10082df90,
                       PTR_s_dictionaryWithObjects_forKeys_co_10088bc30,&local_38,&local_40,1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,(long)param_3,uVar5);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    _objc_autoreleaseReturnValue(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

