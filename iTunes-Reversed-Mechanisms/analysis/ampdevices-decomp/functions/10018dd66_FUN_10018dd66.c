// name: FUN_10018dd66
// address: 10018dd66

int FUN_10018dd66(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0 || param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100692728(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_10018dce1();
    if (iVar2 == 0) {
      iVar2 = FUN_10017d477(param_2,param_3,0);
    }
    else {
      iVar2 = FUN_1001eb020(iVar2);
    }
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      ___bzero(param_2,0x420);
    }
  }
  return iVar2;
}

