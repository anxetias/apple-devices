// name: objectIDForDevice:onlyBootedOSMode:onlySetupComplete:
// address: 100648338

/* Function Stack Size: 0x20 bytes */

unsigned_int
AMPDevicesClientConnection::objectIDForDevice_onlyBootedOSMode_onlySetupComplete_
          (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  unsigned_int uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long local_48;
  long *local_40;
  undefined8 local_38;
  
  local_38 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  FUN_10025b7fa(&local_48);
  uVar5 = 0;
  if ((local_48 != 0) && (*(char *)(local_48 + 0x70) == '\x05')) {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_38,PTR_s_deviceMode_10088daa0);
    uVar5 = 0;
    if ((uVar6 & 0xfffffffffffffffb) == 1) {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_38,PTR_s_iPodDeviceClass_10088daa8);
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_38,PTR_s_uniqueIdentifier_10088dab0);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar7 = _objc_retainAutorelease(uVar7);
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_UTF8String_10088bf18);
      uVar5 = FUN_1004ddd6e(uVar4,uVar8,param_5);
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    }
    puVar3 = PTR_s_ecid_10088dab8;
    if (((param_4 == '\0') && (uVar5 == 0)) && (uVar5 = 0, uVar6 - 3 < 4)) {
      uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_38,PTR_s_ecid_10088dab8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar2 = PTR_s_unsignedLongLongValue_10088be80;
      lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_unsignedLongLongValue_10088be80);
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      uVar7 = FUN_1005e9a2c();
      if (lVar9 == 0) {
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_38,PTR_s_deviceIdentifier_10088ca18);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        lVar9 = FUN_1005e754a(uVar7,uVar8);
      }
      else {
        uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_38,puVar3);
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,puVar2);
        lVar9 = FUN_1005e762e(uVar7,uVar10);
      }
      if (lVar9 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(unsigned_int *)(lVar9 + 0x6884);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar9 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_38);
  return uVar5;
}

