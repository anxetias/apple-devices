// name: FUN_10024f1cc
// address: 10024f1cc

void FUN_10024f1cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  
  if (*(int *)(param_3 + 1) == 0) {
    lVar1 = _CFGetTypeID(param_2);
    lVar2 = _CFStringGetTypeID();
    if (lVar1 == lVar2) {
      cVar3 = FUN_100169da8(param_2,*param_3);
      if (cVar3 != '\0') {
        FUN_100164d80(param_1,param_3 + 1);
        return;
      }
    }
  }
  return;
}

