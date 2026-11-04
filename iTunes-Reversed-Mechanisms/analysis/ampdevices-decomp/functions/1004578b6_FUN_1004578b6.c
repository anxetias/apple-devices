// name: FUN_1004578b6
// address: 1004578b6

undefined8 FUN_1004578b6(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_autoreleasePoolPush();
  uVar3 = _objc_opt_new(PTR__OBJC_CLASS___ACAccountStore_10082b620);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_aa_primaryAppleAccount_10088ca28);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_aa_personID_10088d318);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  FUN_1001bdca6(param_1,uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  _objc_autoreleasePoolPop(uVar2);
  return param_1;
}

