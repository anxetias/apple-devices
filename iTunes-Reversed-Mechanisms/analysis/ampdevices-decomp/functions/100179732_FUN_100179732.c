// name: FUN_100179732
// address: 100179732

int FUN_100179732(undefined1 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006839ca(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    *param_2 = 0;
    lVar3 = FUN_1001c6429(0x90);
    iVar5 = 0;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_1001797cd(lVar3,param_1);
      if (iVar2 != 0) {
        FUN_1001c64c1(lVar3);
        lVar3 = 0;
        iVar5 = iVar2;
      }
    }
    *param_2 = lVar3;
  }
  return iVar5;
}

