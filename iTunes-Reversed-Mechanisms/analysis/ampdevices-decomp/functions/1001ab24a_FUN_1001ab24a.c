// name: FUN_1001ab24a
// address: 1001ab24a

bool FUN_1001ab24a(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFStringGetTypeID();
    return lVar1 == lVar2;
  }
  return false;
}

