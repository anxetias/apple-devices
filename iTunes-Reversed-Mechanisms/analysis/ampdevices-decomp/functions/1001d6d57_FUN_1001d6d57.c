// name: FUN_1001d6d57
// address: 1001d6d57

void FUN_1001d6d57(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x18;
  lVar2 = param_1 + 0x38;
  do {
    cVar3 = FUN_1001e8dbb(lVar1);
    if (cVar3 == '\0') {
      iVar4 = FUN_1001e991a(lVar2,0x8235);
    }
    else {
      iVar4 = FUN_1001e91e4(lVar1);
    }
    if (iVar4 != 0x3c) goto LAB_1001d6dde;
    iVar4 = FUN_1001ceb57(param_2,0,0xffffffffffffffff,0);
  } while (iVar4 == 0);
  FUN_1001d6fac(*(undefined8 *)(param_1 + 8));
  cVar3 = FUN_1001e8dbb(lVar1);
  if (cVar3 == '\0') {
    FUN_1001e9afc(lVar2);
  }
  else {
    FUN_1001e944c(lVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffff80;
LAB_1001d6dde:
  if (*(int *)(param_1 + 0x14) == 1) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006b4be6(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  cVar3 = FUN_1001e8dbb(lVar1);
  if (cVar3 == '\0') {
    FUN_1001e9bb5(lVar2);
  }
  else {
    FUN_1001e9587(lVar1);
  }
  return;
}

