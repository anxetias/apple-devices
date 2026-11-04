// name: FUN_10015ccc4
// address: 10015ccc4

int FUN_10015ccc4(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10066c8d7(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else if (param_2 == '\0') {
LAB_10015cd29:
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      FUN_1001c64c1(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_1001c64c1(param_1);
    iVar2 = 0;
  }
  else {
    do {
      lVar3 = FUN_1001c26bc(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_10015cd29;
      iVar2 = FUN_10015ccc4(lVar3,param_2);
    } while (iVar2 == 0);
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10066c86b(iVar2,uVar4);
    }
  }
  return iVar2;
}

