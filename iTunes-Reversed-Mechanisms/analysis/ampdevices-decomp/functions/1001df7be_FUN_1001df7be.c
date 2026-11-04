// name: FUN_1001df7be
// address: 1001df7be

bool FUN_1001df7be(char *param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  if ((param_3 & 2) != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba22b(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba317(uVar3);
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      sVar4 = _strlen(param_1);
      iVar2 = FUN_1001df3ce(param_1,sVar4,param_2 + 1,*param_2,param_3);
      return iVar2 == 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba2a1(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return false;
}

