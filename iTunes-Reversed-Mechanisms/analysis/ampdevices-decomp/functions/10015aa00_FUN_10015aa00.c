// name: FUN_10015aa00
// address: 10015aa00

int FUN_10015aa00(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *(uint *)(param_1 + 8) + param_2;
  iVar2 = *(int *)(param_1 + 4) * iVar5;
  if (param_2 < 1) {
    if (param_2 < 0) {
      if (*(uint *)(param_1 + 8) < (uint)-param_2) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10066b1f7(uVar3);
        }
        FUN_1001782e9(0,0);
        return -0x32;
      }
      iVar2 = FUN_1001c5e39(*(undefined8 *)(param_1 + 0x10),iVar2);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_10066b18b(iVar2,uVar3);
        return iVar2;
      }
    }
  }
  else if (*(long *)(param_1 + 0x10) == 0) {
    lVar4 = FUN_1001c5d4b(iVar2,0x10000);
    *(long *)(param_1 + 0x10) = lVar4;
    if (lVar4 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066b2d9(uVar3);
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
  }
  else {
    iVar2 = FUN_1001c5e39(*(long *)(param_1 + 0x10),iVar2);
    if (iVar2 == -0x80) {
      return -0x80;
    }
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_10066b26d(iVar2,uVar3);
      return iVar2;
    }
  }
  *(int *)(param_1 + 8) = iVar5;
  return 0;
}

