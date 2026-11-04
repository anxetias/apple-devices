// name: FUN_100166e24
// address: 100166e24

ulong FUN_100166e24(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_R14;
  ulong uVar3;
  
  if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067421c(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
    goto LAB_100166ecd;
  }
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006741a6(uVar2);
    }
LAB_100166eb9:
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100674130(uVar2);
      }
      goto LAB_100166eb9;
    }
    uVar2 = FUN_100171475();
    cVar1 = FUN_100166ee9(uVar2,param_3);
    uVar3 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if (cVar1 != '\0') goto LAB_100166ecd;
  }
  FUN_1001b811c(param_3);
  uVar3 = 0;
LAB_100166ecd:
  return uVar3 & 0xffffffff;
}

