// name: FUN_100164bce
// address: 100164bce

undefined1 FUN_100164bce(long param_1,undefined8 param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 == (undefined2 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10067251e(uVar4);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 != 0) {
      lVar3 = FUN_100164a01();
      if ((lVar3 != 0) && (iVar2 = FUN_1001e115f(lVar3,param_3), iVar2 != -0x80)) {
        if (iVar2 == 0) {
          return 1;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_10067243c(iVar2,uVar4);
        }
      }
      return 0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006724a8(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

