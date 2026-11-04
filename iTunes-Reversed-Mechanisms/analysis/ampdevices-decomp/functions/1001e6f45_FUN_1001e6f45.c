// name: FUN_1001e6f45
// address: 1001e6f45

ulong FUN_1001e6f45(long param_1,int param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006bfeb0(uVar4);
    }
  }
  else {
    if (param_2 == 0) {
      param_4 = 0;
      goto LAB_1001e701a;
    }
    lVar2 = _CFStringCreateMutable(0,0);
    if (lVar2 != 0) {
      _CFStringAppendCharacters(lVar2,param_1,param_2);
      _CFStringNormalize(lVar2,2);
      lVar3 = _CFStringGetLength(lVar2);
      param_4 = param_4 & 0xffffffff;
      if (lVar3 < (long)param_4) {
        param_4 = _CFStringGetLength(lVar2);
      }
      _CFStringGetCharacters(lVar2,0,param_4,param_3);
      FUN_10017060f(lVar2);
      goto LAB_1001e701a;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006bfe3a(uVar4);
    }
  }
  param_4 = 0;
  FUN_1001782e9(0,0);
LAB_1001e701a:
  return param_4 & 0xffffffff;
}

