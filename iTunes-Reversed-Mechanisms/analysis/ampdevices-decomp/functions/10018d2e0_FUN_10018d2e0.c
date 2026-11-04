// name: FUN_10018d2e0
// address: 10018d2e0

void FUN_10018d2e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DADiskCopyDescription();
  if (lVar1 != 0) {
    lVar2 = FUN_100166c7f(lVar1,*(undefined8 *)PTR__kDADiskDescriptionVolumePathKey_10082e668);
    if (lVar2 != 0) {
      lVar2 = FUN_10018ced3(param_1);
      if (lVar2 == 0) {
        FUN_10018d104(param_1);
      }
      else {
        FUN_100182047();
      }
    }
    FUN_10017060f(lVar1);
    return;
  }
  return;
}

