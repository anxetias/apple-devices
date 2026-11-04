// name: FUN_1004a63b3
// address: 1004a63b3

void FUN_1004a63b3(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_masterImageDictionary_10088d5a0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_uuid_10088c5d8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_objectForKeyedSubscript__10088be30,uVar4);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar3);
  if (lVar6 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__10088c218,lVar6);
  }
  (*(code *)puVar1)(lVar6);
  (*(code *)puVar1)(uVar2);
  return;
}

