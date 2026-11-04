// name: FUN_1001e7e2d
// address: 1001e7e2d

undefined8 FUN_1001e7e2d(undefined8 param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_38 [16];
  
  FUN_1001b7a44();
  cVar1 = FUN_1001edfc7();
  if (cVar1 != '\0') {
    if (DAT_1008a2a50 == 0) {
LAB_1001e7ebf:
      DAT_1008a2a50 = FUN_1001e8240();
      if (DAT_1008a2a58 == '\0') {
        FUN_1001c0fbe(FUN_1001e82bd,0,0,0,0);
        DAT_1008a2a58 = '\x01';
      }
    }
    else {
      uVar2 = _CFLocaleCopyCurrent();
      uVar3 = FUN_1001712fc(DAT_1008a2a50);
      uVar3 = FUN_100171e5b(uVar3);
      uVar4 = FUN_100171e5b(uVar2);
      cVar1 = FUN_100170633(uVar3,uVar4);
      if (cVar1 == '\0') {
        FUN_10017060f(DAT_1008a2a50);
        DAT_1008a2a50 = 0;
      }
      FUN_10017060f(uVar2);
      if (DAT_1008a2a50 == 0) goto LAB_1001e7ebf;
    }
    lVar5 = FUN_1001705fc(DAT_1008a2a50);
    if (lVar5 != 0) goto LAB_1001e7f14;
  }
  lVar5 = FUN_1001e8240();
  if (lVar5 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c06f2(uVar2);
    }
    FUN_1001782e9(0,0);
    FUN_1001b90b6(local_38,(long)(int)param_2);
    FUN_1001b80b2(param_1,local_38);
    FUN_1001b7a50(local_38);
    return param_1;
  }
LAB_1001e7f14:
  _CFGregorianDateGetAbsoluteTime(DAT_100700458,(ulong)param_2 | 0x101010200000000,0);
  uVar2 = FUN_1001713b1(0,lVar5);
  FUN_1001b7eb0(local_38,uVar2);
  FUN_1001b80b2(param_1,local_38);
  FUN_1001b7a50(local_38);
  FUN_10017060f(uVar2);
  FUN_10017060f(lVar5);
  return param_1;
}

