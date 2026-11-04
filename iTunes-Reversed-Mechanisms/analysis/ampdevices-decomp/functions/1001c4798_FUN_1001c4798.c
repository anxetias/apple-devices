// name: FUN_1001c4798
// address: 1001c4798

undefined8 FUN_1001c4798(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_34;
  
  local_34 = param_1;
  do {
    iVar2 = _IOObjectConformsTo(local_34,param_2);
    iVar1 = local_34;
    if (iVar2 != 0) {
      uVar3 = _IORegistryEntryCreateCFProperty
                        (local_34,param_3,*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,0);
      if (local_34 == param_1) {
        return uVar3;
      }
      _IOObjectRelease();
      return uVar3;
    }
    iVar2 = _IORegistryEntryGetParentEntry(local_34,"IOService",&local_34);
    if (iVar1 != param_1) {
      _IOObjectRelease(iVar1);
    }
  } while (iVar2 == 0);
  return 0;
}

