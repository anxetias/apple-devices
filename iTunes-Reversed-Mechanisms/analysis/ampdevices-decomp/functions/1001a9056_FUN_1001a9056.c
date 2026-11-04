// name: FUN_1001a9056
// address: 1001a9056

undefined8 FUN_1001a9056(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long local_28;
  undefined1 local_20 [8];
  
  if ((*param_1 != 0) &&
     (cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_28),
     cVar1 != '\0' && local_28 != 0)) {
    FUN_1001a8bb0(local_20);
    FUN_1001aaadc(param_3,local_20);
    FUN_1001ab240(local_20);
    return 1;
  }
  return 0;
}

