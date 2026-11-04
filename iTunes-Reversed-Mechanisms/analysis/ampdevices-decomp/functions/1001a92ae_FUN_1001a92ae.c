// name: FUN_1001a92ae
// address: 1001a92ae

undefined8 FUN_1001a92ae(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  long local_20;
  
  if ((*param_1 != 0) &&
     (cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_20),
     local_20 != 0 && cVar1 != '\0')) {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFDataGetTypeID();
    if (lVar2 == lVar3) {
      FUN_1001a790a(local_30,local_20);
      FUN_1001a7b1c(param_3,local_30);
      FUN_1001a85d4(local_30);
    }
    else {
      lVar2 = _CFGetTypeID(local_20);
      lVar3 = _CFStringGetTypeID();
      if (lVar2 != lVar3) {
        return 0;
      }
      FUN_1001b7eb0(local_40,local_20);
      FUN_1001a85ae(local_30,local_40,0);
      FUN_1001a7b1c(param_3,local_30);
      FUN_1001a85d4(local_30);
      FUN_1001b7a50(local_40);
    }
    return 1;
  }
  return 0;
}

