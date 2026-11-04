// name: FUN_1003c0e48
// address: 1003c0e48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003c0e48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  double local_30;
  
  cVar3 = (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  puVar1 = PTR__objc_msgSend_10082c770;
  if (cVar3 == '\0') {
    IVar4 = NSProcessInfo::processInfo
                      ((ID)PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
    local_30 = (double)(*(code *)puVar1)(uVar5,PTR_s_systemUptime_10088c9f0);
    local_30 = local_30 + _DAT_100707dc0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSTimer_10082dfd0;
    puVar1 = PTR__objc_retain_10082c7b8;
    local_68 = PTR___NSConcreteStackBlock_10082caf0;
    local_60 = 0xc2000000;
    local_58 = FUN_1003c0f81;
    local_50 = &DAT_100857158;
    local_38 = local_30;
    local_48 = (*(code *)PTR__objc_retain_10082c7b8)(*(undefined8 *)(param_1 + 0x28));
    local_40 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20));
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_100700b00,puVar2,PTR_s_scheduledTimerWithTimeInterval_r_10088c508,1,
                       &local_68);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar5);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(local_40);
    (*(code *)puVar1)(local_48);
  }
  return;
}

