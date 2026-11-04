// name: FUN_1001c4194
// address: 1001c4194

ulong FUN_1001c4194(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7294(uVar2);
    }
  }
  else if (param_3 < 1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a7132(uVar2);
    }
  }
  else if (param_4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a721e(uVar2);
    }
  }
  else {
    cVar1 = FUN_100174f92();
    if (cVar1 != '\0') {
      uVar2 = FUN_100170716(DAT_1008c4d90,param_2,param_3,PTR__kCFTypeArrayCallBacks_10082e130);
      FUN_10017501a(param_1,uVar2,param_4);
      FUN_10017060f(uVar2);
      uVar3 = CONCAT71((int7)((ulong)param_4 >> 8),1);
      goto LAB_1001c4294;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a71a8(uVar2);
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1001c4294:
  return uVar3 & 0xffffffff;
}

