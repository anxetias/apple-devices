// name: FUN_1001fb86d
// address: 1001fb86d

int FUN_1001fb86d(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_58 [24];
  ulong local_40;
  
  if (param_2 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006ccc47(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  *param_2 = 0;
  iVar2 = FUN_1001f805a();
  if (iVar2 == -0x80) {
    return -0x80;
  }
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') {
      return iVar2;
    }
    FUN_1006ccbdb(iVar2,uVar5);
    return iVar2;
  }
  lVar3 = 0;
  iVar2 = FUN_1001f7dcb(param_1,0,0,local_58,0,0,0,0);
  if (iVar2 != -0x80) {
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006ccb6f(iVar2,uVar5);
      }
      lVar3 = 0;
LAB_1001fb9d6:
      FUN_1001f825c(param_1);
      if (iVar2 == 0) {
        *param_2 = lVar3;
        return 0;
      }
      goto LAB_1001fba52;
    }
    if (local_40 < 2000000000) {
      lVar3 = FUN_100170ea9(DAT_1008c4d90,local_40);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006ccaf9(uVar5);
        }
        goto LAB_1001fba38;
      }
      FUN_10017103d(lVar3,local_40);
      uVar4 = FUN_100170ef7(lVar3);
      if (uVar4 < local_40) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006cca83(uVar5);
        }
      }
      else {
        lVar6 = FUN_100170f7f(lVar3);
        if (lVar6 != 0) {
          iVar2 = FUN_1001f8126(param_1,lVar6,local_40,0);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              FUN_1006cc9a1(iVar2,uVar5);
            }
          }
          goto LAB_1001fb9d6;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006cca0d(uVar5);
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006cc92b(uVar5);
      }
LAB_1001fba38:
      lVar3 = 0;
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  FUN_1001f825c(param_1);
LAB_1001fba52:
  FUN_10017060f(lVar3);
  return iVar2;
}

