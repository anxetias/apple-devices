// name: FUN_1001a93ba
// address: 1001a93ba

undefined8 FUN_1001a93ba(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_28;
  undefined1 local_20 [8];
  
  if ((*param_1 != 0) &&
     (cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_28),
     local_28 != 0 && cVar1 != '\0')) {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFErrorGetTypeID();
    if (lVar2 == lVar3) {
      FUN_1001a8bb0(local_20,local_28);
      FUN_1001aaadc(param_3,local_20);
      FUN_1001aaad2(local_20);
      return 1;
    }
  }
  return 0;
}

