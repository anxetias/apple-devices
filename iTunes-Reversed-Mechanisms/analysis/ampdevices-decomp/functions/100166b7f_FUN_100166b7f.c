// name: FUN_100166b7f
// address: 100166b7f

long FUN_100166b7f(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = FUN_100171475();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFDictionaryGetTypeID();
    lVar4 = 0;
    if (lVar2 == lVar3) {
      lVar4 = lVar1;
    }
  }
  return lVar4;
}

