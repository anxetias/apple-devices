// name: FUN_1004a41cc
// address: 1004a41cc

void FUN_1004a41cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_assetUUIDToAssetDictionary_10088d3c0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar1,PTR_s_uuid_10088c5d8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar2,PTR_s_setObject_forKeyedSubscript__10088be60,uVar1,uVar5);
  puVar3 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar3)(uVar2);
  cVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar1,PTR_s_isPhotoIris_10088d3c8);
  lVar6 = 0x28;
  if (cVar4 == '\0') {
    cVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar1,PTR_s_isVideo_10088cab8);
    lVar6 = 0x30;
    if (cVar4 == '\0') goto LAB_1004a428f;
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (*(undefined8 *)(param_1 + lVar6),PTR_s_addObject__10088c218,uVar1);
LAB_1004a428f:
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

