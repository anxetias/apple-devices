// name: shouldExportClientProgress:
// address: 10064445b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

char AMPDeviceProgress::shouldExportClientProgress_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_completedUnitCount_10088d990);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_totalUnitCount_10088d998);
  dVar13 = 0.0;
  if (-1 < (long)(uVar5 | uVar6)) {
    if ((uVar5 | uVar6) != 0) {
      dVar13 = DAT_100700458;
    }
    if (uVar6 != 0) {
      dVar13 = (double)(long)uVar5 / (double)(long)uVar6;
    }
  }
  dVar12 = (double)(*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_fractionCompleted_10088d9a0);
  cVar2 = '\x01';
  if (_DAT_100749530 <= (double)((ulong)(dVar13 - dVar12) & _DAT_100700b40)) goto LAB_100644721;
  if ((dVar13 <= 0.0) || (DAT_100700458 <= dVar13)) {
LAB_1006445c3:
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_localizedDescription_10088c2b0);
    lVar10 = _objc_retainAutoreleasedReturnValue(uVar7);
    if (lVar10 != 0) {
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_userInfo_10088be88);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar7,PTR_s_objectForKey__10088be28,
                         *(undefined8 *)PTR___NSProgressRemoteLocalizedDescriptionKey_10082c708);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(lVar10,PTR_s_isEqualToString__10088bb98,uVar8);
      puVar1 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      (*(code *)puVar1)(uVar7);
      if (cVar2 == '\0') {
        (*(code *)PTR__objc_release_10082c7b0)(lVar10);
        cVar2 = '\x01';
        goto LAB_100644721;
      }
    }
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (param_1,PTR_s_localizedAdditionalDescriptionWi_10088d9b8);
    lVar11 = _objc_retainAutoreleasedReturnValue(uVar7);
    if (lVar11 == 0) {
      (*(code *)PTR__objc_release_10082c7b0)(lVar10);
    }
    else {
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_userInfo_10088be88);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar7,PTR_s_objectForKey__10088be28,
                         *(undefined8 *)
                          PTR___NSProgressRemoteLocalizedAdditionalDescriptionKey_10082c700);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(lVar11,PTR_s_isEqualToString__10088bb98,uVar8);
      puVar1 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      (*(code *)puVar1)(uVar7);
      (*(code *)puVar1)(lVar11);
      (*(code *)puVar1)(lVar10);
      cVar2 = '\x01';
      if (cVar3 == '\0') goto LAB_100644721;
    }
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSDate_10082df88,PTR_s_now_10088d9a8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_userInfo_10088be88);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar8,PTR_s_objectForKey__10088be28,&cf_AMPDeviceProgressLastExportTimeKey);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    dVar13 = (double)(*(code *)PTR__objc_msgSend_10082c770)
                               (uVar7,PTR_s_timeIntervalSinceDate__10088d9b0,uVar9);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    (*(code *)puVar1)(uVar8);
    (*(code *)puVar1)(uVar7);
    if (_DAT_10075fe88 <= dVar13) goto LAB_1006445c3;
  }
  cVar2 = '\0';
LAB_100644721:
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return cVar2;
}

