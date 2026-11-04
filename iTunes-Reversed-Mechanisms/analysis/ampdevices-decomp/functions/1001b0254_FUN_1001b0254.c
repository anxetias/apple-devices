// name: FUN_1001b0254
// address: 1001b0254

int FUN_1001b0254(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = FUN_1001b2884();
  if (iVar3 == -0x80) {
    return -0x80;
  }
  if (iVar3 == 0) {
    lVar1 = param_1 + 0x98;
    iVar3 = FUN_1001e8dd6(lVar1,0,0);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar3 = FUN_1001ee6ff(FUN_1001b0376,param_1,0,0,param_1 + 0x90,param_1 + 0xbc);
        if ((iVar3 == 0) && (iVar3 = FUN_1001e944c(lVar1), iVar3 == 0)) {
          FUN_1001e9587(lVar1);
          return 0;
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_10069f5fe(iVar3,uVar4);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    FUN_1001b28ce(param_1);
    cVar2 = FUN_1001e8dbb(lVar1);
    if (cVar2 != '\0') {
      FUN_1001e9587(lVar1);
    }
    return iVar3;
  }
  uVar4 = FUN_1001cc310();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    FUN_10069f66a(iVar3,uVar4);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return iVar3;
}

