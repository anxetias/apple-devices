// name: totalsForDeviceTotals:
// address: 10064bed1

/* Function Stack Size: 0x18 bytes */

ID AMPDevicesClientConnection::totalsForDeviceTotals_
             (ID param_1,SEL param_2,TrackDataDeviceTotals *param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ID IVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *local_40;
  
  lVar10 = *(long *)((long)&param_3->field9_0x9 + 7);
  lVar2 = *(long *)((long)&param_3->field11_0x19 + 7) + *(long *)((long)&param_3->field10_0x11 + 7);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,PTR_s_dictionary_10088c4a0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar12 = PTR_s_numberWithUnsignedLong__10088dbe8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  if (param_3->field0_0x0 == '\0') {
    lVar11 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedLong__10088dbe8,
                       *(undefined4 *)((long)&param_3->field15_0x35 + 3));
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,puVar12,
                       *(undefined4 *)((long)&param_3->field16_0x39 + 3));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(undefined8 *)((long)&param_3->field16_0x39 + 7));
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar4,
                       *(undefined8 *)PTR__AMPDeviceCategoryItemsKey_10082b7d8,uVar5,
                       *(undefined8 *)PTR__AMPDeviceCategorySecondsKey_10082b7e0,uVar6,
                       *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0,0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar7,
               *(undefined8 *)PTR__AMPDeviceAudioCategoryKey_10082b7a8);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar11 = *(long *)((long)&param_3->field16_0x39 + 7);
  }
  puVar12 = PTR_s_numberWithUnsignedLong__10088dbe8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  if (param_3->field1_0x1 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedLong__10088dbe8,
                       *(undefined4 *)((long)&param_3->field18_0x45 + 3));
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,puVar12,
                       *(undefined4 *)((long)&param_3->field19_0x49 + 3));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(undefined8 *)((long)&param_3->field19_0x49 + 7));
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar4,
                       *(undefined8 *)PTR__AMPDeviceCategoryItemsKey_10082b7d8,uVar5,
                       *(undefined8 *)PTR__AMPDeviceCategorySecondsKey_10082b7e0,uVar6,
                       *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0,0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar7,
               *(undefined8 *)PTR__AMPDeviceVideoCategoryKey_10082b988);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar11 = lVar11 + *(long *)((long)&param_3->field19_0x49 + 7);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  if (param_3->field2_0x2 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedLong__10088dbe8,
                       *(undefined4 *)((long)&param_3->field65_0x145 + 3));
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(undefined8 *)((long)&param_3->field66_0x149 + 7));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar4,
                       *(undefined8 *)PTR__AMPDeviceCategoryItemsKey_10082b7d8,uVar5,
                       *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
               *(undefined8 *)PTR__AMPDevicePhotosCategoryKey_10082b898);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar11 = lVar11 + *(long *)((long)&param_3->field66_0x149 + 7);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  if (param_3->field4_0x4 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedLong__10088dbe8,
                       *(undefined4 *)((long)&param_3->field70_0x165 + 3));
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(undefined8 *)((long)&param_3->field71_0x16d + 3));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar4,
                       *(undefined8 *)PTR__AMPDeviceCategoryItemsKey_10082b7d8,uVar5,
                       *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
               *(undefined8 *)PTR__AMPDeviceAppsCategoryKey_10082b728);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar11 = lVar11 + *(long *)((long)&param_3->field71_0x16d + 3);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  if (param_3->field3_0x3 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedLong__10088dbe8,
                       *(undefined4 *)((long)&param_3->field68_0x155 + 3));
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(undefined8 *)((long)&param_3->field69_0x15d + 3));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar4,
                       *(undefined8 *)PTR__AMPDeviceCategoryItemsKey_10082b7d8,uVar5,
                       *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
               *(undefined8 *)PTR__AMPDeviceGamesCategoryKey_10082b7f8);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar11 = lVar11 + *(long *)((long)&param_3->field69_0x15d + 3);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  if (param_3->field5_0x5 == '\0') {
    local_40 = PTR_s_numberWithUnsignedLongLong__10088be20;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedLong__10088dbe8,
                       *(undefined4 *)((long)&param_3->field60_0x125 + 3));
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_40 = PTR_s_numberWithUnsignedLongLong__10088be20;
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,
                       *(undefined8 *)((long)&param_3->field61_0x12d + 3));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar4,
                       *(undefined8 *)PTR__AMPDeviceCategoryItemsKey_10082b7d8,uVar5,
                       *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
               *(undefined8 *)PTR__AMPDeviceBooksCategoryKey_10082b7c0);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar11 = lVar11 + *(long *)((long)&param_3->field61_0x12d + 3);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  if (param_3->field6_0x6 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,local_40,
                       *(undefined8 *)((long)&param_3[1].field10_0x11 + 2));
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar4,
                       *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0,0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar5,
               *(undefined8 *)PTR__AMPDeviceLogsCategoryKey_10082b800);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar11 = lVar11 + *(long *)((long)&param_3[1].field10_0x11 + 2);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,local_40,
                     *(undefined8 *)&param_3[1].field3_0x3);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = *(undefined8 *)PTR__AMPDeviceCategoryBytesKey_10082b7d0;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar5,uVar4,0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
             *(undefined8 *)PTR__AMPDeviceUserDataCategoryKey_10082b980);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)puVar1)(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  uVar13 = lVar11 + *(long *)&param_3[1].field3_0x3;
  puVar12 = PTR_s_dictionaryWithObjectsAndKeys__10088dbf0;
  if (param_3->field7_0x7 != '\0') {
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,local_40,
                       *(undefined8 *)((long)&param_3->field12_0x21 + 7));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar12 = PTR_s_dictionaryWithObjectsAndKeys__10088dbf0;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar1,PTR_s_dictionaryWithObjectsAndKeys__10088dbf0,uVar5,uVar4,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
               *(undefined8 *)PTR__AMPDeviceReservedCategoryKey_10082b970);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
    uVar13 = uVar13 + *(long *)((long)&param_3->field12_0x21 + 7);
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  lVar11 = lVar2;
  if (param_3->field8_0x8 != '\0') {
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSNumber_10082c690,local_40,
                       *(undefined8 *)((long)&param_3->field11_0x19 + 7));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(puVar1,puVar12,uVar5,uVar4,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
               *(undefined8 *)PTR__AMPDevicePurgeableCategoryKey_10082b918);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar5);
    lVar11 = *(long *)((long)&param_3->field11_0x19 + 7);
    uVar13 = uVar13 + lVar11;
    lVar11 = lVar2 - lVar11;
  }
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  uVar8 = lVar10 - lVar2;
  lVar10 = 0;
  if (uVar13 <= uVar8) {
    lVar10 = uVar8 - uVar13;
  }
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,local_40,lVar10);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(puVar1,puVar12,uVar5,uVar4,0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_setObject_forKey__10088c000,uVar6,
             *(undefined8 *)PTR__AMPDeviceOtherCategoryKey_10082b890);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)puVar1)(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,local_40,lVar11);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(puVar1,puVar12,uVar5,uVar4,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_setObject_forKey__10088c000,uVar4,
             *(undefined8 *)PTR__AMPDeviceFreeCategoryKey_10082b7f0);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_10082df90;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,local_40,
                     *(undefined8 *)((long)&param_3->field9_0x9 + 7));
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (puVar1,puVar12,uVar4,*(undefined8 *)PTR__AMPDeviceTotalBytesKey_10082b978,uVar3
                     ,*(undefined8 *)PTR__AMPDeviceCategoriesKey_10082b7c8,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar3);
  IVar9 = _objc_autoreleaseReturnValue(uVar5);
  return IVar9;
}

