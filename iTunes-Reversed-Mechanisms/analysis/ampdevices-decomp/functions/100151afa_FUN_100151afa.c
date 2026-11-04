// name: FUN_100151afa
// address: 100151afa

void FUN_100151afa(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = _objc_autoreleasePoolPush();
  LOCK();
  bVar1 = *(byte *)(*param_1 + 8);
  *(byte *)(*param_1 + 8) = 0;
  puVar2 = PTR__objc_msgSend_10082c770;
  UNLOCK();
  if ((bVar1 & 1) != 0) {
    IVar5 = ACAccountStore::ams_sharedAccountStoreForMediaType_
                      ((ID)PTR__OBJC_CLASS___ACAccountStore_10082b620,
                       PTR_s_ams_sharedAccountStoreForMediaTy_10088bd90,
                       *(undefined8 *)PTR__AMSAccountMediaTypeiTunes_10082b6e8);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    uVar7 = (*(code *)puVar2)(*(undefined8 *)*param_1,PTR_s_username_10088be90);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_length_10088bdf0);
    if (lVar8 == 0) {
      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)*param_1,PTR_s_ams_isLocalAccount_10088bd10);
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      if (cVar3 == '\0') {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (*(undefined8 *)*param_1,PTR_s_setUsername__10088be68,&cf_temporary);
      }
    }
    else {
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    }
    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar6,PTR_s_ams_saveVerifiedAccount_error__10088bd48,*(undefined8 *)*param_1)
    ;
    uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(0);
    uVar7 = uVar9;
    if (cVar3 == '\0') {
      lVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_code_10088bb40);
      if (lVar8 == 0x69) {
        uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_domain_10088bb78);
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar10,PTR_s_isEqualToString__10088bb98,
                           *(undefined8 *)PTR__AMSErrorDomain_10082b6f8);
        (*(code *)PTR__objc_release_10082c7b0)(uVar10);
        if (cVar3 != '\0') {
          (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar6,PTR_s_saveVerifiedAccount_error__10088be48,*(undefined8 *)*param_1);
          uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(uVar9);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
      }
    }
    puVar2 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)puVar2)(uVar6);
  }
  _objc_autoreleasePoolPop(uVar4);
  return;
}

