// name: FUN_100116592
// address: 100116592

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100116592(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  uVar7 = (uint)*(byte *)(param_3 + 0x115) - (uint)*(byte *)(param_1 + 0xaa);
  uVar6 = (uint)*(byte *)(param_2 + 0xbbf) - (uint)*(byte *)(param_2 + 0xbbe);
  uVar2 = *(byte *)(param_2 + 0xbbf) - uVar7;
  uVar3 = uVar2;
  if ((int)uVar2 < 1) {
    uVar3 = uVar6;
  }
  if ((int)uVar2 < 1) {
    uVar7 = (uint)*(byte *)(param_2 + 0xbbe);
  }
  fVar8 = (float)_logf((float)uVar6 / (float)(int)uVar3);
  iVar1 = *(int *)(param_2 + 3000);
  *(char *)(param_2 + 0xbbe) = (char)uVar7;
  *(char *)(param_2 + 0xbdd) = (char)uVar7;
  if ((*(int *)(param_2 + 0xc10) != 2) &&
     (uVar4 = (ulong)*(byte *)((param_4 + 1) - (ulong)(*(int *)(param_2 + 0xbc4) == 0)), uVar4 != 0)
     ) {
    fVar8 = fVar8 * _DAT_100701d20;
    uVar5 = 0;
    do {
      *(float *)(param_2 + uVar5 * 4) =
           *(float *)(param_2 + uVar5 * 4) + (float)(byte)((iVar1 == 0) * '\x02') * fVar8;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}

