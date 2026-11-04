// name: FUN_100126110
// address: 100126110

void FUN_100126110(long param_1,char *param_2,int param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (0 < (int)param_4) {
    if (param_4 == 1) {
      uVar2 = 0;
    }
    else {
      uVar3 = (ulong)(uint)(param_3 * 3);
      uVar2 = 0;
      pcVar4 = param_2;
      do {
        uVar1 = *(uint *)(param_1 + uVar2 * 4);
        pcVar4[2] = (char)(uVar1 >> 0xc);
        pcVar4[1] = (char)(uVar1 >> 4);
        *pcVar4 = (char)uVar1 << 4;
        param_2 = pcVar4 + uVar3 * 2;
        uVar1 = *(uint *)(param_1 + 4 + uVar2 * 4);
        pcVar4[uVar3 + 2] = (char)(uVar1 >> 0xc);
        pcVar4[uVar3 + 1] = (char)(uVar1 >> 4);
        pcVar4[uVar3] = (char)uVar1 << 4;
        uVar2 = uVar2 + 2;
        pcVar4 = param_2;
      } while ((param_4 & 0x7ffffffe) != uVar2);
    }
    if ((param_4 & 1) != 0) {
      uVar1 = *(uint *)(param_1 + uVar2 * 4);
      param_2[2] = (char)(uVar1 >> 0xc);
      param_2[1] = (char)(uVar1 >> 4);
      *param_2 = (char)uVar1 << 4;
    }
  }
  return;
}

