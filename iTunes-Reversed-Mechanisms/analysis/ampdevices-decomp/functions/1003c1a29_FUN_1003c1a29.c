// name: FUN_1003c1a29
// address: 1003c1a29

undefined8 FUN_1003c1a29(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = FUN_1003c13da(uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  local_30 = 0;
  uVar2 = FUN_10062fcdd(uVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        (int)*(char *)(param_1 + 0x40),1,&local_30);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(local_30);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar2,uVar3);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)puVar1)(uVar2);
  return 1;
}

