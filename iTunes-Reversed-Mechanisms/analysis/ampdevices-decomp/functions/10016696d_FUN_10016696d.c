// name: FUN_10016696d
// address: 10016696d

long FUN_10016696d(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_100171475();
  if (lVar1 != 0) {
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFDataGetTypeID();
    if (lVar2 == lVar3) {
      return lVar1;
    }
  }
  return 0;
}

