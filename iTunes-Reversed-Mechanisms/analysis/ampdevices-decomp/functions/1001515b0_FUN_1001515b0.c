// name: FUN_1001515b0
// address: 1001515b0

undefined8 FUN_1001515b0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_autoreleasePoolPush();
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar3 = ACAccountStore::ams_sharedAccountStoreForMediaType_
                    ((ID)PTR__OBJC_CLASS___ACAccountStore_10082b620,
                     PTR_s_ams_sharedAccountStoreForMediaTy_10088bd90,
                     *(undefined8 *)PTR__AMSAccountMediaTypeiTunes_10082b6e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_ams_secureTokenForAccount__10088bd50,*(undefined8 *)*param_2
                           );
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  FUN_1001bdca6(param_1,uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar4);
  _objc_autoreleasePoolPop(uVar2);
  return param_1;
}

