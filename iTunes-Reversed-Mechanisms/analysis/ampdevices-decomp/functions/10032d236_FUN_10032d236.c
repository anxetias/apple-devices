// name: FUN_10032d236
// address: 10032d236

long FUN_10032d236(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != 0) {
    lVar1 = _CFNumberGetTypeID();
    lVar2 = _CFGetTypeID(param_1);
    lVar3 = 0;
    if (lVar1 == lVar2) {
      lVar3 = param_1;
    }
    return lVar3;
  }
  return 0;
}

