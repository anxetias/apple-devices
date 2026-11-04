// name: FUN_1001e5279
// address: 1001e5279

uint FUN_1001e5279(uint param_1)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  
  if (param_1 < 0xdf) {
    if (DAT_1008a2800 == '\0') {
      psVar1 = &DAT_1008a2810;
      uVar2 = 0;
      do {
        sVar3 = (short)uVar2;
        if (((int)uVar2 - 0x41U < 0x1a) || (uVar2 != 0xd7 && 0xbf < uVar2)) {
          sVar3 = sVar3 + 0x20;
        }
        *psVar1 = sVar3;
        uVar2 = uVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (uVar2 != 0xdf);
      DAT_1008a2800 = '\x01';
    }
    param_1 = (uint)(ushort)(&DAT_1008a2810)[param_1 & 0xffff];
  }
  return param_1 & 0xffff;
}

