// name: FUN_1001e53a1
// address: 1001e53a1

void FUN_1001e53a1(ushort *param_1)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  undefined8 uVar4;
  
  if (*param_1 < 0x100) {
    if (*param_1 == 0) {
      return;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006be7b6(uVar4);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0xff;
  }
  uVar3 = 1;
  do {
    puVar1 = param_1 + uVar3;
    *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
    uVar3 = uVar3 + 1;
  } while (uVar3 <= *param_1);
  return;
}

