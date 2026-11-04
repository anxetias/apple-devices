// name: FUN_10015071c
// address: 10015071c

ulong FUN_10015071c(ID *param_1,ID param_2,char param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  undefined8 unaff_R12;
  ulong uVar10;
  
  uVar3 = _objc_autoreleasePoolPush();
  param_1[2] = param_2;
  IVar4 = ACAccountStore::ams_sharedAccountStoreForMediaType_
                    ((ID)PTR__OBJC_CLASS___ACAccountStore_10082b620,
                     PTR_s_ams_sharedAccountStoreForMediaTy_10088bd90,
                     *(undefined8 *)PTR__AMSAccountMediaTypeiTunes_10082b6e8);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  if (param_1[2] == 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_ams_localiTunesAccount_10088bd20);
    IVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    IVar4 = *param_1;
    *param_1 = IVar8;
  }
  else {
    IVar4 = NSNumber::numberWithUnsignedLongLong_
                      ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar5,PTR_s_ams_iTunesAccountWithDSID__10088bd08,uVar6);
    IVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
    IVar4 = *param_1;
    *param_1 = IVar8;
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(IVar4);
    (*(code *)puVar1)(uVar6);
    uVar10 = CONCAT71((int7)((ulong)uVar6 >> 8),*param_1 != 0);
    if (param_3 != '\x01' || *param_1 != 0) goto LAB_1001508f1;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar5,PTR_s_accountTypeWithAccountTypeIdenti_10088bc90,
                       *(undefined8 *)PTR__ACAccountTypeIdentifieriTunesStore_10082b610);
    IVar4 = _objc_retainAutoreleasedReturnValue(uVar6);
    IVar8 = _objc_alloc(PTR__OBJC_CLASS___ACAccount_10082b618);
    IVar9 = ACAccount::initWithAccountType_(IVar8,PTR_s_initWithAccountType__10088bdd8,IVar4);
    IVar8 = *param_1;
    *param_1 = IVar9;
    (*(code *)PTR__objc_release_10082c7b0)(IVar8);
    (*(code *)PTR__objc_msgSend_10082c770)(*param_1,PTR_s_setActive__10088be58,0);
    IVar8 = NSNumber::numberWithUnsignedLongLong_
                      ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,
                       PTR_s_numberWithUnsignedLongLong__10088be20,param_1[2]);
    unaff_R12 = _objc_retainAutoreleasedReturnValue(IVar8);
    (*(code *)PTR__objc_msgSend_10082c770)(*param_1,PTR_s_ams_setDSID__10088bd68,unaff_R12);
    (*(code *)PTR__objc_release_10082c7b0)(unaff_R12);
  }
  (*(code *)PTR__objc_release_10082c7b0)(IVar4);
  uVar10 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if (*param_1 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      FUN_100153c4d(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,1);
  }
LAB_1001508f1:
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  _objc_autoreleasePoolPop(uVar3);
  return uVar10 & 0xffffffff;
}

