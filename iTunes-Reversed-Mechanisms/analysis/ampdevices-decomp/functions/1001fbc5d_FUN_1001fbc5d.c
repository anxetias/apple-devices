// name: FUN_1001fbc5d
// address: 1001fbc5d

int FUN_1001fbc5d(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_3 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006ccf0f(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    *param_3 = 0;
    iVar2 = FUN_1001fb86d(param_1,&local_28);
    if (iVar2 == 0) {
      lVar3 = FUN_10016a9bd(DAT_1008c4d90,local_28,param_2,0);
      if (lVar3 != 0) {
        FUN_10017060f(local_28);
        *param_3 = lVar3;
        return 0;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006cce99(uVar4);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0xd0;
    }
    FUN_10017060f(local_28);
    FUN_10017060f(0);
  }
  return iVar2;
}

