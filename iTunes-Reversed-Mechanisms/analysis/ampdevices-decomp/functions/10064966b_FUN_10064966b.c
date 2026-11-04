// name: FUN_10064966b
// address: 10064966b

void FUN_10064966b(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (DAT_1008c77c0 == 0) {
    bVar3 = false;
  }
  else {
    cVar1 = FUN_100171439(*(undefined8 *)(DAT_1008c77c0 + 0x70),uVar2);
    bVar3 = cVar1 != '\0';
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006496d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),bVar3,0);
  return;
}

