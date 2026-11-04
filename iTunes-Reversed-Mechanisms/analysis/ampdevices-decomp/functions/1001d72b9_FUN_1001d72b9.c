// name: FUN_1001d72b9
// address: 1001d72b9

int FUN_1001d72b9(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x951) == '\x01') {
      *(undefined1 *)(param_1 + 0x952) = 1;
      *(undefined4 *)(param_2 + 0x10) = 0x46696c6c;
      *(long *)(param_2 + 8) = param_1;
      *(undefined4 *)(param_2 + 0x14) = 1;
      FUN_1001eac02(param_2,param_1 + 0x998);
      FUN_1001d4365(param_1);
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b5030(uVar3);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b4fc4(iVar2,uVar3);
    }
  }
  return iVar2;
}

