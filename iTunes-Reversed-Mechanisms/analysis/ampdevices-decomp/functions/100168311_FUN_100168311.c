// name: FUN_100168311
// address: 100168311

bool FUN_100168311(long param_1)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = true;
  }
  else {
    lVar1 = _CFStringGetLength();
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}

