// name: FUN_1004a49e4
// address: 1004a49e4

void FUN_1004a49e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  puVar1 = PTR_s_objectForKeyedSubscript__10088be30;
  uVar6 = *(undefined8 *)PTR__PHImageFileURLKey_10082b568;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_objectForKeyedSubscript__10088be30,uVar6);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  puVar2 = PTR_s_uuid_10088c5d8;
  if (lVar5 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x28),PTR_s_uuid_10088c5d8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,puVar1,uVar4);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x28),puVar2);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar6,PTR_s_setObject_forKeyedSubscript__10088be60,uVar7,uVar8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar1,uVar6);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x28),PTR_s_uuid_10088c5d8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar6,PTR_s_setObject_forKeyedSubscript__10088be60,uVar4,uVar7);
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)puVar1)(uVar4);
  _dispatch_group_leave(*(dispatch_group_t *)(param_1 + 0x38));
  (*(code *)puVar1)(uVar3);
  return;
}

