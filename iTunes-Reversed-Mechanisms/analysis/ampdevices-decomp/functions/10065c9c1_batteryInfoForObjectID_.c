// name: batteryInfoForObjectID:
// address: 10065c9c1

/* Function Stack Size: 0x14 bytes */

ID AMPDevicesClientConnection::batteryInfoForObjectID_(ID param_1,SEL param_2,unsigned_int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  ID IVar4;
  uint local_24;
  
  local_24 = (uint)((ulong)in_RAX >> 0x20);
  uVar3 = FUN_100502206(param_3);
  iVar1 = FUN_10031f6fd(uVar3,0x62617474,&local_24);
  if (iVar1 == 0) {
    uVar3 = _objc_opt_new(PTR__OBJC_CLASS___AMPDeviceBatteryInfo_10082b9a8);
    uVar2 = local_24 >> 8 & 0xff;
    (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_setBatteryIsCharging__10088dd48,uVar2 == 3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setBatteryIsFullyCharged__10088dd50,uVar2 == 2);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setBatteryGasGaugeCapability__10088dd58,(byte)(local_24 >> 0x10) & 1);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setBatteryCurrentCapacity__10088dd60,local_24 & 0xff);
  }
  else {
    uVar3 = 0;
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}

