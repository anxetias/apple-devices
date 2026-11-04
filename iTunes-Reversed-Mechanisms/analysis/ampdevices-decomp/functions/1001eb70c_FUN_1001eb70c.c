// name: FUN_1001eb70c
// address: 1001eb70c

undefined8 FUN_1001eb70c(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_10082e788;
  uVar3 = _IOServiceMatching("IOPlatformExpertDevice");
  iVar2 = _IOServiceGetMatchingService(uVar1,uVar3);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _IORegistryEntryCreateCFProperty
                      (iVar2,param_1,*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,0);
    _IOObjectRelease(iVar2);
  }
  return uVar3;
}

