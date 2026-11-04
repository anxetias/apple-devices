// name: FUN_1001c5d4b
// address: 1001c5d4b

long FUN_1001c5d4b(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1001c5bcd();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a8df0(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)(lVar2 + 0x20) = param_2;
  }
  return lVar2;
}

