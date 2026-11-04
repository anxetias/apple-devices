// name: FUN_1003c24c4
// address: 1003c24c4

undefined8 FUN_1003c24c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = FUN_1003c13da(uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x28),PTR_s_unsignedLongLongValue_10088be80);
  local_30 = 0;
  uVar2 = FUN_1006316ac(uVar3,uVar2,&local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(local_30);
  uVar4 = FUN_1001cf0a7(uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar2,uVar4,uVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar2);
  (*(code *)puVar1)(uVar3);
  return 1;
}

