// name: FUN_100197893
// address: 100197893

long FUN_100197893(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_30;
  
  local_30 = 0;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069680e(uVar3);
    }
  }
  else {
    uVar3 = FUN_100170ef7(param_2);
    uVar4 = FUN_1001979ca(uVar3);
    lVar5 = FUN_100170ea9(param_1,0);
    if (lVar5 != 0) {
      FUN_10017103d(lVar5,uVar4);
      uVar6 = FUN_100170f3b(param_2);
      uVar7 = FUN_100170f7f(lVar5);
      iVar2 = FUN_100197a47(uVar6,uVar3,uVar7,uVar4,&local_30);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100696722(uVar3);
        }
        FUN_1001782e9(0,0);
        FUN_10017060f(lVar5);
        return 0;
      }
      FUN_10017103d(lVar5,local_30);
      return lVar5;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100696798(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

