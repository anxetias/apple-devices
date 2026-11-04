// name: FUN_1001ab2a2
// address: 1001ab2a2

bool FUN_1001ab2a2(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFDateGetTypeID();
    return lVar1 == lVar2;
  }
  return false;
}

