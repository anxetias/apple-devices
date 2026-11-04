// name: FUN_1001a8772
// address: 1001a8772

void FUN_1001a8772(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0 && param_2 != 0) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      lVar2 = _CFDataCreateMutable(DAT_1008c4d98,0);
      *param_1 = lVar2;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if ((char)param_1[1] == '\0') {
      lVar1 = _CFDataCreateMutableCopy(DAT_1008c4d98,0,lVar2);
      *param_1 = lVar1;
      *(undefined1 *)(param_1 + 1) = 1;
      _CFRelease(lVar2);
      lVar2 = *param_1;
    }
    _CFDataAppendBytes(lVar2,param_2,param_3);
    return;
  }
  return;
}

