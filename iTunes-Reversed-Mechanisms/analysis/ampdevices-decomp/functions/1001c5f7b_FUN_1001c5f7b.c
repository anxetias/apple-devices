// name: FUN_1001c5f7b
// address: 1001c5f7b

int FUN_1001c5f7b(long *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a91a0(uVar5);
    }
  }
  else {
    if (*param_1 == 0) {
      if ((int)param_2 < 0) {
        return -0x6c;
      }
      lVar4 = FUN_1001c5c8c(param_2);
      *param_1 = lVar4;
      if (lVar4 != 0) {
        return 0;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006a912a(uVar5);
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    iVar2 = FUN_1001c5d9c();
    if (-1 < (int)(param_2 & iVar2 + param_2)) {
      iVar3 = FUN_1001c5e39(*param_1,(long)(int)(iVar2 + param_2));
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((int)param_2 < 1 || *(long *)*param_1 == 0) {
        return 0;
      }
      FUN_1001c62d9(*(long *)*param_1 + (long)iVar2,param_2);
      return 0;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a90b4(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

