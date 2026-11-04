// name: FUN_100182503
// address: 100182503

ulong FUN_100182503(char *param_1,short *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      uVar2 = FUN_1001824d7(param_1 + 0x20);
      return uVar2;
    }
    bVar1 = 1;
    if (((param_1[0x39] & 0x40U) != 0) ||
       (((param_2 != (short *)0x0 && (*param_2 != 0)) && (param_2[1] == 0x2e)))) goto LAB_100182537;
  }
  bVar1 = 0;
LAB_100182537:
  return (ulong)bVar1;
}

