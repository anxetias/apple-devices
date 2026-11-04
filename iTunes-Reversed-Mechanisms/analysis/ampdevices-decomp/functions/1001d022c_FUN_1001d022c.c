// name: FUN_1001d022c
// address: 1001d022c

int FUN_1001d022c(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0788(iVar2,uVar3);
    }
  }
  return iVar2;
}

