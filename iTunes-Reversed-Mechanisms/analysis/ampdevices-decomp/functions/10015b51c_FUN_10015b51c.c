// name: FUN_10015b51c
// address: 10015b51c

void FUN_10015b51c(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  cVar2 = FUN_10015b4ae();
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066bc99(uVar3);
    }
  }
  else {
    lVar1 = FUN_1001c627e(param_1);
    if (*(short *)(lVar1 + 0x18) < 1) {
      return;
    }
    lVar1 = FUN_1001c627e(param_1);
    if (*(short *)(lVar1 + 0x18) < 0x3e9) {
      lVar1 = FUN_1001c627e(param_1);
      *(short *)(lVar1 + 0x18) = *(short *)(lVar1 + 0x18) + -1;
      lVar1 = FUN_1001c627e(param_1);
      if (*(short *)(lVar1 + 0x18) != 0) {
        return;
      }
      FUN_10015b3c2(param_1);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066bc23(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

