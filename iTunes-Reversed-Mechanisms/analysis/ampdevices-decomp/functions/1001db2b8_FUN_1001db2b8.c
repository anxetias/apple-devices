// name: FUN_1001db2b8
// address: 1001db2b8

void FUN_1001db2b8(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(lVar1 + 8);
  iVar4 = FUN_1001eacad(lVar1,lVar2 + 0x9b8);
  if ((iVar4 != -0x80) && (iVar4 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006b7c1b(iVar4,uVar5);
    }
  }
  *(undefined4 *)(lVar1 + 0x10) = 0x43577274;
  FUN_1001eac02(lVar1,lVar2 + 0x998);
  FUN_1001d4365(lVar2);
  return;
}

