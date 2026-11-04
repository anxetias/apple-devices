// name: FUN_10016b07a
// address: 10016b07a

bool FUN_10016b07a(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 != 0) {
    *param_1 = 0;
    _CFRelease();
  }
  lVar2 = param_1[2];
  if ((int)lVar2 == 2) {
    lVar3 = _CFStringCreateWithBytes(DAT_1008c4d90,param_2,param_3,0x8000100,0);
    lVar1 = *param_1;
    *param_1 = lVar3;
    if (lVar1 != 0) {
      _CFRelease();
    }
  }
  return (int)lVar2 == 2;
}

