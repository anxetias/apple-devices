// name: FUN_1001d019e
// address: 1001d019e

int FUN_1001d019e(long param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0712(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001cf1e5();
    if (iVar2 == 0) {
      *param_2 = *(undefined4 *)(param_1 + 0xc);
      iVar2 = 0;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b06a6(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

