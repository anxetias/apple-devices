// name: FUN_1004a5e43
// address: 1004a5e43

undefined8 FUN_1004a5e43(int param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_38;
  undefined4 local_34;
  undefined2 local_30;
  int local_2e;
  long local_28;
  
  puVar1 = PTR_s_currentPHImageRequestID_10088d538;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bfa20 == 0) {
    uVar4 = FUN_1004a4efe();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = local_38 & 0xffff0000;
      __os_log_error_impl(0x100000000,uVar4,0x10,"Can\'t cancel without importer!",&local_38,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    iVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_1008bfa20,PTR_s_currentPHImageRequestID_10088d538);
    if (iVar3 == param_1) {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (DAT_1008bfa20,PTR_s_currentAVAssetExportSession_10088d560);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_cancelExport_10088d590);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      uVar4 = 0;
      goto LAB_1004a5f19;
    }
    uVar4 = FUN_1004a4efe();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_34 = (*(code *)PTR__objc_msgSend_10082c770)(DAT_1008bfa20,puVar1);
      local_38 = 0x4000200;
      local_30 = 0x400;
      local_2e = param_1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"Current image request %d doesn\'t match %d",
                          &local_38,0xe);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  uVar4 = 0xffffffce;
LAB_1004a5f19:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

