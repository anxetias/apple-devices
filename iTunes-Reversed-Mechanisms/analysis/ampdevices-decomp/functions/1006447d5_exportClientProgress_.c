// name: exportClientProgress:
// address: 1006447d5

/* Function Stack Size: 0x18 bytes */

void AMPDeviceProgress::exportClientProgress_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_totalUnitCount_10088d998);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setTotalUnitCount__10088d9c0,uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_completedUnitCount_10088d990);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setCompletedUnitCount__10088d9c8,uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_localizedDescription_10088c2b0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR_s_setUserInfoObject_forKey__10088d9d0;
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_setUserInfoObject_forKey__10088d9d0,uVar4,
             *(undefined8 *)PTR___NSProgressRemoteLocalizedDescriptionKey_10082c708);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_localizedAdditionalDescriptionWi_10088d9b8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,puVar1,uVar4,
             *(undefined8 *)PTR___NSProgressRemoteLocalizedAdditionalDescriptionKey_10082c700);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSDate_10082df88,PTR_s_now_10088d9a8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar1,uVar4,&cf_AMPDeviceProgressLastExportTimeKey);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_isCancelled_10088d9d8);
  if (cVar2 != '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_cancel_10088bc10);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

