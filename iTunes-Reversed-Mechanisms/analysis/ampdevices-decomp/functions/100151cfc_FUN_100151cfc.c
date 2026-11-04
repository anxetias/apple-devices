// name: FUN_100151cfc
// address: 100151cfc

void FUN_100151cfc(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar3 = _objc_autoreleasePoolPush();
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar4 = ACAccountStore::ams_sharedAccountStoreForMediaType_
                    ((ID)PTR__OBJC_CLASS___ACAccountStore_10082b620,
                     PTR_s_ams_sharedAccountStoreForMediaTy_10088bd90,
                     *(undefined8 *)PTR__AMSAccountMediaTypeiTunes_10082b6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  cVar2 = (*(code *)puVar1)(*(undefined8 *)*param_1,PTR_s_ams_isLocalAccount_10088bd10);
  if (cVar2 == '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)*param_1,PTR_s_setActive__10088be58,1);
    LOCK();
    *(undefined1 *)(*param_1 + 8) = 1;
    UNLOCK();
    FUN_100151afa(param_1);
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_ams_activeiTunesAccount_10088bcd0);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    if (lVar7 != 0) {
      (*(code *)PTR__objc_msgSend_10082c770)(lVar7,PTR_s_setActive__10088be58,0);
      cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar5,PTR_s_ams_saveVerifiedAccount_error__10088bd48,lVar7);
      uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(0);
      uVar6 = uVar8;
      if (cVar2 == '\0') {
        lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_code_10088bb40);
        if (lVar9 == 0x69) {
          uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_domain_10088bb78);
          uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
          cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                            (uVar10,PTR_s_isEqualToString__10088bb98,
                             *(undefined8 *)PTR__AMSErrorDomain_10082b6f8);
          (*(code *)PTR__objc_release_10082c7b0)(uVar10);
          if (cVar2 != '\0') {
            (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar5,PTR_s_saveVerifiedAccount_error__10088be48,lVar7);
            uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(uVar8);
            (*(code *)PTR__objc_release_10082c7b0)(uVar8);
          }
        }
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(lVar7);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  _objc_autoreleasePoolPop(uVar3);
  return;
}

