// name: FUN_1004ef2b5
// address: 1004ef2b5

undefined8 FUN_1004ef2b5(long param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x14cd8) == '\0') || (cVar1 = FUN_1004e1666(param_1), cVar1 == '\0')) {
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_1003164cf(*(long *)(param_1 + 0x30),0xf);
    }
  }
  else {
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (cVar1 = FUN_100316309(*(long *)(param_1 + 0x30),0xf), cVar1 != '\0')) {
      return 1;
    }
    if ((*(long *)(param_1 + 0x66c0) != 0) && (cVar1 = FUN_100496ed6(), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}

