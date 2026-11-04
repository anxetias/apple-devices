// name: FUN_1001d0b82
// address: 1001d0b82

undefined4 FUN_1001d0b82(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    uVar4 = 0;
    if (cVar1 != '\0') {
      FUN_1006b1078(iVar2,uVar3);
      uVar4 = 0;
    }
  }
  return uVar4;
}

