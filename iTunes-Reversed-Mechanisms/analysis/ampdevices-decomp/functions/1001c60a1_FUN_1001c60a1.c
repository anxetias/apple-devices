// name: FUN_1001c60a1
// address: 1001c60a1

undefined8 FUN_1001c60a1(long *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9302(uVar3);
    }
  }
  else {
    if (*param_1 == 0) {
      if ((int)param_2 < 0) {
        return 0xffffff94;
      }
      lVar4 = FUN_1001c5bcd(param_2);
      *param_1 = lVar4;
      if (lVar4 != 0) {
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a928c(uVar3);
      }
      FUN_1001782e9(0,0);
      return 0xffffff94;
    }
    iVar2 = FUN_1001c5d9c();
    if (-1 < (int)(param_2 & iVar2 + param_2)) {
      uVar3 = FUN_1001c5e39(*param_1,(long)(int)(iVar2 + param_2));
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9216(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

