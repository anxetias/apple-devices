// name: FUN_1002d3670
// address: 1002d3670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002d3670(void)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  _DAT_1008bbf28 = FUN_1002d3a19;
  _DAT_1008bbf30 = FUN_1002d4072;
  _DAT_1008bbf38 = FUN_1002d418b;
  _DAT_1008bbf40 = FUN_1002d41b2;
  _DAT_1008bbf48 = FUN_1002d41d4;
  _DAT_1008bbf50 = FUN_1002d4210;
  _DAT_1008bbf58 = FUN_1002d422b;
  _DAT_1008bbf60 = FUN_1002d4246;
  _DAT_1008bbf68 = FUN_1002d4445;
  _DAT_1008bbf80 = FUN_1002d456f;
  _DAT_1008bbf88 = FUN_1002d465e;
  _DAT_1008bbf90 = FUN_1002d4741;
  DAT_1008c5d70 = FUN_1001c629e(0x10,&DAT_100711c6e);
  if (DAT_1008c5d70 != 0) {
    iVar4 = FUN_100633012(FUN_1002d4824,FUN_1002d48ee,DAT_1008c5d70,0);
    lVar6 = DAT_1008c5d70;
    *(bool *)DAT_1008c5d70 = iVar4 == 0;
    uVar2 = FUN_1001c19b0();
    FUN_10018d386(1,FUN_1002d4ac8,lVar6,1,uVar2,DAT_1008c5d70 + 8);
  }
  uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
  DAT_1008c5d78 = _DASessionCreate(uVar8);
  if (DAT_1008c5d78 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "sDASession != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c5d78 == 0) goto LAB_1002d3957;
  }
  lVar6 = FUN_100171409(uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar6 == 0) {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "matchingDictionary != __null";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar7 = FUN_100170720(uVar8,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (lVar7 != 0) {
      FUN_1001709a5(lVar7,*(undefined8 *)PTR__kDADiskDescriptionVolumePathKey_10082e668);
      FUN_1001709a5(lVar7,*(undefined8 *)PTR__kDADiskDescriptionVolumeMountableKey_10082e650);
    }
    FUN_100171502(lVar6,*(undefined8 *)PTR__kDADiskDescriptionDeviceVendorKey_10082e630,&cf_Apple);
    FUN_100171502(lVar6,*(undefined8 *)PTR__kDADiskDescriptionDeviceModelKey_10082e628,&cf_iPod);
    lVar1 = DAT_1008c5d78;
    uVar8 = FUN_1001727a0();
    _DASessionScheduleWithRunLoop(lVar1,uVar8,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
    _DARegisterDiskPeekCallback(DAT_1008c5d78,lVar6,0,FUN_1002d4fda,0);
    _DARegisterDiskAppearedCallback(DAT_1008c5d78,lVar6,FUN_1002d5449,0);
    _DARegisterDiskDescriptionChangedCallback(DAT_1008c5d78,lVar6,lVar7,FUN_1002d5972,0);
    _DARegisterDiskDisappearedCallback(DAT_1008c5d78,lVar6,FUN_1002d59f3,0);
    _DARegisterIdleCallback(DAT_1008c5d78,FUN_1002d5c7c,0);
    FUN_10017060f(lVar7);
    FUN_10017060f(lVar6);
  }
LAB_1002d3957:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

