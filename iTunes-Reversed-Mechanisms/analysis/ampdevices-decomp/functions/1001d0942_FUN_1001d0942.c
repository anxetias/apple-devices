// name: FUN_1001d0942
// address: 1001d0942

int FUN_1001d0942(long param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar3 = FUN_1001cf1e5();
  if (iVar3 == 0) {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      lVar5 = (ulong)param_2 * 0x20;
      lVar1 = *(long *)(param_1 + 0x68) + lVar5;
      if (*(char *)(*(long *)(param_1 + 0x68) + 8 + lVar5) == '\0') {
        iVar3 = FUN_1001dcff5(param_1 + 0x18,*(undefined4 *)(lVar1 + 0x10));
        *(undefined4 *)(lVar1 + 0x10) = 0;
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      else {
        FUN_1001cf5c9(*(undefined8 *)(lVar1 + 0x10));
      }
      iVar3 = *(int *)(param_1 + 0x10);
      if (~param_2 + iVar3 != 0) {
        FUN_1001c631b((ulong)param_2 * 0x20 + *(long *)(param_1 + 0x68) + 0x20,
                      lVar5 + *(long *)(param_1 + 0x68),(ulong)(~param_2 + iVar3) << 5);
        iVar3 = *(int *)(param_1 + 0x10);
      }
      *(int *)(param_1 + 0x10) = iVar3 + -1;
      iVar3 = 0;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006b0e46(uVar4);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x32;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b0dda(iVar3,uVar4);
    }
  }
  return iVar3;
}

