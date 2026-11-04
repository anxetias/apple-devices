// name: FUN_1001e7c3a
// address: 1001e7c3a

int FUN_1001e7c3a(undefined2 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined2 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c067c(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    lVar3 = FUN_1001737db(0,0);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c0606(uVar4);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      FUN_100174240(lVar3,param_1 + 1,*param_1);
      _CFStringNormalize(lVar3,param_2);
      iVar2 = FUN_1001e115f(lVar3,param_1);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006c059a(iVar2,uVar4);
        }
      }
    }
    FUN_10017060f(lVar3);
  }
  return iVar2;
}

