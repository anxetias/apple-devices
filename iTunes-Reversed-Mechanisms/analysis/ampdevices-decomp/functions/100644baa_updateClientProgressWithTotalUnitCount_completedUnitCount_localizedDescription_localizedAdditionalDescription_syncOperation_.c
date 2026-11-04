// name: updateClientProgressWithTotalUnitCount:completedUnitCount:localizedDescription:localizedAdditionalDescription:syncOperation:
// address: 100644baa

/* Function Stack Size: 0x34 bytes */

void AMPDeviceProgress::
     updateClientProgressWithTotalUnitCount_completedUnitCount_localizedDescription_localizedAdditionalDescription_syncOperation_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4,ID param_5,ID param_6,
               unsigned_int param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_5);
  uVar3 = (*(code *)puVar1)(param_6);
  uVar4 = (*(code *)puVar1)(param_1);
  _objc_sync_enter(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setTotalUnitCount__10088d9c0,param_3);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setCompletedUnitCount__10088d9c8,param_4);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setLocalizedDescription__10088d9e8,uVar2);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar4,PTR_s_setLocalizedAdditionalDescriptio_10088d9f8,uVar3);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setSyncOperation__10088da00,param_7);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_exportAllClientProgress_10088d9f0);
  _objc_sync_exit(uVar4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

