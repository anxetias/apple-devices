// name: isProgressCancelledForObjectID:
// address: 100645542

/* Function Stack Size: 0x14 bytes */

char AMPDeviceProgressMap::isProgressCancelledForObjectID_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_objectForKey__10088be28,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_isCancelled_10088d9d8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return cVar2;
}

