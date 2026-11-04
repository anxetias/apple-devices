// name: FUN_1001e094c
// address: 1001e094c

void FUN_1001e094c(ulong param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  ulong local_10;
  
  local_10 = param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 |
             (param_1 & 0xff0000000000) >> 0x18 | (param_1 & 0xff00000000) >> 8 |
             (param_1 & 0xff000000) << 8 | (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28
             | param_1 << 0x38;
  *param_2 = 0x10;
  pcVar2 = "0123456789abcdef";
  if (param_3 == 0) {
    pcVar2 = "0123456789ABCDEF";
  }
  lVar3 = 0;
  do {
    bVar1 = *(byte *)((long)&local_10 + lVar3);
    param_2[lVar3 * 2 + 1] = pcVar2[bVar1 >> 4];
    param_2[lVar3 * 2 + 2] = pcVar2[bVar1 & 0xf];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  return;
}

