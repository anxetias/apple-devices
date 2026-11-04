// name: FUN_100151fb2
// address: 100151fb2

void FUN_100151fb2(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  IVar3 = ACAccountStore::ams_sharedAccountStoreForMediaType_
                    ((ID)PTR__OBJC_CLASS___ACAccountStore_10082b620,
                     PTR_s_ams_sharedAccountStoreForMediaTy_10088bd90,
                     *(undefined8 *)PTR__AMSAccountMediaTypeiTunes_10082b6e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar5 = FUN_1001bdcb0(param_2,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_ams_secureTokenForAccount__10088bd50,*(undefined8 *)*param_1);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_isEqualToString__10088bb98,uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (cVar2 == '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar4,PTR_s_ams_setSecureToken_forAccount_er_10088bd80,uVar5,*(undefined8 *)*param_1,
               0);
    LOCK();
    *(undefined1 *)(*param_1 + 8) = 1;
    UNLOCK();
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar4);
  return;
}

