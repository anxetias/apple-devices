// name: FUN_1001ebbed
// address: 1001ebbed

ulong FUN_1001ebbed(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_20 [4];
  uint local_1c;
  
  if (DAT_1008a2b20 != 0) {
    return DAT_1008a2b20;
  }
  local_1c = 0;
  iVar2 = _SessionGetInfo(0xffffffff,&local_1c,local_20);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3bbf(iVar2,uVar3);
    }
  }
  DAT_1008a2b20 = (ulong)local_1c;
  if (DAT_1008a2b20 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3c2b(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  return DAT_1008a2b20;
}

