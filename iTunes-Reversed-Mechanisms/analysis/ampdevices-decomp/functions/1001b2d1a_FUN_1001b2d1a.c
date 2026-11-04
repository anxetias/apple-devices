// name: FUN_1001b2d1a
// address: 1001b2d1a

ulong FUN_1001b2d1a(long *param_1)

{
  char cVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar2 = FUN_1001b2c8a();
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0be7(uVar4);
    }
  }
  else {
    pbVar3 = (byte *)_CGBitmapContextGetData(lVar2);
    if (pbVar3 != (byte *)0x0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      (**(code **)(*param_1 + 0xf8))((int)DAT_100700458,param_1,lVar2);
      uVar5 = CONCAT71((int7)((ulong)param_1 >> 8),0x40 < *pbVar3);
      goto LAB_1001b2de2;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0b71(uVar4);
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_1001b2de2:
  return uVar5 & 0xffffffff;
}

