// name: stopProgressForObjectID:
// address: 1006455de

/* Function Stack Size: 0x14 bytes */

void AMPDeviceProgressMap::stopProgressForObjectID_(ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_objectForKey__10088be28,uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_stop_10088d6b0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

