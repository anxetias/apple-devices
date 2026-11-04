// name: FUN_1001a90d0
// address: 1001a90d0

undefined8 FUN_1001a90d0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 local_30 [16];
  long local_20;
  
  if ((*param_1 != 0) &&
     (cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_20),
     local_20 != 0 && cVar1 != '\0')) {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFArrayGetTypeID();
    if (lVar2 == lVar3) {
      FUN_1001a790a(local_30,local_20);
      FUN_1001a7b1c(param_3,local_30);
      FUN_1001a7a94(local_30);
      return 1;
    }
  }
  return 0;
}

