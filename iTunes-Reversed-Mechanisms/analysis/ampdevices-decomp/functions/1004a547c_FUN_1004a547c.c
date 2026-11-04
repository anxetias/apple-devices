// name: FUN_1004a547c
// address: 1004a547c

void FUN_1004a547c(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint local_48;
  long local_44;
  long local_38;
  
  puVar13 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  lVar4 = (*(code *)puVar13)(param_3);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setCurrentAVAssetExportSession__10088d528,lVar3
              );
    puVar13 = PTR__OBJC_CLASS___NSURL_10082dfd8;
    uVar5 = _NSTemporaryDirectory();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    IVar6 = NSURL::fileURLWithPath_isDirectory_
                      ((ID)puVar13,PTR_s_fileURLWithPath_isDirectory__10088bf88,uVar5,1);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar6);
    IVar6 = NSProcessInfo::processInfo
                      ((ID)PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    uVar8 = _objc_retainAutoreleasedReturnValue(IVar6);
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_globallyUniqueString_10088d548);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    IVar6 = NSString::stringWithFormat_
                      ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,PTR_s_stringWithFormat__10088c038,
                       &cf_____m4v,*(undefined8 *)(param_1 + 0x28));
    uVar10 = _objc_retainAutoreleasedReturnValue(IVar6);
    uVar11 = (*(code *)PTR__objc_msgSend_10082c770)
                       (uVar9,PTR_s_stringByAppendingString__10088d550,uVar10);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                       (uVar7,PTR_s_URLByAppendingPathComponent__10088c3c8,uVar11);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    (*(code *)PTR__objc_msgSend_10082c770)(lVar3,PTR_s_setOutputURL__10088d558,uVar12);
    puVar13 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar12);
    (*(code *)puVar13)(uVar11);
    (*(code *)puVar13)(uVar10);
    (*(code *)puVar13)(uVar9);
    (*(code *)puVar13)(uVar8);
    (*(code *)puVar13)(uVar7);
    (*(code *)puVar13)(uVar5);
    (*(code *)PTR__objc_msgSend_10082c770)(lVar3,PTR_s_exportAsynchronouslyWithCompleti_10088d570);
    goto LAB_1004a5774;
  }
  uVar5 = FUN_1004a4efe();
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar1 = _os_log_type_enabled(uVar5,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8420102;
    local_44 = lVar4;
    __os_log_error_impl(0x100000000,uVar5,0x10,"NULL export session returned! info %{public}@",
                        &local_48,0xc);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (DAT_1008bfa50 == 0) {
    uVar5 = FUN_1004a4efe();
    puVar13 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar5);
    cVar1 = _os_log_type_enabled(puVar13,0x10);
    if (cVar1 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_error_impl(0x100000000,puVar13,0x10,"No callback on asset export begin failure!",
                          &local_48,2);
    }
LAB_1004a575a:
    (*(code *)PTR__objc_release_10082c7b0)(puVar13);
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_currentPHImageRequestID_10088d538);
    if (lVar4 == 0) {
      uVar5 = 0xffffffe3;
    }
    else {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (lVar4,PTR_s_objectForKeyedSubscript__10088be30,
                         *(undefined8 *)PTR__PHImageErrorKey_10082b560);
      puVar13 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(puVar13,PTR_s_code_10088bb40);
    }
    FUN_1004a58ac(uVar2,uVar5,0);
    if (lVar4 != 0) goto LAB_1004a575a;
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resetCurrentVideoAssetExport_10088d540);
LAB_1004a5774:
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

