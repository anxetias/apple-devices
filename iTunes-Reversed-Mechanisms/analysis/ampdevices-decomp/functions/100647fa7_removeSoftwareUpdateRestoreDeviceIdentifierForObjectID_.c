// name: removeSoftwareUpdateRestoreDeviceIdentifierForObjectID:
// address: 100647fa7

/* Function Stack Size: 0x14 bytes */

void AMPDevicesClientConnection::removeSoftwareUpdateRestoreDeviceIdentifierForObjectID_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = DAT_1008c34a8;
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInteger__10088c4a8
                     ,param_3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,PTR_s_removeObjectForKey__10088c648,uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

