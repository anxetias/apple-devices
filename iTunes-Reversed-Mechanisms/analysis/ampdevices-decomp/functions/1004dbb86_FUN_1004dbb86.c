// name: FUN_1004dbb86
// address: 1004dbb86

undefined8 FUN_1004dbb86(long param_1)

{
  char cVar1;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    cVar1 = FUN_1005b1148(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_10057e0b0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

