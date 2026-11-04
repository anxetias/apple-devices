// name: FUN_1004a48d9
// address: 1004a48d9

void FUN_1004a48d9(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x30),PTR_s_privateFileURL_10088d440);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),PTR_s_uuid_10088c5d8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar2,PTR_s_setObject_forKeyedSubscript__10088be60,uVar3,uVar4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}

