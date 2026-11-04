// name: FUN_1004cf445
// address: 1004cf445

byte FUN_1004cf445(long param_1)

{
  char cVar1;
  byte bVar2;
  
  bVar2 = 1;
  if ((((*(int *)(param_1 + 0xa4) == *(int *)(*(long *)(param_1 + 0x80) + 0x420)) &&
       (*(long *)(param_1 + 0x98) != 0)) && (*(short *)(param_1 + 0xa8) != 0)) &&
     (*(short *)(param_1 + 0xaa) != 0)) {
    cVar1 = FUN_10032109f(param_1);
    if (cVar1 != '\0') {
      bVar2 = *(byte *)(param_1 + 0x48) >> 1 & 1;
    }
  }
  return bVar2;
}

