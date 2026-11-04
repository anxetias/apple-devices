// name: FUN_1001636ba
// address: 1001636ba

ulong FUN_1001636ba(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5,
                   long param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint7 uVar7;
  ulong uVar6;
  long local_38;
  
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006718b1(uVar5);
    }
LAB_10016381b:
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10067183b(uVar5);
    }
    goto LAB_10016381b;
  }
  if (param_6 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006717c5(uVar5);
    }
    goto LAB_10016381b;
  }
  uVar7 = (uint7)(param_5 >> 8) & 0xffffff;
  iVar2 = FUN_100171ce8(param_3);
  if (iVar2 == 0x197) {
    FUN_100162e70(param_1,param_2);
    FUN_1001e9de0(param_1);
    local_38 = FUN_100162178();
    FUN_1001e9eb9(param_1);
    if (local_38 == 0) {
      return 0;
    }
    FUN_1001e9de0();
    cVar1 = FUN_1001630ea(param_1,param_2,param_4);
    uVar6 = CONCAT71(uVar7,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_100163430(param_1,param_4,local_38,param_5 & 0xffffffff,param_6);
      if (cVar1 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar3 = FUN_1001630ea(param_1,param_2,param_4);
        uVar6 = (ulong)uVar3;
      }
    }
  }
  else {
    if (iVar2 != 0x191) {
      return 0;
    }
    local_38 = FUN_100171c60(param_2);
    if (local_38 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_10067174f(uVar5);
      }
      goto LAB_10016381b;
    }
    FUN_1001e9de0(param_1);
    lVar4 = FUN_10016226c(param_1,local_38);
    FUN_1001e9eb9(param_1);
    if (lVar4 == 0) {
      uVar6 = 0;
      goto LAB_100163911;
    }
    FUN_1001630ea(param_1,param_2,param_4);
    FUN_1001e9de0(param_1 + 0x48);
    cVar1 = FUN_100162e70(param_1,param_2);
    uVar6 = CONCAT71(uVar7,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_1001631cc(param_1,local_38,lVar4,param_5 & 0xffffffff,param_6);
      if (cVar1 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar3 = FUN_100162e70(param_1,param_2);
        uVar6 = (ulong)uVar3;
      }
    }
  }
  FUN_1001e9eb9(param_1 + 0x48);
LAB_100163911:
  FUN_10017060f(local_38);
  return uVar6;
}

