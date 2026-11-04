// name: FUN_10016925a
// address: 10016925a

ulong FUN_10016925a(long param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_1001715c3();
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_100676d08(uVar5);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffffce;
    }
    else {
      uVar2 = FUN_100171607(param_1);
      cVar1 = FUN_100170633(lVar3,*(undefined8 *)PTR__kCFErrorDomainPOSIX_10082e088);
      if (cVar1 != '\0') {
        uVar4 = FUN_1001eb020(uVar2);
        return uVar4;
      }
      cVar1 = FUN_100170633(lVar3,*(undefined8 *)PTR__kCFErrorDomainMach_10082e078);
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_100170633(lVar3,*(undefined8 *)PTR__kCFErrorDomainCocoa_10082e070),
         cVar1 != '\0')) {
        uVar4 = 0xffffffd5;
        if (((uVar2 | 0x100) != 0x104) && (uVar4 = 0xffffec78, uVar2 != 0x101)) {
          uVar4 = (ulong)uVar2;
        }
      }
      else {
        uVar4 = (ulong)uVar2;
      }
    }
  }
  return uVar4;
}

