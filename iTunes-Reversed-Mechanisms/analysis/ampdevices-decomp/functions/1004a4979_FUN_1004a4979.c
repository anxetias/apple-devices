// name: FUN_1004a4979
// address: 1004a4979

void FUN_1004a4979(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__objc_msgSend_10082c770;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x28),PTR_s_uuid_10088c5d8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar3)(uVar2,PTR_s_setObject_forKeyedSubscript__10088be60,uVar1,uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return;
}

