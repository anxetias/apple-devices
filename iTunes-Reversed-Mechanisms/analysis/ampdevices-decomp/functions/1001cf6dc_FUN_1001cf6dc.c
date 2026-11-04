// name: FUN_1001cf6dc
// address: 1001cf6dc

int FUN_1001cf6dc(long param_1,uint param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      *(undefined1 *)(*(long *)(param_1 + 0x68) + 10 + (ulong)param_2 * 0x20) = param_3;
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b031c(uVar3);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b02b0(iVar2,uVar3);
    }
  }
  return iVar2;
}

