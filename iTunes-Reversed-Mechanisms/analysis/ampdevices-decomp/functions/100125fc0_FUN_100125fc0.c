// name: FUN_100125fc0
// address: 100125fc0

void FUN_100125fc0(long param_1,undefined1 *param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  if (0 < (int)param_4) {
    if (param_4 == 1) {
      uVar2 = 0;
    }
    else {
      uVar3 = (ulong)(uint)(param_3 * 3);
      uVar2 = 0;
      puVar4 = param_2;
      do {
        uVar1 = *(undefined4 *)(param_1 + uVar2 * 4);
        puVar4[2] = (char)((uint)uVar1 >> 0x10);
        puVar4[1] = (char)((uint)uVar1 >> 8);
        *puVar4 = (char)uVar1;
        param_2 = puVar4 + uVar3 * 2;
        uVar1 = *(undefined4 *)(param_1 + 4 + uVar2 * 4);
        puVar4[uVar3 + 2] = (char)((uint)uVar1 >> 0x10);
        puVar4[uVar3 + 1] = (char)((uint)uVar1 >> 8);
        puVar4[uVar3] = (char)uVar1;
        uVar2 = uVar2 + 2;
        puVar4 = param_2;
      } while ((param_4 & 0x7ffffffe) != uVar2);
    }
    if ((param_4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + uVar2 * 4);
      param_2[2] = (char)((uint)uVar1 >> 0x10);
      param_2[1] = (char)((uint)uVar1 >> 8);
      *param_2 = (char)uVar1;
    }
  }
  return;
}

