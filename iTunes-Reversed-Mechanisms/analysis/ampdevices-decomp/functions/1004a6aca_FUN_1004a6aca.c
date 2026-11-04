// name: FUN_1004a6aca
// address: 1004a6aca

void FUN_1004a6aca(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)();
  IVar3 = NSBundle::bundleWithIdentifier_
                    ((ID)PTR__OBJC_CLASS___NSBundle_10082c640,PTR_s_bundleWithIdentifier__10088bfd0,
                     &cf_com_apple_amp_devices);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_localizedStringForKey_value_tabl_10088c290,uVar2,&cf___,
                     &cf_PhotoKitImport);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar2);
  _objc_autoreleaseReturnValue(uVar5);
  return;
}

