// name: FUN_1001eab1e
// address: 1001eab1e

long FUN_1001eab1e(long *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_1 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c337a(uVar4);
    }
    FUN_1001782e9(0,1);
  }
  else {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = FUN_1001ea9a5(lVar1,param_1);
      if (iVar3 == 0) {
        return lVar1;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006c330e(iVar3,uVar4);
      }
    }
  }
  return 0;
}

