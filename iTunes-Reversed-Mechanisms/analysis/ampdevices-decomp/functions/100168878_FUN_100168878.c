// name: FUN_100168878
// address: 100168878

void FUN_100168878(long param_1,long param_2,long param_3,int param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100676104(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067608e(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100676018(uVar3);
    }
  }
  else {
    lVar2 = FUN_1001c63e1();
    if (lVar2 != 0) {
      FUN_1001e0a72(param_3,param_4,lVar2,param_4 * 2 + 1,0);
      FUN_10016843e(param_1,param_2,lVar2,0);
      FUN_1001c64c1(lVar2);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100675fa2(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

