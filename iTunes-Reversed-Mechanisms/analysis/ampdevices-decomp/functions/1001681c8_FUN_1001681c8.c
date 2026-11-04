// name: FUN_1001681c8
// address: 1001681c8

ulong FUN_1001681c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = FUN_100171475();
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFURLGetTypeID();
    if (lVar3 == lVar4) {
      uVar5 = FUN_10016ffd2(lVar2,param_3,0);
      return uVar5;
    }
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFStringGetTypeID();
    if ((lVar3 == lVar4) && (lVar2 = FUN_10017454a(DAT_1008c4d90,lVar2,0,0), lVar2 != 0)) {
      uVar1 = FUN_10016ffd2(lVar2,param_3,0);
      FUN_10017060f(lVar2);
      return (ulong)uVar1 & 0xff;
    }
  }
  return 0;
}

