// name: progressForObjectID:
// address: 10064504f

/* Function Stack Size: 0x14 bytes */

ID AMPDeviceProgressMap::progressForObjectID_(ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__10088be28,uVar2);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    lVar4 = _objc_alloc_init(&objc::class_t::AMPDeviceProgress);
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__10088c000,lVar4,uVar2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(lVar4);
  return IVar5;
}

