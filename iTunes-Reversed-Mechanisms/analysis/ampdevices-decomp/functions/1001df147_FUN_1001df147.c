// name: FUN_1001df147
// address: 1001df147

void FUN_1001df147(char *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b9c6b(uVar4);
    }
  }
  else {
    if (param_2 != (byte *)0x0) {
      sVar3 = _strlen(param_1);
      if (sVar3 == 0) {
        return;
      }
      uVar6 = (ulong)*param_2;
      sVar5 = 0;
      do {
        bVar1 = param_1[sVar5];
        if ((bVar1 != 0) && ((char)uVar6 != -1)) {
          uVar7 = uVar6 & 0xff;
          uVar6 = uVar7 + 1;
          *param_2 = (byte)uVar6;
          param_2[uVar7 + 1] = bVar1;
        }
        sVar5 = sVar5 + 1;
      } while (sVar3 != sVar5);
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006b9bf5(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

