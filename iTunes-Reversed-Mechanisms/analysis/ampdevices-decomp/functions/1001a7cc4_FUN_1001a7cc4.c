// name: FUN_1001a7cc4
// address: 1001a7cc4

void FUN_1001a7cc4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = _CFArrayCreateMutable(DAT_1008c4d98,0,PTR__kCFTypeArrayCallBacks_10082e130);
    *param_1 = lVar2;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else if ((char)param_1[1] == '\0') {
    lVar1 = _CFArrayCreateMutableCopy(DAT_1008c4d98,0,lVar2);
    *param_1 = lVar1;
    *(undefined1 *)(param_1 + 1) = 1;
    _CFRelease(lVar2);
    return;
  }
  return;
}

