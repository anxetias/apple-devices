// name: FUN_100190fa1
// address: 100190fa1

undefined4 FUN_100190fa1(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int *piVar5;
  
  cVar1 = FUN_10017cc4a();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100694076(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffe4;
  }
  else {
    if ((*(byte *)(param_1 + 4) & 0x37) != 0) {
      FUN_100191757(param_1);
    }
    iVar2 = *(int *)(param_1 + 0x4d8);
    if (iVar2 == -1) {
      iVar2 = -1;
    }
    else if (*(char *)(param_1 + 0x4dc) == '\x01') {
      _fcntl(iVar2,0x30,0);
      *(undefined1 *)(param_1 + 0x4dc) = 0;
      iVar2 = *(int *)(param_1 + 0x4d8);
    }
    iVar2 = _close(iVar2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      piVar5 = ___error();
      uVar3 = FUN_1001eb020(*piVar5);
    }
    *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1001ecf9f();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return uVar3;
}

