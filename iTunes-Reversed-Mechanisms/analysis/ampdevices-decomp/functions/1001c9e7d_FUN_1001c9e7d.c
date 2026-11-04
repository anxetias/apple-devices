// name: FUN_1001c9e7d
// address: 1001c9e7d

int FUN_1001c9e7d(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 8) != 0) {
    iVar2 = FUN_10015d516(*(long *)(param_2 + 8),param_2);
    if (iVar2 == -0x80) {
      return -0x80;
    }
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006ac554(iVar2,uVar3);
      return iVar2;
    }
  }
  iVar2 = FUN_10015ccc4(param_2,1);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ac5c0(iVar2,uVar3);
    }
  }
  return iVar2;
}

