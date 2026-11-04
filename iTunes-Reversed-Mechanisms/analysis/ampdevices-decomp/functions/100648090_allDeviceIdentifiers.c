// name: allDeviceIdentifiers
// address: 100648090

/* Function Stack Size: 0x10 bytes */

ID AMPDevicesClientConnection::allDeviceIdentifiers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = FUN_100502062();
  puVar1 = PTR_s_addObjectsFromArray__10088bca8;
  (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_addObjectsFromArray__10088bca8,uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  uVar3 = FUN_1005e9a2c();
  uVar3 = FUN_1005e7882(uVar3);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar2,puVar1,uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}

