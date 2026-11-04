// name: FUN_100660750
// address: 100660750

void FUN_100660750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  lVar3 = (*(code *)puVar1)(param_3);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_deleteItemAtURL_withReply__10088ddf8,
               *(undefined8 *)(param_1 + 0x28),&PTR___NSConcreteGlobalBlock_100871980);
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar2,lVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

