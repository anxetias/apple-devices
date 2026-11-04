// name: FUN_100167167
// address: 100167167

ulong FUN_100167167(long param_1,long param_2,int param_3,char param_4)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006745ce(uVar4);
    }
  }
  else {
    FUN_1001c62d9(param_2,param_3);
    uVar6 = 0;
    if (param_1 == 0) goto LAB_10016729d;
    uVar2 = _CFStringGetLength(param_1);
    uVar5 = (ulong)(uint)(param_3 * 2);
    if ((long)uVar5 < (long)uVar2 && param_4 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006744e2(uVar4);
      }
    }
    else {
      lVar3 = FUN_1001c63e1();
      if (lVar3 != 0) {
        cVar1 = _CFStringGetCString(param_1,lVar3,uVar2 + 1,0x600);
        if (cVar1 != '\0') {
          if ((long)uVar2 < (long)uVar5) {
            uVar5 = uVar2;
          }
          if (param_4 == '\0') {
            uVar5 = uVar2;
          }
          FUN_1001e0e77(lVar3,uVar5 & 0xffffffff,param_2,param_3);
          FUN_1001c64c1(lVar3);
          uVar6 = uVar5 - ((long)uVar5 >> 0x3f) >> 1;
        }
        goto LAB_10016729d;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100674558(uVar4);
      }
    }
  }
  uVar6 = 0;
  FUN_1001782e9(0,0);
LAB_10016729d:
  return uVar6 & 0xffffffff;
}

