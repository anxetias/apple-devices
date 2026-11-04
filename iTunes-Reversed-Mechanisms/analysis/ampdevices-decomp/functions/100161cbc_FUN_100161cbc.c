// name: FUN_100161cbc
// address: 100161cbc

long FUN_100161cbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  
  iVar2 = FUN_100160c3f(param_2,&local_48);
  if (iVar2 == -0x80) {
    return 0;
  }
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_10067064b(iVar2,uVar5);
    return 0;
  }
  local_40 = local_48;
  iVar2 = FUN_100160255(param_2,&local_38);
  if (iVar2 == -0x80) {
    return 0;
  }
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_1006705df(iVar2,uVar5);
    return 0;
  }
  iVar2 = FUN_100160772(param_2,0);
  if (iVar2 == -0x80) {
    return 0;
  }
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_100670573(iVar2,uVar5);
    return 0;
  }
  lVar3 = FUN_100170ea9(param_1,local_48);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006704fd(uVar5);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  FUN_10017103d(lVar3,local_48);
  uVar4 = FUN_100170ef7(lVar3);
  if (uVar4 < local_48) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100670487(uVar5);
    }
  }
  else {
    lVar6 = FUN_100170f7f(lVar3);
    if (lVar6 != 0) {
      iVar2 = FUN_100160380(param_2,&local_40,lVar6);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006703a5(iVar2,uVar5);
        }
      }
      FUN_100160772(param_2,local_38);
      if (iVar2 == 0) {
        return lVar3;
      }
      goto LAB_100161ecb;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100670411(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  FUN_100160772(param_2,local_38);
LAB_100161ecb:
  FUN_10017060f(lVar3);
  return 0;
}

