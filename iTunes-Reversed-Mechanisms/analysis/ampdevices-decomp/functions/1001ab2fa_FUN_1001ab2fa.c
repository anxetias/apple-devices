// name: FUN_1001ab2fa
// address: 1001ab2fa

bool FUN_1001ab2fa(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFDictionaryGetTypeID();
    return lVar1 == lVar2;
  }
  return false;
}

