// name: FUN_1001ab326
// address: 1001ab326

bool FUN_1001ab326(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFDataGetTypeID();
    return lVar1 == lVar2;
  }
  return false;
}

