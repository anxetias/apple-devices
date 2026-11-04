// name: FUN_100644081
// address: 100644081

undefined4 FUN_100644081(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_deviceType_10088d980);
  uVar2 = 0;
  if (lVar1 - 1U < 9) {
    uVar2 = *(undefined4 *)
             (
             "ZZ82-[AMPDevicesClientConnection startSoftwareRestoreForDevice:withOptions:withReply:]EUb1_E3$_2"
             + lVar1 * 4 + 0x60);
  }
  return uVar2;
}

