// name: FUN_100166357
// address: 100166357

void FUN_100166357(long param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006738e8(uVar3);
    }
  }
  else {
    if (param_2 != (char *)0x0) {
      sVar2 = _strlen(param_2);
      FUN_1001710c1(param_1,param_2,sVar2);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100673872(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

