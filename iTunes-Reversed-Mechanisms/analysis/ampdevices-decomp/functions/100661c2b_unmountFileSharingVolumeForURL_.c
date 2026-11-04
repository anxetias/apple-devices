// name: unmountFileSharingVolumeForURL:
// address: 100661c2b

/* Function Stack Size: 0x18 bytes */

void AMPDevicesClientConnection::unmountFileSharingVolumeForURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_isAFCURL_10088ddb8);
  puVar1 = PTR__OBJC_CLASS___NSTimer_10082dfd0;
  if (cVar2 != '\0') {
    local_48 = PTR___NSConcreteStackBlock_10082caf0;
    local_40 = 0xc2000000;
    local_38 = FUN_100661cff;
    local_30 = &DAT_1008719d0;
    local_28 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_100700458,puVar1,PTR_s_scheduledTimerWithTimeInterval_r_10088c508,0,
                       &local_48);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(local_28);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

