// name: FUN_1001aa080
// address: 1001aa080

undefined8 FUN_1001aa080(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_48 [16];
  void *local_38;
  void *local_30;
  
  FUN_10032f0f2(local_48);
  if (*param_2 != 0) {
    lVar1 = _CFDictionaryGetCount();
    if (lVar1 != 0) {
      FUN_1001a8200(&local_38,lVar1);
      _CFDictionaryGetKeysAndValues(*param_2,local_38,0);
      uVar2 = _CFArrayCreate(DAT_1008c4d98,local_38,lVar1,PTR__kCFTypeArrayCallBacks_10082e130);
      FUN_1001a78d6(param_1,uVar2);
      if (local_38 != (void *)0x0) {
        local_30 = local_38;
        operator_delete(local_38);
      }
      goto LAB_1001aa113;
    }
  }
  FUN_1001a7abe(param_1,local_48);
LAB_1001aa113:
  FUN_1001a7a94(local_48);
  return param_1;
}

