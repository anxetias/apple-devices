// name: FUN_1001dfeed
// address: 1001dfeed

void FUN_1001dfeed(char *param_1,long param_2,long param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bab39(uVar3);
    }
  }
  else {
    sVar2 = _strlen(param_1);
    uVar4 = param_3 + param_2;
    if (uVar4 <= sVar2) {
      FUN_1001c631b(param_1 + uVar4,param_1 + param_2,(sVar2 - uVar4) + 1);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006baac3(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

