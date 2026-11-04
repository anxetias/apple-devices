// name: FUN_1001e2095
// address: 1001e2095

uint FUN_1001e2095(long param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  uint local_c;
  
  if (0 < (int)param_2 && param_1 != 0) {
    uVar2 = 0;
    do {
      cVar3 = ' ';
      if (uVar2 < param_2) {
        cVar1 = *(char *)(param_1 + uVar2);
        cVar3 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar3 = cVar1;
        }
      }
      *(char *)((long)&local_c + uVar2) = cVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 != 4);
    return local_c >> 0x18 | (local_c & 0xff0000) >> 8 | (local_c & 0xff00) << 8 | local_c << 0x18;
  }
  return 0;
}

