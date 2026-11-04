// name: FUN_1001a86a4
// address: 1001a86a4

void FUN_1001a86a4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
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
  _CFDataSetLength(lVar2,param_2);
  return;
}

