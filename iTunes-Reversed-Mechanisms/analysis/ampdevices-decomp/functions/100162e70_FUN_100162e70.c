// name: FUN_100162e70
// address: 100162e70

ulong FUN_100162e70(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 local_48 [16];
  long local_38;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100671151(uVar3);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100162ffe;
  }
  FUN_1001e9de0();
  lVar2 = FUN_100171c60(param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100671065(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  lVar4 = FUN_10016226c(param_1,lVar2);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    local_38 = FUN_1001620b6();
    if (local_38 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006710db(uVar3);
      }
      uVar7 = 0;
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') goto LAB_100162fee;
    }
    lVar4 = FUN_1001748e1(lVar2);
    if (lVar4 == 0) {
LAB_100162f86:
      lVar5 = _CFURLCredentialStorageCopyDefaultCredentialForProtectionSpace
                        (*(undefined8 *)(param_1 + 0x90),local_38);
    }
    else {
      lVar5 = FUN_1001737f8(lVar4);
      if (lVar5 < 1) goto LAB_100162f86;
      lVar5 = FUN_100162ca5(*(undefined8 *)(param_1 + 0x90),lVar4,local_38);
    }
    FUN_10017060f(lVar4);
    if (lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      lVar6 = FUN_100171475(*(undefined8 *)(param_1 + 0xa8),local_38);
      if (lVar6 == 0) {
        uVar7 = 0;
      }
      else {
        cVar1 = FUN_100163037(lVar5,param_2,lVar6,local_48);
        uVar7 = CONCAT71((int7)((ulong)lVar4 >> 8),cVar1 != '\0');
      }
      FUN_10017060f(lVar5);
    }
    FUN_10017060f(local_38);
  }
LAB_100162fee:
  FUN_10017060f(lVar2);
  FUN_1001e9eb9(param_1);
LAB_100162ffe:
  return uVar7 & 0xffffffff;
}

