// name: FUN_10059cb56
// address: 10059cb56

undefined1 FUN_10059cb56(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  lVar1 = FUN_100166844();
  if ((lVar1 == 0) || (lVar2 = FUN_10017076e(lVar1), lVar2 < 1)) {
    uVar4 = 0;
  }
  else {
    uVar5 = lVar2 + 1;
    uVar4 = 0;
    do {
      lVar2 = FUN_100170853(lVar1,uVar5 - 2);
      if (lVar2 != 0) {
        lVar2 = _CFGetTypeID(lVar2);
        lVar3 = _CFDictionaryGetTypeID();
        if (lVar2 != lVar3) {
          FUN_100170bed(lVar1,uVar5 - 2);
          uVar4 = 1;
        }
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return uVar4;
}

