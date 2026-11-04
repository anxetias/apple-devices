// name: FUN_100175898
// address: 100175898

undefined8 FUN_100175898(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100681e5c(uVar4);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = FUN_10017574a(param_1,&local_20);
    uVar4 = local_20;
    if (iVar2 == 0) {
      uVar3 = FUN_100170ef7(local_20);
      uVar4 = FUN_100170f3b(uVar4);
      iVar2 = FUN_1001755d6(uVar3,uVar4,&local_28);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_100681df0(iVar2,uVar4);
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_100681d84(iVar2,uVar4);
      }
    }
    FUN_10017060f(local_20);
    uVar4 = local_28;
  }
  return uVar4;
}

