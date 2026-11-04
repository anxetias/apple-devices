// name: FUN_1001259a0
// address: 1001259a0

void FUN_1001259a0(long param_1,long param_2,long param_3,int param_4,uint param_5,byte param_6,
                  int param_7)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_7 == 0) {
    if (0 < (int)param_5) {
      puVar3 = (undefined1 *)(param_3 + 5);
      uVar4 = 0;
      do {
        uVar2 = *(uint *)(param_1 + uVar4 * 4);
        puVar3[-3] = (char)(uVar2 >> 0xc);
        puVar3[-4] = (char)(uVar2 >> 4);
        puVar3[-5] = (char)(uVar2 << 4);
        uVar2 = *(uint *)(param_2 + uVar4 * 4);
        *puVar3 = (char)(uVar2 >> 0xc);
        puVar3[-1] = (char)(uVar2 >> 4);
        puVar3[-2] = (char)(uVar2 << 4);
        uVar4 = uVar4 + 1;
        puVar3 = puVar3 + (ulong)(param_4 * 3 - 3) + 3;
      } while (param_5 != uVar4);
    }
  }
  else if (0 < (int)param_5) {
    puVar3 = (undefined1 *)(param_3 + 5);
    uVar4 = 0;
    do {
      iVar1 = *(int *)(param_2 + uVar4 * 4);
      uVar2 = (*(int *)(param_1 + uVar4 * 4) + iVar1) - (iVar1 * param_7 >> (param_6 & 0x1f));
      uVar5 = uVar2 - iVar1;
      puVar3[-3] = (char)(uVar2 >> 0xc);
      puVar3[-4] = (char)(uVar2 >> 4);
      puVar3[-5] = (char)uVar2 * '\x10';
      *puVar3 = (char)(uVar5 >> 0xc);
      puVar3[-1] = (char)(uVar5 >> 4);
      puVar3[-2] = (char)uVar5 * '\x10';
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + (ulong)(param_4 * 3 - 3) + 3;
    } while (param_5 != uVar4);
  }
  return;
}

