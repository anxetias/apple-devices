// name: FUN_1001ab276
// address: 1001ab276

bool FUN_1001ab276(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFNumberGetTypeID();
    return lVar1 == lVar2;
  }
  return false;
}

