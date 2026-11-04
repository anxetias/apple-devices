// name: FUN_1004a58e7
// address: 1004a58e7

void FUN_1004a58e7(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 in_EAX;
  undefined4 uVar5;
  undefined4 in_register_00000004;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong local_38;
  
  puVar2 = PTR__objc_msgSend_10082c770;
  local_38 = CONCAT44(in_register_00000004,in_EAX);
  if (DAT_1008bfa50 == 0) {
    uVar6 = FUN_1004a4efe();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_38 = local_38 & 0xffffffffffff0000;
      __os_log_error_impl(0x100000000,uVar6,0x10,"No callback on asset export completion!",&local_38
                          ,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_currentPHImageRequestID_10088d538);
    puVar3 = PTR_s_currentAVAssetExportSession_10088d560;
    uVar6 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x20),
                              PTR_s_currentAVAssetExportSession_10088d560);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar7 = (*(code *)puVar2)(uVar6,PTR_s_status_10088c9d0);
    uVar9 = 0xffffffce;
    if (lVar7 - 1U < 5) {
      uVar9 = *(undefined4 *)((long)&DAT_10074b9b0 + lVar7 * 4 + 4);
    }
    uVar1 = (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x20),puVar3);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar1);
    uVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_outputURL_10088d568);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    FUN_1004a58ac(uVar5,uVar9,uVar1);
    puVar2 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    (*(code *)puVar2)(uVar6);
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resetCurrentVideoAssetExport_10088d540);
  return;
}

