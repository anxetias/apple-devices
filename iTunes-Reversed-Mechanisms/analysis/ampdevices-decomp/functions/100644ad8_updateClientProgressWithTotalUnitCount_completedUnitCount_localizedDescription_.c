// name: updateClientProgressWithTotalUnitCount:completedUnitCount:localizedDescription:
// address: 100644ad8

/* Function Stack Size: 0x28 bytes */

void AMPDeviceProgress::
     updateClientProgressWithTotalUnitCount_completedUnitCount_localizedDescription_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4,ID param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_5);
  uVar3 = (*(code *)puVar1)(param_1);
  _objc_sync_enter(uVar3);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setTotalUnitCount__10088d9c0,param_3);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setCompletedUnitCount__10088d9c8,param_4);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setLocalizedDescription__10088d9e8,uVar2);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_exportAllClientProgress_10088d9f0);
  _objc_sync_exit(uVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

