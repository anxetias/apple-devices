// name: FUN_100126050
// address: 100126050

void FUN_100126050(long param_1,long param_2,undefined1 *param_3,int param_4,uint param_5,
                  char param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  if (0 < (int)param_5) {
    bVar6 = param_6 << 3;
    if (param_5 == 1) {
      uVar5 = 0;
    }
    else {
      uVar4 = (ulong)(uint)(param_4 * 3);
      uVar5 = 0;
      puVar3 = param_3;
      do {
        uVar2 = *(int *)(param_1 + uVar5 * 4) << (bVar6 & 0x1f);
        uVar1 = *(ushort *)(param_2 + uVar5 * 2) | uVar2;
        puVar3[2] = (char)(uVar2 >> 0x10);
        puVar3[1] = (char)(uVar1 >> 8);
        *puVar3 = (char)uVar1;
        uVar2 = *(int *)(param_1 + 4 + uVar5 * 4) << (bVar6 & 0x1f);
        param_3 = puVar3 + uVar4 * 2;
        uVar1 = *(ushort *)(param_2 + 2 + uVar5 * 2) | uVar2;
        puVar3[uVar4 + 2] = (char)(uVar2 >> 0x10);
        puVar3[uVar4 + 1] = (char)(uVar1 >> 8);
        puVar3[uVar4] = (char)uVar1;
        uVar5 = uVar5 + 2;
        puVar3 = param_3;
      } while ((param_5 & 0x7ffffffe) != uVar5);
    }
    if ((param_5 & 1) != 0) {
      uVar2 = *(int *)(param_1 + uVar5 * 4) << (bVar6 & 0x1f);
      uVar1 = *(ushort *)(param_2 + uVar5 * 2) | uVar2;
      param_3[2] = (char)(uVar2 >> 0x10);
      param_3[1] = (char)(uVar1 >> 8);
      *param_3 = (char)uVar1;
    }
  }
  return;
}

