// name: FUN_100169da8
// address: 100169da8

bool FUN_100169da8(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else if (param_2 == 0 || param_1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = _CFStringCompare(param_1,param_2,0);
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}

