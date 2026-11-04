// name: objectIDForBootedOSDevice:
// address: 100648568

/* Function Stack Size: 0x18 bytes */

unsigned_int
AMPDevicesClientConnection::objectIDForBootedOSDevice_(ID param_1,SEL param_2,ID param_3)

{
  unsigned_int uVar1;
  
  uVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_objectIDForDevice_onlyBootedOSMo_10088dac0,param_3,1,1);
  return uVar1;
}

