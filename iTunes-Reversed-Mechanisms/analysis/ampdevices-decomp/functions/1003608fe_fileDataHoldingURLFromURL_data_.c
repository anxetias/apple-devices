// name: fileDataHoldingURLFromURL:data:
// address: 1003608fe

/* Function Stack Size: 0x20 bytes */

ID ITFileDataHoldingURL::fileDataHoldingURLFromURL_data_
             (ID param_1,SEL param_2,ID param_3,__CFData *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_isFileURL_10088c900);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "[inURL isFileURL]";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = _objc_alloc(&objc::class_t::ITFileDataHoldingURL);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_path_10088be38);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_initFileURLWithPath__10088c908,uVar4)
    ;
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      uVar3 = FUN_1001705fc(param_4);
      *(undefined8 *)(lVar5 + mHeldData) = uVar3;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    IVar6 = _objc_autoreleaseReturnValue(lVar5);
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

