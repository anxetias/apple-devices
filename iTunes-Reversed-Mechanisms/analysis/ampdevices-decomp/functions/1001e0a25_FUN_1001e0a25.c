// name: FUN_1001e0a25
// address: 1001e0a25

void FUN_1001e0a25(uint param_1,undefined1 *param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  uint local_c;
  
  local_c = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
  *param_2 = 8;
  pcVar2 = "0123456789abcdef";
  if (param_3 == 0) {
    pcVar2 = "0123456789ABCDEF";
  }
  lVar3 = 0;
  do {
    bVar1 = *(byte *)((long)&local_c + lVar3);
    param_2[lVar3 * 2 + 1] = pcVar2[bVar1 >> 4];
    param_2[lVar3 * 2 + 2] = pcVar2[bVar1 & 0xf];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  return;
}

