// name: FUN_1001c9b1d
// address: 1001c9b1d

int FUN_1001c9b1d(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  
  local_28 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    iVar2 = FUN_1001c9c99(param_1,0x6d657461);
    if (iVar2 == -0x80) goto LAB_1001c9c63;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006ac324(iVar2,uVar3);
      }
      goto LAB_1001c9c63;
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar2 = FUN_1001c9c99(param_1,0x696c7374);
    if (iVar2 == -0x80) goto LAB_1001c9c63;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006ac2b8(iVar2,uVar3);
      }
      goto LAB_1001c9c63;
    }
  }
  iVar2 = FUN_10015d60b(0,0,0,&local_28,2);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_10015d357(*(undefined8 *)(param_1 + 0x18),local_28,0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          *param_2 = local_28;
          return 0;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006ac1e0(iVar2,uVar3);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006ac24c(iVar2,uVar3);
      }
    }
  }
LAB_1001c9c63:
  if (local_28 != 0 && iVar2 != 0) {
    FUN_10015ccc4(local_28,0);
  }
  return iVar2;
}

