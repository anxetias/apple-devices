// name: FUN_1004a457c
// address: 1004a457c

void FUN_1004a457c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  puVar1 = PTR_s_objectForKeyedSubscript__10088be30;
  uVar6 = *(undefined8 *)PTR__PHImageFileURLKey_10082b568;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_objectForKeyedSubscript__10088be30,uVar6);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  if (lVar5 == 0) {
    cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x30),PTR_s_isReferencedAsset_10088d410);
    if (cVar2 == '\0') goto LAB_1004a4658;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x30),PTR_s_mainFileURL_10088d418);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__10088be60,uVar6,
               *(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar1,uVar6);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__10088be60,uVar6,
               *(undefined8 *)(param_1 + 0x28));
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
LAB_1004a4658:
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x38));
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

