// name: FUN_1001257a0
// address: 1001257a0

/* WARNING: Removing unreachable block (ram,0x0001001257d3) */

void FUN_1001257a0(long param_1,long param_2,short *param_3,ulong param_4,uint param_5,byte param_6,
                  int param_7)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  short sVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_7 == 0) {
    if (0 < (int)param_5) {
      param_4 = param_4 & 0xffffffff;
      if (param_5 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          psVar3 = param_3;
          *psVar3 = *(short *)(param_1 + uVar5 * 4);
          psVar3[1] = *(short *)(param_2 + uVar5 * 4);
          psVar3[param_4] = *(short *)(param_1 + 4 + uVar5 * 4);
          psVar3[param_4 + 1] = *(short *)(param_2 + 4 + uVar5 * 4);
          psVar3[param_4 * 2] = *(short *)(param_1 + 8 + uVar5 * 4);
          psVar3[param_4 * 2 + 1] = *(short *)(param_2 + 8 + uVar5 * 4);
          psVar3[param_4 * 3] = *(short *)(param_1 + 0xc + uVar5 * 4);
          psVar3[param_4 * 3 + 1] = *(short *)(param_2 + 0xc + uVar5 * 4);
          uVar5 = uVar5 + 4;
          param_3 = psVar3 + param_4 * 4;
        } while ((param_5 & 0x7ffffffc) != uVar5);
        param_3 = psVar3 + param_4 * 4;
      }
      if ((ulong)(param_5 & 3) != 0) {
        param_3 = param_3 + 1;
        uVar6 = 0;
        do {
          param_3[-1] = *(short *)(param_1 + uVar5 * 4 + uVar6 * 4);
          *param_3 = *(short *)(param_2 + uVar5 * 4 + uVar6 * 4);
          uVar6 = uVar6 + 1;
          param_3 = param_3 + param_4;
        } while ((param_5 & 3) != uVar6);
      }
    }
  }
  else if (0 < (int)param_5) {
    if (param_5 == 1) {
      uVar5 = 0;
    }
    else {
      param_4 = param_4 & 0xffffffff;
      uVar5 = 0;
      do {
        psVar3 = param_3;
        iVar1 = *(int *)(param_2 + uVar5 * 4);
        sVar2 = (short)iVar1;
        sVar4 = ((short)*(undefined4 *)(param_1 + uVar5 * 4) + sVar2) -
                (short)(iVar1 * param_7 >> (param_6 & 0x1f));
        *psVar3 = sVar4;
        psVar3[1] = sVar4 - sVar2;
        iVar1 = *(int *)(param_2 + 4 + uVar5 * 4);
        sVar2 = (short)iVar1;
        sVar4 = ((short)*(undefined4 *)(param_1 + 4 + uVar5 * 4) + sVar2) -
                (short)(iVar1 * param_7 >> (param_6 & 0x1f));
        psVar3[param_4] = sVar4;
        psVar3[param_4 + 1] = sVar4 - sVar2;
        uVar5 = uVar5 + 2;
        param_3 = psVar3 + param_4 * 2;
      } while ((param_5 & 0x7ffffffe) != uVar5);
      param_3 = psVar3 + param_4 * 2;
      if ((param_5 & 1) == 0) {
        return;
      }
    }
    iVar1 = *(int *)(param_2 + uVar5 * 4);
    sVar2 = (short)iVar1;
    sVar4 = ((short)*(undefined4 *)(param_1 + uVar5 * 4) + sVar2) -
            (short)(param_7 * iVar1 >> (param_6 & 0x1f));
    *param_3 = sVar4;
    param_3[1] = sVar4 - sVar2;
  }
  return;
}

