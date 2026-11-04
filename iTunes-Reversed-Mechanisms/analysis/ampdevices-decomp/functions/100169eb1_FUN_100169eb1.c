// name: FUN_100169eb1
// address: 100169eb1

bool FUN_100169eb1(long param_1,long param_2)

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
    lVar1 = _CFStringCompare(param_1,param_2,1);
    bVar2 = lVar1 == 0;
  }
  return bVar2;
}

