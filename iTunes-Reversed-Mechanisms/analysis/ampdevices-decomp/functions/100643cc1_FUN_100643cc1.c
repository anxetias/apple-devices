// name: FUN_100643cc1
// address: 100643cc1

void FUN_100643cc1(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_488);
  FUN_1001b7a44(local_478);
  FUN_1001b7a44(local_468);
  if (param_4 != 0) {
    FUN_10017d520(local_438,param_4);
    FUN_1001b80b2(local_488,local_438);
    FUN_1001b7a50(local_438);
  }
  if ((param_3 + 0x80U & 0xffffff7f) != 0) {
    FUN_1001bb41a(local_488,local_438);
    cVar2 = FUN_1004c69e6(0x1118,param_3,local_438,0,local_468,local_478);
    if (cVar2 != '\0') {
      cVar2 = FUN_1001b8428(local_468);
      puVar1 = PTR__OBJC_CLASS___NSError_10082c660;
      if (cVar2 == '\0') {
        local_458 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_10082c5f8;
        uVar3 = FUN_1001bdcb0(local_468,0);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_450 = *(undefined8 *)PTR__NSLocalizedRecoverySuggestionErrorKey_10082c600;
        local_448 = uVar4;
        uVar3 = FUN_1001bdcb0(local_478,0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_440 = uVar5;
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSDictionary_10082df90,
                           PTR_s_dictionaryWithObjects_forKeys_co_10088bc30,&local_448,&local_458,2)
        ;
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (puVar1,PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                           *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,(long)param_3,uVar6);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        goto LAB_100643dc9;
      }
    }
  }
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,
                     PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                     *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,(long)param_3,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
LAB_100643dc9:
  FUN_1001b7a50(local_468);
  FUN_1001b7a50(local_478);
  FUN_1001b7a50(local_488);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _objc_autoreleaseReturnValue(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

