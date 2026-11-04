// name: FUN_1001d251b
// address: 1001d251b

int FUN_1001d251b(int param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  short sVar7;
  
  if (param_1 == -1) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2bca(uVar5);
    }
    FUN_1001782e9(0,0);
    sVar7 = -0x32;
    goto LAB_1001d25e2;
  }
  uVar2 = _fcntl(param_1,3,0);
  if ((int)uVar2 < 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2ae8(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = uVar2 & 0x7ffffffb;
    if (param_2 != '\0') {
      uVar3 = uVar2 | 4;
    }
    sVar7 = 0;
    iVar4 = _fcntl(param_1,4,(ulong)uVar3);
    if (iVar4 != -0x80) {
      if (iVar4 == 0) goto LAB_1001d25e2;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006b2b5e(iVar4,uVar5);
      }
      if (iVar4 == 0) {
        sVar7 = 0;
        goto LAB_1001d25e2;
      }
    }
  }
  piVar6 = ___error();
  sVar7 = (short)*piVar6;
LAB_1001d25e2:
  return (int)sVar7;
}

