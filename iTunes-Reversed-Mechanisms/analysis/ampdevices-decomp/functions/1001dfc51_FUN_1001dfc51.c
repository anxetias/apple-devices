// name: FUN_1001dfc51
// address: 1001dfc51

ulong FUN_1001dfc51(char *param_1)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ba7b5(uVar3);
    }
    sVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    sVar2 = _strlen(param_1);
  }
  return sVar2 & 0xffffffff;
}

