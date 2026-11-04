// name: updateProgressForObjectID:totalUnitCount:completedUnitCount:localizedDescription:localizedAdditionalDescription:syncOperation:
// address: 100645397

/* Function Stack Size: 0x38 bytes */

void AMPDeviceProgressMap::
     updateProgressForObjectID_totalUnitCount_completedUnitCount_localizedDescription_localizedAdditionalDescription_syncOperation_
               (ID param_1,SEL param_2,unsigned_int param_3,long_long param_4,long_long param_5,
               ID param_6,ID param_7,unsigned_int param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_6);
  uVar3 = (*(code *)puVar1)(param_7);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_objectForKey__10088be28,uVar4);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (lVar6 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar6,PTR_s_updateClientProgressWithTotalUni_10088da30,param_4,param_5,uVar2,uVar3,
               param_8);
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

