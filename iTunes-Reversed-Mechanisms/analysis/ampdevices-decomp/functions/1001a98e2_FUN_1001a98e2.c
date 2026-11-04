// name: FUN_1001a98e2
// address: 1001a98e2

bool FUN_1001a98e2(long *param_1,undefined8 *param_2,double *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double extraout_XMM0_Qa;
  double dVar5;
  long local_20;
  
  if (*param_1 == 0) {
    return false;
  }
  cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_20);
  if (local_20 == 0 || cVar1 == '\0') {
LAB_1001a99a4:
    bVar2 = false;
  }
  else {
    lVar3 = _CFGetTypeID();
    lVar4 = _CFNumberGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFNumberGetValue(local_20,6,param_3);
      return cVar1 != '\0';
    }
    lVar3 = _CFGetTypeID(local_20);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue();
      dVar5 = 0.0;
      if (cVar1 != '\0') {
        dVar5 = DAT_100700458;
      }
    }
    else {
      lVar3 = _CFGetTypeID(local_20);
      lVar4 = _CFStringGetTypeID();
      if (lVar3 != lVar4) goto LAB_1001a99a4;
      _CFStringGetDoubleValue(local_20);
      dVar5 = (double)(float)extraout_XMM0_Qa;
    }
    *param_3 = dVar5;
    bVar2 = true;
  }
  return bVar2;
}

