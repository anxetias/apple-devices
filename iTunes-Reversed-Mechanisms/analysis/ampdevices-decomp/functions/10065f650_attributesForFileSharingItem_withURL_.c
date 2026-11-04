// name: attributesForFileSharingItem:withURL:
// address: 10065f650

/* Function Stack Size: 0x20 bytes */

ID AMPDevicesClientConnection::attributesForFileSharingItem_withURL_
             (ID param_1,SEL param_2,const_JRFileSpec__ param_3,ID param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_2a8 [80];
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  if (param_3->field0_0x0 == 0x41464350) {
    cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_isAFCURL_10088ddb8);
    if (cVar1 != '\0') {
      iVar2 = FUN_10017d477(param_3,local_2a8,local_238);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          cVar1 = FUN_100182503(local_2a8,local_238);
          if (cVar1 != '\0') goto LAB_10065f6d8;
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_deviceIdentifier_10088ca18);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_appIdentifier_10088ddc0);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                            (&objc::class_t::AMPDevicesClientConnection,
                             PTR_s_attributesForFileSharingItem_wit_10088ddc8,param_3,local_238,
                             local_2a8,uVar5,uVar7);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        }
        else {
          uVar5 = FUN_1001cc310();
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure";
            local_24c = 0x400;
            local_24a = iVar2;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_258,0x12);
          }
          uVar6 = 0;
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        goto LAB_10065f6db;
      }
    }
  }
LAB_10065f6d8:
  uVar6 = 0;
LAB_10065f6db:
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar4 = _objc_autoreleaseReturnValue(uVar6);
    return IVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

