// name: FUN_10065eab5
// address: 10065eab5

void FUN_10065eab5(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar4 = (*(code *)puVar1)(param_3);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,PTR_s_dictionary_10088c4a0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR_s_setValue_forKey__10088c3d8;
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setValue_forKey__10088c3d8,&cf_app,&cf_type);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_valueForKey__10088dd88,&cf_CFBundleDisplayName);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar1,uVar6,&cf_name);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar1,uVar3,&cf_path);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSString_10082c6b8,PTR_s_stringWithFormat__10088c038,
                     &cf_afc________,*(undefined8 *)(param_1 + 0x20),uVar3);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar1 = PTR_s_setObject_forKey__10088c000;
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setObject_forKey__10088c000,uVar6,&cf_url);
  iVar2 = FUN_1005c3d1e(*(undefined8 *)(param_1 + 0x30),uVar3);
  if (iVar2 == 0) {
    (*(code *)PTR__objc_msgSend_10082c770)(uVar5,puVar1,0,&cf_icon);
    (*(code *)PTR__objc_release_10082c7b0)(0);
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__10088c218,uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}

