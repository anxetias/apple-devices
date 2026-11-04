// name: FUN_100122ea4
// address: 100122ea4

void FUN_100122ea4(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar5 = 1;
  do {
    uVar5 = uVar5 * 3 + 1;
  } while (uVar5 <= param_3);
  do {
    uVar7 = uVar5 / 3;
    if (uVar5 / 3 < param_3) {
      uVar8 = (ulong)(uVar5 / 3);
      do {
        bVar2 = *(byte *)(param_2 + uVar8);
        uVar9 = (uint)uVar8;
        do {
          uVar1 = uVar9 - uVar7;
          bVar3 = *(byte *)(param_2 + (ulong)uVar1);
          uVar6 = (ulong)uVar9;
          if (bVar3 <= bVar2) break;
          uVar9 = uVar9 - uVar7;
          *(byte *)(param_2 + uVar6) = bVar3;
          uVar6 = (ulong)uVar1;
        } while (uVar7 <= uVar9);
        *(byte *)(param_2 + uVar6) = bVar2;
        uVar8 = uVar8 + 1;
      } while ((uint)uVar8 != param_3);
    }
    bVar4 = uVar5 < 6;
    uVar5 = uVar7;
    if (bVar4) {
      return;
    }
  } while( true );
}

