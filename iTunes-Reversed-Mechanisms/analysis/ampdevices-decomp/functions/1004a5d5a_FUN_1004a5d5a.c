// name: FUN_1004a5d5a
// address: 1004a5d5a

undefined4 FUN_1004a5d5a(int param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined2 local_28 [8];
  
  if (DAT_1008bfa20 == 0) {
    uVar4 = FUN_1004a4efe();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"Can\'t obtain progress without importer!",local_28
                          ,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    uVar5 = 0;
  }
  else {
    iVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_1008bfa20,PTR_s_currentPHImageRequestID_10088d538);
    puVar1 = PTR__objc_msgSend_10082c770;
    uVar5 = 0;
    if (iVar3 == param_1) {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (0,DAT_1008bfa20,PTR_s_currentAVAssetExportSession_10088d560);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar5 = (*(code *)puVar1)(uVar4,PTR_s_progress_10088d588);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
  }
  return uVar5;
}

