// name: FUN_1001505d2
// address: 1001505d2

void FUN_1001505d2(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar3 = _objc_autoreleasePoolPush();
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar4 = ACAccountStore::ams_sharedAccountStoreForMediaType_
                    ((ID)PTR__OBJC_CLASS___ACAccountStore_10082b620,
                     PTR_s_ams_sharedAccountStoreForMediaTy_10088bd90,
                     *(undefined8 *)PTR__AMSAccountMediaTypeiTunes_10082b6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_ams_activeiTunesAccount_10088bcd0);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  lVar8 = *param_1;
  *param_1 = lVar7;
  (*(code *)PTR__objc_release_10082c7b0)(lVar8);
  lVar8 = *param_1;
  if (lVar8 == 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_ams_localiTunesAccount_10088bd20);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar8 = *param_1;
    *param_1 = lVar7;
    (*(code *)PTR__objc_release_10082c7b0)(lVar8);
    lVar8 = *param_1;
  }
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar8,PTR_s_ams_DSID_10088bcb8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  lVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_unsignedLongLongValue_10088be80);
  param_1[2] = lVar8;
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (*param_1 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_100153bd7(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,1);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  _objc_autoreleasePoolPop(uVar3);
  return;
}

