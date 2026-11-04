// name: FUN_1001a8c4a
// address: 1001a8c4a

long * FUN_1001a8c4a(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *param_2;
  if (lVar1 != lVar2) {
    if (lVar1 != 0) {
      _CFRelease(lVar1);
      lVar2 = *param_2;
    }
    *param_1 = lVar2;
    if (lVar2 != 0) {
      _CFRetain();
    }
  }
  return param_1;
}

