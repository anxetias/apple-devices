// name: FUN_1001a6877
// address: 1001a6877

undefined8 FUN_1001a6877(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_1c;
  
  iVar2 = _IORegistryEntryGetParentEntry(param_1,"IOService",&local_1c);
  if (iVar2 == 0) {
    uVar3 = _IORegistryEntryCreateCFProperty
                      (local_1c,&cf_IOMACAddress,*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,0
                      );
    lVar4 = FUN_1001705e9(uVar3);
    lVar5 = _CFDataGetTypeID();
    if (lVar4 != lVar5) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_10069e1a6(uVar6);
      }
      FUN_1001782e9(0,0);
    }
    lVar4 = FUN_100170ef7(uVar3);
    if (lVar4 < 6) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_10069e21c(uVar6);
      }
      FUN_1001782e9(0,0);
    }
    _IOObjectRelease(local_1c);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

