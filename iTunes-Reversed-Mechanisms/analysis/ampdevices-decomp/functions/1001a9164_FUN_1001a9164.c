// name: FUN_1001a9164
// address: 1001a9164

undefined8 FUN_1001a9164(long *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_30;
  long local_28;
  undefined1 local_20;
  
  if ((*param_1 != 0) &&
     (cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_30),
     local_30 != 0 && cVar1 != '\0')) {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFDictionaryGetTypeID();
    if (lVar2 == lVar3) {
      FUN_1001a8d82(&local_28,local_30,1);
      if (*param_3 != local_28) {
        if (*param_3 != 0) {
          _CFRelease();
        }
        *param_3 = local_28;
        *(undefined1 *)(param_3 + 1) = local_20;
      }
      local_28 = 0;
      FUN_1001a8f90();
      return 1;
    }
  }
  return 0;
}

