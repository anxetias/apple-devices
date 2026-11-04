// name: FUN_1001d0ae6
// address: 1001d0ae6

int FUN_1001d0ae6(long param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    if (param_2 < *(uint *)(param_1 + 0x10)) {
      *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18 + (ulong)param_2 * 0x20) = param_3;
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b1002(uVar3);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0f96(iVar2,uVar3);
    }
  }
  return iVar2;
}

