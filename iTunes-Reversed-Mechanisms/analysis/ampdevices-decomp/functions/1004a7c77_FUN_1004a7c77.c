// name: FUN_1004a7c77
// address: 1004a7c77

void FUN_1004a7c77(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1008bfa28 != 0) {
    (**(code **)(DAT_1008bfa28 + 0x10))();
  }
  puVar2 = PTR_s_currentPHImageRequestID_10088d538;
  if (DAT_1008bfa20 != 0) {
    iVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_1008bfa20,PTR_s_currentPHImageRequestID_10088d538);
    puVar1 = PTR__objc_msgSend_10082c770;
    if (iVar4 != 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(DAT_1008bfa20,puVar2);
      FUN_1004a5e43(uVar5);
      (*(code *)puVar1)(DAT_1008bfa20,PTR_s_resetCurrentVideoAssetExport_10088d540);
    }
    lVar3 = DAT_1008bfa20;
    DAT_1008bfa20 = 0;
    (*(code *)PTR__objc_release_10082c7b0)(lVar3);
    return;
  }
  return;
}

