// name: FUN_100165cab
// address: 100165cab

long FUN_100165cab(undefined8 param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_1006735be(uVar7);
    }
LAB_100165db3:
    FUN_1001782e9(0,0);
    return 0;
  }
  pcVar4 = (char *)FUN_1001dfadb(param_2);
  if (pcVar4 == (char *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_100673548(uVar7);
    }
    goto LAB_100165db3;
  }
  sVar5 = _strlen(pcVar4);
  uVar2 = FUN_10015f3c8(sVar5 & 0xffffffff);
  if (uVar2 == 0xffffffff) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_1006734d2(uVar7);
    }
  }
  else {
    lVar6 = FUN_100170ea9(param_1,uVar2);
    if (lVar6 != 0) {
      FUN_10017103d(lVar6,uVar2);
      uVar7 = FUN_100170f7f(lVar6);
      uVar3 = FUN_10015f5bf(pcVar4,sVar5 & 0xffffffff,uVar7,uVar2,0);
      if (uVar2 < uVar3) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          FUN_1006733e6(uVar7);
        }
        FUN_1001782e9(0,0);
      }
      FUN_10017103d(lVar6,uVar3);
      goto LAB_100165e09;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_10067345c(uVar7);
    }
  }
  lVar6 = 0;
  FUN_1001782e9(0,0);
LAB_100165e09:
  FUN_1001c64c1(pcVar4);
  return lVar6;
}

