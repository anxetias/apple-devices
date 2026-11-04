// name: FUN_1001a54f2
// address: 1001a54f2

undefined8 FUN_1001a54f2(double param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_40 [8];
  long local_38;
  
  if ((param_1 != DAT_100700af8) || (NAN(param_1) || NAN(DAT_100700af8))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069dab4(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_2 + 0x30) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069dc16(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    lVar3 = _SCNetworkReachabilityCreateWithName(0);
    *(long *)(param_2 + 0x50) = lVar3;
    if (lVar3 != 0) {
      FUN_1001c62d9(local_40,0x28);
      local_38 = param_2;
      cVar1 = _SCNetworkReachabilitySetCallback
                        (*(undefined8 *)(param_2 + 0x50),FUN_1001a56e0,local_40);
      if (cVar1 == '\0') {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_10069dba0(uVar2);
        }
      }
      else {
        uVar2 = *(undefined8 *)(param_2 + 0x50);
        uVar4 = FUN_1001727a0();
        cVar1 = _SCNetworkReachabilityScheduleWithRunLoop
                          (uVar2,uVar4,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
        if (cVar1 != '\0') {
          return 0;
        }
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_10069db2a(uVar2);
        }
      }
      FUN_1001782e9(0,0);
      FUN_1001a565e(param_2);
      FUN_1001a568e(param_2);
      *(undefined1 *)(param_2 + 0x39) = 0;
    }
    uVar2 = 0xffffffe5;
  }
  return uVar2;
}

