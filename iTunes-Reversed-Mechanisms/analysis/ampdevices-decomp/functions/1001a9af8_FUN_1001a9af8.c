// name: FUN_1001a9af8
// address: 1001a9af8

void FUN_1001a9af8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = _CFDictionaryCreateMutable
                      (DAT_1008c4d98,1,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                       PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    *param_1 = lVar2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else if ((char)param_1[1] == '\0') {
    lVar1 = _CFDictionaryCreateMutableCopy(DAT_1008c4d98,0,lVar2);
    *param_1 = lVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    _CFRelease(lVar2);
    return;
  }
  return;
}

