// name: FUN_10039f57b
// address: 10039f57b

bool FUN_10039f57b(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = true;
  if (param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFArrayGetTypeID();
    if (lVar1 == lVar2) {
      lVar1 = _CFArrayGetCount(param_1);
      bVar3 = lVar1 == 0;
    }
  }
  return bVar3;
}

