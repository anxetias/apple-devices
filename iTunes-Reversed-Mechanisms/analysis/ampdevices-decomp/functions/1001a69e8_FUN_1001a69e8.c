// name: FUN_1001a69e8
// address: 1001a69e8

byte FUN_1001a69e8(undefined8 param_1,char param_2)

{
  char cVar1;
  uint in_EAX;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  lVar2 = _SCNetworkReachabilityCreateWithName(DAT_1008c4d90,param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069e308(uVar3);
    }
  }
  else {
    cVar1 = _SCNetworkReachabilityGetFlags(lVar2,(long)&uStack_28 + 4);
    if (cVar1 != '\0') {
      bVar4 = (byte)(uStack_28 >> 0x20) >> 1 & 1;
      bVar5 = 0;
      if ((uStack_28 & 0x400000000) == 0) {
        bVar5 = bVar4;
      }
      if (param_2 != '\0') {
        bVar5 = bVar4;
      }
      goto LAB_1001a6a8d;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069e292(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  bVar5 = 1;
LAB_1001a6a8d:
  FUN_10017060f(lVar2);
  return bVar5;
}

