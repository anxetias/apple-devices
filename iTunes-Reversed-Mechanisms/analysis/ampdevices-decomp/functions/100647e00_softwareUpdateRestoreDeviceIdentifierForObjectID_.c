// name: softwareUpdateRestoreDeviceIdentifierForObjectID:
// address: 100647e00

/* Function Stack Size: 0x14 bytes */

ID AMPDevicesClientConnection::softwareUpdateRestoreDeviceIdentifierForObjectID_
             (ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar3 = DAT_1008c34a8;
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_objectForKey__10088be28,uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}

