// name: FUN_1002f5d86
// address: 1002f5d86

void FUN_1002f5d86(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = _CFStringFind(param_1,&cf__,0);
  if (-1 < lVar1) {
    FUN_100173623(DAT_1008c4d90,param_1,0,lVar1);
    return;
  }
  _CFRetain(param_1);
  return;
}

