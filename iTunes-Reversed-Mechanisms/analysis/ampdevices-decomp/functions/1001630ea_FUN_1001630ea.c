// name: FUN_1001630ea
// address: 1001630ea

ulong FUN_1001630ea(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 local_38 [16];
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006711c7(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001e9de0(param_1);
  lVar3 = FUN_100162178();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = _CFURLCredentialStorageCopyDefaultCredentialForProtectionSpace
                      (*(undefined8 *)(param_1 + 0x90),lVar3);
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      lVar5 = FUN_100171475(*(undefined8 *)(param_1 + 0xa8),lVar3);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        cVar1 = FUN_100163037(lVar4,param_2,lVar5,local_38);
        uVar6 = CONCAT71((int7)((ulong)param_2 >> 8),cVar1 != '\0');
      }
      FUN_10017060f(lVar4);
    }
    FUN_10017060f(lVar3);
  }
  FUN_1001e9eb9(param_1);
  return uVar6 & 0xffffffff;
}

