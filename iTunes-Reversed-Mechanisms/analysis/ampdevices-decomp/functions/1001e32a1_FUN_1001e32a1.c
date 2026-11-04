// name: FUN_1001e32a1
// address: 1001e32a1

uint FUN_1001e32a1(char *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bc6e7(uVar3);
    }
  }
  else {
    if (*param_1 == '\x04') {
      uVar1 = *(uint *)(param_1 + 1);
      return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bc671(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

