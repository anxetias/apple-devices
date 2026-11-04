// name: FUN_100642eb8
// address: 100642eb8

void FUN_100642eb8(undefined8 param_1,undefined8 param_2,int param_3,short param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_78);
  FUN_1001b7a44(local_68);
  if ((param_3 + 0x80U & 0xffffff7f) != 0) {
    cVar2 = FUN_1004c69e6((int)param_4,param_3,0,0,local_68,local_78);
    if (cVar2 != '\0') {
      cVar2 = FUN_1001b8428(local_68);
      puVar1 = PTR__OBJC_CLASS___NSError_10082c660;
      if (cVar2 == '\0') {
        local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_10082c5f8;
        uVar3 = FUN_1001bdcb0(local_68,0);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_50 = *(undefined8 *)PTR__NSLocalizedRecoverySuggestionErrorKey_10082c600;
        local_48 = uVar4;
        uVar3 = FUN_1001bdcb0(local_78,0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_40 = uVar5;
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSDictionary_10082df90,
                           PTR_s_dictionaryWithObjects_forKeys_co_10088bc30,&local_48,&local_58,2);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar3);
        uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (puVar1,PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                           *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,(long)param_3,uVar6);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        goto LAB_100642f52;
      }
    }
  }
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,
                     PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                     *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,(long)param_3,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
LAB_100642f52:
  FUN_1001b7a50(local_68);
  FUN_1001b7a50(local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _objc_autoreleaseReturnValue(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

