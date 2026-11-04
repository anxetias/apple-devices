// name: FUN_1001c17c4
// address: 1001c17c4

int FUN_1001c17c4(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1008a21f0 != 0) {
    return DAT_1008a21f0;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a5397(uVar2);
  }
  FUN_1001782e9(0,1);
  return DAT_1008a21f0;
}

