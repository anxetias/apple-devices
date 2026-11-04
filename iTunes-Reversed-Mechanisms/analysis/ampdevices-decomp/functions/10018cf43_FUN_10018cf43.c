// name: FUN_10018cf43
// address: 10018cf43

undefined8 FUN_10018cf43(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = DAT_1008c4dc8;
  if (DAT_1008c4dc8 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_100692273(uVar4);
    }
    FUN_1001782e9(0,0);
    return 0xffffff94;
  }
  uVar4 = _CFRunLoopGetMain();
  _DASessionScheduleWithRunLoop(lVar5,uVar4,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
  puVar1 = PTR__kDADiskDescriptionMatchVolumeMountable_10082e638;
  _DARegisterDiskAppearedCallback
            (DAT_1008c4dc8,*(undefined8 *)PTR__kDADiskDescriptionMatchVolumeMountable_10082e638,
             FUN_10018d104,0);
  lVar5 = FUN_100170720(0,0,PTR__kCFTypeArrayCallBacks_10082e130);
  if (lVar5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006921fd(uVar4);
    }
    cVar3 = FUN_1001782e9(0,0);
    if (cVar3 == '\0') {
      _DARegisterDiskDescriptionChangedCallback
                (DAT_1008c4dc8,*(undefined8 *)puVar1,
                 *(undefined8 *)PTR__kDADiskDescriptionWatchVolumePath_10082e678,FUN_10018d2e0,0);
      _DARegisterDiskDescriptionChangedCallback
                (DAT_1008c4dc8,*(undefined8 *)puVar1,
                 *(undefined8 *)PTR__kDADiskDescriptionWatchVolumeName_10082e670,FUN_10018d2e0,0);
      goto LAB_10018d03e;
    }
  }
  puVar2 = PTR__kDADiskDescriptionWatchVolumePath_10082e678;
  uVar4 = FUN_10017076e(*(undefined8 *)PTR__kDADiskDescriptionWatchVolumePath_10082e678);
  FUN_100170664(lVar5,*(undefined8 *)puVar2,0,uVar4);
  puVar2 = PTR__kDADiskDescriptionWatchVolumeName_10082e670;
  uVar4 = FUN_10017076e(*(undefined8 *)PTR__kDADiskDescriptionWatchVolumeName_10082e670);
  FUN_100170664(lVar5,*(undefined8 *)puVar2,0,uVar4);
  _DARegisterDiskDescriptionChangedCallback
            (DAT_1008c4dc8,*(undefined8 *)puVar1,lVar5,FUN_10018d2e0,0);
  FUN_10017060f(lVar5);
LAB_10018d03e:
  _DARegisterDiskDisappearedCallback(DAT_1008c4dc8,*(undefined8 *)puVar1,FUN_10018d33b,0);
  _DARegisterIdleCallback(DAT_1008c4dc8,FUN_10018d37c,0);
  return 0;
}

