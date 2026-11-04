// name: FUN_100163037
// address: 100163037

ulong FUN_100163037(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  cVar1 = FUN_100171755(param_3);
  if (cVar1 != '\0') {
    cVar1 = _CFURLCredentialContainsPassword(param_1);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      lVar3 = _CFURLCredentialGetUsername(param_1);
      lVar4 = _CFURLCredentialCopyPassword(param_1);
      if (lVar4 == 0 || lVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar2 = FUN_10017169e(param_2,param_3,lVar3,lVar4,param_4);
        uVar5 = (ulong)uVar2;
      }
      FUN_10017060f(lVar4);
    }
    return uVar5 & 0xff;
  }
  uVar5 = FUN_10017169e(param_2,param_3,0,0,param_4);
  return uVar5;
}

