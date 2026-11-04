// name: localizedAdditionalDescriptionWithSyncOperation
// address: 1006443f2

/* Function Stack Size: 0x10 bytes */

ID AMPDeviceProgress::localizedAdditionalDescriptionWithSyncOperation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined1 local_1d [5];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    FUN_1001e3312(*(int *)(param_1 + 0xc),local_1d);
    uVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSString_10082c6b8,PTR_s_stringWithFormat__10088c038,
                       &cf_xxxx_s__,local_1d,*(undefined8 *)(param_1 + 0x28));
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  }
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

