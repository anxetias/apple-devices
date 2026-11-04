// name: FUN_1005c58a3
// address: 1005c58a3

undefined8 FUN_1005c58a3(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _CFDictionaryGetTypeID();
  lVar2 = FUN_1005b8d4a(param_1,&cf_com_apple_iTunes,&cf_WiFiSyncingLibraries,uVar1);
  if (lVar2 == 0) {
    uVar1 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  }
  else {
    uVar1 = FUN_100172752(DAT_1008c4d90,lVar2,1);
  }
  FUN_10017060f(lVar2);
  return uVar1;
}

